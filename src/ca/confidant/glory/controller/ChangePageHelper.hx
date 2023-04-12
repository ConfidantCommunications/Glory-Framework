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
import org.puremvc.haxe.patterns.facade.Facade;

import org.puremvc.haxe.interfaces.IFacade;
import ca.confidant.glory.model.StateProxy;
import ca.confidant.glory.model.PagesConfigProxy;
import org.puremvc.haxe.interfaces.INotification;
import ca.confidant.glory.DataTypes;
import ca.confidant.glory.view.constants.ControlConstants;
	/*
	 * @author Allan Dowdeswell
	 * This singleton generates proper notifications for building pages.
	 */
	class ChangePageHelper {
		var pcp:PagesConfigProxy;
		var sp:StateProxy;
		private var facade: IFacade;
		public static var instance(default, null):ChangePageHelper = new ChangePageHelper();

		private function new(){
			facade = Facade.getInstance();
		};

    	public function buildNotification( data:String = "", ?action:String, ?fromBrowser:Bool ) : ChangePageData {
			trace("building a notification:"+data+":"+action);
			sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			
			if(sp.getState() == GloryState.TRANSITIONING) {
				trace("Transition in progress! Canceling page change.");
				return {newPage:"", oldPage:"", action:""};
			};
			// var data:ChangePageData=note.getBody();
			pcp = cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var inPageId:String;
			var outPageId:String = pcp.getCurrentPage().get("id");
			// trace("pcp next page:"+pcp.getNextPage());

			if(data != ""){
				inPageId = data;
			} else {
				switch(action){
					case ControlConstants.PAGE_BACKWARD:
						inPageId = pcp.getPreviousPage().get("id");
					case ControlConstants.PAGE_FORWARD:
						inPageId = pcp.getNextPage().get("id");
					default:
						inPageId = "no matching action!";
				}

			}
			// if(inPageId == outPageId) {
			// 	trace("Already here! ");
			// 	// return {};
			// };
			// trace("newPage:"+inPageId);
			
			var updatePS = fromBrowser ? false : true;
			return {newPage:inPageId, oldPage:outPageId, action:action, updatePushState:updatePS};
		}

	}
