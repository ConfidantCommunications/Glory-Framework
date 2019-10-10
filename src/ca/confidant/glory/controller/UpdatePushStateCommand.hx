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
	import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.view.ExternalInterfaceMediator;
	/*
	 * @author Allan Dowdeswell
	 * This command manipulates the browser address URL and history after page change.
	 */
  class UpdatePushStateCommand extends SimpleCommand
    {
			var pcp:PagesConfigProxy;
			var eim:ExternalInterfaceMediator;
		// var sp:StateProxy;
			override public function execute( note:INotification ) : Void
			{
				trace("UpdatePushStateCommand");
				pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
				eim=cast(facade.retrieveMediator(ExternalInterfaceMediator.NAME) , ExternalInterfaceMediator);
				var data=note.getBody();
				var newPage = pcp.getPage(data.newPage);
				if (
						(data.newPage != null) 
						&& (newPage.get("type")!="overlay")
						&& (data.newPage!=data.oldPage)
						&& (data.updatePushState == true)
					){
						eim.updatePushState(pcp.getBasePath()+data.newPage);
					}
					
				eim.updateDocumentTitle(pcp.getAppTitle() + " : "+ newPage.get("title"));
				// sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
				// sp.setState(GloryState.READY);
      }

    }
