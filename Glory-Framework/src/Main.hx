package;
import ca.confidant.glory.GloryFrameworkApp;
import flash.Lib;

class Main extends GloryFrameworkApp{	
	public function new(){
		super();
	}
	
	public static function main() {
		
		var app:GloryFrameworkApp=new GloryFrameworkApp();
		Lib.current.addChild (app);
	}
}

