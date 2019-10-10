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

    //import org.puremvc.as3.interfaces.ICommand;
    import org.puremvc.haxe.interfaces.INotification;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import openfl.Assets;
    import ca.confidant.glory.controller.ChangePageHelper;
    import ca.confidant.glory.model.PagesConfigProxy;
    #if js
    import js.Browser;
    #end
	/*
	 * @author Allan Dowdeswell
	 * Fires at the end of the GotoIntroMacro, triggering setup of first page
	 */
    class LoadStartingPageCommand extends SimpleCommand
    {
        override public function execute( note:INotification ) : Void
        {
			trace('LoadStartingPageCommand');
            var pcp = cast (facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);

            var arr = Std.string(Browser.location).split("/");
            // trace("location:"+arr.pop());
            var slug = arr.pop();
            var slugFound = false;
            var pageIds = pcp.getPageIds();
            for (i in pageIds){
                if (slug==i) slugFound = true;
            }
            if ((slug=="") || !slugFound) slug = pcp.getHomepageId();
            

			sendNotification(ApplicationFacade.CHANGE_PAGE, ChangePageHelper.instance.buildNotification(slug));
        }
		
    }
