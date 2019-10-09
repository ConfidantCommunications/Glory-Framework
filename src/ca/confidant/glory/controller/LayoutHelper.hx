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
// import com.player03.layout.Resizable;
using com.player03.layout.LayoutCreator.ForOpenFL;
 
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

		/*
		* Now spoon-feed the LayoutCreator some view objects casted as Resizable. 
		* Necessary due to breaking changes in Haxe 4.
		*
		static public inline function feed(r:Resizable, ?f) {
			if (f != null) f(r);
			return r;
		}*/
		/*

				switch(com[0]){
					case "simpleX": feed(a, t -> {t.simpleX(i);});
					case "simpleY": feed(a, t -> {t.simpleY(i);});
					case "centerX": feed(a, t -> {t.centerX();});
					case "centerY": feed(a, t -> {t.centerY();});
					case "center": feed(a, t -> {t.center();});
					case "alignLeft": feed(a, t -> {t.alignLeft(i);});
					case "alignRight": feed(a, t -> {t.alignRight(i);});
					case "alignTop": feed(a, t -> {t.alignTop(i);});
					case "alignBottom": feed(a, t -> {t.alignBottom(i);});
					case "alignTopLeft": feed(a, t -> {t.alignTopLeft(i);});
					case "alignTopRight": feed(a, t -> {t.alignTopRight(i);});
					case "alignBottomLeft": feed(a, t -> {t.alignBottomLeft(i);});
					case "alignBottomRight": feed(a, t -> {t.alignBottomRight(i);});
					case "alignLeftCenter": feed(a, t -> {t.alignLeftCenter(i);});
					case "alignRightCenter": feed(a, t -> {t.alignRightCenter(i);});
					case "alignTopCenter": feed(a, t -> {t.alignTopCenter(i);});
					case "alignBottomCenter": feed(a, t -> {t.alignBottomCenter(i);});
					case "horizontalPercent": feed(a, t -> {t.horizontalPercent(i);});
					case "verticalPercent": feed(a, t -> {t.verticalPercent(i);});
					case "simpleScale": feed(a, t -> {t.simpleScale();});
					case "simpleWidth": feed(a, t -> {t.simpleWidth(i);});
					case "simpleHeight": feed(a, t -> {t.simpleHeight(i);});
					case "rigidSimpleScale": feed(a, t -> {t.rigidSimpleScale();});
					case "rigidSimpleWidth": feed(a, t -> {t.rigidSimpleWidth(i);});
					case "rigidSimpleHeight": feed(a, t -> {t.rigidSimpleHeight(i);});
					case "fillWidth": feed(a, t -> {t.fillWidth(i);});
					case "fillHeight": feed(a, t -> {t.fillHeight(i);});
					case "fillPercentWidth": feed(a, t -> {t.fillPercentWidth(i);});
					case "fillPercentHeight": feed(a, t -> {t.fillPercentHeight(i);});
					case "rigidFillPercentWidth": feed(a, t -> {t.rigidFillPercentWidth(i);});
					case "rigidFillPercentHeight": feed(a, t -> {t.rigidFillPercentHeight(i);});
					case "maintainAspectRatio": feed(a, t -> {t.maintainAspectRatio();});
		*/
		public function layout(a:ActorComponent,commands:Array<String>):Void {
			
			for(thisCommand in commands){
				var com = thisCommand.split(":");
				//todo: use an abstract here https://haxe.org/manual/types-abstract-implicit-casts.html
				var i = (com[1]!=null) ? Std.parseFloat(com[1]) : null; //convert parameter on right of colon to real number
				trace("layout command:"+com+" value:"+i);
				//
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
					//commands with sprite reference
					//below
					//rightOf
					//belowCenter
					//rightOfCenter
					// case "leftOf": {
					// 	var s = pcp.getCurrentPage().getChild(com[1]);
					// 	a.leftOf(s);

					// }
				}
			}

		}

    }
