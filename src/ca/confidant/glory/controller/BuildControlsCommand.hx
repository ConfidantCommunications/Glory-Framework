package ca.confidant.glory.controller;

    import flash.display.Sprite;
	import flash.display.Bitmap;
	import flash.display.BitmapData;
	import lime.graphics.Image;
	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	 
    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.view.ControlComponentMediator;
	import ca.confidant.glory.view.components.ControlComponent;

	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import haxe.ds.Either;
	/*
	 * @author Allan Dowdeswell
	 * This is triggered by the GotoIntroMacro, right before the first page is built. 
	 * It retrieves the configuration info from the PagesConfigProxy and sets up the persistent navigation controls.
	 */
    class BuildControlsCommand extends AsyncCommand
    {
		var pcp:PagesConfigProxy;
		var crp:ControlsRegistryProxy;
		var appMediator:ApplicationMediator;
		// var lp:LoaderProxy;
		var alp:AssetLibraryProxy;
        override public function execute( note:INotification ) : Void
        {
			trace("BuildControlsCommand");
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			crp=cast(facade.retrieveProxy(ControlsRegistryProxy.NAME) , ControlsRegistryProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);
			// lp=cast(facade.retrieveProxy(LoaderProxy.NAME) , LoaderProxy);
			alp=cast(facade.retrieveProxy("gloryControls") , AssetLibraryProxy);
			var controlsList:List<Fast>=pcp.getAppControls();
			for (thisControl in controlsList){
				makeControl(thisControl);
			}
			commandComplete();
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
				var b:Bitmap;
				if(ext=="svg"){
					var theText:String = alp.getLibrary().getText(actor.att.id);
					a.addSVG(theText);
					a.init();
					
				} else {
					// stolen from buildpagecommand
					var imageData;
					
					var image = alp.getLibrary().getImage("assets/"+actor.att.src);//,"name of library"
					#if flash
					imageData = image.src;
					#else
					imageData = BitmapData.fromImage (image);
					#end
					var b = new Bitmap (imageData);
					a.addBitmap(b);
					a.init();
				}
				appMediator.addDisplayObject(a);
			} catch(e:Dynamic){
				trace(Std.string(e));
			}
		}

    }
