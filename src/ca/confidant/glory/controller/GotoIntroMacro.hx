package ca.confidant.glory.controller;

	import org.puremvc.haxe.interfaces.INotification;

	import org.puremvc.haxe.patterns.command.AsyncMacroCommand;	

/**
 * @author Allan Dowdeswell
 * This command executes once the PagesConfigProxy has parsed its data.
 */
    class GotoIntroMacro extends AsyncMacroCommand
    {

		override function initializeAsyncMacroCommand () : Void
        {
			trace('GotoIntroMacro');
			addSubCommand( AsyncLoadAssetsCommand );
			addSubCommand( BuildControlsCommand );
			// addSubCommand( InitPageSoundsCommand );//none
			addSubCommand( BuildControlsCleanup );//fires notification which begins changePage for title

			
			// sendNotification(ApplicationFacade.BUILD_PAGE,"title");
			// sendNotification(ApplicationFacade.INIT_PAGE_SOUNDS, "title");
        }
    }
