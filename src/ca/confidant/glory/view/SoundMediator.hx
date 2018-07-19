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

import flash.media.Sound;
import flash.media.SoundChannel;
import org.puremvc.haxe.patterns.mediator.Mediator;
import org.puremvc.haxe.interfaces.INotification;
/**
 * @author Allan Dowdeswell
 * The SoundMediator holds a temporary reference to a sound. The sounds and their mediators are created/destroyed with each page turn.
 *
 *	@param id A String used as a unique identifier. This will match the id of your sound in the XML configuration.
 *	@param theSound A reference to a Sound Object.
 */
	class SoundMediator extends Mediator {

		private var mySound:Sound;
		private var sc:SoundChannel;
		public function new ( id:String, theSound:Sound ) {
			super( id, theSound );
			mySound=theSound;
			//mySound.addEventListener(());

		}
		public function removeSound():Void {
			mySound = null;
		}

		private function addListeners():Void{


		}

		override public function listNotificationInterests():Array<String>
        {
            return [
					ApplicationFacade.PLAY_SOUND
                   ];
        }

        override public function handleNotification( note:INotification ):Void
        {
            switch ( note.getName() ) {

            	case ApplicationFacade.PLAY_SOUND:
					trace("I heard you!"+note.getBody()+":"+this.mediatorName);
					if (this.mediatorName==note.getBody()){
						if(sc!=null){
							sc.stop();
							sc=null;
						} else {
							sc=mySound.play();
						}
						
					}

            }
        }
		
		private function sound():Sound {


			return mySound;

		}

	}
