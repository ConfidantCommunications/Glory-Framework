/*
 * Copyright (c) 2018 D. Allan Dowdeswell
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
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
			trace('resize detected');
			
			sendNotification( ApplicationFacade.STAGE_RESIZE, { w:getStage().stageWidth,h:getStage().stageHeight,s:getStage().window.scale} );

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
		public function getStageScale():Float{
			return getStage().window.scale;
		}
		
    }
