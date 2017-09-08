package ca.confidant.glory.controller;

    import flash.display.Sprite;
	import flash.display.Bitmap;
	import flash.display.BitmapData;
	import lime.graphics.Image;
	import lime.utils.AssetCache;
	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.view.ControlComponentMediator;
	import ca.confidant.glory.view.components.ControlComponent;

	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.CacheProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;

	/*
	 * @author Allan Dowdeswell
	 * This is triggered by the GotoIntroCommand, right before the first page is built. 
	 * It retrieves the configuration info from the PagesConfigProxy and sets up the persistent navigation controls.
	 */
    class BuildControlsCommand extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var crp:ControlsRegistryProxy;
		var appMediator:ApplicationMediator;
		var lp:LoaderProxy;
		var alp:AssetLibraryProxy;
		var cp:CacheProxy;
		var cache:AssetCache;
        override public function execute( note:INotification ) : Void
        {
			// trace("BuildControlsCommand");
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			crp=cast(facade.retrieveProxy(ControlsRegistryProxy.NAME) , ControlsRegistryProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);
			lp=cast(facade.retrieveProxy(LoaderProxy.NAME) , LoaderProxy);
			alp=cast(facade.retrieveProxy(AssetLibraryProxy.NAME) , AssetLibraryProxy);
			cp = cast(facade.retrieveProxy("CacheProxy"),CacheProxy);
			cache=cp.getCache();
			var controlsList:List<Fast>=pcp.getAppControls();
			for (thisControl in controlsList){
				makeControl(thisControl);
			}
			//
			// var theControls=crp.getControls();
			// for(control in theControls){
			// 	appMediator.addDisplayObject(control);
			// }
        }

		private function makeControl(actor:Fast):Void{
			try{
				var ext:String=cast(actor.att.src,String).substr(-3);
				var a:ControlComponent=new ControlComponent(Std.string(actor.att.action));
				a.setInitValues(
					Std.parseInt(actor.att.x),
					Std.parseInt(actor.att.y),
					Std.parseInt(actor.att.width),
					Std.parseInt(actor.att.height)
				);
				a.mouseEnabled=true;
				a.useHandCursor=true;
				a.buttonMode=true;
				var acm = new ControlComponentMediator(actor.att.id,a);
				facade.registerMediator(acm);
				crp.registerControl(a);
				var imageData;
				var b:Bitmap;
				if(ext=="svg"){
					var theText = alp.getLibrary().getText(actor.att.id);
					a.init(theText);
					
				} else {
					// image should be cached if using Glory in Async mode (embedAssets not set in project.xml)
					if (cache.exists(actor.att.id)){
						var image = cache.image.get(actor.att.id);
						#if flash
						imageData = image.src;
						#else
						imageData = BitmapData.fromImage (image);
						#end

						// trace("exists:"+actor.att.id);
					} else {
						imageData = lp.getBitmapData("assets/"+actor.att.src);//,"name of library"
						
						// trace(actor.att.id+" is not in cache.");
					}
					// trace("this is my image data sucker:"+imageData);
					b = new Bitmap (imageData);
					// a.addBitmap(b);
					a.init(b);
				}
				appMediator.addDisplayObject(a);
			} catch(e:Dynamic){
				trace(Std.string(e));
			}
		}

    }
