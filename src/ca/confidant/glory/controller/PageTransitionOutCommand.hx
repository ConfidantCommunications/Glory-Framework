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

	import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.AsyncCommand;	
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.DataTypes;
	
	import haxe.Timer;
	/*
	 * @author Allan Dowdeswell
	 * This is the start of the chain described by ChangePageMacro.
	 *  It sets up the conditions necessary for the entire macro chain.
	 */
    class PageTransitionOutCommand extends AsyncCommand
    {
		var pcp:PagesConfigProxy;
        override public function execute( note:INotification ) : Void
        {
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data:ChangePageData = note.getBody();
			#if (flash && debug)
			trace("//"); //clears display
			#end
			trace("PageTransitionOutCommand:"+data);
			if ((data.newPage != null) && (pcp.getPage(data.newPage).get("type")=="overlay")){
				trace("overlay! not removing old page.");
				commandComplete();
			} else if (data.newPage!=data.oldPage) {
				doTransition(data.oldPage, "out");
				trace("transitionTime:"+pcp.getPageTransitionOutTime(data.oldPage));
				var waitTimerOut=new Timer(pcp.getPageTransitionOutTime(data.oldPage)*1000);
				waitTimerOut.run = function():Void{
					waitTimerOut.stop();
					waitTimerOut=null;
					commandComplete();
				}
			} else {
				commandComplete();
			}
        }
		private function doTransition(id:String,type:String):Void{
			var t:Map<String,String>=new Map();
			t.set("id",id);
			t.set("transitionType",type);
			sendNotification(ApplicationFacade.DO_TRANSITION, t);
		}
    }
