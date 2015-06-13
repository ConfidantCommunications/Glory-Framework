#ifndef INCLUDED_native_display_DirectRenderer
#define INCLUDED_native_display_DirectRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/DisplayObject.h>
HX_DECLARE_CLASS2(native,display,DirectRenderer)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace native{
namespace display{


class DirectRenderer_obj : public ::native::display::DisplayObject_obj{
	public:
		typedef ::native::display::DisplayObject_obj super;
		typedef DirectRenderer_obj OBJ_;
		DirectRenderer_obj();
		Void __construct(::String __o_inType);

	public:
		static hx::ObjectPtr< DirectRenderer_obj > __new(::String __o_inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DirectRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DirectRenderer"); }

		Dynamic render;
		inline Dynamic &render_dyn() {return render; }

		virtual Void nmeOnRender( Dynamic inRect);
		Dynamic nmeOnRender_dyn();

		static Dynamic nme_direct_renderer_create; /* REM */ 
		static Dynamic &nme_direct_renderer_create_dyn() { return nme_direct_renderer_create;}
		static Dynamic nme_direct_renderer_set; /* REM */ 
		static Dynamic &nme_direct_renderer_set_dyn() { return nme_direct_renderer_set;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_DirectRenderer */ 
