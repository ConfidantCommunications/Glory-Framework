package ca.confidant.glory.view.components;
import flash.display.Sprite;
import ca.confidant.glory.view.components.ActorComponent;

/**
 * @author Allan Dowdeswell
 * PageComponents hold the actors. 
 * Make one then add a bitmap or svg.
 */
class PageComponent extends Sprite {
	private var myActors:Map<String,ActorComponent>;

	public function new () {
		super ();
				myActors=new Map();
		
		trace("new Page!");
	}
	
	public function addActor(key:String,spr:ActorComponent){
		this.addChild(spr);
		myActors.set(key,spr);	
	}
	/*
	 * 		BuildPageCommand calls this once all actors have been added. Now it is safe to start using them.
	 * 		Override this function in your page class.
	 */
	public function init():Void{
		
	}
	/*
	 * Gets called after page build
	 */
	public function transitionIn():Void{
		trace(this.name+" in!");
	}
	/*
	 * Gets called before page destroy
	 */	
	public function transitionOut():Void{
		trace(this.name+" out!");
	}
	public function getTransitionInTime():Int{
		return 0;
	}
	public function getTransitionOutTime():Int{
		return 0;
	}
	
}
