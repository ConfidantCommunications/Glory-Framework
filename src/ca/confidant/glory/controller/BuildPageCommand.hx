/*
 * Copyright (c) 2018 D. Allan Dowdeswell
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
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
	import ca.confidant.glory.controller.LayoutHelper;
	import openfl.utils.AssetType;
	import openfl.utils.ByteArray;
	import ca.confidant.glory.controller.ActorComponentFactory;

	/* 
	 * @author Allan Dowdeswell
	 * This is triggered by the AsyncBuildPageMacro after assets are loaded.
	 * It retrieves configuration information from the PageConfigProxy and puts the page together with the necessary mediators.
	 */
class BuildPageCommand extends SimpleCommand {
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

				var actor:ActorComponent = ActorComponentFactory.instance.create(pageId,thisActor,swflib);

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

}
