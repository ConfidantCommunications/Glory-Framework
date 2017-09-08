package ca.confidant.glory.controller;

	import org.puremvc.haxe.patterns.command.AsyncMacroCommand;	

	/*
	 * @author Allan Dowdeswell
	 * This is triggered by the GotoIntroCommand, right after the controls are built. 
	 * First it loads the desired assets into memory, then it builds the page.
	 */
    class AsyncBuildPageMacro extends AsyncMacroCommand
    {
		
		override function initializeAsyncMacroCommand () : Void
		{
			addSubCommand( AsyncLoadAssetsCommand );
			addSubCommand( BuildPageCommand );
		}

    }
