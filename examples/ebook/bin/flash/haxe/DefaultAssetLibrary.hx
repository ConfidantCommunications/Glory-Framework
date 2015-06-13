package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/closeX.svg", __ASSET__assets_closex_svg);
		type.set ("assets/closeX.svg", AssetType.TEXT);
		className.set ("assets/config.xml", __ASSET__assets_config_xml);
		type.set ("assets/config.xml", AssetType.TEXT);
		className.set ("assets/duck.svg", __ASSET__assets_duck_svg);
		type.set ("assets/duck.svg", AssetType.TEXT);
		className.set ("assets/easyXML.jpg", __ASSET__assets_easyxml_jpg);
		type.set ("assets/easyXML.jpg", AssetType.IMAGE);
		className.set ("assets/heres-the-deal.jpg", __ASSET__assets_heres_the_deal_jpg);
		type.set ("assets/heres-the-deal.jpg", AssetType.IMAGE);
		className.set ("assets/nav/bHome.png", __ASSET__assets_nav_bhome_png);
		type.set ("assets/nav/bHome.png", AssetType.IMAGE);
		className.set ("assets/nav/bLeft.png", __ASSET__assets_nav_bleft_png);
		type.set ("assets/nav/bLeft.png", AssetType.IMAGE);
		className.set ("assets/nav/bOptions.png", __ASSET__assets_nav_boptions_png);
		type.set ("assets/nav/bOptions.png", AssetType.IMAGE);
		className.set ("assets/nav/bRight.png", __ASSET__assets_nav_bright_png);
		type.set ("assets/nav/bRight.png", AssetType.IMAGE);
		className.set ("assets/nav/close.png", __ASSET__assets_nav_close_png);
		type.set ("assets/nav/close.png", AssetType.IMAGE);
		className.set ("assets/nav/panLeft.png", __ASSET__assets_nav_panleft_png);
		type.set ("assets/nav/panLeft.png", AssetType.IMAGE);
		className.set ("assets/nav/panRight.png", __ASSET__assets_nav_panright_png);
		type.set ("assets/nav/panRight.png", AssetType.IMAGE);
		className.set ("assets/nme.svg", __ASSET__assets_nme_svg);
		type.set ("assets/nme.svg", AssetType.TEXT);
		className.set ("assets/options/actor_0000_background.png", __ASSET__assets_options_actor_0000_background_png);
		type.set ("assets/options/actor_0000_background.png", AssetType.IMAGE);
		className.set ("assets/options/actor_0001_duck.png", __ASSET__assets_options_actor_0001_duck_png);
		type.set ("assets/options/actor_0001_duck.png", AssetType.IMAGE);
		className.set ("assets/options/actor_0002_home.png", __ASSET__assets_options_actor_0002_home_png);
		type.set ("assets/options/actor_0002_home.png", AssetType.IMAGE);
		className.set ("assets/options/actor_0003_cow.png", __ASSET__assets_options_actor_0003_cow_png);
		type.set ("assets/options/actor_0003_cow.png", AssetType.IMAGE);
		className.set ("assets/options/actor_0004_easyXML.png", __ASSET__assets_options_actor_0004_easyxml_png);
		type.set ("assets/options/actor_0004_easyXML.png", AssetType.IMAGE);
		className.set ("assets/options/actor_0005_limerick.png", __ASSET__assets_options_actor_0005_limerick_png);
		type.set ("assets/options/actor_0005_limerick.png", AssetType.IMAGE);
		className.set ("assets/options/choose.png", __ASSET__assets_options_choose_png);
		type.set ("assets/options/choose.png", AssetType.IMAGE);
		className.set ("assets/p1/limerickPCM.wav", __ASSET__assets_p1_limerickpcm_wav);
		type.set ("assets/p1/limerickPCM.wav", AssetType.SOUND);
		className.set ("assets/p1/pageObject_0000_bg.jpg", __ASSET__assets_p1_pageobject_0000_bg_jpg);
		type.set ("assets/p1/pageObject_0000_bg.jpg", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0001_skin.png", __ASSET__assets_p1_pageobject_0001_skin_png);
		type.set ("assets/p1/pageObject_0001_skin.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0002_hose.png", __ASSET__assets_p1_pageobject_0002_hose_png);
		type.set ("assets/p1/pageObject_0002_hose.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0003_pants.png", __ASSET__assets_p1_pageobject_0003_pants_png);
		type.set ("assets/p1/pageObject_0003_pants.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0004_flameshoe.png", __ASSET__assets_p1_pageobject_0004_flameshoe_png);
		type.set ("assets/p1/pageObject_0004_flameshoe.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0005_shoe.png", __ASSET__assets_p1_pageobject_0005_shoe_png);
		type.set ("assets/p1/pageObject_0005_shoe.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0006_shirt.png", __ASSET__assets_p1_pageobject_0006_shirt_png);
		type.set ("assets/p1/pageObject_0006_shirt.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0007_truck.png", __ASSET__assets_p1_pageobject_0007_truck_png);
		type.set ("assets/p1/pageObject_0007_truck.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0008_firemen.png", __ASSET__assets_p1_pageobject_0008_firemen_png);
		type.set ("assets/p1/pageObject_0008_firemen.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0009_can.png", __ASSET__assets_p1_pageobject_0009_can_png);
		type.set ("assets/p1/pageObject_0009_can.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0010_bw.png", __ASSET__assets_p1_pageobject_0010_bw_png);
		type.set ("assets/p1/pageObject_0010_bw.png", AssetType.IMAGE);
		className.set ("assets/p1/pageObject_0011_text.png", __ASSET__assets_p1_pageobject_0011_text_png);
		type.set ("assets/p1/pageObject_0011_text.png", AssetType.IMAGE);
		className.set ("assets/speaker.png", __ASSET__assets_speaker_png);
		type.set ("assets/speaker.png", AssetType.IMAGE);
		className.set ("assets/title/star.svg", __ASSET__assets_title_star_svg);
		type.set ("assets/title/star.svg", AssetType.TEXT);
		className.set ("assets/title/title.jpg", __ASSET__assets_title_title_jpg);
		type.set ("assets/title/title.jpg", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/closeX.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/config.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/duck.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/easyXML.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/heres-the-deal.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/bHome.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/bLeft.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/bOptions.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/bRight.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/close.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/panLeft.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nav/panRight.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nme.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/options/actor_0000_background.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/options/actor_0001_duck.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/options/actor_0002_home.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/options/actor_0003_cow.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/options/actor_0004_easyXML.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/options/actor_0005_limerick.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/options/choose.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/limerickPCM.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/p1/pageObject_0000_bg.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0001_skin.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0002_hose.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0003_pants.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0004_flameshoe.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0005_shoe.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0006_shirt.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0007_truck.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0008_firemen.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0009_can.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0010_bw.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/p1/pageObject_0011_text.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/speaker.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/title/star.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/title/title.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/closeX.svg", __ASSET__assets_closex_svg);
		type.set ("assets/closeX.svg", AssetType.TEXT);
		
		className.set ("assets/config.xml", __ASSET__assets_config_xml);
		type.set ("assets/config.xml", AssetType.TEXT);
		
		className.set ("assets/duck.svg", __ASSET__assets_duck_svg);
		type.set ("assets/duck.svg", AssetType.TEXT);
		
		className.set ("assets/easyXML.jpg", __ASSET__assets_easyxml_jpg);
		type.set ("assets/easyXML.jpg", AssetType.IMAGE);
		
		className.set ("assets/heres-the-deal.jpg", __ASSET__assets_heres_the_deal_jpg);
		type.set ("assets/heres-the-deal.jpg", AssetType.IMAGE);
		
		className.set ("assets/nav/bHome.png", __ASSET__assets_nav_bhome_png);
		type.set ("assets/nav/bHome.png", AssetType.IMAGE);
		
		className.set ("assets/nav/bLeft.png", __ASSET__assets_nav_bleft_png);
		type.set ("assets/nav/bLeft.png", AssetType.IMAGE);
		
		className.set ("assets/nav/bOptions.png", __ASSET__assets_nav_boptions_png);
		type.set ("assets/nav/bOptions.png", AssetType.IMAGE);
		
		className.set ("assets/nav/bRight.png", __ASSET__assets_nav_bright_png);
		type.set ("assets/nav/bRight.png", AssetType.IMAGE);
		
		className.set ("assets/nav/close.png", __ASSET__assets_nav_close_png);
		type.set ("assets/nav/close.png", AssetType.IMAGE);
		
		className.set ("assets/nav/panLeft.png", __ASSET__assets_nav_panleft_png);
		type.set ("assets/nav/panLeft.png", AssetType.IMAGE);
		
		className.set ("assets/nav/panRight.png", __ASSET__assets_nav_panright_png);
		type.set ("assets/nav/panRight.png", AssetType.IMAGE);
		
		className.set ("assets/nme.svg", __ASSET__assets_nme_svg);
		type.set ("assets/nme.svg", AssetType.TEXT);
		
		className.set ("assets/options/actor_0000_background.png", __ASSET__assets_options_actor_0000_background_png);
		type.set ("assets/options/actor_0000_background.png", AssetType.IMAGE);
		
		className.set ("assets/options/actor_0001_duck.png", __ASSET__assets_options_actor_0001_duck_png);
		type.set ("assets/options/actor_0001_duck.png", AssetType.IMAGE);
		
		className.set ("assets/options/actor_0002_home.png", __ASSET__assets_options_actor_0002_home_png);
		type.set ("assets/options/actor_0002_home.png", AssetType.IMAGE);
		
		className.set ("assets/options/actor_0003_cow.png", __ASSET__assets_options_actor_0003_cow_png);
		type.set ("assets/options/actor_0003_cow.png", AssetType.IMAGE);
		
		className.set ("assets/options/actor_0004_easyXML.png", __ASSET__assets_options_actor_0004_easyxml_png);
		type.set ("assets/options/actor_0004_easyXML.png", AssetType.IMAGE);
		
		className.set ("assets/options/actor_0005_limerick.png", __ASSET__assets_options_actor_0005_limerick_png);
		type.set ("assets/options/actor_0005_limerick.png", AssetType.IMAGE);
		
		className.set ("assets/options/choose.png", __ASSET__assets_options_choose_png);
		type.set ("assets/options/choose.png", AssetType.IMAGE);
		
		className.set ("assets/p1/limerickPCM.wav", __ASSET__assets_p1_limerickpcm_wav);
		type.set ("assets/p1/limerickPCM.wav", AssetType.SOUND);
		
		className.set ("assets/p1/pageObject_0000_bg.jpg", __ASSET__assets_p1_pageobject_0000_bg_jpg);
		type.set ("assets/p1/pageObject_0000_bg.jpg", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0001_skin.png", __ASSET__assets_p1_pageobject_0001_skin_png);
		type.set ("assets/p1/pageObject_0001_skin.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0002_hose.png", __ASSET__assets_p1_pageobject_0002_hose_png);
		type.set ("assets/p1/pageObject_0002_hose.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0003_pants.png", __ASSET__assets_p1_pageobject_0003_pants_png);
		type.set ("assets/p1/pageObject_0003_pants.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0004_flameshoe.png", __ASSET__assets_p1_pageobject_0004_flameshoe_png);
		type.set ("assets/p1/pageObject_0004_flameshoe.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0005_shoe.png", __ASSET__assets_p1_pageobject_0005_shoe_png);
		type.set ("assets/p1/pageObject_0005_shoe.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0006_shirt.png", __ASSET__assets_p1_pageobject_0006_shirt_png);
		type.set ("assets/p1/pageObject_0006_shirt.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0007_truck.png", __ASSET__assets_p1_pageobject_0007_truck_png);
		type.set ("assets/p1/pageObject_0007_truck.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0008_firemen.png", __ASSET__assets_p1_pageobject_0008_firemen_png);
		type.set ("assets/p1/pageObject_0008_firemen.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0009_can.png", __ASSET__assets_p1_pageobject_0009_can_png);
		type.set ("assets/p1/pageObject_0009_can.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0010_bw.png", __ASSET__assets_p1_pageobject_0010_bw_png);
		type.set ("assets/p1/pageObject_0010_bw.png", AssetType.IMAGE);
		
		className.set ("assets/p1/pageObject_0011_text.png", __ASSET__assets_p1_pageobject_0011_text_png);
		type.set ("assets/p1/pageObject_0011_text.png", AssetType.IMAGE);
		
		className.set ("assets/speaker.png", __ASSET__assets_speaker_png);
		type.set ("assets/speaker.png", AssetType.IMAGE);
		
		className.set ("assets/title/star.svg", __ASSET__assets_title_star_svg);
		type.set ("assets/title/star.svg", AssetType.TEXT);
		
		className.set ("assets/title/title.jpg", __ASSET__assets_title_title_jpg);
		type.set ("assets/title/title.jpg", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			handler (getAudioBuffer (id));
			
		}
		#else
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_closex_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_config_xml extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_duck_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_easyxml_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_heres_the_deal_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_bhome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_bleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_boptions_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_bright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_close_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_panleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nav_panright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nme_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_options_actor_0000_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_options_actor_0001_duck_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_options_actor_0002_home_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_options_actor_0003_cow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_options_actor_0004_easyxml_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_options_actor_0005_limerick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_options_choose_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_limerickpcm_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0000_bg_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0001_skin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0002_hose_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0003_pants_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0004_flameshoe_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0005_shoe_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0006_shirt_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0007_truck_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0008_firemen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0009_can_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0010_bw_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_p1_pageobject_0011_text_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_speaker_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_title_star_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_title_title_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5







































#else



#if (windows || mac || linux)


@:file("assets/closeX.svg") #if display private #end class __ASSET__assets_closex_svg extends lime.utils.ByteArray {}
@:file("assets/config.xml") #if display private #end class __ASSET__assets_config_xml extends lime.utils.ByteArray {}
@:file("assets/duck.svg") #if display private #end class __ASSET__assets_duck_svg extends lime.utils.ByteArray {}
@:image("assets/easyXML.jpg") #if display private #end class __ASSET__assets_easyxml_jpg extends lime.graphics.Image {}
@:image("assets/heres-the-deal.jpg") #if display private #end class __ASSET__assets_heres_the_deal_jpg extends lime.graphics.Image {}
@:image("assets/nav/bHome.png") #if display private #end class __ASSET__assets_nav_bhome_png extends lime.graphics.Image {}
@:image("assets/nav/bLeft.png") #if display private #end class __ASSET__assets_nav_bleft_png extends lime.graphics.Image {}
@:image("assets/nav/bOptions.png") #if display private #end class __ASSET__assets_nav_boptions_png extends lime.graphics.Image {}
@:image("assets/nav/bRight.png") #if display private #end class __ASSET__assets_nav_bright_png extends lime.graphics.Image {}
@:image("assets/nav/close.png") #if display private #end class __ASSET__assets_nav_close_png extends lime.graphics.Image {}
@:image("assets/nav/panLeft.png") #if display private #end class __ASSET__assets_nav_panleft_png extends lime.graphics.Image {}
@:image("assets/nav/panRight.png") #if display private #end class __ASSET__assets_nav_panright_png extends lime.graphics.Image {}
@:file("assets/nme.svg") #if display private #end class __ASSET__assets_nme_svg extends lime.utils.ByteArray {}
@:image("assets/options/actor_0000_background.png") #if display private #end class __ASSET__assets_options_actor_0000_background_png extends lime.graphics.Image {}
@:image("assets/options/actor_0001_duck.png") #if display private #end class __ASSET__assets_options_actor_0001_duck_png extends lime.graphics.Image {}
@:image("assets/options/actor_0002_home.png") #if display private #end class __ASSET__assets_options_actor_0002_home_png extends lime.graphics.Image {}
@:image("assets/options/actor_0003_cow.png") #if display private #end class __ASSET__assets_options_actor_0003_cow_png extends lime.graphics.Image {}
@:image("assets/options/actor_0004_easyXML.png") #if display private #end class __ASSET__assets_options_actor_0004_easyxml_png extends lime.graphics.Image {}
@:image("assets/options/actor_0005_limerick.png") #if display private #end class __ASSET__assets_options_actor_0005_limerick_png extends lime.graphics.Image {}
@:image("assets/options/choose.png") #if display private #end class __ASSET__assets_options_choose_png extends lime.graphics.Image {}
@:file("assets/p1/limerickPCM.wav") #if display private #end class __ASSET__assets_p1_limerickpcm_wav extends lime.utils.ByteArray {}
@:image("assets/p1/pageObject_0000_bg.jpg") #if display private #end class __ASSET__assets_p1_pageobject_0000_bg_jpg extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0001_skin.png") #if display private #end class __ASSET__assets_p1_pageobject_0001_skin_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0002_hose.png") #if display private #end class __ASSET__assets_p1_pageobject_0002_hose_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0003_pants.png") #if display private #end class __ASSET__assets_p1_pageobject_0003_pants_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0004_flameshoe.png") #if display private #end class __ASSET__assets_p1_pageobject_0004_flameshoe_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0005_shoe.png") #if display private #end class __ASSET__assets_p1_pageobject_0005_shoe_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0006_shirt.png") #if display private #end class __ASSET__assets_p1_pageobject_0006_shirt_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0007_truck.png") #if display private #end class __ASSET__assets_p1_pageobject_0007_truck_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0008_firemen.png") #if display private #end class __ASSET__assets_p1_pageobject_0008_firemen_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0009_can.png") #if display private #end class __ASSET__assets_p1_pageobject_0009_can_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0010_bw.png") #if display private #end class __ASSET__assets_p1_pageobject_0010_bw_png extends lime.graphics.Image {}
@:image("assets/p1/pageObject_0011_text.png") #if display private #end class __ASSET__assets_p1_pageobject_0011_text_png extends lime.graphics.Image {}
@:image("assets/speaker.png") #if display private #end class __ASSET__assets_speaker_png extends lime.graphics.Image {}
@:file("assets/title/star.svg") #if display private #end class __ASSET__assets_title_star_svg extends lime.utils.ByteArray {}
@:image("assets/title/title.jpg") #if display private #end class __ASSET__assets_title_title_jpg extends lime.graphics.Image {}



#end

#if openfl

#end

#end
#end

