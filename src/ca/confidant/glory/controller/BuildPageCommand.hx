package ca.confidant.glory.controller;
    import openfl.display.Sprite;
	import openfl.display.Bitmap;
	import openfl.display.BitmapData;
	import openfl.display.DisplayObject;
	import openfl.display.MovieClip;
	import openfl.display.Loader;
	import openfl.system.LoaderContext;
	import openfl.system.ApplicationDomain;
	import openfl.events.Event;
	import openfl.net.URLRequest;
	import format.swf.SWFTimelineContainer;
	import haxe.xml.Fast;
	import openfl.Assets;
	import lime.utils.Assets in LimeAssets;
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
	import ca.confidant.glory.model.StateProxy;
	import ca.confidant.glory.model.AssetLibraryProxy;
	import ca.confidant.glory.DataTypes;
	import openfl.utils.AssetType;
	import openfl.utils.ByteArray;
	
	/* 
	 * @author Allan Dowdeswell
	 * This is triggered by the AsyncBuildPageMacro after assets are loaded.
	 * It retrieves configuration information from the PageConfigProxy and puts the page together with the necessary mediators.
	 */
    class BuildPageCommand extends SimpleCommand
    {
		var pcp:PagesConfigProxy;
		var appMediator:ApplicationMediator;
		// var lp:LoaderProxy;
		var alp:AssetLibraryProxy;
		var sp:StateProxy;
		
		public function new(){
			super();
		}

        override public function execute( note:INotification ) : Void
        {
			var data:ChangePageData=note.getBody();
			var pageId=data.newPage;
			trace("-----------------------------");
			trace('BuildPageCommand:'+data);
			sp = cast(facade.retrieveProxy(StateProxy.NAME) , StateProxy);
			try{
				var oldpm=cast(facade.retrieveMediator(pageId),PageMediator);
				//if this page exists, we don't want to build it again, so exit
				if(oldpm!=null) return;
			} catch(e:Dynamic){
				//trace(e);
			}

			pcp=cast(facade.retrieveProxy(PagesConfigProxy.NAME) , PagesConfigProxy);
			appMediator = cast(facade.retrieveMediator(ApplicationMediator.NAME) , ApplicationMediator);
			#if !appMode
			alp=cast(facade.retrieveProxy(pageId) , AssetLibraryProxy);
			#end
			
			//Custom page classes get handled here:
			var class_name:String = "pages.P"+pageId;
			var a_class = Type.resolveClass( class_name );
			var s = ( a_class != null ) ? Type.createInstance( a_class,[] ) : new PageComponent();
			
			s.name = pageId;

			if((data.newPage != null) && (pcp.getPage(pageId).get("type")=="overlay")){
				appMediator.addDisplayObject(s,-1);
			} else {
				appMediator.addDisplayObject(s,0);
			}
			
			trace("page holder added: "+pageId);
			var pm = new PageMediator(pageId,s);
			facade.registerMediator(pm);

			var actorsList=pcp.getPageActors(pageId);
			if (actorsList.length>0){
				for (thisActor in actorsList){
					trace("makeActor: "+thisActor.att.id);
					var swflib = pcp.getPage(pageId).get("swflibrary");
					var actor = makeActor(thisActor,swflib);
					s.addActor(thisActor.att.id, actor);
				}
			}
			var crp=cast(facade.retrieveProxy(ControlsRegistryProxy.NAME),ControlsRegistryProxy);
			var controls=crp.getControls();
			for(thisControl in controls){
				appMediator.getApp().removeChild(thisControl);
				appMediator.getApp().addChild(thisControl);
			}
			sp.setState(GloryState.TRANSITIONING);
			s.transitionIn();
        }
		private function makeActor(actor:Fast, ?swflib:String):ActorComponent{
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
					#if appMode
					var theText:String = Assets.getText("assets/"+actor.att.src);
					#else
					var theText = alp.getLibrary().getText("assets/"+actor.att.src);
					#end
					a.addSVG(theText);
					a.init();
				case "swf":
					trace("deprecated: Do not use swf extension");
				case "jpg"|"gif"|"png": 
					var imageData;
					
					#if appMode
					var image = LimeAssets.getImage("assets/"+actor.att.src);
					#else
					var image = alp.getLibrary().getImage("assets/"+actor.att.src);//,"name of library"
					#end


					#if flash
					imageData = image.src;
					#else
					imageData = BitmapData.fromImage (image);
					// trace("imageData:"+imageData);
					#end
					var b = new Bitmap (imageData);
					trace("image:"+b);
					a.addBitmap(b);
					a.init();
				default:
					if(actor.att.src != ""){
						#if appMode
							var swfPath = swflib+":"+actor.att.src;
							var mc = Assets.getMovieClip (swfPath);
							a.addChild(mc);
							a.init();
						#else
							#if flash
							if(swflib!=""){
								trace("adding a swf file asset");
								var id = "/assets/"+swflib+".swf";
								//it got added as bytes earlier...
								// trace(alp.getLibrary().list("BINARY"));
								var bytes = alp.getLibrary().getBytes (id);
								// var ba = ByteArray.fromBytes(bytes);
								var mc:MovieClip; 
								var context = new LoaderContext (false, ApplicationDomain.currentDomain, null);
								context.allowCodeImport = true;
								var loader = new Loader ();
								loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (_) {
									trace("done:"+loader.content);
									mc = cast Type.createInstance (ApplicationDomain.currentDomain.getDefinition (actor.att.src), []);
									trace("mc:"+mc);
									a.addChild(mc);
									a.init();
								});
								loader.loadBytes (bytes, context);
								// loader.load (new URLRequest (id), context);
								// if (swf.symbols.exists 
							}	
							

							#else
							//assume it's a .bundle flash asset with no swf extension
							trace("adding a .bundle movieclip");
							var mc = alp.getLibrary().getMovieClip (actor.att.src);//LittleBoy
							a.addChild(mc);
							a.init();
							#end
						#end

					}
			}



			return a;
		}

    }
