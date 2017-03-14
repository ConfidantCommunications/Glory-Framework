﻿
package ca.confidant.glory.controller;

    //import js.Dom;
	import flash.display.Sprite;

	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
//    import ca.confidant.glory.ApplicationFacade;
    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;

	import ca.confidant.glory.ApplicationFacade;

	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.view.components.ControlComponent;
	/*
	 * @author Allan Dowdeswell
	 * This command is triggered by the ChangePageCommand. 
	 * It disposes of on-screen assets and their mediators/proxies that aren't needed.
	 */
    class RemovePageCommand extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var appMediator:ApplicationMediator;
		var crp:ControlsRegistryProxy;
        override public function execute( note:INotification ) : Void
        {
			var pageId=cast(note.getBody(),String);//current page
			//trace('RemovePageCommand:'+pageId);
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);
			crp=cast(facade.retrieveProxy(ControlsRegistryProxy.NAME) , ControlsRegistryProxy);

			
			
			//remove page sprites from the app:
			try{

				var pageMediator=cast(facade.retrieveMediator(pageId),PageMediator);
				var s:Sprite=cast(pageMediator.getViewComponent(),Sprite);
				
				//trace("removing children from:"+s);
				//remove all children and their ActorComponentMediators/ActorComponentConfigProxies
				while(s.numChildren>0){
					var child= s.getChildAt(0);
					if(facade.hasMediator(child.name)){
						facade.removeMediator(child.name);
					}
					if(facade.hasProxy(child.name)){
						facade.removeProxy(child.name);
					}
					s.removeChild(child);
					child=null;
				}
							
				//kill the pageMediator
				facade.removeMediator(pageId);
				pageMediator=null;
				appMediator.removeDisplayObject(s);
				s=null;
			} catch(e:Dynamic){
				trace(e);
			}
			

        }


    }
