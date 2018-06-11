package ca.confidant.glory.controller;

    //import org.puremvc.as3.interfaces.ICommand;
    import org.puremvc.haxe.interfaces.INotification;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import openfl.Assets;
	/*
	 * @author Allan Dowdeswell
	 * Fires at the end of the GotoIntroMacro, triggering setup of title page
	 */
    class BuildControlsCleanup extends SimpleCommand
    {
        override public function execute( note:INotification ) : Void
        {
			trace('BuildControlsCleanup');
			sendNotification(ApplicationFacade.CHANGE_PAGE, "title");
        }
		
    }
