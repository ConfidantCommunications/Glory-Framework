
package ca.confidant.glory.controller.startup;

    //import js.Dom;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.view.StageMediator;
	
	/*
	 * @author Allan Dowdeswell
	 * This is the second step in the chain triggered by the StartupCommand.
	 */
    class Startup1_App_Command extends SimpleCommand
    {

	override public function execute( note:INotification ) : Void
        {
			//trace("startup1");
			var app:GloryFrameworkApp=cast( note.getBody() , GloryFrameworkApp);
			facade.registerMediator(new ApplicationMediator(app));
			trace("app stage:"+app.stage);
			facade.registerMediator(new StageMediator(app.stage));
        }
    }
