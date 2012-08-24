package ca.confidant.glory.view.components;

import nme.display.Sprite;
import nme.display.Bitmap;
import nme.display.BitmapDataChannel;
/**
 * ControlComponents persist on screen and are used to control display.
 * @param bMap The bare minimum to create this. This may be beefed up in future.
 */
class ControlComponent extends Sprite {
	private var defaultBitmap:Bitmap;
	public var type:String;


	public function new (bMap:Bitmap,type:String) {
		super ();
		this.defaultBitmap=bMap;
		this.type=type;
		addChild(bMap);
	}
}
