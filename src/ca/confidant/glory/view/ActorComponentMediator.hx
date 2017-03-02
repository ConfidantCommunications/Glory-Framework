package ca.confidant.glory.view;
	import ca.confidant.glory.view.components.ActorComponent;
	import ca.confidant.glory.view.constants.ControlConstants;

	import org.puremvc.haxe.patterns.mediator.Mediator;
	import flash.events.MouseEvent;
	import flash.events.Event;
	import flash.display.Sprite;
	import openfl.Assets;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ActorComponentConfigProxy;
/**
 * @author Allan Dowdeswell
 * The ActorComponentMediator mediates between ActorComponents on a page and the framework. This is created via the BuildPageCommand and destroyed with the RemovePageCommand.
 *
 *	@param id A String used as a unique identifier. This will match the id of your actor in the XML configuration.
 *	@param viewComponent A reference to an ActorComponent.
 *	@param accp The ActorComponentConfigProxy which is created along with this Mediator. A repository for actor-specific data.
 */
	class ActorComponentMediator extends Mediator {

		private var config:ActorComponentConfigProxy;
		private var type:String;
		public function new ( id:String,viewComponent:ActorComponent,accp:ActorComponentConfigProxy ) {
			super( id, viewComponent );
			this.config=accp;
			addListeners();

		}

		private function addListeners():Void{
			//if(actor().type=="colour"){

				actor().addEventListener(MouseEvent.CLICK,onActorClicked);
			//}else{
				actor().mouseEnabled=true;
				if(type=="getURL"){

			 	actor().useHandCursor=true;
		 		actor().buttonMode=true;
			}

		}
		private function onActorClicked(e:MouseEvent):Void{
			var a=cast(e.currentTarget, Sprite);
			trace(a.name);
			//a.x=200;//works
			//a.toggleColour();
			switch(config.type){
				//case "colour":
					//a.toggleColour();
				//case ControlConstants.PAGE_FORWARD:
					//sendNotification(ApplicationFacade.CHANGE_PAGE, ControlConstants.PAGE_FORWARD);
				//case ControlConstants.PAGE_BACKWARD:
					//sendNotification(ApplicationFacade.CHANGE_PAGE, ControlConstants.PAGE_BACKWARD);

				case ControlConstants.CONTROL:
					var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
					//trace(pcp.getPageById(this.mediatorName));
					var actionsArray:Array<String>=config.action.split(",");
					
					for(thisAction in actionsArray){
						
						var actionArray:Array<String>=thisAction.split(":");
						
						switch(actionArray[0]){
							case "transitionOut":
								sendNotification(ApplicationFacade.REMOVE_PAGE, actionArray[1]);
							case "pageSkipTo":
								sendNotification(ApplicationFacade.CHANGE_PAGE, actionArray[1]);
							case "pageForward":
								sendNotification(ApplicationFacade.CHANGE_PAGE, ControlConstants.PAGE_FORWARD);
							case "pageBackward":
								sendNotification(ApplicationFacade.CHANGE_PAGE, ControlConstants.PAGE_BACKWARD);
							case "playSound":
								sendNotification(ApplicationFacade.PLAY_SOUND, actionArray[1]);
									//var sound = Assets.getSound ("assets/p1/limerickPCM.wav");
									//sound.play ();
								//TODO: BUILD AN ACTIVE SOUNDS PROXY
								
						}
					}
					//remember to disallow multiple options pages creation
				//case ControlConstants.GET_URL:
					//var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
					//sendNotification(ApplicationFacade.HTTP_LINK, pcp.getActorHref(this.mediatorName));
			}

		}
		override public function listNotificationInterests():Array<String>
        {
            return [
					ApplicationFacade.TIMER_TICK,
					ApplicationFacade.PAN_LEFT,
					ApplicationFacade.PAN_RIGHT,
					ApplicationFacade.PAN_STOP
                   ];
        }

        override public function handleNotification( note:INotification ):Void
        {
            switch ( note.getName() ) {

            	case ApplicationFacade.TIMER_TICK:
					//trace("timerTick");
				case ApplicationFacade.PAN_LEFT:
					actor().addEventListener(Event.ENTER_FRAME,onPanLeft);
				case ApplicationFacade.PAN_RIGHT:
					actor().addEventListener(Event.ENTER_FRAME,onPanRight);
				case ApplicationFacade.PAN_STOP:
					actor().removeEventListener(Event.ENTER_FRAME,onPanRight);
					actor().removeEventListener(Event.ENTER_FRAME,onPanLeft);



            }
        }
		private function onPanLeft(e:Dynamic):Void{

					//trace("left");
					actor().x=actor().x+4;
		}

		private function onPanRight(e:Dynamic):Void{

					//trace("right");
					actor().x=actor().x-4;
		}
		private function actor():ActorComponent {


			return viewComponent;
		}

	}
