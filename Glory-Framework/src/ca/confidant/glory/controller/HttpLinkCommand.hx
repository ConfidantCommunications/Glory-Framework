﻿package ca.confidant.glory.controller;	#if (flash)		import nme.net.URLRequest;		import nme.net.URLLoader;	#elseif (nme || jeash)		//import js.Dom;	#end	    import org.puremvc.haxe.patterns.command.SimpleCommand;	import org.puremvc.haxe.interfaces.INotification;    import ca.confidant.glory.ApplicationFacade;    //import ca.confidant.glory.view.DocumentMediator;	import ca.confidant.glory.view.ApplicationMediator;	import ca.confidant.glory.ApplicationFacade;	//import ca.confidant.glory.model.LoaderProxy;	import ca.confidant.glory.model.PagesConfigProxy;			/*	 * @author Allan Dowdeswell	 * Currently unused, this command will trigger URL requests in a browser.	 */	    class HttpLinkCommand extends SimpleCommand    {        override public function execute( note:INotification ) : Void        {			trace('HttpLinkCommand:'+cast(note.getBody(),String));			#if (flash)				var loader:URLLoader = new URLLoader();				var request:URLRequest = new URLRequest(cast(note.getBody(),String));				request.method = "POST";				try {	                loader.load(request);	            }	            catch (e:Dynamic) {	                // handle error here	                trace(Std.string(e));	            }			#elseif (nme || jeash)				js.Lib.window.location.href=cast(note.getBody(),String);				//trace("add this to the HTTPLinkCommand!");			#end        }    }