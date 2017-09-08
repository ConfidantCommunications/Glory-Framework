package ca.confidant.glory.model;

	import lime.graphics.Image;
	import lime.utils.AssetCache;
	import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
    import ca.confidant.glory.GloryAssetLibrary;
	/*
	 * Created by the AsyncLoadAssetsCommand, 
	 * this retains a persistent reference to the Glory Asset Library.
	 */
	class AssetLibraryProxy extends Proxy
	{
		public static var NAME:String = "AssetLibraryProxy";
		private var al:GloryAssetLibrary;
		/**
		 * Constructor.
		 */
		public function new(theAssetLibrary:GloryAssetLibrary)
		{
	       	super ( NAME );
			al = theAssetLibrary;
		}
		public function getLibrary():GloryAssetLibrary {
			return this.al;
		}
		
	}