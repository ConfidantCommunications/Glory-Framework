package ca.confidant.glory.view.components;
import format.SVG;

import flash.display.Sprite;
import flash.display.Bitmap;
import flash.display.BitmapDataChannel;
import ca.confidant.glory.view.components.ActorComponent;
/**
 * @author Allan Dowdeswell
 * ControlComponents persist on screen and are used to control display.
 * @param action The bare minimum to create this. This may be beefed up in future.
 */
class ControlComponent extends ActorComponent {
	public var action:String;


	override public function new (action:String) {
		super ();
		//this.defaultBitmap=bMap;
		this.action=action;
	}
	// public function addBitmap(bMap:Bitmap){
	// 	// this.defaultBitmap=bMap;
	// 	// bMap.width=10;
	// 	// bMap.height=10;
	// 	addChild(bMap);
	// }
	// public function addSVG(t:String):Void {
	// 	var svg = new SVG (t); 
	// 	svg.render(this.graphics);
	// }
}
