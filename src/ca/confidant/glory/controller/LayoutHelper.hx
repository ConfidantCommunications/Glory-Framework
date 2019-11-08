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
import ca.confidant.glory.view.components.*;
import org.puremvc.haxe.interfaces.INotification;
import openfl.display.*;
// import com.player03.layout.Resizable;
using com.player03.layout.LayoutCreator.ForOpenFL;
using com.player03.layout.Direction;
 
	/*
	 * @author Allan Dowdeswell
	 * This singleton handles layout behaviours for page actors.
	 * Actors must have a layout attribute with a properly delimited list of commands. e.g.:
	 * layout="fillPercentHeight:0.2,maintainAspectRatio,leftOfCenter:page2text/0,alignTop:100"
	 * Functions are delimited by comma. Parameters for the function follow after the colon. 
	 * Parameters are delimited by the slash.
	 */
    class LayoutHelper
    {
		public static var instance(default, null):LayoutHelper = new LayoutHelper();

		private function new(){
			// facade = Facade.getInstance();
		};
		public function layout(a:ActorComponent,commands:Array<String>,page:DisplayObjectContainer):Void {
			for(thisCommand in commands){
				var com = thisCommand.split(":");
				// trace("LAYOUT:0"+com[0]);
				//todo: use an abstract here https://haxe.org/manual/types-abstract-implicit-casts.html
				//first check for commands not needing a value
				switch(com[0]){
					case "centerX": a.centerX(); continue;
					case "centerY": a.centerY(); continue;
					case "center": a.center(); continue;
					case "maintainAspectRatio": a.maintainAspectRatio(); continue;
					case "simpleScale": a.simpleScale(); continue;
					case "rigidSimpleScale": a.rigidSimpleScale(); continue;
					
					case "stickToLeft": a.stickToLeft(); continue;
					case "stickToRight": a.stickToRight(); continue;
					case "stickToTop": a.stickToTop(); continue;
					case "stickToBottom": a.stickToBottom(); continue;
					case "stickToCenterX": a.stickToCenterX(); continue;
					case "stickToCenterY": a.stickToCenterY(); continue;
					case "stickToTopLeft": a.stickToTopLeft(); continue;
					case "stickToTopRight": a.stickToTopRight(); continue;
					case "stickToBottomLeft": a.stickToBottomLeft(); continue;
					case "stickToBottomRight": a.stickToBottomRight(); continue;
					case "stickToLeftCenter": a.stickToLeftCenter(); continue;
					case "stickToRightCenter": a.stickToRightCenter(); continue;
					case "stickToTopCenter": a.stickToTopCenter(); continue;
					case "stickToBottomCenter": a.stickToBottomCenter(); continue;
					case "stickToCenter": a.stickToCenter(); continue;
					case "stickToLeftAndRight": a.stickToLeftAndRight(); continue;
					case "stickToTopAndBottom": a.stickToTopAndBottom(); continue;
					case "stickToAllSides": a.stickToAllSides(); continue;
					
				}
				
				switch (com[1]){
					case null:
						trace("this command requires a value:"+com[0]);
						continue;
					case "":
						trace("You did not supply a value after the colon with:"+com[0]);
						continue;
				} 
				//at this point there must be at least a string
				var i = Std.parseFloat(com[1]);
				
				trace("LAYOUT:1:"+com[0]+":"+com[1]+":"+i);
				if (i != Math.NaN) { //must have got a number
				//now go through commands requiring a value
					switch(com[0]){
						case "simpleX": a.simpleX(i); continue;
						case "simpleY": a.simpleY(i); continue;
						case "alignLeft": a.alignLeft(i); continue;
						case "alignRight": a.alignRight(i); continue;
						case "alignTop": a.alignTop(i); continue;
						case "alignBottom": a.alignBottom(i); continue;
						case "alignTopLeft": a.alignTopLeft(i); continue;
						case "alignTopRight": a.alignTopRight(i); continue;
						case "alignBottomLeft": a.alignBottomLeft(i); continue;
						case "alignBottomRight": a.alignBottomRight(i); continue;
						case "alignLeftCenter": a.alignLeftCenter(i); continue;
						case "alignRightCenter": a.alignRightCenter(i); continue;
						case "alignTopCenter": a.alignTopCenter(i); continue;
						case "alignBottomCenter": a.alignBottomCenter(i); continue;
						case "horizontalPercent": a.horizontalPercent(i); continue;
						case "verticalPercent": a.verticalPercent(i); continue;
						case "simpleWidth": a.simpleWidth(i); continue;
						case "simpleHeight": a.simpleHeight(i); continue;
						case "rigidSimpleWidth": a.rigidSimpleWidth(i); continue;
						case "rigidSimpleHeight": a.rigidSimpleHeight(i); continue;
						case "fillWidth": a.fillWidth(i); continue;
						case "fillHeight": a.fillHeight(i); continue;
						case "fillPercentWidth": a.fillPercentWidth(i); continue;
						case "fillPercentHeight": a.fillPercentHeight(i); continue;
						case "rigidFillPercentWidth": a.rigidFillPercentWidth(i); continue;
						case "rigidFillPercentHeight": a.rigidFillPercentHeight(i); continue;
					}
				} 
			
				//Must be a string reference. How many parameters?
				// trace("LAYOUT:2 here we go");
				
				var params = com[1].split("/");
				//Now is it a boolean?
				if ((params[1]=="true") || (params[1]=="false")){
					switch(com[0]){
						case "preserveChildren": a.preserveChildren((params[1]=="true")); continue;
						case "preserve": a.preserve((params[1]=="true")); continue;
					}
				}

				//Not a boolean so try it as a target reference then:
				var targetChild:DisplayObject = page.getChildByName(params[0]);//page.myActors.get(params[0]);
				

				if (targetChild == null){
					trace("no valid target supplied for:"+a+" using:"+com[0]);
					continue;
				}
				i = Std.parseFloat(params[1]);
				if (i == Math.NaN) i=0;
				// if(i != null) {
				trace("LAYOUT:2:"+params[0]+":"+params[1]);
				switch(com[0]){
					case "centerXOn": a.centerXOn(targetChild); continue;
					case "centerYOn": a.centerYOn(targetChild); continue;
					case "leftOf":a.leftOf(targetChild,i); continue;
					case "rightOf":a.rightOf(targetChild,i); continue;
					case "above":a.above(targetChild,i); continue;
					case "below":a.below(targetChild,i); continue;
					case "leftOfCenter":a.leftOfCenter(targetChild,i); continue;
					case "rightOfCenter":a.rightOfCenter(targetChild,i); continue;
					case "aboveCenter":a.aboveCenter(targetChild,i); continue;
					case "belowCenter":a.belowCenter(targetChild,i); continue;
					case "fillAreaLeftOf":a.fillAreaLeftOf(targetChild,i); continue;
					case "fillAreaRightOf":a.fillAreaRightOf(targetChild,i); continue;
					case "fillAreaAbove":a.fillAreaAbove(targetChild,i); continue;
					case "fillAreaBelow":a.fillAreaBelow(targetChild,i); continue;
					case "matchWidth":a.matchWidth(targetChild,i); continue;
					case "matchHeight":a.matchHeight(targetChild,i); continue;
					// case "simpleTextSize":a.simpleTextSize(targetChild); continue;
					// case "rigidSimpleScale":a.rigidSimpleScale(targetChild); continue;
				}
				// } 
				//Now check if that parameter was a direction
				switch (params[1]){
					case "left":
						if(com[0]=="alignWith") a.alignWith(targetChild,Direction.LEFT); continue;
					case "right":
						if(com[0]=="alignWith") a.alignWith(targetChild,Direction.RIGHT); continue;
					case "top":
						if(com[0]=="alignWith") a.alignWith(targetChild,Direction.TOP); continue;
					case "bottom":
						if(com[0]=="alignWith") a.alignWith(targetChild,Direction.BOTTOM); continue;
				}

				
				

			

			}

		}

    }
