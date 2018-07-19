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
package ca.confidant.glory.controller.startup;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import openfl.Assets;
	import openfl.utils.AssetLibrary;
	import haxe.xml.Fast;
	import lime.utils.AssetType;
	import ca.confidant.glory.model.PagesConfigProxy;
	import openfl.net.URLLoader;
	import openfl.events.Event;
	import openfl.net.URLRequest;
/**
 * @author Allan Dowdeswell
 * This is the fourth and final part of the StartupCommand chain.
 * This command creates the Assets manifest using the items found in the config.xml.
 */

    class Startup3_Assets_Command extends SimpleCommand
    {


        override public function execute( note:INotification ) : Void
        {
			var loader=new URLLoader();
							
			loader.addEventListener (Event.COMPLETE, _onXMLLoaded);
			loader.load (new URLRequest ("assets/config.xml"));

        }
		private function _onXMLLoaded(e:Event):Void
		{
			var ul:URLLoader=cast(e.target,URLLoader);
			var xml=new Fast(Xml.parse(ul.data)).node.pages;
			var pcp:PagesConfigProxy=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
			pcp.processXML(xml);
		}
    }
