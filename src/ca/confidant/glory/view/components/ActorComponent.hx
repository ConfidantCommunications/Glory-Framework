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
package ca.confidant.glory.view.components;
import format.SVG;
import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.display.Bitmap;
import openfl.display.BitmapDataChannel;
import openfl.utils.ByteArray;

/**
 * @author Allan Dowdeswell
 * ActorComponents appear within a page. Make them do whatever you want. 
 * Make one then add a bitmap or svg.
 */

 
class ActorComponent extends Sprite {
	
	public var type:String;
	private var _initX:Int;
	private var _initY:Int;
	private var _initW:Int;
	private var _initH:Int;
	public function new () {
		super ();
		mouseEnabled=false;
	}
	public function setInitValues(x:Int,y:Int,w:Int,h:Int):Void{
		trace("setInitValues! "+x+":"+y+":"+w+":"+h);
		this._initX=x;
		this._initY=y;
		this._initW=w;
		this._initH=h;
	}
	public function init():Void{
		trace("init for "+this.name);
		this.x=_initX;
		this.y=_initY;
		this.width=_initW;
		this.height=_initH;
	}

	public function addBitmap(bMap:Bitmap){
		addChild(bMap);
	}
	public function addSVG(t:String):Void {
		// trace("rendering SVG:"+t);
		var svg = new SVG (t); 
		svg.render(this.graphics);
	}
	
}
