
package ca.confidant.glory.controller;

    import org.puremvc.haxe.interfaces.INotification;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.view.SoundMediator;
	/*
	 *  @author Allan Dowdeswell
	 *  Triggered by the LoaderProxy. This passes the XML to the PagesConfigProxy for parsing.
	 *  May be modified in the future for special handling of other assets.
	 */
    class HandleAssetsLoadedCommand extends SimpleCommand
    {

        override public function execute( note:INotification ) : Void
        {
			var lp:LoaderProxy=cast(facade.retrieveProxy(LoaderProxy.NAME),LoaderProxy);
			var theAsset:LoadResult=note.getBody();
			// trace('HandleAssetsLoadedCommand:'+theAsset.type);

			switch(theAsset.type){

				case "config":
					var pcp:PagesConfigProxy=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
					pcp.processXML(theAsset.data);
				

				case "sound":
					trace("I am making a SoundMediator:"+theAsset.id);
					facade.registerMediator(new SoundMediator(theAsset.id,theAsset.data));
					// var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME),PagesConfigProxy);
					if(theAsset.meta=="autoPlay"){
						sendNotification(ApplicationFacade.PLAY_SOUND, theAsset.id);
					}
				

			}

			
        }
    }
