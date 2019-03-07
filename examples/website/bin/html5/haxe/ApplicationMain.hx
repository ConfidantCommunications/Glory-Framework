package;


#if macro
import haxe.macro.Compiler;
import haxe.macro.Context;
import haxe.macro.Expr;
#end

@:access(lime.app.Application)
@:access(lime.system.System)
@:access(openfl.display.Stage)


@:dox(hide) class ApplicationMain {
	
	
	#if !macro
	
	
	public static function main () {
		
		lime.system.System.__registerEntryPoint ("GloryWebsiteDemo", create);
		
		#if (js && html5)
		#if (munit || utest)
		lime.system.System.embed ("GloryWebsiteDemo", null, null, null);
		#end
		#else
		create (null);
		#end
		
	}
	
	
	public static function create (config):Void {
		
		var app = new openfl.display.Application ();
		
		ManifestResources.init (config);
		
		app.meta["build"] = "54";
		app.meta["company"] = "Confidant Communications";
		app.meta["file"] = "GloryWebsiteDemo";
		app.meta["name"] = "Glory Framework Website Demo";
		app.meta["packageName"] = "ca.confidant.gloryDemo";
		app.meta["version"] = "1.0.0";
		
		
		
		#if !flash
		
		var attributes:lime.ui.WindowAttributes = {
			
			allowHighDPI: false,
			alwaysOnTop: false,
			borderless: false,
			// display: 0,
			element: null,
			frameRate: 60,
			#if !web fullscreen: true, #end
			height: null,
			hidden: #if munit true #else false #end,
			maximized: false,
			minimized: false,
			parameters: {},
			resizable: true,
			title: "Glory Framework Website Demo",
			width: null,
			x: null,
			y: null,
			
		};
		
		attributes.context = {
			
			antialiasing: 0,
			background: 16774882,
			colorDepth: 32,
			depth: false,
			hardware: true,
			stencil: false,
			type: null,
			vsync: false
			
		};
		
		if (app.window == null) {
			
			if (config != null) {
				
				for (field in Reflect.fields (config)) {
					
					if (Reflect.hasField (attributes, field)) {
						
						Reflect.setField (attributes, field, Reflect.field (config, field));
						
					} else if (Reflect.hasField (attributes.context, field)) {
						
						Reflect.setField (attributes.context, field, Reflect.field (config, field));
						
					}
					
				}
				
			}
			
			#if sys
			lime.system.System.__parseArguments (attributes);
			#end
			
		}
		
		app.createWindow (attributes);
		
		#elseif !air
		
		app.window.context.attributes.background = 16774882;
		app.window.frameRate = 60;
		
		#end
		
		var preloader = getPreloader ();
		app.preloader.onProgress.add (function (loaded, total) {
			@:privateAccess preloader.update (loaded, total);
		});
		app.preloader.onComplete.add (function () {
			@:privateAccess preloader.start ();
		});
		
		preloader.onComplete.add (start.bind (cast (app.window, openfl.display.Window).stage));
		
		for (library in ManifestResources.preloadLibraries) {
			
			app.preloader.addLibrary (library);
			
		}
		
		for (name in ManifestResources.preloadLibraryNames) {
			
			app.preloader.addLibraryName (name);
			
		}
		
		app.preloader.load ();
		
		var result = app.exec ();
		
		#if (sys && !ios && !nodejs && !emscripten)
		lime.system.System.exit (result);
		#end
		
	}
	
	
	public static function start (stage:openfl.display.Stage):Void {
		
		#if flash
		
		ApplicationMain.getEntryPoint ();
		
		#else
		
		try {
			
			ApplicationMain.getEntryPoint ();
			
			stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
			
			if (stage.window.fullscreen) {
				
				stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
				
			}
			
		} catch (e:Dynamic) {
			
			#if !display
			stage.__handleError (e);
			#end
			
		}
		
		#end
		
	}
	
	
	#end
	
	
	macro public static function getEntryPoint () {
		
		var hasMain = false;
		
		switch (Context.follow (Context.getType ("Main"))) {
			
			case TInst (t, params):
				
				var type = t.get ();
				
				for (method in type.statics.get ()) {
					
					if (method.name == "main") {
						
						hasMain = true;
						break;
						
					}
					
				}
				
				if (hasMain) {
					
					return Context.parse ("@:privateAccess Main.main ()", Context.currentPos ());
					
				} else if (type.constructor != null) {
					
					return macro {
						
						var current = stage.getChildAt (0);
						
						if (current == null || !Std.is (current, openfl.display.DisplayObjectContainer)) {
							
							current = new openfl.display.MovieClip ();
							stage.addChild (current);
							
						}
						
						new DocumentClass (cast current);
						
					};
					
				} else {
					
					Context.fatalError ("Main class \"Main\" has neither a static main nor a constructor.", Context.currentPos ());
					
				}
				
			default:
				
				Context.fatalError ("Main class \"Main\" isn't a class.", Context.currentPos ());
			
		}
		
		return null;
		
	}
	
	
	macro public static function getPreloader () {
		
		
		return macro { new openfl.display.Preloader (new openfl.display.Preloader.DefaultPreloader ()); };
		
		
	}
	
	
	#if !macro
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var init = lime.app.Application;
		
		#if neko
		// Copy from https://github.com/HaxeFoundation/haxe/blob/development/std/neko/_std/Sys.hx#L164
		// since Sys.programPath () isn't available in __init__
		var sys_program_path = {
			var m = neko.vm.Module.local().name;
			try {
				sys.FileSystem.fullPath(m);
			} catch (e:Dynamic) {
				// maybe the neko module name was supplied without .n extension...
				if (!StringTools.endsWith(m, ".n")) {
					try {
						sys.FileSystem.fullPath(m + ".n");
					} catch (e:Dynamic) {
						m;
					}
				} else {
					m;
				}
			}
		};
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) sys_program_path #else Sys.executablePath () #end));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		#end
		
	}
	#end
	
	
}


#if !macro


@:build(DocumentClass.build())
@:keep @:dox(hide) class DocumentClass extends Main {}


#else


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes != null) {
			
			if (searchTypes.module == "openfl.display.DisplayObject" || searchTypes.module == "flash.display.DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [ { name: "current", opt: false, type: macro :openfl.display.DisplayObjectContainer, value: null } ], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			if (searchTypes.superClass != null) {
				
				searchTypes = searchTypes.superClass.t.get ();
				
			} else {
				
				searchTypes = null;
				
			}
			
		}
		
		return null;
		
	}
	
	
}


#end