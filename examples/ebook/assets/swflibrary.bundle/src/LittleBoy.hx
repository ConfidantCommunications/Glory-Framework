package ; #if !flash


import openfl._internal.swf.SWFLite;
import openfl.display.MovieClip;
import openfl.Assets;


class LittleBoy extends MovieClip {
	
	
	
	
	public function new () {
		
		super ();
		
		/*
		if (!SWFLite.instances.exists ("76g6JkjkuHCyqIyQy4Mf")) {
			
			SWFLite.instances.set ("76g6JkjkuHCyqIyQy4Mf", SWFLite.unserialize (Assets.getText ("76g6JkjkuHCyqIyQy4Mf")));
			
		}
		*/
		
		var swfLite = SWFLite.instances.get ("76g6JkjkuHCyqIyQy4Mf");
		var symbol = swfLite.symbols.get (4);
		
		__fromSymbol (swfLite, cast symbol);
		
	}
	
	
}


#else
@:bind @:native("LittleBoy") class LittleBoy extends flash.display.MovieClip {
	
	
	
	
	public function new () {
		
		super ();
		
	}
	
	
}
#end