package ca.confidant.glory;

class Tracer {

    public static function setRedirection() {
        haxe.Log.trace = myTrace;
    }

    private static function myTrace( v : Dynamic, ?inf : haxe.PosInfos ) {
        // .....
    }

}