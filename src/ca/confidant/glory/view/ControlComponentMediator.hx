package ca.confidant.glory.view;
	import ca.confidant.glory.view.components.ControlComponent;
	import ca.confidant.glory.view.constants.ControlConstants;
	import org.puremvc.haxe.patterns.mediator.Mediator;
	//import Main;
	import openfl.events.MouseEvent;
	import openfl.display.Sprite;
	import openfl.display.Bitmap;
	import openfl.display.DisplayObject;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	// using ca.confidant.glory.model.LoaderProxy.LoadResult;
/**
 * The ControlComponentMediator mediates between ControlComponents on a page and the framework.
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
		}
		private function onMouseUp(e:MouseEvent):Void{
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
						// sendNotification(ApplicationFacade.REMOVE_PAGE, actionArray[1]);
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
		override public function listNotificationInterests():Array<String>
        {
            return [
					// ApplicationFacade.HANDLE_LOADED_ASSET
                   ];
        }

        override public function handleNotification( note:INotification ):Void
        {
            // switch ( note.getName() ) {
				// case ApplicationFacade.HANDLE_LOADED_ASSET:
				// 	//note will have a destinationActor,type,data
				// 	var theAsset:LoadResult=note.getBody();
				// 	// lp.retrieveLoadedAsset(assetID)
				// 	//trace("Handling:"+theAsset.destinationActor+":"+mediatorName);
				// 	//first check if the asset is for this actor/mediator
				// 	if(theAsset.destinationActor==mediatorName){
				// 		switch (theAsset.type){
				// 			case "bitmap":
				// 				var b=new Bitmap (theAsset.data);
				// 				b.smoothing=true;
				// 				control().init(b);
				// 			case "svg":
				// 				var s:String=theAsset.data;
				// 				control().init(s);
				// 			default:
				// 				//must be a swf
				// 				var mc:DisplayObject=cast(theAsset.data,DisplayObject);
				// 				control().init(mc);
				// 		}
				// 	}

            // }
        }
		private function control():ControlComponent {


			return viewComponent;
		}

	}