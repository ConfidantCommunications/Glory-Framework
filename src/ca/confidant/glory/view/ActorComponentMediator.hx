package ca.confidant.glory.view;

import ca.confidant.glory.view.components.ActorComponent;
import ca.confidant.glory.view.constants.ControlConstants;

import org.puremvc.haxe.patterns.mediator.Mediator;
import flash.events.MouseEvent;
import flash.events.Event;
import flash.display.Sprite;
import flash.display.Bitmap;
import openfl.display.DisplayObject;
import openfl.Assets;
import org.puremvc.haxe.interfaces.INotification;
import ca.confidant.glory.ApplicationFacade;
import ca.confidant.glory.model.PagesConfigProxy;
import ca.confidant.glory.model.ActorComponentConfigProxy;
import ca.confidant.glory.controller.ChangePageHelper;
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
						
						// if(actionArray[0]==ControlConstants.PAGE_SKIP_TO){
						// 	trace("okay");
						// }
						switch(actionArray[0]){
							case ControlConstants.REMOVE_PAGE:
								sendNotification(ApplicationFacade.REMOVE_PAGE, {newPage:"",oldPage:actionArray[1],action:""});
							case ControlConstants.PAGE_SKIP_TO:
								sendNotification(ApplicationFacade.CHANGE_PAGE,ChangePageHelper.instance.buildNotification(actionArray[1]));
							case ControlConstants.PAGE_FORWARD:
								sendNotification(ApplicationFacade.CHANGE_PAGE, ChangePageHelper.instance.buildNotification("",ControlConstants.PAGE_FORWARD));
							case ControlConstants.PAGE_BACKWARD:
								sendNotification(ApplicationFacade.CHANGE_PAGE, ChangePageHelper.instance.buildNotification("",ControlConstants.PAGE_BACKWARD));
							case ControlConstants.PLAY_SOUND:
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
            return [ ];
        }

        override public function handleNotification( note:INotification ):Void
        {

        }

		private function actor():ActorComponent {


			return viewComponent;
		}

	}
