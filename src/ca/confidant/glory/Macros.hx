package ca.confidant.glory;
class Macros {
	public static macro function isDefined(key : String) : haxe.macro.Expr {
		return macro $v{haxe.macro.Context.defined(key)};
	}		
	public static macro function getConfigPath() : haxe.macro.Expr {
        return macro $v{haxe.macro.Context.definedValue("configpath")};
	}
}