package pages;

import ca.confidant.glory.view.components.PageComponent;
import ca.confidant.glory.view.components.ActorComponent;
import haxe.Timer;
import motion.Actuate;
import motion.easing.Quad;

class Psvg extends PageComponent{
	private var myTimer:Timer;
	private var star:ActorComponent;
	public function new(){
		super();
		this.alpha=1;
		x=-960;
	}
	override public function init(){
		star=myActors.get("star1");
		startTimer();
		//transitionIn();
	}
	public function startTimer(i:Int=50):Void{
		//trace("startTimer!");
		myTimer=new Timer(i);
		myTimer.run = onTimerTick;
	}
	private function onTimerTick():Void{
		star.rotation+=20;
	}
	override public function transitionIn():Void{
		trace(this.name+" in!");
		Actuate.tween (this, 1, { x: 0 }, false).ease (Quad.easeIn);//.onComplete (animateCircle, [ circle ])
	}
	/*
	 * Gets called before page destroy
	 */	
	override public function transitionOut():Void{
		//trace(this.name+" out!");
		Actuate.tween (this, 1, { alpha:0 }, false).ease (Quad.easeOut);//.onComplete (animateCircle, [ circle ])
	}
}
