package;
import ca.confidant.glory.GloryFrameworkApp;
import nme.Lib;
//import all of your page classes here
import pages.Ptitle;

/*
 * Your config.nmml and compile.hxml files should use this as the main class.
 */
class Main extends GloryFrameworkApp{	
	public function new(){
		super();
	}
	
	public static function main() {
		
		var app:GloryFrameworkApp=new GloryFrameworkApp();
		Lib.current.addChild (app);
	}
}

