package ca.confidant.glory.view;
    import openfl.events.Event;
    import openfl.display.Stage;
	import openfl.geom.Rectangle;
	import openfl.events.MouseEvent;
    import ca.confidant.glory.ApplicationFacade;
    import openfl.geom.Point;
    import openfl.events.FullScreenEvent;
	import openfl.display.StageDisplayState;
	import org.puremvc.haxe.patterns.mediator.Mediator;
	import org.puremvc.haxe.interfaces.INotification;
    
    /**
     * @author Allan Dowdeswell
     * A Mediator for interacting with the Stage.
     */
    class StageMediator extends Mediator
    {
        // Cannonical name of the Mediator
        public static inline var NAME:String = 'StageMediator';
		//private var widgetsStateProxy:WidgetsStateProxy;
        /**
         * Constructor. 
         */
        public function new( viewComponent:Stage ) 
        {
            // pass the viewComponent to the superclass where 
            // it will be stored in the inherited viewComponent property
            super( NAME, viewComponent );
			
            //stage.addEventListener( MouseEvent.MOUSE_UP, onMouseUp );
            //stage.addEventListener( MouseEvent.MOUSE_WHEEL, onMouseWheel );
            //stage.addEventListener( MouseEvent.MOUSE_MOVE, onMouseMove );

        	viewComponent.addEventListener(FullScreenEvent.FULL_SCREEN, onFullScreenChange);
    		viewComponent.addEventListener( Event.RESIZE, onScreenResize );
        }

        override public function listNotificationInterests():Array<String> 
        {
            return [ 
					ApplicationFacade.FULL_SCREEN_REQUEST
                   ];
        }

        override public function handleNotification( note:INotification ):Void 
        {
            switch ( note.getName() ) {
                

              case ApplicationFacade.FULL_SCREEN_REQUEST:
					getStage().displayState = StageDisplayState.FULL_SCREEN;
            }
        }

		private function onScreenResize(e:Event):Void{
			
			sendNotification( ApplicationFacade.STAGE_RESIZE, { w:getStage().stageWidth,h:getStage().stageHeight} );

		}
		private function onFullScreenChange(e:FullScreenEvent):Void{
			//sendNotification( ApplicationFacade.CONSOLE_LOG, "fullscreen change!" );
			//widgetsStateProxy.setFullScreenState(true);
			if(e.fullScreen){
				sendNotification( ApplicationFacade.FULL_SCREEN_CHANGE, {full:e.fullScreen,w:getStage().fullScreenWidth,h:getStage().fullScreenHeight} );
			} else {
				sendNotification( ApplicationFacade.FULL_SCREEN_CHANGE, {full:e.fullScreen,w:getStage().stageWidth,h:getStage().stageHeight} );

			}

		}

		// The user has released the mouse over the stage
        private function onMouseUp(event:MouseEvent):Void
		{
			//sendNotification( ApplicationFacade.SPRITE_DROP );
		}
                    
		// The user has released the mouse over the stage
        private function onMouseWheel(event:MouseEvent):Void
		{
			trace("mouseWheel!");
			//sendNotification( ApplicationFacade.SPRITE_SCALE, event.delta );
		}       
		// The user has released the mouse over the stage
        private function onMouseMove(event:MouseEvent):Void
		{
			//trace("mouseMove!");
			var p:Point=new Point();
			p.x=getStage().mouseX;
			p.y=getStage().mouseY;
		}
		
        private function getStage():Stage{
            return cast(viewComponent , Stage);
        }
		// public function setFullScreenRect(r:Rectangle):Void{
		// 	getStage().fullScreenSourceRect=r;
			
			
		// }
		public function getStageWidth():Int{
			return getStage().stageWidth;
		}
		public function getStageHeight():Int{
			return getStage().stageHeight;
		}
		public function getFullScreenHeight():Int{
			return getStage().fullScreenHeight;
		}
		public function getFullScreenWidth():Int{
			return getStage().fullScreenWidth;
		}
		
    }
