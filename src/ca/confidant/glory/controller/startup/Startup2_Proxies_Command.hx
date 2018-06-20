﻿
package ca.confidant.glory.controller.startup;


    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.StateProxy;
/**
 * @author Allan Dowdeswell
 * This is the third part of the StartupCommand chain.
 * This command registers some necessary proxies for the framework and then starts loading of XML. 
 */



    class Startup2_Proxies_Command extends SimpleCommand
    {


        override public function execute( note:INotification ) : Void
        {
			facade.registerProxy(new PagesConfigProxy());
			facade.registerProxy(new ControlsRegistryProxy());
			facade.registerProxy(new StateProxy());
        }
    }
