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
package ca.confidant.glory.controller;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.view.*;
	
    import js.Browser.document;
    import openfl.display.*;
    import openfl.geom.*;
    import haxe.crypto.Base64;
    import openfl.Lib;
	import haxe.Timer;
	/* 
	 * @author Allan Dowdeswell
	 * This will cause a css background image to be applied to the containing HTML element.
	 * Triggered by ChangePageMacro and STAGE_RESIZE event
	 * 
	 */
	 
    class UpdateHtmlBackgroundCommand extends SimpleCommand
    {
	private function doCapture():Void {
		trace("doCapture");
		var pcp = cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);

		var app:Sprite = cast ( facade.retrieveMediator("ApplicationMediator"), ApplicationMediator ).getApp();
		var p = {w:Lib.current.stage.stageWidth,h:Lib.current.stage.stageHeight};
		

		//init the bitmapData object:
		var bitmapData = new BitmapData(p.w, p.h, true, 0);
		//this only draws the controls:
		bitmapData.draw(app);
		var pm = cast(facade.retrieveMediator(pcp.getCurrentPage().get("id")),PageMediator);
		var s = cast(pm.page(),Sprite);

		bitmapData.draw(s); 
		//downsize to remedy hotjar background too large (maybe):
		var sc = Lib.current.stage.window.scale;
		bitmapData.image.resize(Math.round(bitmapData.image.width/sc),Math.round(bitmapData.image.height/sc));
		var imageData = bitmapData.encode(new Rectangle(0, 0, p.w/sc, p.h/sc), new PNGEncoderOptions());

		trace("Resize:"+sc+" X "+bitmapData.image.width);
		var b64 = Base64.encode(imageData);
		var styleString = 'background-repeat:no-repeat;background-image: url("data:image/png;base64,$b64");';
		// var styleString = 'background-image: url("data:image/jpg;base64,$b64");';
		
		document.getElementById("content").setAttribute("style",styleString);
		//or:

	}
	override public function execute( note:INotification ) : Void
        {
		
			trace("updateHtmlBackground");
			
			var pcp = cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var updateHtmlBackground = pcp.getUpdateHtmlBackground();
			var interval = Std.parseInt(updateHtmlBackground);
			var type = (updateHtmlBackground == "onChangePage") ? "onChangePage" : "onInterval";
			// eim.setupHtmlBackgroundUpdates(type,interval);
			switch(type){ //keep this, so the type acts as an enabler
				case "onChangePage":
					//
				// case "onInterval":
					//not implemented yet. maybe for future
					//var interval = Std.parseInt(updateHtmlBackground);//yields seconds
					//use TimerTick notification maybe
					// return;
				default:
					return; 
			}
			// Timer.delay(doCapture,5000);//waits for the pages to draw
			doCapture();
        }
    }
