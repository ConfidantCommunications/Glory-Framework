package ; #if !flash


import openfl._internal.formats.swf.SWFLite;
import openfl.display.MovieClip;
import openfl.utils.Assets;


class LittleBoy extends openfl.display.MovieClip {


	

	public function new () {

		super ();

		/*
		if (!SWFLite.instances.exists ("wmxKmnWKHtXFldELVYns")) {

			SWFLite.instances.set ("wmxKmnWKHtXFldELVYns", SWFLite.unserialize (Assets.getText ("wmxKmnWKHtXFldELVYns")));

		}
		*/

		var swfLite = SWFLite.instances.get ("wmxKmnWKHtXFldELVYns");
		var symbol = swfLite.symbols.get (4);

		__fromSymbol (swfLite, cast symbol);

	}


}


#else
@:bind @:native("LittleBoy") class LittleBoy extends openfl.display.MovieClip {


	

	public function new () {

		super ();

	}


}
#end