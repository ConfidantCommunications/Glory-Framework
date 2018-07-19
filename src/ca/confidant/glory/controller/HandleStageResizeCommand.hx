package ca.confidant.glory.controller;

	// #if (flash)
		import openfl.net.URLRequest;
		import openfl.net.URLLoader;
	// #end

	// #if (js) 
		import openfl.Lib;
	// #end

	
	
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
    import ca.confidant.glory.ApplicationFacade;
    //import ca.confidant.glory.view.DocumentMediator;
	import ca.confidant.glory.view.ApplicationMediator;

	import ca.confidant.glory.ApplicationFacade;
	//import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.DataTypes;
	
	/*
	 * @author Allan Dowdeswell
	 * This command does stuff whenever the stage scales.
	 */
	
    class HandleStageResizeCommand extends SimpleCommand
    {

    override public function execute( note:INotification ) : Void
        {
			// trace('HandleStageResizeCommand');
            var sizes:StageSizeData = note.getBody();

        }
    }
