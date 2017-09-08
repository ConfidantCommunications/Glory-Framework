package ca.confidant.glory.controller;
	import haxe.xml.Fast;
	import openfl.Assets;
	import openfl.utils.AssetLibrary;
	import lime.utils.AssetManifest;
	import lime.utils.AssetType;
	import openfl.display.BitmapData;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
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
	import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.CacheProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import ca.confidant.glory.GloryAssetLibrary;
	//import ca.confidant.glory.controller.ClassConverter;
	
	/* 
	 * @author Allan Dowdeswell
	 * This is triggered first by the GotoIntroCommand, then by calls to the ChangePageCommand. 
	 * It retrieves configuration information from the PageConfigProxy and puts the page together
	 * with the necessary mediators.
	 */
    class AsyncLoadAssetsCommand extends AsyncCommand
    {
		var pcp:PagesConfigProxy;
		var crp:ControlsRegistryProxy;
		var appMediator:ApplicationMediator;
		var lp:LoaderProxy;
		var pageId:String;
		var oldpm:PageMediator;
		var pendingLoads:Int;
		var cp:CacheProxy;
		var assetsList:List<Fast>;
		public function new(){
			super();
		}
		
        override public function execute( note:INotification ) : Void
        {
			// trace('BuildPageCommand');
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);

			try{
				pageId=cast(note.getBody(),String);//current page
			} catch(e:Dynamic){
				// trace(e);//this will fire when controls load
			}
			if(pageId==null){
				assetsList=pcp.getAppControls();
			} else {
				assetsList=pcp.getPageActors(pageId);
			}
		
			var manifest = new AssetManifest();
			for(button in assetsList){
				manifest.assets.push({path:"assets/"+button.att.src, id:button.att.id, type:getAssetType(button.att.src)});//,size:100
			}
			var sounds=pcp.getPageSounds(pageId);
			for(sound in sounds){
				//manifest.assets.push({path:"assets/"+sound.att.src, id:sound.att.id, type:getAssetType(sound.att.src)});//,size:100
			}
			pendingLoads=manifest.assets.length;
			// trace (manifest.assets);
			var al = GloryAssetLibrary.fromManifest(manifest);
			facade.registerProxy(new AssetLibraryProxy(al));

			var libName:String = (pageId==null) ? "gloryControls" : pageId;
			cp = cast(facade.retrieveProxy("CacheProxy"),CacheProxy);
			//trace(libName+" getlibrary:"+Assets.getLibrary(libName));
			// trace("theLibrary:");
			// trace(al);
			Assets.registerLibrary(libName,al);
			// Assets.loadLibrary(libName); 
			//al.load(); //load all assets?

			for (thisAsset in manifest.assets){
				switch(thisAsset.type){
					case AssetType.SOUND:
						
					case AssetType.IMAGE:
						al.loadImage(thisAsset.id).onComplete(function(e){
							// var imageData:BitmapData = BitmapData.fromImage(e);
							trace("imageid1:"+thisAsset.id);
							// trace ("imageData1:"+imageData);

							// crp.registerControl(e);
							// trace("image1:"+e);
							var cache=cp.getCache();
							cache.set(thisAsset.id,AssetType.IMAGE,e);
							pendingLoads--;
							if(pendingLoads==0){
								commandComplete(); 
							}
						});
				}


				// trace("asset:"+thisControl.att.src);
				/*Assets.loadBitmapData(thisControl.att.src,true).onComplete(function(e){
					var imageData:BitmapData = e;
					trace("imageid1:"+thisControl.att.id);
					trace ("imageData1:"+imageData);

					// crp.registerControl(e);
					// trace("image1:"+e);
					pendingLoads--;
					if(pendingLoads==0){
						commandComplete(); 
					}
				});*/
				

				// trace("----->"+thisControl.att.src);
			}
			
				//
			

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