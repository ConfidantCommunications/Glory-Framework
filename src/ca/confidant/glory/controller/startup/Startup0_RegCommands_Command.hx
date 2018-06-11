
package ca.confidant.glory.controller.startup;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.controller.GotoIntroMacro;
	import ca.confidant.glory.controller.ChangePageMacro;
	import ca.confidant.glory.controller.RemovePageCommand;
	// import ca.confidant.glory.controller.ChangePageCommand;
	import ca.confidant.glory.controller.TimerEnableCommand;
	import ca.confidant.glory.controller.TimerDisableCommand;
	import ca.confidant.glory.controller.InitPageSoundsCommand;
	import ca.confidant.glory.controller.DestroyPageSoundsCommand;
	
	/* 
	 * @author Allan Dowdeswell
	 * This is the first step in the startup chain defined in StartupCommand.
	 * 
	 */
    class Startup0_RegCommands_Command extends SimpleCommand
    {

	override public function execute( note:INotification ) : Void
        {
			facade.registerCommand(ApplicationFacade.PAGES_CONFIG_READY,GotoIntroMacro);
			// facade.registerCommand(ApplicationFacade.BUILD_CONTROLS,AsyncBuildControlsMacro);
			// facade.registerCommand(ApplicationFacade.BUILD_PAGE,AsyncBuildPageMacro);
			facade.registerCommand(ApplicationFacade.REMOVE_PAGE,RemovePageCommand);
			facade.registerCommand(ApplicationFacade.CHANGE_PAGE,ChangePageMacro);//ChangePageCommand
			//facade.registerCommand(ApplicationFacade.HTTP_LINK,HttpLinkCommand);
			facade.registerCommand(ApplicationFacade.TIMER_ENABLE,TimerEnableCommand);
			facade.registerCommand(ApplicationFacade.TIMER_DISABLE,TimerDisableCommand);

			facade.registerCommand(ApplicationFacade.INIT_PAGE_SOUNDS,InitPageSoundsCommand);
			facade.registerCommand(ApplicationFacade.DESTROY_PAGE_SOUNDS,DestroyPageSoundsCommand);

        }
    }
