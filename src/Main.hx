package;
import ca.confidant.glory.GloryFrameworkApp;
import flash.Lib;
//import all of your page classes here
import pages.Psvg;
import ca.confidant.glory.Tracer;
/*
 * @author Allan Dowdeswell
 * Your config.nmml and compile.hxml files should use this as the main class.
 */
class Main extends GloryFrameworkApp{	
	public function new(){
		super();
	}
	
	public static function main() {
		//Tracer.setRedirection();
		
		var app:GloryFrameworkApp=new GloryFrameworkApp();
		Lib.current.addChild (app);
		
	}
	
    private static function myTrace( v : Dynamic, ?inf : haxe.PosInfos ) {
        // .....
    }
}

