package ca.confidant.glory;
import ca.confidant.glory.ApplicationFacade;
import flash.display.Sprite;
import flash.Lib;

/*
 * @author Allan Dowdeswell
 * This is the main class your Glory application will be built upon. Extend it as desired.
 */

class GloryFrameworkApp extends Sprite {

	function new()
	{
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
    @:expose("haxedebug") @:keep
    public static function enterDebug()
    {
        js.Lib.debug();
    }
	#end
}

