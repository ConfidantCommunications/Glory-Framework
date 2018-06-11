package ca.confidant.glory;

/*
 * @author Allan Dowdeswell
 * Use this class if you need to redirect traces.
 * The Main class calls setRedirection if you want to hide traces.
 */
class Tracer {
	
    public static function setRedirection() {
        haxe.Log.trace = customTrace;
    }

    private static function customTrace( v : Any, ?inf : haxe.PosInfos ) {
        //
    }

}