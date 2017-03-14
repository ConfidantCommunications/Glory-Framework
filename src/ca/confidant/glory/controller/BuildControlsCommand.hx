﻿
package ca.confidant.glory.controller;

    import flash.display.Sprite;
	import flash.display.Bitmap;
	import flash.display.BitmapData;
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

	/*
	 * @author Allan Dowdeswell
	 * This is triggered by the GotoIntroCommand, right before the first page is built. 
	 * It retrieves the configuration info from the PagesConfigProxy and sets up the persistent navigation controls.
	 */
    class BuildControlsCommand extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var csp:ControlsRegistryProxy;
		var appMediator:ApplicationMediator;
		var lp:LoaderProxy;
        override public function execute( note:INotification ) : Void
        {
			trace("BuildControlsCommand");
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			csp=cast(facade.retrieveProxy(ControlsRegistryProxy.NAME) , ControlsRegistryProxy);
			lp=cast(facade.retrieveProxy(LoaderProxy.NAME) , LoaderProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);

			var controlsList:List<Fast>=pcp.getAppControls();
			for (thisControl in controlsList){
				makeControl(thisControl);
			}
			//
			
        }

		private function makeControl(actor:Fast):Void{
			try{
				var ext:String=cast(actor.att.src,String).substr(-3);
				var a:ControlComponent=new ControlComponent(Std.string(actor.att.action));
				var acm = new ControlComponentMediator(actor.att.id,a);
				facade.registerMediator(acm);
				csp.registerControl(a);
				
				if(ext=="svg"){
					//var theText=
					lp.getText("assets/"+actor.att.src, actor.att.id);
					//a.addSVG(theText);
				} else {
					//var imageData:BitmapData = 
					lp.getBitmapData("assets/"+actor.att.src,true, actor.att.id);
					// var b=new Bitmap (imageData);
					// a.addBitmap(b);
				}


				appMediator.addDisplayObject(a);
				a.x=Std.parseInt(actor.att.x);
				a.y=Std.parseInt(actor.att.y);
				// a.width=Std.parseInt(actor.att.width);
				// a.height=Std.parseInt(actor.att.height);
				a.mouseEnabled=true;
				a.useHandCursor=true;
				a.buttonMode=true;

			} catch(e:Dynamic){
				trace(Std.string(e));
			}
		}

    }
