package ca.confidant.glory.controller;

    //import js.Dom;
	import flash.display.Sprite;
	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
//    import ca.confidant.glory.ApplicationFacade;
    import ca.confidant.glory.view.PageMediator;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	 

	import ca.confidant.glory.ApplicationFacade;
	//import Main;
//	import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.StateProxy;
	import ca.confidant.glory.view.constants.ControlConstants;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.model.ChangePageDataProxy;
	import openfl.display.DisplayObject;
	import haxe.Timer;
	/*
	 * @author Allan Dowdeswell
	 * This is the start of the chain described by ChangePageMacro.
	 *  It sets up the conditions necessary for the entire macro chain.
	 */
    class ChangePageSetup extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var sp:StateProxy;
		var changePageDataProxy:ChangePageDataProxy;

        override public function execute( note:INotification ) : Void
        {
			trace("changePageSetup");
			sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			
			if(sp.getState()==GloryState.TRANSITIONING) {
				trace("Transition in progress! Canceling page change.");
				//setOnComplete(null); //cancels next step in the chain
				return;
			};
			
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var action=cast(note.getBody(),String);//current page
			var inPageId:String;
			var outPageId:String = pcp.getCurrentPage().get("id");
			switch(action){
				case ControlConstants.PAGE_FORWARD:
					inPageId = pcp.getNextPage().get("id");
				case ControlConstants.PAGE_BACKWARD:
					inPageId = pcp.getPreviousPage().get("id");
				default:
					inPageId = action;
			}
			
			if (inPageId != null){
				
			} else {
				sp.setState(GloryState.READY);
			}
			facade.registerProxy(new ChangePageDataProxy(inPageId,outPageId));
        }

    }
