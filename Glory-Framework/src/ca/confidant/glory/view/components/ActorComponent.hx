package ca.confidant.glory.view.components;
import format.SVG;
//import format.svg.SVG2Gfx;
import nme.display.Sprite;
//import com.eclecticdesignstudio.motion.Actuate;
import nme.display.Bitmap;
import nme.display.BitmapDataChannel;
import nme.utils.ByteArray;

/**
 * ActorComponents appear within a page. Make them do whatever you want. 
 * Make one then add a bitmap or svg.
 */
class ActorComponent extends Sprite {
	
	var defaultBitmap:Bitmap;
	//var altBitmap:Bitmap;
	//public var hasColour:Bool;
	public var type:String;
	public function new () {
		super ();
		//hasColour=false;

		mouseEnabled=false;
	}
	
	public function addBitmap(bMap:Bitmap){
		this.defaultBitmap=bMap;
		addChild(bMap);
	}
	public function addSVG(t:String):Void {
		var svg = new SVG (t); 
		svg.render(this.graphics);
	}
	/* disabled for now
	public function setColourImage(bMap:Bitmap):Void{
		this.altBitmap=bMap;
		altBitmap.visible=false;
		addChild(bMap);
		addChild(defaultBitmap);
		hasColour=true;
	}
	public function toggleColour():Void{
		altBitmap.visible= !altBitmap.visible;

	}*/
}
