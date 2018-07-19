
package ca.confidant.glory.controller;

	import openfl.net.URLRequest;
	import openfl.Lib;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
    import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.view.ApplicationMediator;

	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	
	
	/*
	 * @author Allan Dowdeswell
	 * This command will trigger URL requests in a browser.
	 */
	
    class HttpLinkCommand extends SimpleCommand
    {


        override public function execute( note:INotification ) : Void
        {
			trace('HttpLinkCommand:'+cast(note.getBody(),String));
			var request:URLRequest = new URLRequest("http://"+cast(note.getBody(),String));
			request.method = "POST";
			Lib.navigateToURL(request);
        }
    }
