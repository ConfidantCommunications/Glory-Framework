/****
* Note: This library is forked from https://github.com/jasononeil/hxpushstate
* New version resides at: https://github.com/ConfidantCommunications/hxpushstate
* This is included in Glory Framework until pull requests are accepted and haxelib is updated by the original author.
* Copyright (c) 2013 Jason O'Neil
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
****/

package pushstate;

import js.Browser.*;
import js.html.*;
using StringTools;

/**
PushState

This class is used to access, trigger and listen to the HTML5 History API.
This allows you to trigger changes to the pages content using Javascript,
and update the URL of the page so that browser features such as bookmarking,
clicking "back" or "forward", and sharing links still work.

This library is accessed using static methods, and accesses only part
of the History API for simplicity.

On top of interacting with the History API and listening to history events,
methods are provided for intercepting link clicks or form submissions to trigger
URL changes (See `init()`), and to trigger URL changes manually (See `push()`,
`replace()` and `silentReplace()`).

This library does not fix any cross-browser issues or provide a #hash fallback
for older browsers.
**/
class PushState {
	static var ignoreAnchors:Bool = true;
	static var triggerFirst:Bool = true;
	static var basePath:String;
	static var preventers:Array<Preventer>;
	static var listeners:Array<Listener>;
	static var uploadCache:Map<String,Dynamic<FileList>>;
	/** The URL of the current history item (what is showing in the URL bar currently). **/
	public static var currentPath(default,null):String;
	/** The state object of the current history item. **/
	public static var currentState(default,null):Dynamic;
	/** The uploads object (if any) of the current history item. **/
	public static var currentUploads(default,null):Null<Dynamic<FileList>>;

	/**
	Initialize the PushState API for the current page.

	This will:

	 - Initialize the internal state.
	 - Listen to the `onpopstate` event, so we can detect browser history changes ("Back" / "Forward" etc).
	 - Intercept link clicks for links with `rel="pushstate"` or `class="pushstate"`, and use the PushState API to set the new URL.
	 - Intercept form submissions for forms with `class="pushstate"` and use the PushState API to set the URL, the state and uploads.
	 - If `triggerFirst` is true, launches an initial `onStateChange` event so you can load your first page.

	You should call `init()` before using any other part of the API.

	@param basePath - The base path of the app, this will be stripped from the raw URL value, with the shortened (stripped) URL being passed to the event listeners.
	@param triggerFirst - If true, trigger an initial event to render the page.  Default is true.
	@param ignorAnchors - Will clicking an anchor link (or switching between anchors using history) be ignored (true) or trigger the usual events (false)? Default is true (ignore).
	**/
	public static function init(?basePath = "", ?triggerFirst:Bool=true, ?ignoreAnchors:Bool=true):Void {
		listeners = [];
		preventers = [];
		uploadCache = new Map();
		PushState.basePath = basePath;
		PushState.triggerFirst = triggerFirst;
		PushState.ignoreAnchors = ignoreAnchors;


		//https://developer.mozilla.org/en-US/docs/Web/Events/DOMContentLoaded#Checking_whether_loading_is_already_complete
		if (document.readyState == "loading") {
			document.addEventListener("DOMContentLoaded",finishInit);
		} else {
			finishInit();
		}
	}
	static function finishInit(){
			// Intercept <a href="..." rel="pushstate"> clicks.
			// TODO: check, does this break keyboard navigation?
			document.addEventListener("click",function(e:MouseEvent) {
				if (e.button==0 && !e.metaKey && !e.ctrlKey) {
					var link:AnchorElement = null,
					    node:Node = Std.downcast(e.target,Node);
					while (link==null && node!=null) {
						link = Std.downcast(node,AnchorElement);
						node = node.parentNode;
					}
					if (link!=null && (link.rel=="pushstate" || hasClass(link,"pushstate"))) {
						push(link.pathname+link.search+link.hash);
						e.preventDefault();
					}
				}
			});

			// Intercept <form rel="pushstate"> submits.
			document.addEventListener("submit",function (e:Event) {
				var form = Std.downcast(e.target,FormElement);
				if (hasClass(form,"pushstate")) {
					e.preventDefault();
					interceptFormSubmit(form);
				}
			});

			// Listen to the onpopstate event.
			window.onpopstate = handleOnPopState;

			// Trigger an initial load.
			if (triggerFirst) {
				handleOnPopState(null);
			}
			else {
				currentPath = stripURL(document.location.pathname+document.location.search+document.location.hash);
				currentState = null;
				currentUploads = null;
			}

	}

	inline static function hasClass(elm:Element, className:String) {
		return elm.classList.contains( className );
	}

	static function interceptFormSubmit(form:FormElement) {
		var params = [];
		var uploads:Dynamic<FileList> = null;
		function addParam(name:String, val:String) {
			if (name==null || name=="")
				return;
			params.push({ name:name, val:val });
		}
		function addUpload(name:String, files:FileList) {
			for (i in 0...files.length) {
				addParam(name, files[i].name);
			}
			if (uploads==null)
				uploads = {};
			Reflect.setField( uploads, name, files );
		}
		trace('push2');
		// Serialization method adapted from http://stackoverflow.com/a/11661219/180995
		// Note we can't use FormData because it cannot be inspected / iterated over.
		for (i in 0...form.elements.length) {
			var elm = form.elements.item(i);
			switch elm.nodeName.toUpperCase() {
				case 'INPUT':
					var input = Std.downcast(elm,InputElement);
					switch input.type {
						case 'text','hidden','password','search','email','url','tel','number','range','date','month','week','time','datetime','datetime-local','color': addParam(input.name, input.value);
						case 'checkbox','radio' if (input.checked): addParam(input.name, input.value);
						case 'file':
							if (input.files!=null && input.files.length>0)
								addUpload(input.name, input.files);
					}
				case 'TEXTAREA':
					var ta = Std.downcast(elm,TextAreaElement);
					addParam(ta.name, ta.value);
				case 'SELECT':
					var select = Std.downcast(elm,SelectElement);
					switch select.type {
						case 'select-one': addParam(select.name, select.value);
						case 'select-multiple':
							for (j in 0...select.options.length) {
								var option:OptionElement = cast select.options[j];
								if (option.selected) {
									addParam(select.name, option.value);
								}
							}
					}
			}
		}
		// Check if there was a submit button value:
		var activeInput = Std.downcast( document.activeElement, InputElement );
		var activeBtn = Std.downcast( document.activeElement, ButtonElement );
		if ( activeInput!=null && activeInput.type=="submit" ) addParam( activeInput.name, activeInput.value );
		else if ( activeBtn!=null && activeBtn.type=="submit" ) addParam( activeBtn.name, activeBtn.value );
		else {
			var defaultSubmit = form.querySelector( "input[type=submit], button[type=submit]" );
			var defaultInput = Std.downcast( defaultSubmit, InputElement );
			var defaultBtn = Std.downcast( defaultSubmit, ButtonElement );
			if ( defaultInput!=null ) addParam( defaultInput.name, defaultInput.value );
			else if ( defaultBtn!=null ) addParam( defaultBtn.name, defaultBtn.value );
		}
		// Push the new URL (and if it is a POST request, also the data).
		var paramString = params.map(function(p) return '${p.name}=${p.val.urlEncode()}').join("&");
		if ( form.method.toUpperCase()=="POST" ) {
			var paramsObj = {};
			for (p in params) {
				if (Reflect.hasField(paramsObj,p.name))
					(Reflect.field(paramsObj,p.name):Array<String>).push(p.val);
				else
					Reflect.setField(paramsObj, p.name, [p.val]);
			}
			Reflect.setField( paramsObj, "__postData", paramString );
			if (uploads!=null)
				setUploadsForState( form.action, paramsObj, uploads );
			push(form.action,paramsObj,uploads);
		}
		else {
			push(form.action+"?"+paramString,null);
		}
	}

	static function setUploadsForState(url:String, state:Dynamic, uploads:Null<Dynamic<FileList>>) {
		var timestamp = Date.now().toString();
		var random = Math.random();
		var uploadCacheID = '$url-$timestamp-$random';
		uploadCache[uploadCacheID] = uploads;
		Reflect.setField(state, "__postFilesCacheID", uploadCacheID);
	}

	static function getUploadsForState(state:Dynamic):Null<Dynamic<FileList>> {
		if (state==null || Reflect.hasField(state,"__postFilesCacheID")==false)
			return null;
		var uploadCacheID:String = state.__postFilesCacheID;
		if ( uploadCache.exists(uploadCacheID)==false ) {
			trace( 'Upload files with cache ID $uploadCacheID is not available anymore' );
			return null;
		}
		else return uploadCache[uploadCacheID];
	}

	static function handleOnPopState(e:PopStateEvent) {
		// Read the path from the document location
		var path = stripURL(document.location.pathname+document.location.search+document.location.hash);
		var state = (e!=null) ? e.state : null;
		var uploads =
			if (state!=null && state.__postFilesCacheID!=null) uploadCache[state.__postFilesCacheID]
			else null;

		// If this is just a hash change, and we're ignoring anchors, then don't trigger anything.
		if (ignoreAnchors && path==currentPath) {
			return;
		}

		// Check that no preventers are blocking us
		if (e!=null) {
			for (p in preventers) {
				if ( !p(path, state, uploads) ) {
					e.preventDefault();
					// The uploads should already be cached for this state, so just calling `relaceState` without affecting the uploadCache should be sufficient.
					window.history.replaceState( currentState, "", currentPath );
					return;
				}
			}
		}

		currentPath = path;
		currentState = state;
		currentUploads = getUploadsForState(state);

		dispatch(currentPath, currentState, currentUploads);
		return;
	}

	static function stripURL(path:String) {
		// strip the basePath from the path, if it is present
		if (path.substr(0,basePath.length) == basePath)
			path = path.substr(basePath.length);
		// Strip the anchor if we are ignoring them.
		if (ignoreAnchors && path.indexOf("#")>-1)
			path = path.substr(0,path.indexOf("#"));
		return path;
	}

	/**
	Add event listener to be run every time the page URL changes.

	Event listeners can take one of the following forms:

	- `function( url:String, state:Dynamic, files:Dynamic<FileList> ):Void`
	- `function( url:String, state:Dynamic ):Void`
	- `function( url:String ):Void`

	The shorter listener forms will be wrapped in a function compatible with `PathStateUploadsListener`.
	The wrapped listener will be returned, and can be used with `removeEventListener` to remove this specific listener at a later time.
	**/
	public static function addEventListener(?l1:PathStateUploadsListener, ?l2:PathStateListener, ?l3:PathListener):Listener {
		var l =
			if ( l1!=null ) l1
			else if ( l2!=null ) function( url, state, _ ) l2( url, state )
			else if ( l3!=null ) function( url, _, _ ) l3( url )
			else throw 'No listener provided';
		listeners.push( l );
		return l;
	}

	/**
	Remove a specific event listener.

	You should use the Listener returned by `addEventListener` to make sure this works with wrapped functions.
	**/
	public static function removeEventListener(l:Listener):Void {
		listeners.remove(l);
	}

	/**
	Remove all event listeners.
	**/
	public static function clearEventListeners():Void {
		while (listeners.length > 0) {
			listeners.pop();
		}
	}

	/**
	Add a preventer to check if a user is allowed to navigate away from the current URL.

	A preventer function can take the following forms:

	- `function( url:String, state:Dynamic, files:Dynamic<FileList> ):Bool`
	- `function( url:String, state:Dynamic ):Bool`
	- `function( url:String ):Bool`

	If a preventer returns false, PushState will prevent the page history from being changed and any listeners from being fired.

	This is useful for things like ensuring a user has saved their progress before leaving the page.

	If you wish merely to defer the change in state, you can keep the url and state data and use it again with:
	  `Pushstate.push( url, state, uploads );`
	at a later time.

	**Note**: If a preventer cancels a "popstate" event from the browser (eg. they clicked 'back'), your history can get messed up.
	We can't cancel the event properly, so we prevent the handlers from firing and we use `history.replaceState` to reset the URL.
	This will overwrite that URL in the history, which may not be the behaviour you want.
	If you have a suggested workaround, please let us know!

	The shorter preventer forms will be wrapped in a function compatible with `PathStateUploadsPreventer`.
	The wrapped preventer will be returned, and can be used with `removePreventer` to remove this specific preventer at a later time.
	**/
	public static function addPreventer(?p1:PathStateUploadsPreventer, ?p2:PathStatePreventer, ?p3:PathPreventer):Preventer {
		var p =
			if ( p1!=null ) p1
			else if ( p2!=null ) function( url, state, _ ) return p2( url, state )
			else if ( p3!=null ) function( url, _, _ ) return p3( url )
			else throw 'No preventer provided';
		preventers.push( p );
		return p;
	}

	/** Remove a specific preventer. */
	public static function removePreventer(p:Preventer):Void {
		preventers.remove(p);
	}

	/** Remove all preventers. */
	public static function clearPreventers():Void {
		while (preventers.length > 0) {
			preventers.pop();
		}
	}

	static function dispatch(url:String, state:Null<Dynamic>, uploads:Null<Dynamic<FileList>>) {
		for (l in listeners) {
			l(url, state, uploads);
		}
	}

	/**
	Manually change the URL of the browser window, adding a new history item and triggering all listeners.

	If any preventer functions you have added return `false`, the push will be cancelled and the URL will remain unchanged.

	Otherwise, the URL, state and uploads will be updated, a new history item created, and each of the listeners will be executed.

	While this will not trigger a HTTP request to a new URL, it is possible that one will be executed by the browser in future.
	For example, if the user reloads the tab after a `push()` call has been made, a GET request to that URL will be executed.

	@param url The new history entry's URL. If this includes the `basePath` it will be filtered before triggering listeners. If this includes an anchor link (following a `#`) and we ignoring anchors, this will also be filtered before triggering listeners.
	@param state (optional) An object to be serialized and associated with this page in history. This is useful for saving page state, saving form data, etc.  The object must be serializable, so simple anonymous objects which can be serialized to JSON are preferred. See [this Mozilla tutorial for details](https://developer.mozilla.org/en-US/docs/Web/API/History_API#The_pushState%28%29_method). The default value is an empty anonymous object.
	@param uploads (optional) Any `FileList` references to be associated with this page in history. The default value is null (no uploads).
	@return `true` if the push was successful (not prevented), or `false` if it was prevented.
	**/
	public static function push(url:String, ?state:Dynamic, ?uploads:Dynamic<FileList>):Bool {
		trace("push");
		var strippedURL = stripURL(url);
		if (state==null) state = {};
		for (p in preventers) {
			if (!p(strippedURL,state,uploads)) return false;
		}
		setUploadsForState(strippedURL, state, uploads);
		window.history.pushState(state, "", url);
		currentPath = strippedURL;
		currentState = state;
		currentUploads = uploads;
		dispatch(strippedURL,state,uploads);
		return true;
	}

	/**
	Identical to `push()` except this changes the URL of the page without creating a new History item.

	For example:

	 - You are on the page "/kittens"
	 - You use PushState.push("/puppies")
	 - You are now on "/puppies", if you were to press back you would be on "kittens"
	 - You now use PushState.replace("/aliens")
	 - The URL is not "/aliens", but if you were to press back it would go to "/kittens" (NOT "/puppies"), because a new History item was not created.

	If any preventers return false, the history item will not be replaced and no event listeners will be fired.

	See `push()` for details on each parameter and the return value.
	**/
	public static function replace(url:String, ?state:Dynamic, ?uploads:Dynamic<FileList>):Bool {
		var strippedURL = stripURL(url);
		if (state==null) state = {};
		for (p in preventers) {
			if (!p(strippedURL,state,uploads)) return false;
		}
		silentReplace(url, state, uploads);
		dispatch(strippedURL, state, uploads);
		return true;
	}

	/**
	Replace the current history item without checking any preventers or dispatching any events.

	This is useful for updating some page state without affecting the appearance of navigating to a new page.
	For example, you could save some internal data about the state of the page, such as form field values or scroll position, to restore the page more completely when the user clicks "back" at a later time.

	See `push()` for details on each parameter.
	**/
	public static function silentReplace(url:String, ?state:Dynamic, ?uploads:Dynamic<FileList>):Void {
		var strippedURL = stripURL(url);
		if (state==null) state = {};
		setUploadsForState(strippedURL, state, uploads);
		window.history.replaceState(state, "", url);
		currentPath = strippedURL;
		currentState = state;
		currentUploads = uploads;
	}
}

/**
A `PushState` listener that will respond to changes in the browser history.

For example:

- if the user clicks a `rel="pushstate"` or `class="pushstate"` link
- submits a `class="pushstate"` form
- calls `PushState.push()` or `PushState.replace()`
- or clicks "back" and "forward" in the browser.

When using `PushState.addEventListener()`, you can also use the shortened functions `PathStateListener` and `PathListener`, and they will be wrapped into the full form `PathStateUploadsListener`.  The wrapped function will be returned and can be used with `PushState.removeEventListener()`.
**/
typedef Listener = PathStateUploadsListener;
/**
A `PushState` preventer that will check if the user is allowed to navigate away from the current page.

These will be checked before a URL change is permitted.
If they return false, the page history will not be updated, and no event listeners will be executed.

When using `PushState.addPreventer()`, you can also use the shortened functions `PathStatePreventer` and `PathPreventer`, and they will be wrapped into the full form `PathStateUploadsPreventer`.  The wrapped function will be returned and can be used with `PushState.removePreventer()`.
**/
typedef Preventer = PathStateUploadsPreventer;
/** A `PushState` listener that listens for the new URL, the new state object and the new uploads. **/
typedef PathStateUploadsListener = String->Dynamic->Dynamic<FileList>->Void;
/** A `PushState` preventer that checks against the new URL, the new state object and the new uploads. **/
typedef PathStateUploadsPreventer = String->Dynamic->Dynamic<FileList>->Bool;
/** A `PushState` listener that listens for the new URL and the new state object. **/
typedef PathStateListener = String->Dynamic->Void;
/** A `PushState` preventer that checks against the new URL and the new state object. **/
typedef PathStatePreventer = String->Dynamic->Bool;
/** A `PushState` listener that only listens for the new URL. **/
typedef PathListener = String->Void;
/** A `PushState` preventer that only checks against the new URL. **/
typedef PathPreventer = String->Bool;
