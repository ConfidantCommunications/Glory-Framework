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
