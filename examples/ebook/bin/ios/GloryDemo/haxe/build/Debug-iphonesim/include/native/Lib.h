#ifndef INCLUDED_native_Lib
#define INCLUDED_native_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(native,Lib)
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
namespace native{


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
		static ::native::display::MovieClip current; /* REM */ 
		static int initHeight; /* REM */ 
		static int initWidth; /* REM */ 
		static ::native::display::Stage stage; /* REM */ 
		static ::native::display::MovieClip nmeCurrent; /* REM */ 
		static Dynamic nmeMainFrame; /* REM */ 
		static ::native::display::Stage nmeStage; /* REM */ 
		static bool sIsInit; /* REM */ 
		static ::String company; /* REM */ 
		static ::String version; /* REM */ 
		static ::String packageName; /* REM */ 
		static ::String file; /* REM */ 
		static Void close( );
		static Dynamic close_dyn();

		static Void create( Dynamic inOnLoaded,int inWidth,int inHeight,hx::Null< Float >  inFrameRate,hx::Null< int >  inColour,hx::Null< int >  inFlags,::String inTitle,::native::display::BitmapData inIcon);
		static Dynamic create_dyn();

		static ::native::display::ManagedStage createManagedStage( int inWidth,int inHeight,hx::Null< int >  inFlags);
		static Dynamic createManagedStage_dyn();

		static Void exit( );
		static Dynamic exit_dyn();

		static Void forceClose( );
		static Dynamic forceClose_dyn();

		static int getTimer( );
		static Dynamic getTimer_dyn();

		static Void getURL( ::native::net::URLRequest url,::String target);
		static Dynamic getURL_dyn();

		static Void nmeSetCurrentStage( ::native::display::Stage inStage);
		static Dynamic nmeSetCurrentStage_dyn();

		static Void pause( );
		static Dynamic pause_dyn();

		static Void postUICallback( Dynamic inCallback);
		static Dynamic postUICallback_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void setIcon( ::String path);
		static Dynamic setIcon_dyn();

		static Void setPackage( ::String inCompany,::String inFile,::String inPack,::String inVersion);
		static Dynamic setPackage_dyn();

		static ::native::display::MovieClip get_current( );
		static Dynamic get_current_dyn();

		static ::native::display::Stage get_stage( );
		static Dynamic get_stage_dyn();

		static Dynamic nme_set_package; /* REM */ 
		static Dynamic &nme_set_package_dyn() { return nme_set_package;}
		static Dynamic nme_get_frame_stage; /* REM */ 
		static Dynamic &nme_get_frame_stage_dyn() { return nme_get_frame_stage;}
		static Dynamic nme_get_url; /* REM */ 
		static Dynamic &nme_get_url_dyn() { return nme_get_url;}
		static Dynamic nme_pause_animation; /* REM */ 
		static Dynamic &nme_pause_animation_dyn() { return nme_pause_animation;}
		static Dynamic nme_resume_animation; /* REM */ 
		static Dynamic &nme_resume_animation_dyn() { return nme_resume_animation;}
};

} // end namespace native

#endif /* INCLUDED_native_Lib */ 
