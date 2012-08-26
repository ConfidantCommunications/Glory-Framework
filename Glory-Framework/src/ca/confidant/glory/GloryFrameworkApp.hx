package ca.confidant.glory;
import ca.confidant.glory.ApplicationFacade;
import nme.display.Sprite;
import nme.Lib;

/*
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
	public static function main() {
		var app:GloryFrameworkApp=new GloryFrameworkApp();
		Lib.current.addChild (app);
	}
	public function displayMessage(m:String):Void {

	}

}

