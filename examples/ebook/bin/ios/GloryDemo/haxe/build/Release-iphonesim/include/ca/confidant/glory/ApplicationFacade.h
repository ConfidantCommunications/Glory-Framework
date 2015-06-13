#ifndef INCLUDED_ca_confidant_glory_ApplicationFacade
#define INCLUDED_ca_confidant_glory_ApplicationFacade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/facade/Facade.h>
HX_DECLARE_CLASS3(ca,confidant,glory,ApplicationFacade)
HX_DECLARE_CLASS3(ca,confidant,glory,GloryFrameworkApp)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IFacade)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,facade,Facade)
namespace ca{
namespace confidant{
namespace glory{


class ApplicationFacade_obj : public ::org::puremvc::haxe::patterns::facade::Facade_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::facade::Facade_obj super;
		typedef ApplicationFacade_obj OBJ_;
		ApplicationFacade_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ApplicationFacade_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ApplicationFacade_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ApplicationFacade"); }

		virtual Void startup( ::ca::confidant::glory::GloryFrameworkApp app);
		Dynamic startup_dyn();

		virtual Void initializeController( );

		static ::String STARTUP; /* REM */ 
		static ::String MESSAGE; /* REM */ 
		static ::String INIT_XML_LOAD; /* REM */ 
		static ::String ASSETS_LOADED; /* REM */ 
		static ::String PAGES_CONFIG_READY; /* REM */ 
		static ::String CALL_EXTERNAL_FUNCTION; /* REM */ 
		static ::String CONSOLE_LOG; /* REM */ 
		static ::String STAGE_RESIZE; /* REM */ 
		static ::String SET_ACTIVE_WIDGET; /* REM */ 
		static ::String SET_CONTENT; /* REM */ 
		static ::String BUILD_PAGE; /* REM */ 
		static ::String REMOVE_PAGE; /* REM */ 
		static ::String BUILD_CONTROLS; /* REM */ 
		static ::String CHANGE_PAGE; /* REM */ 
		static ::String HTTP_LINK; /* REM */ 
		static ::String TIMER_TICK; /* REM */ 
		static ::String TIMER_ENABLE; /* REM */ 
		static ::String TIMER_DISABLE; /* REM */ 
		static ::String PAN_LEFT; /* REM */ 
		static ::String PAN_RIGHT; /* REM */ 
		static ::String PAN_STOP; /* REM */ 
		static ::String TOGGLE_OPTIONS; /* REM */ 
		static ::String PLAY_SOUND; /* REM */ 
		static ::ca::confidant::glory::ApplicationFacade instance; /* REM */ 
		static ::ca::confidant::glory::ApplicationFacade getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory

#endif /* INCLUDED_ca_confidant_glory_ApplicationFacade */ 
