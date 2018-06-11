
package ca.confidant.glory.controller;

	import org.puremvc.haxe.patterns.command.MacroCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.controller.startup.Startup0_RegCommands_Command;
	import ca.confidant.glory.controller.startup.Startup1_App_Command;
	import ca.confidant.glory.controller.startup.Startup2_Proxies_Command;
	import ca.confidant.glory.controller.startup.Startup3_Assets_Command;

	/*
	 * @author Allan Dowdeswell
	 * Simply a group of startup commands executed in order. See PureMVC docs for more information.
	 */

    class StartupCommand extends MacroCommand
    {


        override private function initializeMacroCommand() : Void
        {

			addSubCommand(Startup0_RegCommands_Command);
			addSubCommand(Startup1_App_Command);
			addSubCommand(Startup2_Proxies_Command);
			addSubCommand(Startup3_Assets_Command);

        }
    }
