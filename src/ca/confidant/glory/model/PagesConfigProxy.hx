package ca.confidant.glory.model;

    import org.puremvc.haxe.patterns.proxy.Proxy;
    import ca.confidant.glory.ApplicationFacade;
	import haxe.xml.Fast;
	
	/*
	 * @author Allan Dowdeswell
	 * This proxy contains most of our useful data and is referenced when building and removing application pieces.
	 * After parsing the config XML, this proxy will send the notification triggering the GotoIntroCommand.
	 * 
	 */
	
	
	class PagesConfigProxy extends Proxy
	{
		public static inline var NAME:String = "pagesConfigProxy";
		private var _pagesXML:Xml;
		private var fast:haxe.xml.Fast;
		private var allPages:Array<Map<String,Dynamic>>;

		private var imageItems:Array<Dynamic>;
		// private var randomPicks:Array<Dynamic>;
		// private var positions:Array<Map<String,Dynamic>>;
		// private var randomPositions:Array<Dynamic>;

		private var chosenpages:Array<Dynamic>;
		private var chosenLayout:String;
		private var currentPage:Int;
		/**
		 * Constructor.
		 */
		public function new ()
		{
			super ( NAME );
			//trace("I am Pages Config Proxy!!!!");
		}

		public function processXML(rawXML:String){
			currentPage=0; //arrays start at zero
			_pagesXML=Xml.parse(rawXML);
			fast = new haxe.xml.Fast(_pagesXML.firstElement());
			parseXML();
		}
		public function getCurrentPage():Map<String,Dynamic>{
			return allPages[currentPage];
		}
		
		
		public function setPageOutTime(id:String,t:Int):Void{
			for(i in 0...allPages.length){
				if(allPages[i].get("id")==id){
					//currentPage=i;
				}
			}
		}
		
		public function setCurrentPageById(id:String):Void{
			for(i in 0...allPages.length){
				if(allPages[i].get("id")==id){
					currentPage=i;
				}
			}
		}
		public function getPageById(id:String):Map<String,Dynamic>{
			for(i in 0...allPages.length){
				if(allPages[i].get("id")==id){
					return allPages[i];
				}
				
			}
			return null;
		}
		public function getNextPage():Map<String,Dynamic>{
			
			var j:Int=1;
			
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
			
			return null;
			
			
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
			
			return null;
			
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
		public function getPageActors(pageId:String):List<Fast>{
			var p=getPage(pageId);
			if ((p!=null)&&(p.get("actors")!=null)){
				//trace("returning actors!");
				return p.get("actors");
			} else {
				//iOS currently returning empty, why?
				//trace("returning empty!");
				return new List<Fast>();
			}
		}
		public function getPageSounds(pageId:String):List<Fast>{
			var p=getPage(pageId);
			if ((p!=null)&&(p.get("sounds")!=null)){
				//trace("returning sounds!:"+Type.typeof(p.get("sounds")));
				return p.get("sounds");
			} else {
				//trace("returning no sounds!");
				return new List<Fast>();
			}
		}
		public function getAppControls():List<Fast>{
			//trace("getAppControls");
			if (fast.node.controls.hasNode.button){
				return fast.node.controls.nodes.button;
			}
			return new List<Fast>();
		}
		public function getControlHref(controlId:String):String{
			if (fast.node.controls.hasNode.button){
				for(node in fast.node.controls.nodes.button){
					//trace("getControlHref:"+node.att.id);
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
					//trace("getControlHref:"+node.att.id);
					if(node.att.id==controlId){
						return node.att.href;
					}
				}

			}
			return "#";
		}
		private function getPage(pageId:String):Map<String,Dynamic>{
			for(thispage in allPages){
				if(thispage.get("id")==pageId){
					return thispage;
				}
			}
			return null;
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

			for(thispage in fast.nodes.page){
				var h:Map<String,Dynamic> = new Map<String,Dynamic>();
				if(thispage.has.id) h.set("id",thispage.att.id);
				//if(thispage.has.y) h.set("y",thispage.att.y);
				//if(thispage.has.x) h.set("x",thispage.att.x);
				if(thispage.has.src) h.set("src",thispage.att.src);
				if(thispage.has.type) h.set("type",thispage.att.type);
				if(thispage.has.transitionOutTime) h.set("transitionOutTime",thispage.att.transitionOutTime);
				if(thispage.has.transitionInTime) h.set("transitionInTime",thispage.att.transitionInTime);
				if(thispage.hasNode.actor) {
					//trace("actors:"+thispage.nodes.actor);
					//trace(Type.typeof(thispage.nodes.actor));
					h.set("actors",thispage.nodes.actor);
				}
				if(thispage.hasNode.sound) {
					//trace("hasSounds:"+thispage.att.id);
					h.set("sounds",thispage.nodes.sound);
					
				}

				//loadItems.push({name:thispage.@name,y:thispage.@y,x:thispage.@x,height:thispage.@height,width:thispage.@width,src:thispage.@src,group:thispage.@group,force:thispage.@force,config:thispage.config[0]});
				allPages.push(h);
				//trace(thispage.att.name);

			}

			sendNotification(ApplicationFacade.PAGES_CONFIG_READY);

		}


		public function pagesXML()//:XML
		{
			return _pagesXML;
		}

	}