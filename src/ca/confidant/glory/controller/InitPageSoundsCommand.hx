
package ca.confidant.glory.controller;
	import ca.confidant.glory.ApplicationFacade;
    //import org.puremvc.as3.interfaces.ICommand;
    import org.puremvc.haxe.interfaces.INotification;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.view.SoundMediator;
	import haxe.xml.Fast;
	import openfl.Assets;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.LoaderProxy;
	/*
	 * @author Allan Dowdeswell
	 * Triggered by the BuildPageCommand. This creates sound instances and mediators associated with a page.
	 */
    class InitPageSoundsCommand extends SimpleCommand
    {


        override public function execute( note:INotification ) : Void
        {
			trace('InitPageSoundsCommand');
			var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var pageId=cast(note.getBody(),String);		
			var sounds=pcp.getPageSounds(pageId);
			var lp=cast(facade.retrieveProxy(LoaderProxy.NAME),LoaderProxy);
			if (sounds.length>0){
				for (thisSound in sounds){
					trace("adding sound:"+thisSound.att.src+":"+thisSound.att.id);
					//the autoplay setting will get passed as "meta" in the LoadResult
					var autoPlay:String = (thisSound.att.autoPlay=="true")?"autoPlay":"";
					lp.getSound("assets/"+thisSound.att.src, true, thisSound.att.id, autoPlay);
					// var s = Assets.getSound ("assets/"+thisSound.att.src);


					//these lines moved to HandleAssetsLoadedCommand:
					// facade.registerMediator(new SoundMediator(thisSound.att.id,s));
					// if(thisSound.att.autoPlay=="true"){
					// 	sendNotification(ApplicationFacade.PLAY_SOUND, thisSound.att.id);
					// }
				}
			}
        }
    }
