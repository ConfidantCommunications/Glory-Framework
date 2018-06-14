package ca.confidant.glory.controller;

	import org.puremvc.haxe.patterns.command.AsyncMacroCommand;	

	/*
	 * @author Allan Dowdeswell
	 * This is first triggered by the GotoIntroMacro in the BuildControlsCleanup command, then by the page controls, whenever a page change is needed.
	 */
    class ChangePageMacro extends AsyncMacroCommand
    {
		
		override function initializeAsyncMacroCommand () : Void
		{
			//addSubCommand( ChangePageSetup );//moved to ChangePageHelper
			addSubCommand( PageTransitionOutCommand );
			addSubCommand( RemovePageCommand );
			addSubCommand( DestroyPageSoundsCommand );
			addSubCommand( AsyncLoadAssetsCommand );
			addSubCommand( BuildPageCommand );
			addSubCommand( InitPageSoundsCommand );
			addSubCommand( ChangePageCleanup );
		}

    }
