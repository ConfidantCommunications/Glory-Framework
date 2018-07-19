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

	import openfl.display.DisplayObject;
	import org.puremvc.haxe.patterns.mediator.Mediator;
	import ca.confidant.glory.GloryFrameworkApp;

	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import org.puremvc.haxe.interfaces.INotification;
	// import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.ControlsRegistryProxy;
/*
 * @author Allan Dowdeswell
 * This is where the top-level application mediation happens.
 */

	class ApplicationMediator extends Mediator{

		public static inline var NAME:String = 'ApplicationMediator';
		// private var loaderProxy:LoaderProxy;
		private var pagesConfigProxy:PagesConfigProxy;

		public function new ( viewComponent:GloryFrameworkApp ) {
			super( NAME, viewComponent );
			//trace("ApplicationMediator!");
		}


		override public function listNotificationInterests():Array<String> {
			return [
			ApplicationFacade.MESSAGE
			//ApplicationFacade.INIT_XML_LOAD,
			//ApplicationFacade.FULL_SCREEN_CHANGE,
			//ApplicationFacade.SET_ACTIVE_WIDGET,
			//ApplicationFacade.PAGES_CONFIG_READY
			];

		}
		public function addDisplayObject(d:DisplayObject,level:Int=-1):Void{
			if(level==-1){
				getApp().addChild(d);
				//trace("add at top");
			} else {
				getApp().addChildAt(d,level);
				//trace('adding to level'+level);
			}
		}
		public function removeDisplayObject(d:DisplayObject):Void{
			getApp().removeChild(d);
		}
		public function reportLayers():Void{
			for (i in 0...getApp().numChildren){
				trace("layer:"+getApp().getChildAt(i).name+":"+i);
			}
		}
		public function getIndex(d:DisplayObject):Int{
			return getApp().getChildIndex(d);
		}

		override public function handleNotification( note:INotification ):Void {
			switch ( note.getName() ) {

				case ApplicationFacade.MESSAGE :
					getApp().displayMessage(cast(note.getBody() , String));
			}
		}


		public function getApp():GloryFrameworkApp {
			return cast(viewComponent , GloryFrameworkApp);
		}

	}
