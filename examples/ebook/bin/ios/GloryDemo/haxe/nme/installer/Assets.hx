package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("assets/closeX.svg", "assets_closex_svg");
			resourceTypes.set ("assets/closeX.svg", "text");
			resourceNames.set ("assets/config.xml", "assets_config_xml");
			resourceTypes.set ("assets/config.xml", "text");
			resourceNames.set ("assets/duck.svg", "assets_duck_svg");
			resourceTypes.set ("assets/duck.svg", "text");
			resourceNames.set ("assets/easyXML.jpg", "assets_easyxml_jpg");
			resourceTypes.set ("assets/easyXML.jpg", "image");
			resourceNames.set ("assets/heres-the-deal.jpg", "assets_heres_the_deal_jpg");
			resourceTypes.set ("assets/heres-the-deal.jpg", "image");
			resourceNames.set ("assets/nav/bHome.png", "assets_nav_bhome_png");
			resourceTypes.set ("assets/nav/bHome.png", "image");
			resourceNames.set ("assets/nav/bLeft.png", "assets_nav_bleft_png");
			resourceTypes.set ("assets/nav/bLeft.png", "image");
			resourceNames.set ("assets/nav/bOptions.png", "assets_nav_boptions_png");
			resourceTypes.set ("assets/nav/bOptions.png", "image");
			resourceNames.set ("assets/nav/bRight.png", "assets_nav_bright_png");
			resourceTypes.set ("assets/nav/bRight.png", "image");
			resourceNames.set ("assets/nav/close.png", "assets_nav_close_png");
			resourceTypes.set ("assets/nav/close.png", "image");
			resourceNames.set ("assets/nav/panLeft.png", "assets_nav_panleft_png");
			resourceTypes.set ("assets/nav/panLeft.png", "image");
			resourceNames.set ("assets/nav/panRight.png", "assets_nav_panright_png");
			resourceTypes.set ("assets/nav/panRight.png", "image");
			resourceNames.set ("assets/nme.svg", "assets_nme_svg");
			resourceTypes.set ("assets/nme.svg", "text");
			resourceNames.set ("assets/options/actor_0000_background.png", "assets_options_actor_0000_background_png");
			resourceTypes.set ("assets/options/actor_0000_background.png", "image");
			resourceNames.set ("assets/options/actor_0001_duck.png", "assets_options_actor_0001_duck_png");
			resourceTypes.set ("assets/options/actor_0001_duck.png", "image");
			resourceNames.set ("assets/options/actor_0002_home.png", "assets_options_actor_0002_home_png");
			resourceTypes.set ("assets/options/actor_0002_home.png", "image");
			resourceNames.set ("assets/options/actor_0003_cow.png", "assets_options_actor_0003_cow_png");
			resourceTypes.set ("assets/options/actor_0003_cow.png", "image");
			resourceNames.set ("assets/options/actor_0004_easyXML.png", "assets_options_actor_0004_easyxml_png");
			resourceTypes.set ("assets/options/actor_0004_easyXML.png", "image");
			resourceNames.set ("assets/options/actor_0005_limerick.png", "assets_options_actor_0005_limerick_png");
			resourceTypes.set ("assets/options/actor_0005_limerick.png", "image");
			resourceNames.set ("assets/options/choose.png", "assets_options_choose_png");
			resourceTypes.set ("assets/options/choose.png", "image");
			resourceNames.set ("assets/p1/limerickPCM.wav", "assets_p1_limerickpcm_wav");
			resourceTypes.set ("assets/p1/limerickPCM.wav", "sound");
			resourceNames.set ("assets/p1/pageObject_0000_bg.jpg", "assets_p1_pageobject_0000_bg_jpg");
			resourceTypes.set ("assets/p1/pageObject_0000_bg.jpg", "image");
			resourceNames.set ("assets/p1/pageObject_0001_skin.png", "assets_p1_pageobject_0001_skin_png");
			resourceTypes.set ("assets/p1/pageObject_0001_skin.png", "image");
			resourceNames.set ("assets/p1/pageObject_0002_hose.png", "assets_p1_pageobject_0002_hose_png");
			resourceTypes.set ("assets/p1/pageObject_0002_hose.png", "image");
			resourceNames.set ("assets/p1/pageObject_0003_pants.png", "assets_p1_pageobject_0003_pants_png");
			resourceTypes.set ("assets/p1/pageObject_0003_pants.png", "image");
			resourceNames.set ("assets/p1/pageObject_0004_flameshoe.png", "assets_p1_pageobject_0004_flameshoe_png");
			resourceTypes.set ("assets/p1/pageObject_0004_flameshoe.png", "image");
			resourceNames.set ("assets/p1/pageObject_0005_shoe.png", "assets_p1_pageobject_0005_shoe_png");
			resourceTypes.set ("assets/p1/pageObject_0005_shoe.png", "image");
			resourceNames.set ("assets/p1/pageObject_0006_shirt.png", "assets_p1_pageobject_0006_shirt_png");
			resourceTypes.set ("assets/p1/pageObject_0006_shirt.png", "image");
			resourceNames.set ("assets/p1/pageObject_0007_truck.png", "assets_p1_pageobject_0007_truck_png");
			resourceTypes.set ("assets/p1/pageObject_0007_truck.png", "image");
			resourceNames.set ("assets/p1/pageObject_0008_firemen.png", "assets_p1_pageobject_0008_firemen_png");
			resourceTypes.set ("assets/p1/pageObject_0008_firemen.png", "image");
			resourceNames.set ("assets/p1/pageObject_0009_can.png", "assets_p1_pageobject_0009_can_png");
			resourceTypes.set ("assets/p1/pageObject_0009_can.png", "image");
			resourceNames.set ("assets/p1/pageObject_0010_bw.png", "assets_p1_pageobject_0010_bw_png");
			resourceTypes.set ("assets/p1/pageObject_0010_bw.png", "image");
			resourceNames.set ("assets/p1/pageObject_0011_text.png", "assets_p1_pageobject_0011_text_png");
			resourceTypes.set ("assets/p1/pageObject_0011_text.png", "image");
			resourceNames.set ("assets/speaker.png", "assets_speaker_png");
			resourceTypes.set ("assets/speaker.png", "image");
			resourceNames.set ("assets/title/star.svg", "assets_title_star_svg");
			resourceTypes.set ("assets/title/star.svg", "text");
			resourceNames.set ("assets/title/title.jpg", "assets_title_title_jpg");
			resourceTypes.set ("assets/title/title.jpg", "image");
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = BitmapData.load (resourceNames.get (id));
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceNames.exists (id)) {
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id) == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
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
	
	
}
