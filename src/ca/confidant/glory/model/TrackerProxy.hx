package ca.confidant.glory.model;

    import org.puremvc.haxe.patterns.proxy.Proxy;
	import ca.confidant.glory.ApplicationFacade;
	import googleAnalytics.Visitor;
	import googleAnalytics.Tracker;
	import googleAnalytics.Session;
	import googleAnalytics.Page;
	import openfl.Lib;
	/*
	 *  @author Allan Dowdeswell
	 *  This proxy gives you a persistent connection to a tracker such as Google Analytics. It gets used 
	 *  by the PushState if you have a proper configuration tag in the config.xml.
	 *  Base code courtesy of https://github.com/sempaigames/haxe-ga
	 */
	class TrackerProxy extends Proxy
	{
		private var tracker:Tracker;
		private var visitor:Visitor;
		private var session:Session;

		public function new( name:String )
		{
	       		super ( name );

		}
		public function init(id:String, domain:String, version:String = "", locale:String = "C"):Void{
			
			if (version == "3"){
				tracker = new Tracker(id, domain);
				
				// (could also get unserialized from somewhere)
				visitor = new Visitor();
				visitor.setUserAgent('haXe-ga');
				visitor.setLocale(locale);
				
				session = new Session();
				
			}
		}
		
		public function trackPageview(pageId:String, pageTitle:String){	
			var res = Lib.current.stage.stageWidth + "x" + Lib.current.stage.stageHeight;
			visitor.setScreenResolution(res);
			// Assemble Page information
			var page = new Page(pageId);
			page.setTitle(pageTitle);

			// Track page view
			tracker.trackPageview(page, session, visitor);
		}
	}