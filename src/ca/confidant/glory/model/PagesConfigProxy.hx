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
package ca.confidant.glory.model;

    import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
	import haxe.xml.Access;
	
	/*
	 * @author Allan Dowdeswell
	 * This proxy contains most of our useful data and is referenced when building and removing application pieces.
	 * After parsing the config XML, this proxy will send the notification triggering the GotoIntroMacro.
	 * 
	 */
	
	
	class PagesConfigProxy extends Proxy
	{
		public static inline var NAME:String = "pagesConfigProxy";
		private var _pagesXML:Xml;
		private var fast:haxe.xml.Access;
		private var allPages:Array<Map<String,Dynamic>>;
		private var imageItems:Array<Dynamic>;
		private var currentPage:Int;
		private var basePath:String;
		private var appTitle:String;
		/**
		 * Constructor.
		 */
		public function new ()
		{
			super ( NAME );
			currentPage=0;
		}

		public function processXML(input:Access){
			fast = input;
			parseXML();
		}
		public function getCurrentPage():Map<String,Dynamic>{
			return allPages[currentPage];
		}
		public function getAppTitle():String {
			return appTitle;
		}
		public function getBasePath():String {
			return basePath;
		}
		public function getPageIds():Array<String> {
			var a = new Array<String>();
			for (p in allPages){
				a.push(p.get("id"));
			}
			return a;
		}
		/*
		public function setPageOutTime(id:String,t:Int):Void{
			for(i in 0...allPages.length){
				if(allPages[i].get("id")==id){
					//currentPage=i;
				}
			}
		}*/
		
		public function setCurrentPageById(id:String):Void{
			for(i in 0...allPages.length){
				if(allPages[i].get("id")==id){
					currentPage=i;
				}
			}
		}
		public function getPage(id:String):Map<String,Dynamic>{
			for(thispage in allPages){
				if(thispage.get("id")==id){
					return thispage;
				}
			}
			return null;
		}
		public function getNextPage():Map<String,Dynamic>{
			
			var j:Int=1;
			trace("getNextPage:"+currentPage+":"+allPages.length);
			while((currentPage+j)<allPages.length){
				//check if normal page
				if(allPages[currentPage+j].get("type")=="normal") {
					//trace("normal");
					return allPages[currentPage+j];
				} else {
					//trace("notnormal");
					j++;
				}				
			} 
			
			return allPages[currentPage];
			
			
		}
		public function getPreviousPage():Map<String,Dynamic>{
			
			var j:Int=1;
			
			while((currentPage-j)>=0){
				//check if normal page
				if(allPages[currentPage-j].get("type")=="normal") {
					//trace("normal");
					return allPages[currentPage-j];
				} else {
					//trace("notnormal");
					j++;
				}				
			} 
			
			return allPages[currentPage];
			
		}
		public function getPageTransitionOutTime(pageId:String):Int{
			// Returns time specified in milliseconds. The ChangePageCommand uses this as a delay before initiating the transitionIn of the new page.
			var p=getPage(pageId);
			
			//trace(">>>>>>>"+p.get("transitionOutTime"));
			if((p!=null)&&(p.get("transitionOutTime")!=null)){
				return p.get("transitionOutTime");
			} else {
				return 1;
			}
		}
		public function getPageActors(pageId:String):Array<Access>{
			var p=getPage(pageId);
			if ((p!=null)&&(p.get("actors")!=null)){
				//trace("returning actors!");
				return p.get("actors");
			} else {
				//iOS currently returning empty, why?
				//trace("returning empty!");
				return new Array<Access>();
			}
		}
		public function getPageSounds(pageId:String):Array<Access>{
			var p=getPage(pageId);
			if ((p!=null)&&(p.get("sounds")!=null)){
				//trace("returning sounds!:"+Type.typeof(p.get("sounds")));
				return p.get("sounds");
			} else {
				//trace("returning no sounds!");
				return new Array<Access>();
			}
		}
		/*public function getPageFonts(pageId:String):Array<Access>{
			var p=getPage(pageId);
			if ((p!=null)&&(p.get("fonts")!=null)){
				return p.get("fonts");
			} else {
				return new Array<Access>();
			}
		}
		public function getPageStyles(pageId:String):Array<Access>{
			var p=getPage(pageId);
			if ((p!=null)&&(p.get("styles")!=null)){
				return p.get("styles");
			} else {
				return new Array<Access>();
			}
		}*/
		public function getAppControls():Array<Access>{
			if (fast.node.controls.hasNode.actor){
				return fast.node.controls.nodes.actor;
			}
			return new Array<Access>();
		}
		public function getControlHref(controlId:String):String{
			if (fast.node.controls.hasNode.actor){
				for(node in fast.node.controls.nodes.actor){
					if(node.att.id==controlId){
						return node.att.href;
					}
				}

			}
			return "#";
		}
		public function getActorHref(controlId:String):String{
			if (fast.node.page.hasNode.actor){
				for(node in fast.node.page.nodes.actor){
					if(node.att.id==controlId){
						return node.att.href;
					}
				}
			}
			return "#";
		}
		public function numpages():Int{
			return allPages.length;
		}

		private function parseXML():Void{
			allPages=new Array();
			//feedItems=new Array();
			imageItems=new Array();
			//for each (var thispage:XML in _pagesXML..page){
			//trace("parseXML");
			basePath = (fast.has.basePath) ? fast.att.basePath : "/";
			appTitle = (fast.has.title) ? fast.att.title : "";
			for(thispage in fast.nodes.page){
				var h:Map<String,Dynamic> = new Map<String,Dynamic>();
				if(thispage.has.id) h.set("id",thispage.att.id);
				if(thispage.has.swflibrary) {
					h.set("swflibrary",thispage.att.swflibrary);
				} else{
					h.set("swflibrary","");
				}
				if(thispage.has.src) h.set("src",thispage.att.src);
				if(thispage.has.title) h.set("title",thispage.att.title);
				if(thispage.has.type) h.set("type",thispage.att.type);
				if(thispage.has.transitionOutTime) h.set("transitionOutTime",thispage.att.transitionOutTime);
				if(thispage.has.transitionInTime) h.set("transitionInTime",thispage.att.transitionInTime);
				if(thispage.hasNode.actor) {
					h.set("actors",thispage.nodes.actor);
				}
				if(thispage.hasNode.sound) {
					h.set("sounds",thispage.nodes.sound);
				}
				if(thispage.hasNode.font) {
					h.set("fonts",thispage.nodes.font);
				}
				if(thispage.hasNode.style) {
					h.set("styles",thispage.nodes.style);
				}
				allPages.push(h);
			}

			sendNotification(ApplicationFacade.PAGES_CONFIG_READY,{action:"gotoIntro"});

		}


		public function pagesXML()//:XML
		{
			return _pagesXML;
		}

	}