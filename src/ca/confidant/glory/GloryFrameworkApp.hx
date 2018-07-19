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
package ca.confidant.glory;
import ca.confidant.glory.ApplicationFacade;
import flash.display.Sprite;
import flash.Lib;
import openfl.text.TextField;
/*
 * @author Allan Dowdeswell
 * This is the main class your Glory application will be built upon. Extend it as desired.
 */

class GloryFrameworkApp extends Sprite {
	private var t:TextField;

	function new() {
		#if (debug && flash)

		t=new TextField();
		t.width=400;//stage.stageWidth
		t.height=stage.stageHeight-80;
		t.x=70;
		t.y=70;
		Lib.current.addChild(t);
		haxe.Log.trace = function ( v : Dynamic, ?inf : haxe.PosInfos ) {
			if (v=="//") t.text="";
			t.text += "\r";
			t.text += v;
		};

		#end

		super();
		var facade = ApplicationFacade.getInstance();
		facade.sendNotification( ApplicationFacade.STARTUP, this );
	}

	// entry point
	public function main() {
		var app:GloryFrameworkApp=new GloryFrameworkApp();
		Lib.current.addChild (app);
	}
	public function displayMessage(m:String):Void {

	}

	#if (debug && js)
	//debug in browser per: http://jasono.co/2013/06/24/a-haxejs-debugging-tip/
	//invoke in console using haxedebug();
    @:expose("haxedebug") @:keep
    public static function enterDebug()
    {
        js.Lib.debug();
    }
	#end
}