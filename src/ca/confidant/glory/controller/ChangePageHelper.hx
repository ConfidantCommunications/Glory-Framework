package ca.confidant.glory.controller;

import org.puremvc.haxe.patterns.command.SimpleCommand;
import org.puremvc.haxe.patterns.facade.Facade;

import org.puremvc.haxe.interfaces.IFacade;
import ca.confidant.glory.model.StateProxy;
import ca.confidant.glory.model.PagesConfigProxy;
import org.puremvc.haxe.interfaces.INotification;
import ca.confidant.glory.DataTypes;
import ca.confidant.glory.view.constants.ControlConstants;
	/*
	 * @author Allan Dowdeswell
	 * This singleton generates proper notifications for building pages.
	 */
    class ChangePageHelper
    {
		var pcp:PagesConfigProxy;
		var sp:StateProxy;
		private var facade: IFacade;
		public static var instance(default, null):ChangePageHelper = new ChangePageHelper();

		private function new(){
			facade = Facade.getInstance();
		};

        public function buildNotification( data:String = "", ?action:String ) : ChangePageData
        {
			trace("building a notification:"+data+":"+action);
			sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			
			if(sp.getState()==GloryState.TRANSITIONING) {
				trace("Transition in progress! Canceling page change.");
				return {};
			};
			// var data:ChangePageData=note.getBody();
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var inPageId:String;
			var outPageId:String = pcp.getCurrentPage().get("id");
			// trace("pcp next page:"+pcp.getNextPage());

			if(data!=""){
				inPageId = data;
			} else {
				switch(action){
					case ControlConstants.PAGE_BACKWARD:
						inPageId = pcp.getPreviousPage().get("id");
					case ControlConstants.PAGE_FORWARD:
						inPageId = pcp.getNextPage().get("id");
					default:
						inPageId = "no matching action!";
				}

			}
			// trace("newPage:"+inPageId);
			
			return {newPage:inPageId, oldPage:outPageId, action:action};
        }

    }
