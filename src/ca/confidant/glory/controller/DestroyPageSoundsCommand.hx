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
	import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.view.SoundMediator;
	import ca.confidant.glory.model.PagesConfigProxy;
	import haxe.xml.Fast;
	import openfl.Assets;
	import ca.confidant.glory.DataTypes;
	/*
	 * @author Allan Dowdeswell
	 * This removes sound instances and mediators associated with a page.
	 */
    class DestroyPageSoundsCommand extends SimpleCommand
    {


        override public function execute( note:INotification ) : Void
        {
			trace('DestroyPageSoundsCommand');
			var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data:ChangePageData = note.getBody();
			if (data.newPage!=data.oldPage) {
				var sounds=pcp.getPageSounds(data.oldPage);
				
				if (sounds.length>0){
					for (thisSound in sounds){
						try{
							trace("Removed sound:"+thisSound.att.id);
							var m = cast(facade.retrieveMediator(thisSound.att.id) , SoundMediator);
							if(m != null) {
								m.removeSound();
								facade.removeMediator(thisSound.att.id);
								m=null;
							}
							thisSound = null;
							
						} catch (e:Dynamic){
							trace(e);
						}

					}
				}
			}
			// commandComplete();
        }
		
    }
