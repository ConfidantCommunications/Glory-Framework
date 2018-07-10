package;
import ca.confidant.glory.GloryFrameworkApp;
import flash.Lib;
//import all of your page classes here
import pages.Psvg;
import ca.confidant.glory.Tracer;

// #if (debug && flash)
// import com.demonsters.debugger.MonsterDebugger;
// #end
/*
 * @author Allan Dowdeswell
 * Your config.nmml and compile.hxml files should use this as the main class.
 */
class Main extends GloryFrameworkApp{	

	public function new(){
		super();
	}
	
	override public function main() {
		// Tracer.setRedirection();
		// #if (debug && flash)
		// MonsterDebugger.initialize(this);
		// MonsterDebugger.trace(this, "Hello World!");
		// #end
		
		var app:Main=new Main();
		Lib.current.addChild (app);
		
	}

}

