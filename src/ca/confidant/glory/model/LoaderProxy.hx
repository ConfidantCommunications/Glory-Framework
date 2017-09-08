package ca.confidant.glory.model;

	import lime.graphics.Image;
	import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
	import openfl.Assets;
	import lime.utils.AssetLibrary;
	import openfl.display.BitmapData;
	import openfl.display.MovieClip;
	import openfl.media.Sound;
	import ca.confidant.glory.view.components.ActorComponent;
	/*
	 * This singleton is instantiated by the Startup2_Proxies_Command. 
	 * It grabs assets from whichever OpenFL manifest has them.
	 */
	// typedef LoadResult={
	// 	var id:String;
	// 	var type:String;
	// 	var data:Dynamic;
	// 	@:optional var destinationActor:String;
	// 	@:optional var meta:Dynamic;
	// }
	class LoaderProxy extends Proxy
	{
		public static var NAME:String = "LoaderProxy";
		/**
		 * Constructor.
		 */
		public function new( )
		{
	       	super ( NAME);
		}
		
		public function getText(id:String,libId:String="gloryControls"):String{
			// var al:AssetLibrary=Assets.getLibrary(libId);
			var theText=Assets.getText(id);
			return theText;
		}
		
		public function getBitmapData(id:String,libId:String="gloryControls"):BitmapData{
			// trace(libId+"bitmap exists:"+id+":"+Assets.exists(id));//false, so there's no image there.
			// var al:AssetLibrary = Assets.getLibrary(libId);
			// trace("assetLibrary:"+libId+":"+al);
			// var image=al.getImage(id);
			// trace("imageid:"+id);
			
			// trace("image:"+image);
			// var imageData:BitmapData = BitmapData.fromImage(image);
			var imageData:BitmapData = Assets.getBitmapData(id);
			trace ("imageData:"+imageData);
			return imageData;
		}
		// public function getImage(id:String,libId:String="gloryControls"):Image{
		// 	var al:AssetLibrary = Assets.getLibrary(libId);
		// 	var image = al.getImage(id);
		// 	return image;
		// }
		public function getSound(id:String,libId:String="gloryControls"):Sound{
			var s:Sound = Assets.getSound(id);
			return s;
		}

		public function getMovieClip(id:String,b:Bool=true):MovieClip{
			var m:MovieClip = Assets.getMovieClip(id);
			return m;
		}
		
	}