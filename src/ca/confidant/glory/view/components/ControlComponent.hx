package ca.confidant.glory.view.components;
import format.SVG;

import flash.display.Sprite;
import flash.display.Bitmap;
import flash.display.BitmapDataChannel;
/**
 * @author Allan Dowdeswell
 * ControlComponents persist on screen and are used to control display.
 * @param action The bare minimum to create this. This may be beefed up in future.
 */
class ControlComponent extends Sprite {
	private var defaultBitmap:Bitmap;
	public var action:String;


	public function new (action:String) {
		super ();
		//this.defaultBitmap=bMap;
		this.action=action;
		//the graphic drawing below fixes a display bug when assets are loaded asynchronously
		// this.graphics.beginFill(0xFF0000,0);
		// this.graphics.drawRect(0,0,10,10);
		// this.graphics.endFill();
		//addChild(bMap);
	}
	public function addBitmap(bMap:Bitmap){
		this.defaultBitmap=bMap;
		// bMap.width=10;
		// bMap.height=10;
		addChild(bMap);
	}
	public function addSVG(t:String):Void {
		var svg = new SVG (t); 
		svg.render(this.graphics);
	}
}
