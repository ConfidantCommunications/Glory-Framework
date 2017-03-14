package ca.confidant.glory.view.components;
import format.SVG;
import flash.display.Sprite;
import flash.display.DisplayObject;
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
	public function init(graphic:Any){
		trace("init for "+this.name);
		if(Std.is(graphic,DisplayObject)){
			addChild(graphic);
		} else if(Std.is(graphic,String)){
			var svg = new SVG (graphic); 
			svg.render(this.graphics);
		} else {
			trace("bad init value:"+graphic);
		}
		this.x=_initX;
		this.y=_initY;
		this.width=_initW;
		this.height=_initH;
	}
/*
	public function addBitmap(bMap:Bitmap){
		addChild(bMap);
	}
	public function addSVG(t:String):Void {
		var svg = new SVG (t); 
		svg.render(this.graphics);
	}*/
}
