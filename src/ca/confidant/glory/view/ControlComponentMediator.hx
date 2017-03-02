﻿package ca.confidant.glory.view;
	import ca.confidant.glory.view.components.ControlComponent;
	import ca.confidant.glory.view.constants.ControlConstants;
	import org.puremvc.haxe.patterns.mediator.Mediator;
	//import Main;
	import flash.events.MouseEvent;
	import flash.display.Sprite;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
/**
 * The ControlComponentMediator mediates between ControlComponents on a page and the framework. This is created via the BuildPageCommand and destroyed with the RemovePageCommand.
 *	@author Allan Dowdeswell
 *	@param id A String used as a unique identifier. This will match the id of your control in the XML configuration.
 *	@param viewComponent A reference to a ControlComponent.
 */
	class ControlComponentMediator extends Mediator {
		public function new ( id:String,viewComponent:ControlComponent ) {
			super( id, viewComponent );
			addListeners();
		}

		private function addListeners():Void{
			control().addEventListener(MouseEvent.CLICK,onControlClicked);
			control().addEventListener(MouseEvent.MOUSE_DOWN,onMouseDown);
			control().addEventListener(MouseEvent.MOUSE_UP,onMouseUp);
			control().addEventListener(MouseEvent.MOUSE_OUT,onMouseUp);
		}
		private function onMouseDown(e:MouseEvent):Void{
			var a=cast(e.currentTarget,ControlComponent);
			switch(a.action){
				case ControlConstants.PAN_RIGHT_CONTROL:
					//trace("onMouseDown");
					//sendNotification(ApplicationFacade.TIMER_ENABLE,100);
					sendNotification(ApplicationFacade.PAN_RIGHT);
				case ControlConstants.PAN_LEFT_CONTROL:
					//sendNotification(ApplicationFacade.TIMER_ENABLE,100);
					sendNotification(ApplicationFacade.PAN_LEFT);

			}
		}
		private function onMouseUp(e:MouseEvent):Void{
			var a=cast(e.currentTarget,ControlComponent);
			switch(a.action){
				case ControlConstants.PAN_RIGHT_CONTROL:
					//trace("onMouseUp");
					sendNotification(ApplicationFacade.PAN_STOP);
				case ControlConstants.PAN_LEFT_CONTROL:
					sendNotification(ApplicationFacade.PAN_STOP);
			}
		}
		private function onControlClicked(e:MouseEvent):Void{
			var a=cast(e.currentTarget,ControlComponent);
			
			//here we get the information to the left of colon
			var actionsArray:Array<String>=a.action.split(",");
			
			
			//var actionsArray:Array<String>=config.action.split(",");
					
			for(thisAction in actionsArray){
				
				var actionArray:Array<String>=thisAction.split(":");
				
				switch(actionArray[0]){
					case "transitionOut":
						sendNotification(ApplicationFacade.REMOVE_PAGE, actionArray[1]);
					case ControlConstants.PAGE_SKIP_TO:
						sendNotification(ApplicationFacade.CHANGE_PAGE, actionArray[1]);
					case ControlConstants.PAGE_FORWARD:
						sendNotification(ApplicationFacade.CHANGE_PAGE, ControlConstants.PAGE_FORWARD);
					case ControlConstants.PAGE_BACKWARD:
						sendNotification(ApplicationFacade.CHANGE_PAGE, ControlConstants.PAGE_BACKWARD);
					/*case ControlConstants.TOGGLE_MENU:
						trace("toggleOptions");
						sendNotification(ApplicationFacade.TOGGLE_OPTIONS);
					case ControlConstants.GET_URL:
						var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
						sendNotification(ApplicationFacade.HTTP_LINK, pcp.getControlHref(this.mediatorName));*/
						
						
				}
			}
			
			
		}
		private function control():ControlComponent {


			return viewComponent;
		}

	}