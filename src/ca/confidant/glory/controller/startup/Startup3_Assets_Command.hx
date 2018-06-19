package ca.confidant.glory.controller.startup;

    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
	import openfl.Assets;
	import openfl.utils.AssetLibrary;
	import haxe.xml.Fast;
	// import lime.utils.AssetManifest;
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
