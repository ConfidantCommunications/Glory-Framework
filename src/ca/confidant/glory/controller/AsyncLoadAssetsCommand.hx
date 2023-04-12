/*
 * Copyright (c) 2018 D. Allan Dowdeswell
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

package ca.confidant.glory.controller;
	import haxe.xml.Access;
	import openfl.utils.Assets;
	import openfl.utils.AssetLibrary;
	import openfl.utils.AssetManifest;
	import openfl.utils.AssetType;
	import openfl.display.BitmapData;
	import openfl.display.MovieClip;
	import openfl.display.Loader;
	import openfl.events.Event;
	import openfl.net.URLRequest;
	// import openfl._internal.formats.swf.SWFLibrary;
	import format.*;
    // import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	 

    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.view.ActorComponentMediator;
	import ca.confidant.glory.view.components.ActorComponent;

	import ca.confidant.glory.view.components.PageComponent;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ActorComponentConfigProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import ca.confidant.glory.DataTypes;

	
	/* 
	 * @author Allan Dowdeswell
	 * This is triggered first by the GotoIntroMacro, then by calls to the ChangePageCommand. 
	 * It retrieves configuration information from the PageConfigProxy and puts the page together
	 * with the necessary mediators.
	 *  
	 *  See demo at https://github.com/PureMVC/puremvc-as3-demo-flash-sequential
	 */
    class AsyncLoadAssetsCommand extends AsyncCommand
    {
		var pcp:PagesConfigProxy;
		var crp:ControlsRegistryProxy;
		var appMediator:ApplicationMediator;
		var pageId:String;
		var oldpm:PageMediator;
		// var pendingLoads:Int;
		var actorsList:Array<Access>;
		public function new(){
			super();
		}
        /**
         *  Begin the loading of assets.
         *  @param note - The notification automatically sent by the PureMVC framework.
         */
        override public function execute( note:INotification ) : Void
        {
			#if appMode
			//assets already embedded, so exit
			commandComplete();
			#else
			trace('AsyncLoadAssetsCommand');
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data:ChangePageData=note.getBody();
			trace ("data:"+note.getBody());
			pageId=data.newPage;

			if(pageId==null || pageId==""){
				actorsList=pcp.getAppControls();
			} else {
				actorsList=pcp.getPageActors(pageId);
			}
		

			// test if it's a html5 swf page; flash will load swf from manifest.
			var swflib:String = "";
			if(pageId != null && pageId != "") swflib=pcp.getPage(pageId).get("swflibrary");
			if(swflib!=""){
				var libName:String = (pageId==null) ? "gloryControls" : pageId;

				#if flash
				
					swflib="/assets/"+swflib+".swf";
					var manifest = new AssetManifest();
					manifest.libraryType = "openfl.utils.AssetLibrary";
					manifest.addBytes(swflib); // or do the following:
					// manifest.assets.push ({ path: swflib, id: swflib, type: AssetType.BINARY, preload: true, generate:true });
					manifestLoad(manifest,libName);

				#else
					swflib="assets/"+swflib+".bundle";
					//AssetLibrary.loadFromFile needs a manifest file or bundle, not a swf file
					//
					var p = pcp.getBasePath()+swflib;
					AssetLibrary.loadFromFile (swflib,p).onComplete( function (library:AssetLibrary) {
					// AssetLibrary.loadFromFile (swflib,"").onComplete( function (library:AssetLibrary) {
						Assets.registerLibrary (libName, library);
						trace ("SWF library loaded");
						facade.registerProxy(new AssetLibraryProxy(library,libName));
						commandComplete(); 
					});
				#end 

			} else {
				//not a swflibrary so load non-swf assets from Manifest
				var manifest = new AssetManifest();
				manifest.libraryType = "openfl.utils.AssetLibrary";
				for(actor in actorsList){
					if(!actor.has.src) continue;
					switch(getAssetType(actor.att.src)){
						case AssetType.IMAGE:
							manifest.addBitmapData ("assets/" + actor.att.src);
						case AssetType.TEXT:
							manifest.addText("assets/" + actor.att.src);
						//deprecated; we're only using a single swf for a page now
						//case AssetType.BINARY:
							//manifest.addBytes("assets/" + actor.att.src);
						default:
							manifest.addBytes("assets/" + actor.att.src);

					}

				}
				var sounds=pcp.getPageSounds(pageId);
				// here the src is potentially multiple sources, so split them
				for(sound in sounds){
					var soundArray = sound.att.src.split(",");
					soundArray = soundArray.map(function (v) return "assets/"+v);
					if(soundArray.length>0) manifest.addSound(soundArray,sound.att.id);
				}
				/*var fonts=pcp.getPageFonts(pageId);
				for(font in fonts){
					manifest.addFont("assets/" + font.att.src);
				}*/
				var libName:String = (pageId==null) ? "gloryControls" : pageId;
				manifestLoad(manifest,libName);

			}


			//end of non-appMode code
			#end
			
        }
		private function manifestLoad(manifest:AssetManifest,name:String):Void {
			// trace("manifestLoad! "+manifest);
			AssetLibrary.loadFromManifest (manifest).onComplete (function (library) {
				trace("completed loading");
				var theLibrary= cast(library,openfl.utils.AssetLibrary);
				// trace("theLibrary:"+theLibrary);
				Assets.registerLibrary (name, theLibrary);
				// trace("registered:"+name);
				facade.registerProxy(new AssetLibraryProxy(theLibrary, name));
				// trace("proxy too.");
				commandComplete(); 
				
			}).onError (function (e) {
				trace("error:");
				trace (e);
						
			});
		}


		private function getAssetType(path:String):AssetType {
			var s=path.split(".");
			switch(s.pop()){
				case "jpg","jpeg","png","gif":
					return AssetType.IMAGE;
				case "svg","xml","txt","html","htm","css":
					return AssetType.TEXT;
				case "wav","mp3","ogg":
					return AssetType.SOUND;
				case "swf":
					return AssetType.BINARY;
				default:
					return AssetType.IMAGE;
			}
		}
    }