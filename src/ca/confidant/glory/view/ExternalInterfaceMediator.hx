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
package ca.confidant.glory.view;

    
    import org.puremvc.haxe.interfaces.*;
    import org.puremvc.haxe.patterns.mediator.Mediator;
	import ca.confidant.glory.ApplicationFacade;
    import ca.confidant.glory.controller.ChangePageHelper;
	import openfl.events.*;
	import openfl.external.ExternalInterface;
	import ca.confidant.glory.model.PagesConfigProxy;
	#if js
    import js.Browser.*;
	import pushstate.PushState; //now forked locally
	#end
    /**
     * @author Allan Dowdeswell
     * A Mediator for interacting with the External Interface, i.e. calling target-specific functions. 
     * 
     */
    @:expose
    class ExternalInterfaceMediator extends Mediator implements IMediator
    {
       
	   /**
         * Constructor. 
         */
        var pcp:PagesConfigProxy;
		public static inline var NAME:String = "ExternalInterfaceMediator";
        private var myNotificationInterests:Array<String> = [];
        
        public function new ( viewComponent:Any ) {
			super( NAME, viewComponent );
    		pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
        }


        override public function listNotificationInterests():Array<String>
        {
            return myNotificationInterests;
        }

        override public function handleNotification( note:INotification ):Void 
        {
            switch ( note.getName() ) {
                /* case ApplicationFacade.CHANGE_PAGE:
                    //should we be taking a screen shot?
                    if(pcp.getUpdateHtmlBackground()=="onChangePage"){
                        // updateHtmlBackground();
                        sendNotification(ApplicationFacada.UPDATE_HTML_BACKGROUND);
                    } */
                /*
                case ApplicationFacade.CALL_EXTERNAL_FUNCTION:
					var theCall = note.getBody();
					if (ExternalInterface.available) {
						ExternalInterface.call(theCall.theFunction, theCall.theParameters);
						//ExternalInterface.call( "console.log" , "external interface is working");
					}
                
                case ApplicationFacade.CONSOLE_LOG:
					var msg:String = note.getBody();
					if (ExternalInterface.available) {
						ExternalInterface.call( "console.log" , msg);
					}
                    */
            }
        }
        /* public function setupHtmlBackgroundUpdates(type:String,interval:Int) {
            trace("setupHtmlBackgroundUpdates:"+type);
            if(type=="onChangePage"){
                myNotificationInterests.push(ApplicationFacade.CHANGE_PAGE);
            }
        } */
		public function setupPushState(bp:String):Void{
            #if js
            trace("setupPushState:"+bp);
            PushState.init( bp );//basePath, true, false//basepath,trigger,ignoreAnchors
            PushState.addEventListener(
                psListen
            );
            #end
            // window.onpopstate = PushState.handleOnPopState; //manually add in same manner as PushState
            // });

        }
        /*
        	Used when in HTML5 target, this listener fires when the user navigates the browser history using browser controls.
            
            @param url - This is the browser url which will correspond to the page id in the config.xml
            @param state - This reports info about the data used, cached or otherwise.
        **/
        public function psListen (url:String, state:Dynamic):Void{

                //https://github.com/jasononeil/hxpushstate/blob/master/demo/Test.hx
				trace("pushstate heard:"+url);
                if (url=="") url = pcp.getHomepageId();
                //send a notification with fromBrowser as true. This prevents a new call to updatePushState.
                sendNotification(ApplicationFacade.CHANGE_PAGE,ChangePageHelper.instance.buildNotification(url,null,true));
				// trace("pushstate saw:"+state);
				// trace("pushstate felt:"+uploads);
				
        }
        /*
            This gets called by the UpdatePushStateCommand if the page change was initiated from within Glory and not the browser.
        */
        #if js
        public function updatePushState(path:String):Void {
            PushState.push(path);
        }
        public function updateDocumentTitle(t:String):Void {
            document.title = t;
        }
        #end
    }
