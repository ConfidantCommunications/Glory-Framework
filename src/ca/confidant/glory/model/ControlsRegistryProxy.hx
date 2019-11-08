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

	import openfl.display.DisplayObject;
    import org.puremvc.haxe.patterns.proxy.Proxy;
	import ca.confidant.glory.view.components.ActorComponent;

	/* 
	 * @author Allan Dowdeswell
	 * This Proxy provides a persistent reference to persistent controls.
	 */
	class ControlsRegistryProxy extends Proxy
	{

		private var currentPage:Int;
		// private var controls:Array<DisplayObject>;
		private var controlsAccess:Map<String,ActorComponent>;

		public static var NAME:String = "ControlsRegistryProxy";
		/**
		 * Constructor.
		 */
		public function new( )
		{
	       		super ( NAME);
				controlsAccess = new Map<String,ActorComponent>();
		}
		public function getControls():Array<ActorComponent>{
			
			var res = new Array<ActorComponent>();
			for(a => b in controlsAccess){
				res.push(b);
			}
			return res;
		}
		public function getControl(id:String):ActorComponent {
			return controlsAccess.get(id);
		}
		public function registerControl(key:String,d:ActorComponent):Void{
			controlsAccess.set(key,d);
		}
		public function deregisterControl(key:String):Void{
			controlsAccess.remove(key);
		}
	}