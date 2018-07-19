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

    
    import org.puremvc.as3.interfaces.*;
    import org.puremvc.as3.patterns.mediator.Mediator;
	
	import ca.confidant.glory.ApplicationFacade;
  
	import flash.events.*;
	import flash.external.ExternalInterface;
    
    /**
     * @author Allan Dowdeswell
     * A Mediator for interacting with the External Interface, i.e. calling target-specific functions. 
     * Not currently used.
     */
    public class ExternalInterfaceMediator extends Mediator implements IMediator
    {
       
	   /**
         * Constructor. 
         */
		public static const NAME:String = "ExternalInterfaceMediator";
        public function ExternalInterfaceMediator( viewComponent:Object ) 
        {

            super( NAME, viewComponent );
    		
			/*// Retrieve reference to frequently consulted Proxies
			spriteDataProxy = facade.retrieveProxy( SpriteDataProxy.NAME ) as SpriteDataProxy;

			// Listen for events from the view component 
            app.addEventListener( HelloSprite.SPRITE_DIVIDE, onSpriteDivide );
            */
			ExternalInterface.call( "console.log" , "I'm here");
        }


        override public function listNotificationInterests():Array 
        {
            return [ 
            		 ApplicationFacade.CALL_EXTERNAL_FUNCTION,
					 ApplicationFacade.CONSOLE_LOG
                   ];
        }


        override public function handleNotification( note:INotification ):void 
        {
            switch ( note.getName() ) {
                
                case ApplicationFacade.CALL_EXTERNAL_FUNCTION:
					var theCall:Object = note.getBody() as Object;
					if (ExternalInterface.available) {
						ExternalInterface.call(theCall.theFunction, theCall.theParameters);
						//ExternalInterface.call( "console.log" , "external interface is working");
					}
				break;
                
                case ApplicationFacade.CONSOLE_LOG:
					var msg:String = note.getBody() as String;
					if (ExternalInterface.available) {
						ExternalInterface.call( "console.log" , msg);
					}
				break;

            }
        }
		
        protected function get stage():Stage{
            return viewComponent as Stage;
        }
    }
