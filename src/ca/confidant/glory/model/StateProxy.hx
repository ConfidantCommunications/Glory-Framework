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
package ca.confidant.glory.model;

	import flash.display.DisplayObject;
    import org.puremvc.haxe.patterns.proxy.Proxy;
	import haxe.Timer;
	import ca.confidant.glory.ApplicationFacade;

	/*
	 *  @author Allan Dowdeswell
	 *  This currently serves to indicate whether the framework is in transition.
	 *  It may be replaced by a State Machine implementation in future releases.
	 */
	enum GloryState {
        TRANSITIONING;
        READY;
    }
	class StateProxy extends Proxy
	{

		//public static var TRANSITIONING:String = "transitioning";
		//public static var READY:String = "ready";
		
		private var currentState:GloryState;

		public static var NAME:String = "StateProxy";
		/**
		 * This proxy knows whether the framework is in a loading/transitioning state or is ready for new commands.
		 */
		public function new( )
		{
       		super ( NAME);
			currentState=GloryState.READY;
		}
		public function setState(s:GloryState):Void{
			//trace("startTimer!");
			currentState=s;
		}
		public function getState():GloryState{
			return currentState;
		}
		
	}