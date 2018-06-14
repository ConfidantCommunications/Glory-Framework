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
	import ca.confidant.glory.DataTypes;
	import openfl.display.DisplayObject;
	import haxe.Timer;
	/*
	 * @author Allan Dowdeswell
	 * This is the end of the chain described by ChangePageMacro.
	 * It removes the ChangePageDataProxy
	 */
    class ChangePageCleanup extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var sp:StateProxy;
        override public function execute( note:INotification ) : Void
        {
			sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data=note.getBody();
			if(pcp.getPageById(data.newPage).get("type")!="overlay")
				pcp.setCurrentPageById(data.newPage);
			sp.setState(GloryState.READY);
			
        }

    }
