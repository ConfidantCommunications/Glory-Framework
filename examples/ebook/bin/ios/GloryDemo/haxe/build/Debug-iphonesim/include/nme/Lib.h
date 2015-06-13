#ifndef INCLUDED_nme_Lib
#define INCLUDED_nme_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,ManagedStage)
HX_DECLARE_CLASS2(native,display,MovieClip)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,net,URLRequest)
HX_DECLARE_CLASS1(nme,Lib)
namespace nme{


class Lib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Lib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Lib_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Lib"); }

		static int FULLSCREEN; /* REM */ 
		static int BORDERLESS; /* REM */ 
		static int RESIZABLE; /* REM */ 
		static int HARDWARE; /* REM */ 
		static int VSYNC; /* REM */ 
		static int HW_AA; /* REM */ 
		static int HW_AA_HIRES; /* REM */ 
		static int ALLOW_SHADERS; /* REM */ 
		static int REQUIRE_SHADERS; /* REM */ 
		static int DEPTH_BUFFER; /* REM */ 
		static int STENCIL_BUFFER; /* REM */ 
		static Float MIN_FLOAT_VALUE; /* REM */ 
		static Float MAX_FLOAT_VALUE; /* REM */ 
		static ::String company; /* REM */ 
		static ::native::display::MovieClip current; /* REM */ 
		static ::String file; /* REM */ 
		static int initHeight; /* REM */ 
		static int initWidth; /* REM */ 
		static ::String packageName; /* REM */ 
		static ::native::display::Stage stage; /* REM */ 
		static ::String version; /* REM */ 
		static Void close( );
		static Dynamic close_dyn();

		static Void create( Dynamic onLoaded,int width,int height,hx::Null< Float >  frameRate,hx::Null< int >  color,hx::Null< int >  flags,::String title,::native::display::BitmapData icon);
		static Dynamic create_dyn();

		static ::native::display::ManagedStage createManagedStage( int width,int height);
		static Dynamic createManagedStage_dyn();

		static Void exit( );
		static Dynamic exit_dyn();

		static Void forceClose( );
		static Dynamic forceClose_dyn();

		static int getTimer( );
		static Dynamic getTimer_dyn();

		static Void getURL( ::native::net::URLRequest url,::String target);
		static Dynamic getURL_dyn();

		static Void pause( );
		static Dynamic pause_dyn();

		static Void postUICallback( Dynamic handler);
		static Dynamic postUICallback_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void setPackage( ::String company,::String file,::String packageName,::String version);
		static Dynamic setPackage_dyn();

		static Void trace( Dynamic arg);
		static Dynamic trace_dyn();

		static ::String get_company( );
		static Dynamic get_company_dyn();

		static ::native::display::MovieClip get_current( );
		static Dynamic get_current_dyn();

		static ::String get_file( );
		static Dynamic get_file_dyn();

		static int get_initHeight( );
		static Dynamic get_initHeight_dyn();

		static int get_initWidth( );
		static Dynamic get_initWidth_dyn();

		static ::String get_packageName( );
		static Dynamic get_packageName_dyn();

		static ::native::display::Stage get_stage( );
		static Dynamic get_stage_dyn();

		static ::String get_version( );
		static Dynamic get_version_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_Lib */ 
