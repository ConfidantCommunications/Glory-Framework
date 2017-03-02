﻿package ca.confidant.glory.model;


	import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
	import openfl.Assets;
	import flash.display.BitmapData;
	import ca.confidant.glory.view.components.ActorComponent;
	/*
	 * This singleton is instantiated by the Startup2_Proxies_Command. 
	 * It currently grabs assets from NME, but could also facilitate on-demand loading of assets in future.
	 * NME currently handles all embedding/loading of assets.
	 */

	class LoaderProxy extends Proxy
	{


		public static var NAME:String = "LoaderProxy";
		private var loadedItems:Map<String,String>;
		//private var loadItems:Array<Hash<String>>;
		//private var pendingLoads:Int;
		//static var feeds:Array<Hash<String>>;
		//private var totalLoads:Int;
		/**
		 * Constructor.
		 */
		public function new( )
		{
	       		super ( NAME);
				loadedItems=new Map<String,String>();
	       		//loadItems=new Array();
	       		//pendingLoads=0;
	       		//feeds=new Array();
	       		//totalLoads=0;
		}
		//this is what load the configuration
		public function loadXML(src:String):Void{
			//var r = new haxe.Http(src);
		    //r.onError = js.Lib.alert;
		    //r.onData = onXMLReady;
		    //r.request(false);

			var x = Assets.getText (src);
			loadedItems.set("xml",x);
			//trace("loaded:"+x);
			this.sendNotification(ApplicationFacade.ASSETS_LOADED,"xml");
		}
		public function retrieveLoadedAsset(key:String):Dynamic{
			//in future we may allow for lazy loading
			//trace("retrieving:"+key);
			var r=loadedItems.get(key);
			loadedItems.remove(key);
			return r;
		}
		public function getText(id:String):String{
			var theText=Assets.getText(id);
			return theText;
			
		}
		public function getBitmapData(id:String,b:Bool=true):BitmapData{
			var imageData:BitmapData = Assets.getBitmapData(id,b);
			return imageData;
		}
		
		/*
		 * @author Allan Dowdeswell
		 * Currently all assets are loaded by NME, hence the instant notification.
		 */
		public function loadAllAssets():Void{
			/*while(pendingLoads<4){
				loadNextAsset();
			}*/
			this.sendNotification(ApplicationFacade.ASSETS_LOADED);
			//trace("loading!");
		}
		/*
		private function loadRemoteAsset(id:String,type:String,src:String,actor:ActorComponent):Void{
			if(loadItems.length>0){
				var theAsset:Hash<String> = loadItems.pop();
				//var r = new haxe.Http(theAsset.get("src"));

		    /*
			    //var t=this;
			    //	trace(theAsset.get("type"));
			    if(theAsset.get("type")=="feed"){
			    		//var c=callback(onRSSLoaded,theAsset.get("id"));
			    		//r.onData = function(r){onRSSLoaded(r,theAsset.get("id"));};
			    		r.onData=callback(onRSSLoaded,theAsset.get("id"));
			    		r.onError = callback(onRSSLoadError,theAsset.get("id"));
			    		//r.onData=Reflect.callMethod(this, Reflect.field(this, "onRSSLoaded"), [theAsset.get("id")]);
			   } else {
			   		//r.onError = onLoadError;
			    		//r.onData = onAssetLoaded;
			    		r.onData=callback(onAssetLoaded,theAsset.get("id"));
			    		r.onError = callback(onAssetLoaded,theAsset.get("id"));

			   }* /

			    //r.request(false);
				//pendingLoads++;
			}
		}*/
		/*public function addLoadItem(id:String,type:String,src:String):Void{
			//trace("-->"+src);
			var h:Hash<String>=new Hash();
			h.set("src",src);
			h.set("id",id);
			h.set("type",type);
			loadItems.push(h);
		}
		*/
		/*
		private function onLoadError(id,r:String):Void{
			//js.Lib.alert(r);
			trace("Load error:"+id);
			//continue loads:
			onAssetLoaded(id,r);

		}
		private function onAssetLoaded(id,r):Void{
			//trace("onAssetLoaded:"+id);
			pendingLoads--;
			if(loadItems.length>0){
				loadNextAsset();
			}
			if(loadItems.length==0 && pendingLoads==0) {
				this.sendNotification(ApplicationFacade.ASSETS_LOADED);
			}
		}
		
*/

	}