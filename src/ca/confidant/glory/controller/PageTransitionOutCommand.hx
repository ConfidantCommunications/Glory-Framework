package ca.confidant.glory.controller;

	import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.StateProxy;
	import ca.confidant.glory.model.ChangePageDataProxy;
	import haxe.Timer;
	/*
	 * @author Allan Dowdeswell
	 * This is the start of the chain described by ChangePageMacro.
	 *  It sets up the conditions necessary for the entire macro chain.
	 */
    class PageTransitionOutCommand extends AsyncCommand
    {
		var pcp:PagesConfigProxy;
		var sp:StateProxy;
		var data:ChangePageDataProxy;
        override public function execute( note:INotification ) : Void
        {
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			data=cast(facade.retrieveProxy(ChangePageDataProxy.NAME) , ChangePageDataProxy);
			
			if(pcp.getPageById(data.newPage).get("type")=="overlay"){
				trace("overlay! not removing old page.");
				commandComplete();
			} else if (data.newPage!=data.oldPage) {
				doTransition(data.oldPage, "out");
				trace("transitionTime:"+pcp.getPageTransitionOutTime(data.oldPage));
				var waitTimerOut=new Timer(pcp.getPageTransitionOutTime(data.oldPage)*1000);
				waitTimerOut.run = function():Void{
					waitTimerOut.stop();
					waitTimerOut=null;
					commandComplete();
				}
			} else {
				commandComplete();
			}
        }
		private function doTransition(id:String,type:String):Void{
			var t:Map<String,String>=new Map();
			t.set("id",id);
			t.set("transitionType",type);
			sendNotification(ApplicationFacade.DO_TRANSITION, t);
		}
    }
