﻿package ca.confidant.glory.model;	import nme.display.DisplayObject;    import org.puremvc.haxe.patterns.proxy.Proxy;	import nme.media.Sound;	/* 	 * @author Allan Dowdeswell	 * This Proxy provides a persistent reference to active sounds.	 */	class SoundRegistryProxy extends Proxy	{		private var sounds:Hash<Sound>;		public static var NAME:String = "SoundRegistryProxy";		/**		 * Constructor.		 */		public function new( )		{	       		super ( NAME);				//currentPage=0;				sounds=new Hash();				//trace("SoundRegistryProxy!");		}		public function getSound(id:String):Sound{			return sounds[id];		}		public function registerSound(id:String,s:Sound):Void{			sounds[id]=s;		}		public function destroySound(id:String):Void{			sounds[id]=null;		}	}