package ca.confidant.glory;
import ca.confidant.glory.ApplicationFacade;
import flash.display.Sprite;
import flash.Lib;
import openfl.text.TextField;
/*
 * @author Allan Dowdeswell
 * This is the main class your Glory application will be built upon. Extend it as desired.
 */

class GloryFrameworkApp extends Sprite {
	private var t:TextField;

	function new() {
		#if (debug && flash)

		t=new TextField();
		t.width=400;//stage.stageWidth
		t.height=stage.stageHeight-80;
		t.x=70;
		t.y=70;
		Lib.current.addChild(t);
		haxe.Log.trace = function ( v : Dynamic, ?inf : haxe.PosInfos ) {
			if (v=="//") t.text="";
			t.text += "\r";
			t.text += v;
		};

		#end

		super();
		var facade = ApplicationFacade.getInstance();
		facade.sendNotification( ApplicationFacade.STARTUP, this );
	}

	// entry point
	public function main() {
		var app:GloryFrameworkApp=new GloryFrameworkApp();
		Lib.current.addChild (app);
	}
	public function displayMessage(m:String):Void {

	}

	#if (debug && js)
	//debug in browser per: http://jasono.co/2013/06/24/a-haxejs-debugging-tip/
	//invoke in console using haxedebug();
    @:expose("haxedebug") @:keep
    public static function enterDebug()
    {
        js.Lib.debug();
    }
	#end
}