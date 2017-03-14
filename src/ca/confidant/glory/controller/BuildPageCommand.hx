﻿package ca.confidant.glory.controller;
    import flash.display.Sprite;
	import flash.display.Bitmap;
	import flash.display.BitmapData;
	import flash.display.DisplayObject;
	import haxe.xml.Fast;
	import openfl.Assets;
    import org.puremvc.haxe.patterns.command.SimpleCommand;
	import org.puremvc.haxe.interfaces.INotification;
    import ca.confidant.glory.view.PageMediator;
	import ca.confidant.glory.view.ApplicationMediator;
	import ca.confidant.glory.view.ActorComponentMediator;
	import ca.confidant.glory.view.components.ActorComponent;

	import ca.confidant.glory.view.components.PageComponent;
	import ca.confidant.glory.model.ControlsRegistryProxy;
	import ca.confidant.glory.ApplicationFacade;
	import ca.confidant.glory.model.PagesConfigProxy;
	import ca.confidant.glory.model.ActorComponentConfigProxy;
	import ca.confidant.glory.model.LoaderProxy;
	
	//import ca.confidant.glory.controller.ClassConverter;
	
	/* 
	 * @author Allan Dowdeswell
	 * This is triggered first by the GotoIntroCommand, then by calls to the ChangePageCommand. 
	 * It retrieves configuration information from the PageConfigProxy and puts the page together
	 * with the necessary mediators.
	 */
    class BuildPageCommand extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var appMediator:ApplicationMediator;
		var lp:LoaderProxy;
		
		public function new(){
			super();
		}
		
        override public function execute( note:INotification ) : Void
        {
			trace('BuildPageCommand');

			var pageId=cast(note.getBody(),String);//current page
			try{
				var oldpm=cast(facade.retrieveMediator(pageId),PageMediator);
				//if this page exists, we don't want to build it again, so exit
				if(oldpm!=null) return;
			} catch(e:Dynamic){
				//trace(e);
			}


			//trace(ClassConverter.theContent);
			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			lp=cast(facade.retrieveProxy(LoaderProxy.NAME) , LoaderProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);

			//var s:PageComponent=new PageComponent();//main page container
			
			//Custom page classes get handled here:
			var class_name:String = "pages.P"+pageId;
			var a_class = Type.resolveClass( class_name );
			var s = ( a_class != null ) ? Type.createInstance( a_class,[] ) : new PageComponent();
			
			s.name=pageId;

			if(pcp.getPageById(pageId).get("type")=="overlay"){
				//trace("overlay");
				appMediator.addDisplayObject(s,-1);
			} else {
				//trace("not overlay");
				appMediator.addDisplayObject(s,0);
			}
			
			//trace("page holder added: "+pageId);
			var pm = new PageMediator(pageId,s);
			facade.registerMediator(pm);
			s.transitionIn();

			var actorsList=pcp.getPageActors(pageId);
			//trace("length:"+actorsList.length);
			if (actorsList.length>0){
				for (thisActor in actorsList){
					//trace("makeActor: "+thisActor.att.id);
					s.addActor(thisActor.att.id, makeActor(thisActor));
					//appMediator.addDisplayObject(makeActor(thisActor),0);
				}
			}
			var crp=cast(facade.retrieveProxy(ControlsRegistryProxy.NAME),ControlsRegistryProxy);
			var controls=crp.getControls();
			for(thisControl in controls){
				appMediator.getApp().removeChild(thisControl);
				appMediator.getApp().addChild(thisControl);
				//trace("control:"+thisControl.x+":"+thisControl.y);
				//var newx=thisControl.x;
				//thisControl.x=newx;
				//var newy=thisControl.y;
				//thisControl.y=newy;
			}
			
			
			
			s.init();
        }
		private function makeActor(actor:Fast):ActorComponent{
			//try{
				var ext:String=cast(actor.att.src,String).substr(-3);
				//trace("ext:"+ext);
				
				//var class_name:String = "actors.Asomething";
				//var a = Type.createInstance( Type.resolveClass(class_name), [] );
				//if(a!=null){
					
				var a=new ActorComponent();
				//a.name=actor.att.id;
				
				var action:String;
				if(actor.has.action){
					action=Std.string(actor.att.action);
				} else {
					action='';
				}
				var accp:ActorComponentConfigProxy=new ActorComponentConfigProxy(actor.att.id,Std.string(actor.att.type), action);
				facade.registerProxy(accp);
				var acm = new ActorComponentMediator(actor.att.id,a,accp);
				facade.registerMediator(acm);
				//}
				//trace(imageData+ " is my data");
				switch(ext){
					case "svg":
						//var theText=
						lp.getText("assets/"+actor.att.src, actor.att.id);
						// a.addSVG(theText); now handled with ApplicationFacade.HANDLE_LOADED_ASSET
					case "jpg":
						//var imageData:BitmapData = 
						lp.getBitmapData("assets/"+actor.att.src,true, actor.att.id);
						// var b=new Bitmap (imageData);
						// a.addBitmap(b); 
					case "gif":
						//var imageData:BitmapData = 
						lp.getBitmapData("assets/"+actor.att.src,true, actor.att.id);
						// var b=new Bitmap (imageData);
						// a.addBitmap(b); 
					case "png":
						//var imageData:BitmapData = 
						lp.getBitmapData("assets/"+actor.att.src,true, actor.att.id);
						// var b=new Bitmap (imageData);
						// a.addBitmap(b); 
					default: //must be a swf
						//load swf asset per instructions at http://www.openfl.org/learn/tutorials/using-swf-assets/
						//var clip = 
						lp.getMovieClip (actor.att.src, actor.att.id);
						// trace("loading:"+actor.att.src);
						// a.addChild(clip);
				}
				/*if(ext=="svg"){
					var theText=lp.getText("assets/"+actor.att.src);
					a.addSVG(theText);
				} else {
					var imageData:BitmapData = lp.getBitmapData("assets/"+actor.att.src,true);
					var b=new Bitmap (imageData);
					a.addBitmap(b);
				}*/
				//appMediator.addDisplayObject(a);
				a.x=Std.parseInt(actor.att.x);
				a.y=Std.parseInt(actor.att.y);
				// a.width=Std.parseInt(actor.att.width);
				// a.height=Std.parseInt(actor.att.height);
				a.type=actor.att.type;
				a.name=actor.att.id;
				if(a.type=="control"){
					a.mouseEnabled=true;
					a.useHandCursor=true;
					a.buttonMode=true;
				}
				return a;
			//} catch(e:Dynamic){
				//trace(Std.string(e));
			//}
		}

    }
