#if !macro


@:access(lime.Assets)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new lime.app.Application ();
		app.create (config);
		openfl.Lib.application = app;
		
		#if !flash
		var stage = new openfl.display.Stage (app.window.width, app.window.height, config.background);
		stage.addChild (openfl.Lib.current);
		app.addModule (stage);
		#end
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		preloader.onComplete = init;
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/closeX.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/config.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/duck.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/easyXML.jpg");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/heres-the-deal.jpg");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/bHome.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/bLeft.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/bOptions.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/bRight.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/close.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/panLeft.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nav/panRight.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/nme.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/options/actor_0000_background.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/options/actor_0001_duck.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/options/actor_0002_home.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/options/actor_0003_cow.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/options/actor_0004_easyXML.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/options/actor_0005_limerick.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/options/choose.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/limerickPCM.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/p1/pageObject_0000_bg.jpg");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0001_skin.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0002_hose.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0003_pants.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0004_flameshoe.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0005_shoe.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0006_shirt.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0007_truck.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0008_firemen.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0009_can.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0010_bw.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/p1/pageObject_0011_text.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/speaker.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/title/star.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/title/title.jpg");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (loaded == total) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (16774882),
			borderless: false,
			company: "Confidant Communications",
			depthBuffer: false,
			file: "GloryDemo",
			fps: Std.int (30),
			fullscreen: false,
			hardware: true,
			height: Std.int (640),
			orientation: "landscape",
			packageName: "ca.confidant.gloryDemo",
			resizable: true,
			stencilBuffer: true,
			title: "Glory Framework Demo",
			version: "1.0.0",
			vsync: false,
			width: Std.int (960),
			
		}
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 960, 640, "FFF6E2");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
