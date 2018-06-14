
package ca.confidant.glory.controller;
	import ca.confidant.glory.ApplicationFacade;
    import org.puremvc.haxe.interfaces.INotification;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.view.SoundMediator;
	import haxe.xml.Fast;
	import openfl.Assets;
	import ca.confidant.glory.model.PagesConfigProxy;
	// import ca.confidant.glory.model.LoaderProxy;
	import ca.confidant.glory.model.CacheProxy;
	// import ca.confidant.glory.model.StateProxy;
	import ca.confidant.glory.view.constants.ControlConstants;
	import ca.confidant.glory.DataTypes;
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
			// var sp=cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			// if(sp.getState()==GloryState.TRANSITIONING) return;
			var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			// var action=cast(note.getBody(),String);	
/* 
			var pageId:String;	
			switch(action){
				case ControlConstants.PAGE_FORWARD:
					pageId=pcp.getCurrentPage().get("id");
				case ControlConstants.PAGE_BACKWARD:
					pageId=pcp.getCurrentPage().get("id");
				default:
					//used for skip and overlay
					pageId=action;

			} */
			var sounds=pcp.getPageSounds(data.newPage);
			var cp=cast(facade.retrieveProxy(CacheProxy.NAME),CacheProxy);
			if (sounds.length>0){
				for (thisSound in sounds){
					trace("adding sound:"+thisSound.att.src+":"+thisSound.att.id);
					var cache=cp.getCache();
					var audioBuffer;
					if (cache.exists(thisSound.att.id)){
						audioBuffer = cache.audio.get(thisSound.att.id);
						trace("sound exists");
						facade.registerMediator(new SoundMediator(thisSound.att.id,audioBuffer.src));
					} else {
						trace ("no sound in buffer");
					}
					if(thisSound.att.autoPlay=="true"){
						sendNotification(ApplicationFacade.PLAY_SOUND, thisSound.att.id);
					}
				}
			}
        }
    }
