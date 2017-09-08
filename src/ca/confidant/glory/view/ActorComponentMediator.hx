package ca.confidant.glory.view;
	import ca.confidant.glory.view.components.ActorComponent;
	import ca.confidant.glory.view.constants.ControlConstants;

	import org.puremvc.haxe.patterns.mediator.Mediator;
	import flash.events.MouseEvent;
	import flash.events.Event;
	import flash.display.Sprite;
	import flash.display.Bitmap;
	import flash.display.DisplayObject;
	import openfl.Assets;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ActorComponentConfigProxy;
	// using ca.confidant.glory.model.LoaderProxy.LoadResult;
/**
 * @author Allan Dowdeswell
 * The ActorComponentMediator mediates between ActorComponents on a page and the framework. This is created via the BuildPageCommand and destroyed with the RemovePageCommand.
 *
 *	@param id A String used as a unique identifier. This will match the id of your actor in the XML configuration.
 *	@param viewComponent A reference to an ActorComponent.
 *	@param accp The ActorComponentConfigProxy which is created along with this Mediator. A repository for actor-specific data.
 */
 	typedef PanXY={
		var x:Int;
		var y:Int;
	}
	class ActorComponentMediator extends Mediator {

		private var config:ActorComponentConfigProxy;
		private var type:String;
		private var panXY:PanXY;
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
			trace(a.name+":"+config.type+":"+config.action);
			switch(config.type){

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
			}

		}
		override public function listNotificationInterests():Array<String>
        {
            return [
					ApplicationFacade.TIMER_TICK,
					ApplicationFacade.PAN_TICK,
					ApplicationFacade.PAN_STOP
					// ApplicationFacade.HANDLE_LOADED_ASSET
                   ];
        }

        override public function handleNotification( note:INotification ):Void
        {
			switch ( note.getName() ) {

            	case ApplicationFacade.TIMER_TICK:
					//trace("timerTick");
				case ApplicationFacade.PAN_TICK:
					switch(note.getBody()){
						case ControlConstants.PAN_UP_CONTROL:
							panXY={x:0,y:-4};
						case ControlConstants.PAN_DOWN_CONTROL:
							panXY={x:0,y:4};
						case ControlConstants.PAN_LEFT_CONTROL:
							panXY={x:-4,y:0};
						case ControlConstants.PAN_RIGHT_CONTROL:
							panXY={x:4,y:0};
					}

					actor().addEventListener(Event.ENTER_FRAME,onPanTick);
				case ApplicationFacade.PAN_STOP:
					actor().removeEventListener(Event.ENTER_FRAME,onPanTick);
				// case ApplicationFacade.HANDLE_LOADED_ASSET:
				// 	//note will have a destinationActor,type,data
				// 	var theAsset:LoadResult=note.getBody();
				// 	//first check if the asset is for this actor/mediator
				// 	if(theAsset.destinationActor==mediatorName){
				// 		switch (theAsset.type){
				// 			case "bitmap":
				// 				var b=new Bitmap (theAsset.data);
				// 				b.smoothing=true;
				// 				actor().init(b);
				// 			case "svg":
				// 				var s:String=theAsset.data;
				// 				actor().init(s);
				// 			default:
				// 				//must be a swf
				// 				var mc:DisplayObject=cast(theAsset.data,DisplayObject);
				// 				actor().init(mc);
				// 		}
				// 	}

            }
        }
		private function onPanTick(e:Dynamic):Void{
			actor().x+=panXY.x;
			actor().y+=panXY.y;
		}

		private function actor():ActorComponent {


			return viewComponent;
		}

	}
