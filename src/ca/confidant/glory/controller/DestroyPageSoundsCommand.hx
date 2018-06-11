package ca.confidant.glory.controller;

    import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.view.SoundMediator;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ChangePageDataProxy;
	import haxe.xml.Fast;
	import openfl.Assets;
	/*
	 * @author Allan Dowdeswell
	 * This removes sound instances and mediators associated with a page.
	 */
    class DestroyPageSoundsCommand extends SimpleCommand
    {

		var data:ChangePageDataProxy;

        override public function execute( note:INotification ) : Void
        {
			trace('DestroyPageSoundsCommand');
			data=cast(facade.retrieveProxy(ChangePageDataProxy.NAME) , ChangePageDataProxy);
			var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			
			
			if (data.newPage!=data.oldPage) {
				var sounds=pcp.getPageSounds(data.oldPage);
				
				if (sounds.length>0){
					for (thisSound in sounds){
						trace("Removed sound:"+thisSound.att.id);
						facade.removeMediator(thisSound.att.id);
					}
				}
			}
			// commandComplete();
        }
		
    }
