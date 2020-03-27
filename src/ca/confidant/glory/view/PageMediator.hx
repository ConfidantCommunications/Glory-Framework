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

	import org.puremvc.haxe.patterns.mediator.Mediator;
	import flash.display.Sprite;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.view.components.PageComponent;
	//import ca.confidant.glory.model.LoaderProxy;
/**
 * @author Allan Dowdeswell
 * The PageMediator responds to commands which affect the page as a whole, such as transitions.
 *
 */
	class PageMediator extends Mediator {

		public static inline var TRANSITION_IN:String="in";
		public static inline var TRANSITION_OUT:String="out";
		public function new ( id:String,viewComponent:PageComponent ) {
			super( id, viewComponent );
			//idCode stored as mediatorName
			
		}

		override public function listNotificationInterests():Array<String>{
			 return [
					ApplicationFacade.DO_TRANSITION
                   ];
		}
		override public function handleNotification( note:INotification ):Void{
			switch ( note.getName() ) {

            	case ApplicationFacade.DO_TRANSITION:
					var go:Map<String,String>=note.getBody();
					if((go.get("id")==mediatorName)&&(go.get("transitionType")==TRANSITION_IN)){
						page().transitionIn();
					} else if ((go.get("id")==mediatorName)&&(go.get("transitionType")==TRANSITION_OUT)){
						page().transitionOut();
					} 

            }
		}

		private function page():PageComponent {


			return cast(viewComponent,PageComponent);
		}

	}
