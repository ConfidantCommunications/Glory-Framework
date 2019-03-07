package ; #if !flash


import openfl._internal.formats.swf.SWFLite;
import openfl.display.MovieClip;
import openfl.Assets;


class LittleBoy extends MovieClip {
	
	
	
	
	public function new () {
		
		super ();
		
		/*
		if (!SWFLite.instances.exists ("pJRU4s7kiwLGXqkVqi7m")) {
			
			SWFLite.instances.set ("pJRU4s7kiwLGXqkVqi7m", SWFLite.unserialize (Assets.getText ("pJRU4s7kiwLGXqkVqi7m")));
			
		}
		*/
		
		var swfLite = SWFLite.instances.get ("pJRU4s7kiwLGXqkVqi7m");
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