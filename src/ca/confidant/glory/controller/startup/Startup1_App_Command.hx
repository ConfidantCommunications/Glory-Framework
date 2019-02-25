﻿/*
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

    //import js.Dom;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.view.StageMediator;
	import ca.confidant.glory.view.ExternalInterfaceMediator;
	
	/*
	 * @author Allan Dowdeswell
	 * This is the second step in the chain triggered by the StartupCommand.
	 */
    class Startup1_App_Command extends SimpleCommand
    {

	override public function execute( note:INotification ) : Void
        {
			var app:GloryFrameworkApp = cast( note.getBody() , GloryFrameworkApp);
			facade.registerMediator(new ApplicationMediator(app));
			trace("app stage:"+app.stage);
			facade.registerMediator(new StageMediator(app.stage));
        }
    }
