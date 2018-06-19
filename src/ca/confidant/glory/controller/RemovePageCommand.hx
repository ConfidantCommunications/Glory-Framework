
package ca.confidant.glory.controller;

    //import js.Dom;
	import flash.display.Sprite;

	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import org.puremvc.haxe.patterns.command.AsyncCommand;

	import ca.confidant.glory.DataTypes;
	/*
	 * @author Allan Dowdeswell
	 * This command is triggered by the ChangePageCommand, or directly by a control. 
	 * It disposes of on-screen assets and their mediators/proxies that aren't needed.
	 */
    class RemovePageCommand extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var appMediator:ApplicationMediator;
        override public function execute( note:INotification ) : Void
        {
			var data:ChangePageData = note.getBody();

			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);

			if((data.newPage != "") && (pcp.getPage(data.newPage).get("type")=="overlay")){
				trace("overlay! not removing that…");
				return;
			}
			trace("removing page");
			trace("old:"+data.oldPage);
			trace("new:"+data.newPage);
			
			//remove page sprites from the app:
			try{
				if (data.newPage!=data.oldPage){
					trace("removing pageMediator:"+data.oldPage);
					var pageMediator=cast(facade.retrieveMediator(data.oldPage),PageMediator);
					trace("done");
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
								
					facade.removeMediator(data.oldPage);
					pageMediator=null;
					appMediator.removeDisplayObject(s);
					s=null;
				}
			} catch(e:Dynamic){
				trace(e);
			}
			// commandComplete();
			
        }


    }
