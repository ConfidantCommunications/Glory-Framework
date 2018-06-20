package ca.confidant.glory.controller;
	import ca.confidant.glory.ApplicationFacade;
    import org.puremvc.haxe.interfaces.INotification;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.view.SoundMediator;
	import haxe.xml.Fast;
	import openfl.Assets;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import ca.confidant.glory.view.constants.ControlConstants;
	import ca.confidant.glory.DataTypes;
	import openfl.media.Sound;
	/*
	 * @author Allan Dowdeswell
	 * This is part of the chain described by AsyncChangePageMacro. It will happen after the ChangePageCommand fires the commandComplete();
	 * This creates sound instances and mediators associated with a page.
	 */
    class InitPageSoundsCommand extends SimpleCommand
    {
        override public function execute( note:INotification ) : Void
        {
			trace('InitPageSoundsCommand');
			var data:ChangePageData = note.getBody();
			var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var sounds=pcp.getPageSounds(data.newPage);
			// var cp=cast(facade.retrieveProxy(CacheProxy.NAME),CacheProxy);
			var alp=cast(facade.retrieveProxy(data.newPage) , AssetLibraryProxy);

			if (sounds.length>0){
				for (thisSound in sounds){
					// trace("adding sound:"+thisSound.att.src+":"+thisSound.att.id);
					
					var buf = alp.getLibrary().getAudioBuffer(thisSound.att.id);
					// trace("buffer:"+buf);
					var s = Sound.fromAudioBuffer(buf);
					// trace("sound:"+s);
					facade.registerMediator(new SoundMediator(thisSound.att.id, s));

					if(thisSound.att.autoPlay=="true"){
						sendNotification(ApplicationFacade.PLAY_SOUND, thisSound.att.id);
					}
				}
			}
        }
    }
