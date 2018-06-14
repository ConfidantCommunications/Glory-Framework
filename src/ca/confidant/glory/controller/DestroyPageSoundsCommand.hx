package ca.confidant.glory.controller;

    import org.puremvc.haxe.interfaces.INotification;
	import org.puremvc.haxe.patterns.command.SimpleCommand;
	import ca.confidant.glory.view.SoundMediator;
	import ca.confidant.glory.model.PagesConfigProxy;
	import haxe.xml.Fast;
	import openfl.Assets;
	import ca.confidant.glory.DataTypes;
	/*
	 * @author Allan Dowdeswell
	 * This removes sound instances and mediators associated with a page.
	 */
    class DestroyPageSoundsCommand extends SimpleCommand
    {


        override public function execute( note:INotification ) : Void
        {
			trace('DestroyPageSoundsCommand');
			var pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			var data:ChangePageData = note.getBody();
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
