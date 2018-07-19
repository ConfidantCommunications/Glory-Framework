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
import ca.confidant.glory.view.components.ActorComponent;
import org.puremvc.haxe.interfaces.INotification;
using layout.LayoutCreator;
 
	/*
	 * @author Allan Dowdeswell
	 * This singleton handles layout behaviours for page actors.
	 */
    class LayoutHelper
    {
		public static var instance(default, null):LayoutHelper = new LayoutHelper();

		private function new(){
			// facade = Facade.getInstance();
		};
		
		public function layout(a:ActorComponent,commands:Array<String>):Void {
			for(thisCommand in commands){
				var com = thisCommand.split(":");
				var i = (com[1]!=null) ? Std.parseFloat(com[1]) : null; //convert parameter on right of colon to real number
				trace("layout command:"+com+" value:"+i);

				switch(com[0]){
					case "simpleX": a.simpleX(i);
					case "simpleY": a.simpleY(i);
					case "centerX": a.centerX();
					case "centerY": a.centerY();
					case "center": a.center();
					case "alignLeft": a.alignLeft(i);
					case "alignRight": a.alignRight(i);
					case "alignTop": a.alignTop(i);
					case "alignBottom": a.alignBottom(i);
					case "alignTopLeft": a.alignTopLeft(i);
					case "alignTopRight": a.alignTopRight(i);
					case "alignBottomLeft": a.alignBottomLeft(i);
					case "alignBottomRight": a.alignBottomRight(i);
					case "alignLeftCenter": a.alignLeftCenter(i);
					case "alignRightCenter": a.alignRightCenter(i);
					case "alignTopCenter": a.alignTopCenter(i);
					case "alignBottomCenter": a.alignBottomCenter(i);
					case "horizontalPercent": a.horizontalPercent(i);
					case "verticalPercent": a.verticalPercent(i);
					case "simpleScale": a.simpleScale();
					case "simpleWidth": a.simpleWidth(i);
					case "simpleHeight": a.simpleHeight(i);
					case "rigidSimpleScale": a.rigidSimpleScale();
					case "rigidSimpleWidth": a.rigidSimpleWidth(i);
					case "rigidSimpleHeight": a.rigidSimpleHeight(i);
					case "fillWidth": a.fillWidth(i);
					case "fillHeight": a.fillHeight(i);
					case "fillPercentWidth": a.fillPercentWidth(i);
					case "fillPercentHeight": a.fillPercentHeight(i);
					case "rigidFillPercentWidth": a.rigidFillPercentWidth(i);
					case "rigidFillPercentHeight": a.rigidFillPercentHeight(i);
					case "maintainAspectRatio": a.maintainAspectRatio();
					
				}
			}

		}

    }
