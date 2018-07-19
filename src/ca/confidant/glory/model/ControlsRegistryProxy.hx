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


	/* 
	 * @author Allan Dowdeswell
	 * This Proxy provides a persistent reference to persistent controls.
	 */
	class ControlsRegistryProxy extends Proxy
	{

		private var currentPage:Int;
		private var controls:Array<DisplayObject>;

		public static var NAME:String = "ControlsRegistryProxy";
		/**
		 * Constructor.
		 */
		public function new( )
		{
	       		super ( NAME);
				//currentPage=0;
				controls=new Array();
				//trace("ControlsRegistryProxy!");
		}
		public function getControls():Array<DisplayObject>{
			//trace("crp:getControls");
			return controls;
		}
		public function registerControl(d:DisplayObject):Void{
			controls.push(d);
		}
		public function deregisterControl(d:DisplayObject):Void{
			controls.remove(d);
		}
	}