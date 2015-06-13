#ifndef INCLUDED_native_display_OpenGLView
#define INCLUDED_native_display_OpenGLView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/DirectRenderer.h>
HX_DECLARE_CLASS2(native,display,DirectRenderer)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,OpenGLView)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace native{
namespace display{


class OpenGLView_obj : public ::native::display::DirectRenderer_obj{
	public:
		typedef ::native::display::DirectRenderer_obj super;
		typedef OpenGLView_obj OBJ_;
		OpenGLView_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OpenGLView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OpenGLView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpenGLView"); }

		static ::String CONTEXT_LOST; /* REM */ 
		static ::String CONTEXT_RESTORED; /* REM */ 
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_OpenGLView */ 
