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
import flash.display.Sprite;
import ca.confidant.glory.view.components.ActorComponent;
import motion.Actuate;
import motion.easing.Quad;
/**
 * @author Allan Dowdeswell
 * PageComponents hold the actors. 
 * Make one then add a bitmap or svg.
 */
class PageComponent extends Sprite {
	//this is used by custom page classes; do not remove:
	private var myActors:Map<String,ActorComponent>;

	public function new () {
		super ();
		myActors=new Map();
		
		trace("new Page!");
		this.alpha=0;
	}
	
	public function addActor(key:String,spr:ActorComponent):Void{
		trace("adding actor:"+key);
		this.addChild(spr);
		myActors.set(key,spr);	
	}
	/*
	 * 		BuildPageCommand calls this once all actors have been added. Now it is safe to start using them.
	 * 		Override this function in your page class.
	 */
	public function init():Void{
		trace ("init:"+this.name);
		// graphics.beginFill(0x0000FF);
		// graphics.drawRect(0,0,50,50);
		// graphics.endFill();
	}
	/*
	 * Gets called after page build
	 */
	public function transitionIn():Void{
		trace(this.name+" in!");
		Actuate.tween (this, 1, { alpha: 1 }, false).ease (Quad.easeIn).onComplete (init, [  ]);
		
		// init();
	}
	/*
	 * Gets called before page destroy
	 */	
	public function transitionOut():Void{
		trace(this.name+" out!");
		Actuate.tween (this, 1, { alpha: 0 }, false).ease (Quad.easeOut).onComplete (function(){
			trace("animation complete");
		});
		
	}
	
}
