﻿package ca.confidant.glory.model;

	import lime.graphics.Image;
	import lime.utils.AssetCache;
	import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
	import openfl.utils.AssetLibrary;
    // import ca.confidant.glory.GloryAssetLibrary;
	/*
	 * Created by the AsyncLoadAssetsCommand, 
	 * this retains a reference to a unique Glory Asset Library for every page.
	 *  
	 */
	class AssetLibraryProxy extends Proxy
	{
		public static var NAME:String = "AssetLibraryProxy";
		private var al:AssetLibrary;
		/**
		 * Constructor.
		 */
		public function new(theAssetLibrary:AssetLibrary, name:String)
		{
	       	super ( name );
			al = theAssetLibrary;
		}
		public function getLibrary():AssetLibrary {
			return this.al;
		}
		
	}