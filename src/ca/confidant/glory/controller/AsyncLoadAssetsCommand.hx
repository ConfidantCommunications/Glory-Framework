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
	import haxe.xml.Fast;
	import openfl.utils.Assets;
	import openfl.utils.AssetLibrary;
	import openfl.utils.AssetManifest;
	import lime.utils.AssetType;
	import openfl.display.BitmapData;
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
		var assetsList:List<Fast>;
		public function new(){
			super();
		}
        /**
         *  Begin the loading of assets.
         *  @param note - The notification automatically sent by the PureMVC framework.
         */
        override public function execute( note:INotification ) : Void
        {
			trace('AsyncLoadAssetsCommand');
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data:ChangePageData=note.getBody();
			trace ("data:"+note.getBody());
			pageId=data.newPage;

			if(pageId==null){
				assetsList=pcp.getAppControls();
			} else {
				assetsList=pcp.getPageActors(pageId);
			}
		
			var manifest = new AssetManifest();
			for(theAsset in assetsList){
				//manifest.assets.push({path:"assets/"+theAsset.att.src, id:theAsset.att.id, type:getAssetType(theAsset.att.src)});//,size:100

				switch(getAssetType(theAsset.att.src)){
					case AssetType.IMAGE:
						manifest.addBitmapData ("assets/" + theAsset.att.src);
					case AssetType.TEXT:
						manifest.addText("assets/" + theAsset.att.src);
					case AssetType.BINARY:
						//do we need a different libraryType in manifest?
						manifest.addBytes("assets/" + theAsset.att.src);
					default:
						manifest.addBytes("assets/" + theAsset.att.src);

				}



			}
			var sounds=pcp.getPageSounds(pageId);
			// here the src is potentially multiple sources, so split them
			for(sound in sounds){
				var soundArray = sound.att.src.split(",");
				soundArray = soundArray.map(function (v) return "assets/"+v);
				if(soundArray.length>0) manifest.addSound(soundArray,sound.att.id);
				// manifest.assets.push({path:"assets/"+sound.att.src, id:sound.att.id, type:getAssetType(sound.att.src)});//,size:100
				// manifest.addSound ([ "sounds/" + sound + ".ogg", "sounds/" + sound + ".mp3", "sounds/" + sound + ".wav" ], id);

			}

			// 1.test if it's a swf page, else load from manifest.
			var swflib:String = "";
			if(pageId != null) swflib=pcp.getPage(pageId).get("swflibrary");
			if(swflib!=""){
				// swflib ="/assets/"+swflib+".bundle/library.json";
				swflib="/assets/"+swflib+".bundle";
				//AssetLibrary.loadFromFile needs a manifest file or bundle, not a swf file
				AssetLibrary.loadFromFile (swflib,"").onComplete( function (library:AssetLibrary) {
					var libName:String = (pageId==null) ? "gloryControls" : pageId;
					
					Assets.registerLibrary (libName, library);
					trace ("SWF library loaded");
					facade.registerProxy(new AssetLibraryProxy(library,libName));

						commandComplete(); 
				});

			} else {
				//not a swflibrary
				AssetLibrary.loadFromManifest (manifest).onComplete (function (library) {
							var libName:String = (pageId==null) ? "gloryControls" : pageId;
							
							Assets.registerLibrary (libName, library);
							
							trace("completed loading");
							
							// var al = AssetLibrary.fromManifest(manifest);
							facade.registerProxy(new AssetLibraryProxy(library,libName));

							commandComplete(); 
							
						}).onError (function (e) {
							
							trace (e);
							
				});

			}



			
			
        }

		private function getAssetType(path:String):AssetType {
			var s=path.split(".");
			switch(s.pop()){
				case "jpg","jpeg","png","gif":
					return AssetType.IMAGE;
				case "svg","xml":
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