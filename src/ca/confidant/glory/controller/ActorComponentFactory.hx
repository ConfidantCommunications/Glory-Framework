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
import haxe.xml.Fast;
import ca.confidant.glory.ApplicationFacade;
import ca.confidant.glory.model.ActorComponentConfigProxy;
import ca.confidant.glory.view.ActorComponentMediator;
import ca.confidant.glory.view.components.ActorComponent;
import openfl.display.Loader;
import openfl.system.LoaderContext;
import openfl.system.ApplicationDomain;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.*;
import ca.confidant.glory.model.AssetLibraryProxy;
import ca.confidant.glory.controller.LayoutHelper;
import org.puremvc.haxe.interfaces.IFacade;
import org.puremvc.haxe.patterns.facade.Facade;
    /* 
        A factory method returning an ActorComponent or ControlComponent
        
    */
class ActorComponentFactory {
	private var facade: IFacade;
    public static var instance(default, null):ActorComponentFactory = new ActorComponentFactory();
    
    private function new () {
		facade = Facade.getInstance();

    }  
    public function create(pageId:String, actor:Fast, ?swflib:String):ActorComponent {
        
        #if !appMode
		var alp = cast(facade.retrieveProxy(pageId) , AssetLibraryProxy);
		#end

        var a = new ActorComponent();
        var theArray = cast(actor.att.src,String).split(".");
        var ext:String=theArray.pop();
        //embed info from config, used once bitmaps are filled
        var i1 = (actor.has.x)?Std.parseInt(actor.att.x):0;
        var i2 = (actor.has.y)?Std.parseInt(actor.att.y):0;
        var i3 = (actor.has.width)?Std.parseInt(actor.att.width):0;
        var i4 = (actor.has.height)?Std.parseInt(actor.att.height):0;
        a.setInitValues(
            i1,i2,i3,i4
        );

        a.type=actor.att.type;
        a.name=actor.att.id;
        if(a.type=="control"){
            a.mouseEnabled=true;
            a.useHandCursor=true;
            a.buttonMode=true;
        }
        
        var action:String;
        if(actor.has.action){
            action=Std.string(actor.att.action);
        } else {
            action='';
        }
        var l:String = "";
        try {
            l = Std.string(actor.att.layout);
        } catch (e:Dynamic){
            trace("error:"+e);
        }
        var accp:ActorComponentConfigProxy = new ActorComponentConfigProxy(actor.att.id,Std.string(actor.att.type), action, l);
        facade.registerProxy(accp);

        var acm = new ActorComponentMediator(actor.att.id,a,accp);
        facade.registerMediator(acm);
        switch(ext){
            case "svg":
                #if appMode
                var theText:String = Assets.getText("assets/"+actor.att.src);
                #else
                var theText = alp.getLibrary().getText("assets/"+actor.att.src);
                #end
                a.addSVG(theText);
                a.init();
            case "swf":
                trace("deprecated: Do not use swf extension");
            case "jpg"|"gif"|"png": 
                var imageData;
                
                #if appMode
                var image = LimeAssets.getImage("assets/"+actor.att.src);
                #else
                var image = alp.getLibrary().getImage("assets/"+actor.att.src);//,"name of library"
                #end


                #if flash
                imageData = image.src;
                #else
                imageData = BitmapData.fromImage (image);
                // trace("imageData:"+imageData);
                #end
                var b = new Bitmap (imageData);
                trace("image:"+b);
                a.addBitmap(b);
                a.init();
            case "txt"|"html"|"htm":
                trace("why");
                #if appMode
                var t = LimeAssets.getText("assets/"+actor.att.src);
                #else
                var t = alp.getLibrary().getText("assets/"+actor.att.src);
                #end
                var myTextBox:TextField = new TextField();
                if(ext=="txt"){
                    myTextBox.text = t;
                } else {
                    myTextBox.htmlText = t;
                }
                myTextBox.width = Std.parseInt(actor.att.width); 
                myTextBox.height = Std.parseInt(actor.att.height); 
                myTextBox.multiline = true; 
                myTextBox.wordWrap = true; 
                myTextBox.border = true; 
                a.addChild(myTextBox);
                a.init();
            default:
                trace("why not?"+ext);
                if(actor.att.src != ""){
                    #if appMode
                        if(swflib!=null){
                            var swfPath = swflib+":"+actor.att.src;
                            var mc = Assets.getMovieClip (swfPath);
                            a.addChild(mc);
                            a.init();
                        }
                    #else
                        #if flash
                        if(swflib!=null){
                            trace("adding a swf file asset");
                            var id = "/assets/"+swflib+".swf";
                            //it got added as bytes earlier...
                            // trace(alp.getLibrary().list("BINARY"));
                            var bytes = alp.getLibrary().getBytes (id);
                            // var ba = ByteArray.fromBytes(bytes);
                            var mc:MovieClip; 
                            var context = new LoaderContext (false, ApplicationDomain.currentDomain, null);
                            context.allowCodeImport = true;
                            var loader = new Loader ();
                            loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (_) {
                                trace("done:"+loader.content);
                                mc = cast Type.createInstance (ApplicationDomain.currentDomain.getDefinition (actor.att.src), []);
                                trace("mc:"+mc);
                                a.addChild(mc);
                                a.init();
                            });
                            loader.loadBytes (bytes, context);
                            // loader.load (new URLRequest (id), context);
                            // if (swf.symbols.exists 
                        }	
                        

                        #else
                        //assume it's a .bundle flash asset with no swf extension
                        trace("adding a .bundle movieclip");
                        var mc = alp.getLibrary().getMovieClip (actor.att.src);//LittleBoy
                        a.addChild(mc);
                        a.init();
                        #end
                    #end

                }
        }

        // trace(Reflect.fields(LayoutCreator));
        LayoutHelper.instance.layout(a,accp.layoutCommands);
        



        return a;

    }


}