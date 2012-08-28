package pages;

import ca.confidant.glory.view.components.PageComponent;
import ca.confidant.glory.view.components.ActorComponent;
import haxe.Timer;

class Psvg extends PageComponent{
	private var myTimer:Timer;
	private var star:ActorComponent;
	public function new(){
		super();
	}
	override public function init(){
		star=myActors.get("star1");
		startTimer();
	}
	public function startTimer(i:Int=50):Void{
		//trace("startTimer!");
		myTimer=new Timer(i);
		myTimer.run = onTimerTick;
	}
	private function onTimerTick():Void{
		star.rotation+=20;
	}
}
