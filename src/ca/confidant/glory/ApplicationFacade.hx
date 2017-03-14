package ca.confidant.glory;

    import org.puremvc.haxe.patterns.facade.Facade;

    import ca.confidant.glory.controller.StartupCommand;
	import ca.confidant.glory.GloryFrameworkApp;
	
	/*
	 * @author Allan Dowdeswell
	 * The facade serves to provide references to the app, mediators and proxies. 
	 * There are also constants defined here which are used application-wide.
	 * See PureMVC documentation for more information.
	 */
	
    class ApplicationFacade extends Facade
    {
        // Notification name constants. Some are not used yet.
        public static inline var STARTUP:String  					= "startup";
        public static inline var MESSAGE:String  					= "message";
        public static inline var INIT_XML_LOAD:String  				= "initXMLLoad";
        // public static inline var ASSETS_LOADED:String  				= "assetsLoaded";
        public static inline var PAGES_CONFIG_READY:String  		= "pagesConfigReady";
        public static inline var CALL_EXTERNAL_FUNCTION:String  	= "callExternalFunction";
        public static inline var CONSOLE_LOG:String  				= "consoleLog";
        public static inline var STAGE_RESIZE:String  				= "stageResize";
        public static inline var SET_ACTIVE_WIDGET:String  			= "setActiveWidget";
        public static inline var SET_CONTENT:String					= "setContent";
        public static inline var BUILD_PAGE:String					= "buildPage";
        public static inline var REMOVE_PAGE:String					= "removePage";
        public static inline var BUILD_CONTROLS:String				= "buildControls";
        public static inline var CHANGE_PAGE:String					= "changePage";
        public static inline var HTTP_LINK:String					= "httpLink";
        public static inline var TIMER_TICK:String					= "timerTick";
        public static inline var TIMER_ENABLE:String				= "timerEnable";
        public static inline var TIMER_DISABLE:String				= "timerDisable";
        public static inline var PAN_TICK:String					= "panTick";
        public static inline var PAN_STOP:String					= "panStop";
        public static inline var TOGGLE_OPTIONS:String				= "toggleOptions";
        public static inline var PLAY_SOUND:String					= "playSound";
		public static inline var INIT_PAGE_SOUNDS:String			= "initPageSounds";
		public static inline var DESTROY_PAGE_SOUNDS:String			= "destroyPageSounds";
		public static inline var DO_TRANSITION:String				= "doTransition";
        public static inline var HANDLE_LOADED_ASSET:String         = "handleLoadedAsset";
		
        private static var instance : ApplicationFacade;



        public static function getInstance() : ApplicationFacade {
            if ( instance == null )
            		instance = new ApplicationFacade( );
            return instance;
        }


        override private function initializeController( ) : Void
        {
            super.initializeController();
            registerCommand( STARTUP, StartupCommand );

        }

        public function startup( app:GloryFrameworkApp ):Void
        {
        	sendNotification( STARTUP, app );

        }

    }
