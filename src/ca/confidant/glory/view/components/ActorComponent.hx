package ca.confidant.glory.view.components;
import format.SVG;
//import format.svg.SVG2Gfx;
import flash.display.Sprite;
//import com.eclecticdesignstudio.motion.Actuate;
import flash.display.Bitmap;
import flash.display.BitmapDataChannel;
import flash.utils.ByteArray;
/**
 * @author Allan Dowdeswell
 * ActorComponents appear within a page. Make them do whatever you want. 
 * Make one then add a bitmap or svg.
 */
class ActorComponent extends Sprite {
	
	public var type:String;
	public function new () {
		super ();
		mouseEnabled=false;
		//the 3 lines below are necessary for correct scaling when loading asynchronously
		// this.graphics.beginFill(0x0000FF,0); //0 makes it transparent
		// this.graphics.drawRect(0,0,960,640);
		// this.graphics.endFill();
	}
	
	public function addBitmap(bMap:Bitmap){
		addChild(bMap);
		//these 2 lines below must remain in order for scaling to work properly when loading asynchronously
		// bMap.width=960;
		// bMap.height=640;
	}
	public function addSVG(t:String):Void {
		var svg = new SVG (t); 
		svg.render(this.graphics);
	}
}
