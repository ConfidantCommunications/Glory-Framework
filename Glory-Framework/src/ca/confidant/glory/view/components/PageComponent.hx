package ca.confidant.glory.view.components;
import nme.display.Sprite;
import ca.confidant.glory.view.components.ActorComponent;

/**
 * PageComponents hold the actors. 
 * Make one then add a bitmap or svg.
 */
class PageComponent extends Sprite {
	private var myActors:Hash<ActorComponent>;
	

	public function new () {
		super ();
				myActors=new Hash();
		
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
	public function init(){
	}
}
