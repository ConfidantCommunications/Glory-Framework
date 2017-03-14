package ca.confidant.glory.model;


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
	typedef LoadResult={
		var id:String;
		var type:String;
		var data:Dynamic;
		@:optional var destinationActor:String;
		@:optional var meta:Dynamic;
	}
	class LoaderProxy extends Proxy
	{
		public static var NAME:String = "LoaderProxy";
		// private var loadedItems:Map<String,String>;
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
				// loadedItems=new Map<String,String>();
	       		//loadItems=new Array();
	       		//pendingLoads=0;
	       		//feeds=new Array();
	       		//totalLoads=0;
		}
		//this is what loads the configuration
		public function loadXML(src:String):Void{
			trace("attempting xml load:"+src);
			Assets.loadText(src)
				.onComplete(function(theText){
					trace("We got the config xml.");
					// loadedItems.set("xml",theText);
					//trace("loaded:"+x);
					var lr:LoadResult={id:src,data:theText,type:"config"};
					this.sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
				});
		}
		// public function retrieveLoadedAsset(key:String):Dynamic{
		// 	var r=loadedItems.get(key);
		// 	loadedItems.remove(key);
		// 	return r;
		// }
		public function getText(id:String,dest:String):Void{
		
			Assets.loadText(id)
				.onComplete(function(theText){
					//trace("We got the text/svg.");
					var lr:LoadResult={id:id,destinationActor:dest,type:"svg",data:theText};
					sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
				});
		}
		public function getBitmapData(id:String,b:Bool=true,dest:String):Void{
			Assets.loadBitmapData(id,b)
				.onComplete(function(imageData){
					trace("We got the bitmap:"+id);
					// trace(imageData);
					var lr:LoadResult={id:id,destinationActor:dest,type:"bitmap",data:imageData};
					sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
				});
			
		}
		public function getSound(src:String,b:Bool=true,id:String,metaString:String):Void{
			Assets.loadSound(src,b)
				.onComplete(function(soundData){
					trace("We got the sound:"+soundData);
					// trace(imageData);
					var lr:LoadResult={id:id,meta:metaString,type:"sound",data:soundData};
					sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
				});
		}
		public function getMovieClip(id:String,dest:String):Void{

			// if (Assets.exists(id)) {
			// 	//must be embedded
			// 	var swfData=Assets.getMovieClip (id);
			// 	// return imageData;
			// 	var lr:LoadResult={destinationActor:dest,type:"swf",data:swfData};
			// 	sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
			// } else {
				//try to load asynchronously
				trace("trying to load:"+id);
				Assets.loadLibrary ("swflibrary")
					.onComplete(function(theLibrary){
						trace("We got the library.");
								
						var swfData=Assets.getMovieClip (id);
						// return imageData;
						var lr:LoadResult={id:id,destinationActor:dest,type:"swf",data:swfData};
						sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
					});
				// Assets.loadMovieClip(id)
				// 	.onComplete(function(theSwf){
				// 		trace("We got the swf.");
						
				// 		var lr:LoadResult={destinationActor:dest,type:"swf",data:theSwf};
				// 		sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET,lr);
				// 	});

			// }
		}
		
		/*
		 * @author Allan Dowdeswell
		 * Currently all assets are loaded by NME, hence the instant notification.
		 */
		// public function loadAllAssets():Void{
			/*while(pendingLoads<4){
				loadNextAsset();
			}*/
			// this.sendNotification(ApplicationFacade.HANDLE_LOADED_ASSET);
			//trace("loading!");
		// }
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