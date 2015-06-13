package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;

#if swf
import format.SWF;
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
	#if swf private static var cachedSWFLibraries:Hash <SWF> = new Hash <SWF> (); #end
	#if xfl private static var cachedXFLLibraries:Hash <XFL> = new Hash <XFL> (); #end
	
	private static var initialized:Bool = false;
	private static var libraryTypes:Hash <String> = new Hash <String> ();
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceClasses.set ("assets/closeX.svg", NME_assets_closex_svg);
			resourceTypes.set ("assets/closeX.svg", "text");
			resourceClasses.set ("assets/config.xml", NME_assets_config_xml);
			resourceTypes.set ("assets/config.xml", "text");
			resourceClasses.set ("assets/duck.svg", NME_assets_duck_svg);
			resourceTypes.set ("assets/duck.svg", "text");
			resourceClasses.set ("assets/easyXML.jpg", NME_assets_easyxml_jpg);
			resourceTypes.set ("assets/easyXML.jpg", "image");
			resourceClasses.set ("assets/heres-the-deal.jpg", NME_assets_heres_the_deal_jpg);
			resourceTypes.set ("assets/heres-the-deal.jpg", "image");
			resourceClasses.set ("assets/nav/bHome.png", NME_assets_nav_bhome_png);
			resourceTypes.set ("assets/nav/bHome.png", "image");
			resourceClasses.set ("assets/nav/bLeft.png", NME_assets_nav_bleft_png);
			resourceTypes.set ("assets/nav/bLeft.png", "image");
			resourceClasses.set ("assets/nav/bOptions.png", NME_assets_nav_boptions_png);
			resourceTypes.set ("assets/nav/bOptions.png", "image");
			resourceClasses.set ("assets/nav/bRight.png", NME_assets_nav_bright_png);
			resourceTypes.set ("assets/nav/bRight.png", "image");
			resourceClasses.set ("assets/nav/close.png", NME_assets_nav_close_png);
			resourceTypes.set ("assets/nav/close.png", "image");
			resourceClasses.set ("assets/nav/panLeft.png", NME_assets_nav_panleft_png);
			resourceTypes.set ("assets/nav/panLeft.png", "image");
			resourceClasses.set ("assets/nav/panRight.png", NME_assets_nav_panright_png);
			resourceTypes.set ("assets/nav/panRight.png", "image");
			resourceClasses.set ("assets/nme.svg", NME_assets_nme_svg);
			resourceTypes.set ("assets/nme.svg", "text");
			resourceClasses.set ("assets/options/actor_0000_background.png", NME_assets_options_actor_0000_background_png);
			resourceTypes.set ("assets/options/actor_0000_background.png", "image");
			resourceClasses.set ("assets/options/actor_0001_duck.png", NME_assets_options_actor_0001_duck_png);
			resourceTypes.set ("assets/options/actor_0001_duck.png", "image");
			resourceClasses.set ("assets/options/actor_0002_home.png", NME_assets_options_actor_0002_home_png);
			resourceTypes.set ("assets/options/actor_0002_home.png", "image");
			resourceClasses.set ("assets/options/actor_0003_cow.png", NME_assets_options_actor_0003_cow_png);
			resourceTypes.set ("assets/options/actor_0003_cow.png", "image");
			resourceClasses.set ("assets/options/actor_0004_easyXML.png", NME_assets_options_actor_0004_easyxml_png);
			resourceTypes.set ("assets/options/actor_0004_easyXML.png", "image");
			resourceClasses.set ("assets/options/actor_0005_limerick.png", NME_assets_options_actor_0005_limerick_png);
			resourceTypes.set ("assets/options/actor_0005_limerick.png", "image");
			resourceClasses.set ("assets/options/choose.png", NME_assets_options_choose_png);
			resourceTypes.set ("assets/options/choose.png", "image");
			resourceClasses.set ("assets/p1/limerickPCM.wav", NME_assets_p1_limerickpcm_wav);
			resourceTypes.set ("assets/p1/limerickPCM.wav", "sound");
			resourceClasses.set ("assets/p1/pageObject_0000_bg.jpg", NME_assets_p1_pageobject_0000_bg_jpg);
			resourceTypes.set ("assets/p1/pageObject_0000_bg.jpg", "image");
			resourceClasses.set ("assets/p1/pageObject_0001_skin.png", NME_assets_p1_pageobject_0001_skin_png);
			resourceTypes.set ("assets/p1/pageObject_0001_skin.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0002_hose.png", NME_assets_p1_pageobject_0002_hose_png);
			resourceTypes.set ("assets/p1/pageObject_0002_hose.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0003_pants.png", NME_assets_p1_pageobject_0003_pants_png);
			resourceTypes.set ("assets/p1/pageObject_0003_pants.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0004_flameshoe.png", NME_assets_p1_pageobject_0004_flameshoe_png);
			resourceTypes.set ("assets/p1/pageObject_0004_flameshoe.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0005_shoe.png", NME_assets_p1_pageobject_0005_shoe_png);
			resourceTypes.set ("assets/p1/pageObject_0005_shoe.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0006_shirt.png", NME_assets_p1_pageobject_0006_shirt_png);
			resourceTypes.set ("assets/p1/pageObject_0006_shirt.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0007_truck.png", NME_assets_p1_pageobject_0007_truck_png);
			resourceTypes.set ("assets/p1/pageObject_0007_truck.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0008_firemen.png", NME_assets_p1_pageobject_0008_firemen_png);
			resourceTypes.set ("assets/p1/pageObject_0008_firemen.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0009_can.png", NME_assets_p1_pageobject_0009_can_png);
			resourceTypes.set ("assets/p1/pageObject_0009_can.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0010_bw.png", NME_assets_p1_pageobject_0010_bw_png);
			resourceTypes.set ("assets/p1/pageObject_0010_bw.png", "image");
			resourceClasses.set ("assets/p1/pageObject_0011_text.png", NME_assets_p1_pageobject_0011_text_png);
			resourceTypes.set ("assets/p1/pageObject_0011_text.png", "image");
			resourceClasses.set ("assets/speaker.png", NME_assets_speaker_png);
			resourceTypes.set ("assets/speaker.png", "image");
			resourceClasses.set ("assets/title/star.svg", NME_assets_title_star_svg);
			resourceTypes.set ("assets/title/star.svg", "text");
			resourceClasses.set ("assets/title/title.jpg", NME_assets_title_title_jpg);
			resourceTypes.set ("assets/title/title.jpg", "image");
			
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = cast (Type.createInstance (resourceClasses.get (id), []), BitmapData);
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else if (id.indexOf (":") > -1) {
			
			var libraryName = id.substr (0, id.indexOf (":"));
			var symbolName = id.substr (id.indexOf (":") + 1);
			
			if (libraryTypes.exists (libraryName)) {
				
				#if swf
				
				if (libraryTypes.get (libraryName) == "swf") {
					
					if (!cachedSWFLibraries.exists (libraryName)) {
						
						cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
						
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
		
		if (resourceClasses.exists (id)) {
			
			return Type.createInstance (resourceClasses.get (id), []);
			
		} else {
			
			trace ("[nme.Assets] There is no ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "font") {
			
			return cast (Type.createInstance (resourceClasses.get (id), []), Font);
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getMovieClip (id:String):MovieClip {
		
		initialize ();
		
		var libraryName = id.substr (0, id.indexOf (":"));
		var symbolName = id.substr (id.indexOf (":") + 1);
		
		if (libraryTypes.exists (libraryName)) {
			
			#if swf
			
			if (libraryTypes.get (libraryName) == "swf") {
				
				if (!cachedSWFLibraries.exists (libraryName)) {
					
					cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
					
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
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound" || resourceTypes.get (id).toLowerCase () == "music") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Sound);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
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
	
	
}