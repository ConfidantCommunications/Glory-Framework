
/*
 * Copyright (c) 2021 D. Allan Dowdeswell
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


    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
    import ca.confidant.glory.ApplicationFacade;

	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.TrackerProxy;
	import ca.confidant.glory.model.PagesConfigProxy;
	import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	 
	import js.Browser;
	import openfl.Lib;
/**
 * @author Allan Dowdeswell
 * 
 */
    class SetupTrackersCommand extends AsyncCommand
    {
		var pcp:PagesConfigProxy;

        override public function execute( note:INotification ) : Void
        {
			trace('SetupTrackers');
			pcp = cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			
			var lang:String = (Browser.navigator.languages != null) ? Browser.navigator.languages[0] : Browser.navigator.language;
			
			
			for (tracker in pcp.getTrackers()){
				switch (tracker.att.type){
					case "google":
						var tp = new TrackerProxy("google");
						tp.init(tracker.att.id, tracker.att.domain, tracker.att.version, lang);
						facade.registerProxy(tp);
						
					}
			}
			commandComplete();
        }
    }
