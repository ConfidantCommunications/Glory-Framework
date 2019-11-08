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

    import flash.display.Sprite;
	import flash.display.Bitmap;
	import flash.display.BitmapData;
	import lime.graphics.Image;
	import haxe.xml.Access;
	import openfl.Assets;
	import lime.utils.Assets in LimeAssets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	 
    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import ca.confidant.glory.controller.ActorComponentFactory;
	
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
			#if !appMode
			alp=cast(facade.retrieveProxy("gloryControls") , AssetLibraryProxy);
			#end

			var controlsList:Array<Access>=pcp.getAppControls();
			if(controlsList.length>0){
				// var controlComponents:Array<ActorComponent> = [];

				for (thisControl in controlsList){
					// makeControl(thisControl);
					var a = ActorComponentFactory.instance.create("gloryControls",thisControl);
					crp.registerControl(a.name,a);
				}
				//all the actors and their config proxies are created so it's safe to run the layout helper now since the layout commands may reference other actors
				for (thisControl in controlsList){
					
					// var accp = cast( facade.retrieveProxy(b.name),ActorComponentConfigProxy);
					var commands = thisControl.att.layout.split(",");
					var appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);

					LayoutHelper.instance.layout(crp.getControl(thisControl.att.id),commands,appMediator.getApp());
					
				}
				
			}
			commandComplete();
        }

    }
