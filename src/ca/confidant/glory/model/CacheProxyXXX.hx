package ca.confidant.glory.model;

	import lime.graphics.Image;
	import lime.utils.AssetCache;
	import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
	/*
	 * This singleton is instantiated by the Startup2_Proxies_Command. 
	 * It retains a persistent reference to an OpenFL cache.
	 */
	class CacheProxy extends Proxy
	{
		public static var NAME:String = "CacheProxy";
		private var cache:AssetCache;
		/**
		 * Constructor.
		 */
		public function new( )
		{
	       	super ( NAME );
			cache = new AssetCache();
		}
		public function getCache():AssetCache {
			return this.cache;
		}
		
	}