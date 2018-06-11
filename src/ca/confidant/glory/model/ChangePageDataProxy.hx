package ca.confidant.glory.model;

	import org.puremvc.haxe.patterns.proxy.Proxy;

	/*
	 * This temporary singleton is instantiated when page changes, erased when change is complete. 
	 */

	class ChangePageDataProxy extends Proxy
	{
		public static var NAME:String = "ChangePageDataProxy";
		// read from outside, write only within Main http://haxe.org/manual/class-field-property-common-combinations.html
		public var newPage(default, null):String;
		public var oldPage(default, null):String;
		/**
		 * Constructor.
		 */
		public function new( newid:String, oldid:String )
		{
	       	super ( NAME );
			trace("changePageDataProxy");
			this.newPage=newid;
			this.oldPage=oldid;
		}
		
	}