
package ca.confidant.glory.controller;


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
			trace("startup2");
			// var mf=new AssetManifest();
			var loader=new URLLoader();
							
			loader.addEventListener (Event.COMPLETE, _onXMLLoaded);
			loader.load (new URLRequest ("assets/config.xml"));

			//trace(Assets.getLibrary("default"));

			//need to try this:
			// Assets.loadText("assets/config.xml").onComplete(_onXMLLoaded);
        }
		private function _onXMLLoaded(e:Event):Void
		{
			var ul:URLLoader=cast(e.target,URLLoader);
			//trace( ul.data );
			//now create an asset manifest?
			var xml=new Fast(Xml.parse(ul.data)).node.pages;

			/*
			//get buttons, actors
			var am = new AssetManifest();
			for(button in xml.node.controls.nodes.button){
				am.assets.push({path:button.att.src, id:button.att.id, type:getAssetType(button.att.src)});
			}
			for(page in xml.nodes.page){
				for(actor in page.nodes.actor){
					am.assets.push({path:actor.att.src, id:actor.att.id, type:getAssetType(actor.att.src)});
				}
			}
			//trace (am.assets);
			var al=AssetLibrary.fromManifest(am);
			Assets.registerLibrary("gloryAssets",al);
			trace(al); //returns null
			al.loadImage("bRight").onComplete(function(e){
				trace("done loading image");
			}); */

			var pcp:PagesConfigProxy=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
			pcp.processXML(xml);
		}
    }
