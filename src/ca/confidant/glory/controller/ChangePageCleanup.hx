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
package ca.confidant.glory.controller;

    //import js.Dom;
	import flash.display.Sprite;
	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
//    import ca.confidant.glory.ApplicationFacade;
    import ca.confidant.glory.view.PageMediator;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	 

	import ca.confidant.glory.ApplicationFacade;
	//import Main;
//	import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.StateProxy;
	import ca.confidant.glory.view.constants.ControlConstants;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.DataTypes;
	import openfl.display.DisplayObject;
	import haxe.Timer;
	/*
	 * @author Allan Dowdeswell
	 * This is the end of the chain described by ChangePageMacro.
	 * It removes the ChangePageDataProxy
	 */
    class ChangePageCleanup extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var sp:StateProxy;
        override public function execute( note:INotification ) : Void
        {
			sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data=note.getBody();
			if(pcp.getPage(data.newPage).get("type")!="overlay") pcp.setCurrentPageById(data.newPage);
			sp.setState(GloryState.READY);
        }

    }
