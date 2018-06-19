﻿package ca.confidant.glory.model;

	import flash.display.DisplayObject;
    import org.puremvc.haxe.patterns.proxy.Proxy;
	import haxe.Timer;
	import ca.confidant.glory.ApplicationFacade;

	/*
	 *  @author Allan Dowdeswell
	 *  This currently serves to indicate whether the framework is in transition.
	 *  It may be replaced by a State Machine implementation in future releases.
	 */
	enum GloryState {
        TRANSITIONING;
        READY;
    }
	class StateProxy extends Proxy
	{

		//public static var TRANSITIONING:String = "transitioning";
		//public static var READY:String = "ready";
		
		private var currentState:GloryState;

		public static var NAME:String = "StateProxy";
		/**
		 * This proxy knows whether the framework is in a loading/transitioning state or is ready for new commands.
		 */
		public function new( )
		{
       		super ( NAME);
			currentState=GloryState.READY;
		}
		public function setState(s:GloryState):Void{
			//trace("startTimer!");
			currentState=s;
		}
		public function getState():GloryState{
			return currentState;
		}
		
	}