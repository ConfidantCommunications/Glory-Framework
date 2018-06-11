package ca.confidant.glory.model;

	import openfl.display.DisplayObject;
    import org.puremvc.haxe.patterns.proxy.Proxy;


	/* 
	 * @author Allan Dowdeswell
	 * This Proxy provides a persistent reference to persistent controls.
	 */
	class ControlsRegistryProxy extends Proxy
	{

		private var currentPage:Int;
		private var controls:Array<DisplayObject>;

		public static var NAME:String = "ControlsRegistryProxy";
		/**
		 * Constructor.
		 */
		public function new( )
		{
	       		super ( NAME);
				//currentPage=0;
				controls=new Array();
				//trace("ControlsRegistryProxy!");
		}
		public function getControls():Array<DisplayObject>{
			//trace("crp:getControls");
			return controls;
		}
		public function registerControl(d:DisplayObject):Void{
			controls.push(d);
		}
		public function deregisterControl(d:DisplayObject):Void{
			controls.remove(d);
		}
	}