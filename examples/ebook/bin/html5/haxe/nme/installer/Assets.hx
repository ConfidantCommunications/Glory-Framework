package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;

#if swfdev
import format.swf.lite.SWFLite;
#end

#if xfl
import format.XFL;
#end


/**
 * ...
 * @author Joshua Granick
 */

class Assets {
	
	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	#if swfdev private static var cachedSWFLibraries:Hash <SWFLite> = new Hash <SWFLite> (); #end
	#if xfl private static var cachedXFLLibraries:Hash <XFL> = new Hash <XFL> (); #end
	
	private static var initialized:Bool = false;
	private static var libraryTypes:Hash <String> = new Hash <String> ();
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			
			
			resourceNames.set ("assets/closeX.svg", "assets/closeX.svg");
			resourceTypes.set ("assets/closeX.svg", "text");
			
			
			resourceNames.set ("assets/config.xml", "assets/config.xml");
			resourceTypes.set ("assets/config.xml", "text");
			
			
			resourceNames.set ("assets/duck.svg", "assets/duck.svg");
			resourceTypes.set ("assets/duck.svg", "text");
			
			
			resourceNames.set ("assets/easyXML.jpg", "assets/easyXML.jpg");
			resourceTypes.set ("assets/easyXML.jpg", "image");
			
			
			resourceNames.set ("assets/heres-the-deal.jpg", "assets/heres-the-deal.jpg");
			resourceTypes.set ("assets/heres-the-deal.jpg", "image");
			
			
			resourceNames.set ("assets/nav/bHome.png", "assets/nav/bHome.png");
			resourceTypes.set ("assets/nav/bHome.png", "image");
			
			
			resourceNames.set ("assets/nav/bLeft.png", "assets/nav/bLeft.png");
			resourceTypes.set ("assets/nav/bLeft.png", "image");
			
			
			resourceNames.set ("assets/nav/bOptions.png", "assets/nav/bOptions.png");
			resourceTypes.set ("assets/nav/bOptions.png", "image");
			
			
			resourceNames.set ("assets/nav/bRight.png", "assets/nav/bRight.png");
			resourceTypes.set ("assets/nav/bRight.png", "image");
			
			
			resourceNames.set ("assets/nav/close.png", "assets/nav/close.png");
			resourceTypes.set ("assets/nav/close.png", "image");
			
			
			resourceNames.set ("assets/nav/panLeft.png", "assets/nav/panLeft.png");
			resourceTypes.set ("assets/nav/panLeft.png", "image");
			
			
			resourceNames.set ("assets/nav/panRight.png", "assets/nav/panRight.png");
			resourceTypes.set ("assets/nav/panRight.png", "image");
			
			
			resourceNames.set ("assets/nme.svg", "assets/nme.svg");
			resourceTypes.set ("assets/nme.svg", "text");
			
			
			resourceNames.set ("assets/options/actor_0000_background.png", "assets/options/actor_0000_background.png");
			resourceTypes.set ("assets/options/actor_0000_background.png", "image");
			
			
			resourceNames.set ("assets/options/actor_0001_duck.png", "assets/options/actor_0001_duck.png");
			resourceTypes.set ("assets/options/actor_0001_duck.png", "image");
			
			
			resourceNames.set ("assets/options/actor_0002_home.png", "assets/options/actor_0002_home.png");
			resourceTypes.set ("assets/options/actor_0002_home.png", "image");
			
			
			resourceNames.set ("assets/options/actor_0003_cow.png", "assets/options/actor_0003_cow.png");
			resourceTypes.set ("assets/options/actor_0003_cow.png", "image");
			
			
			resourceNames.set ("assets/options/actor_0004_easyXML.png", "assets/options/actor_0004_easyXML.png");
			resourceTypes.set ("assets/options/actor_0004_easyXML.png", "image");
			
			
			resourceNames.set ("assets/options/actor_0005_limerick.png", "assets/options/actor_0005_limerick.png");
			resourceTypes.set ("assets/options/actor_0005_limerick.png", "image");
			
			
			resourceNames.set ("assets/options/choose.png", "assets/options/choose.png");
			resourceTypes.set ("assets/options/choose.png", "image");
			
			
			resourceNames.set ("assets/p1/limerickPCM.wav", "assets/p1/limerickPCM.wav");
			resourceTypes.set ("assets/p1/limerickPCM.wav", "sound");
			
			
			resourceNames.set ("assets/p1/pageObject_0000_bg.jpg", "assets/p1/pageObject_0000_bg.jpg");
			resourceTypes.set ("assets/p1/pageObject_0000_bg.jpg", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0001_skin.png", "assets/p1/pageObject_0001_skin.png");
			resourceTypes.set ("assets/p1/pageObject_0001_skin.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0002_hose.png", "assets/p1/pageObject_0002_hose.png");
			resourceTypes.set ("assets/p1/pageObject_0002_hose.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0003_pants.png", "assets/p1/pageObject_0003_pants.png");
			resourceTypes.set ("assets/p1/pageObject_0003_pants.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0004_flameshoe.png", "assets/p1/pageObject_0004_flameshoe.png");
			resourceTypes.set ("assets/p1/pageObject_0004_flameshoe.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0005_shoe.png", "assets/p1/pageObject_0005_shoe.png");
			resourceTypes.set ("assets/p1/pageObject_0005_shoe.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0006_shirt.png", "assets/p1/pageObject_0006_shirt.png");
			resourceTypes.set ("assets/p1/pageObject_0006_shirt.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0007_truck.png", "assets/p1/pageObject_0007_truck.png");
			resourceTypes.set ("assets/p1/pageObject_0007_truck.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0008_firemen.png", "assets/p1/pageObject_0008_firemen.png");
			resourceTypes.set ("assets/p1/pageObject_0008_firemen.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0009_can.png", "assets/p1/pageObject_0009_can.png");
			resourceTypes.set ("assets/p1/pageObject_0009_can.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0010_bw.png", "assets/p1/pageObject_0010_bw.png");
			resourceTypes.set ("assets/p1/pageObject_0010_bw.png", "image");
			
			
			resourceNames.set ("assets/p1/pageObject_0011_text.png", "assets/p1/pageObject_0011_text.png");
			resourceTypes.set ("assets/p1/pageObject_0011_text.png", "image");
			
			
			resourceNames.set ("assets/speaker.png", "assets/speaker.png");
			resourceTypes.set ("assets/speaker.png", "image");
			
			
			resourceNames.set ("assets/title/star.svg", "assets/title/star.svg");
			resourceTypes.set ("assets/title/star.svg", "text");
			
			
			resourceNames.set ("assets/title/title.jpg", "assets/title/title.jpg");
			resourceTypes.set ("assets/title/title.jpg", "image");
			
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				// Should be bitmapData.clone (), but stopped working in recent Jeash builds
				// Without clone, BitmapData is already cached, so ignoring the hash table for now
				
				var data = cast (ApplicationMain.loaders.get (resourceNames.get(id)).contentLoaderInfo.content, Bitmap).bitmapData;
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		}  else if (id.indexOf (":") > -1) {
			
			var libraryName = id.substr (0, id.indexOf (":"));
			var symbolName = id.substr (id.indexOf (":") + 1);
			
			if (libraryTypes.exists (libraryName)) {
				
				#if swfdev
				
				if (libraryTypes.get (libraryName) == "swf") {
					
					if (!cachedSWFLibraries.exists (libraryName)) {
						
						var unserializer = new Unserializer (getText ("libraries/" + libraryName + ".dat"));
						unserializer.setResolver (cast { resolveEnum: resolveEnum, resolveClass: resolveClass });
						cachedSWFLibraries.set (libraryName, unserializer.unserialize());
						
					}
					
					return cachedSWFLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
				#if xfl
				
				if (libraryTypes.get (libraryName) == "xfl") {
					
					if (!cachedXFLLibraries.exists (libraryName)) {
						
						cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
						
					}
					
					return cachedXFLLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
			} else {
				
				trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceNames.exists (id)) {
			
			return cast ApplicationMain.urlLoaders.get (getResourceName(id)).data;
			
		}
		
		trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "font") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Font);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getMovieClip (id:String):MovieClip {
		
		initialize ();
		
		var libraryName = id.substr (0, id.indexOf (":"));
		var symbolName = id.substr (id.indexOf (":") + 1);
		
		if (libraryTypes.exists (libraryName)) {
			
			#if swfdev
			
			if (libraryTypes.get (libraryName) == "swf") {
				
				if (!cachedSWFLibraries.exists (libraryName)) {
					
					var unserializer = new Unserializer (getText ("libraries/" + libraryName + ".dat"));
					unserializer.setResolver (cast { resolveEnum: resolveEnum, resolveClass: resolveClass });
					cachedSWFLibraries.set (libraryName, unserializer.unserialize());
					
				}
				
				return cachedSWFLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
			#if xfl
			
			if (libraryTypes.get (libraryName) == "xfl") {
				
				if (!cachedXFLLibraries.exists (libraryName)) {
					
					cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
					
				}
				
				return cachedXFLLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
		} else {
			
			trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get(id)));
				
			} else if (resourceTypes.get (id).toLowerCase () == "music") {
				
				return new Sound (new URLRequest (resourceNames.get(id)));
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "text") {
				
				return ApplicationMain.urlLoaders.get (resourceNames.get(id)).data;
				
			}
			
		}
		
		var bytes = getBytes (id);
		return null;
		
	}
	
	
	//public static function loadBitmapData(id:String, handler:BitmapData -> Void, useCache:Bool = true):BitmapData
	//{
		//return null;
	//}
	//
	//
	//public static function loadBytes(id:String, handler:ByteArray -> Void):ByteArray
	//{	
		//return null;
	//}
	//
	//
	//public static function loadText(id:String, handler:String -> Void):String
	//{
		//return null;
	//}
	
	
	private static function resolveClass (name:String):Class <Dynamic> {
		
		name = StringTools.replace (name, "native.", "browser.");
		return Type.resolveClass (name);
		
	}
	
	
	private static function resolveEnum (name:String):Enum <Dynamic> {
		
		name = StringTools.replace (name, "native.", "browser.");
		return Type.resolveEnum (name);
		
	}
	
	
}