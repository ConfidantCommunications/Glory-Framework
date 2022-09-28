/*
 * Copyright (c) 2018 D. Allan Dowdeswell
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
package ca.confidant.glory.controller.startup;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.controller.GotoIntroMacro;
	import ca.confidant.glory.controller.ChangePageMacro;
	import ca.confidant.glory.controller.RemovePageCommand;
	// import ca.confidant.glory.controller.ChangePageCommand;
	import ca.confidant.glory.controller.TimerEnableCommand;
	import ca.confidant.glory.controller.TimerDisableCommand;
	#if !silentMode
	import ca.confidant.glory.controller.InitPageSoundsCommand;
	import ca.confidant.glory.controller.DestroyPageSoundsCommand;
	#end
	
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
			facade.registerCommand(ApplicationFacade.REMOVE_PAGE,RemovePageCommand);
			facade.registerCommand(ApplicationFacade.CHANGE_PAGE,ChangePageMacro);
			facade.registerCommand(ApplicationFacade.HTTP_LINK,HttpLinkCommand);
			facade.registerCommand(ApplicationFacade.STAGE_RESIZE,HandleStageResizeCommand);
			facade.registerCommand(ApplicationFacade.TIMER_ENABLE,TimerEnableCommand);
			facade.registerCommand(ApplicationFacade.TIMER_DISABLE,TimerDisableCommand);
			#if !silentMode
			facade.registerCommand(ApplicationFacade.INIT_PAGE_SOUNDS,InitPageSoundsCommand);
			facade.registerCommand(ApplicationFacade.DESTROY_PAGE_SOUNDS,DestroyPageSoundsCommand);
			#end
			//this will redraw the background if the pcp allows it
			#if html5
			facade.registerCommand(ApplicationFacade.STAGE_RESIZE,UpdateHtmlBackgroundCommand);
			facade.registerCommand(ApplicationFacade.UPDATE_HTML_BACKGROUND,UpdateHtmlBackgroundCommand);
			#end
        }
    }
