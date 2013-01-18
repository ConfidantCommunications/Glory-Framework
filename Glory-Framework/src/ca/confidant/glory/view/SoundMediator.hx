﻿package ca.confidant.glory.view;	import nme.media.Sound;	import org.puremvc.haxe.patterns.mediator.Mediator;	import org.puremvc.haxe.interfaces.INotification;/** * @author Allan Dowdeswell * The SoundMediator holds a temporary reference to a sound. The sounds and their mediators are created/destroyed with each page turn. * *	@param id A String used as a unique identifier. This will match the id of your sound in the XML configuration. *	@param theSound A reference to a Sound Object. */	class SoundMediator extends Mediator {		private var mySound:Sound;		public function new ( id:String, theSound:Sound ) {			super( id, theSound );			mySound=theSound;			//mySound.addEventListener(());		}		private function addListeners():Void{		}		override public function listNotificationInterests():Array<String>        {            return [					ApplicationFacade.PLAY_SOUND                   ];        }        override public function handleNotification( note:INotification ):Void        {            switch ( note.getName() ) {            	case ApplicationFacade.PLAY_SOUND:					if (this.mediatorName==note.getBody()){						mySound.play();					}            }        }				private function sound():Sound {			return mySound;		}
	}
