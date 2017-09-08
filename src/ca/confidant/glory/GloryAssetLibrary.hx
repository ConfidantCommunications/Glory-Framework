package ca.confidant.glory;


import haxe.io.Path;
import lime.app.Event;
import lime.app.Future;
import lime.app.Promise;
import lime.media.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.text.Font;
import lime.utils.AssetType;
import lime.utils.AssetManifest;
#if flash
import flash.display.BitmapData;
import flash.media.Sound;
#end

#if !lime_debug
@:fileXml('tags="haxe,release"')
@:noDebug
#end

	class GloryAssetLibrary extends openfl.utils.AssetLibrary {
		public static function fromManifest (manifest:AssetManifest):GloryAssetLibrary {
			if (manifest == null) return null;
			
			var library:GloryAssetLibrary = null;
			
			if (manifest.libraryType == null) {
				
				library = new GloryAssetLibrary ();
				
			} else {
				
				var libraryClass = Type.resolveClass (manifest.libraryType);
				
				if (libraryClass != null) {
					
					library = Type.createInstance (libraryClass, manifest.libraryArgs);
					
				} else {
					
					trace ("Could not find library type: " + manifest.libraryType);
					return null;
					
				}
				
			}
			
			library.__fromManifest (manifest);
			
			return library;
			
		}

	}