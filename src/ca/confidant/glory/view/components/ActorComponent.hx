package ca.confidant.glory.view.components;
import format.SVG;
import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.display.Bitmap;
import openfl.display.BitmapDataChannel;
import openfl.utils.ByteArray;
// import haxe.ds.Either;
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
