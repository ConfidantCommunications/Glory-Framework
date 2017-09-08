package ca.confidant.glory.controller;
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
	import ca.confidant.glory.model.CacheProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import lime.utils.AssetCache;
	import openfl.utils.AssetType;
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
		var alp:AssetLibraryProxy;
		var cp:CacheProxy;
		var cache:AssetCache;
		
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

			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			lp=cast(facade.retrieveProxy(LoaderProxy.NAME) , LoaderProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);
			alp=cast(facade.retrieveProxy(AssetLibraryProxy.NAME) , AssetLibraryProxy);
			cp = cast(facade.retrieveProxy("CacheProxy"),CacheProxy);
			cache=cp.getCache();

			
			//Custom page classes get handled here:
			var class_name:String = "pages.P"+pageId;
			var a_class = Type.resolveClass( class_name );
			var s = ( a_class != null ) ? Type.createInstance( a_class,[] ) : new PageComponent();
			
			s.name=pageId;

			if(pcp.getPageById(pageId).get("type")=="overlay"){
				appMediator.addDisplayObject(s,-1);
			} else {
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
					trace("makeActor: "+thisActor.att.id);
					var actor = makeActor(thisActor);
					s.addActor(thisActor.att.id, actor);
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
        }
		private function makeActor(actor:Fast):ActorComponent{
			var ext:String=cast(actor.att.src,String).substr(-3);
			var a=new ActorComponent();
			//embed info from config, used once bitmaps are filled
			a.setInitValues(
				Std.parseInt(actor.att.x),
				Std.parseInt(actor.att.y),
				Std.parseInt(actor.att.width),
				Std.parseInt(actor.att.height)
			);

			a.type=actor.att.type;
			a.name=actor.att.id;
			if(a.type=="control"){
				a.mouseEnabled=true;
				a.useHandCursor=true;
				a.buttonMode=true;
			}
			
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
			switch(ext){
				case "svg":
					var theText = alp.getLibrary().getText(actor.att.id);
					a.init(theText);
				case "swf":
					// lp.getMovieClip (actor.att.src, actor.att.id);
					if (alp.getLibrary().isLocal (actor.att.id, cast AssetType.MOVIE_CLIP)) {
						var mc = alp.getLibrary().getMovieClip (actor.att.id);
						a.addChild(mc);
					} else {
						trace ("MovieClip asset \"" + actor.att.id + "\" exists, but only asynchronously");
						
					}
				
				case "jpg"|"gif"|"png": 
					// image should be cached if using Glory in Async mode (embedAssets not set in project.xml)
					//TODO: change these conditions below to use embedAssets metadata
					var imageData;
					if (cache.exists(actor.att.id)){
						var image = cache.image.get(actor.att.id);
						#if flash
						imageData = image.src;
						#else
						imageData = BitmapData.fromImage (image);
						#end

						trace("exists:"+actor.att.id);
					} else {
						imageData = lp.getBitmapData("assets/"+actor.att.src);//,"name of library"
						
						trace(actor.att.id+" is not in cache.");
					}
					
					var b = new Bitmap (imageData);
					// a.addBitmap(b);
					a.init(b);
				default:
					trace("nothing");
			}
			return a;
			//} catch(e:Dynamic){
				//trace(Std.string(e));
			//}
		}

    }
