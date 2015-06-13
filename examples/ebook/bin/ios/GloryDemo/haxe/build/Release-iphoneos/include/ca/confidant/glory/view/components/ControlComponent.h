#ifndef INCLUDED_ca_confidant_glory_view_components_ControlComponent
#define INCLUDED_ca_confidant_glory_view_components_ControlComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ControlComponent)
HX_DECLARE_CLASS2(neash,display,Bitmap)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
namespace ca{
namespace confidant{
namespace glory{
namespace view{
namespace components{


class ControlComponent_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef ControlComponent_obj OBJ_;
		ControlComponent_obj();
		Void __construct(::String type);

	public:
		static hx::ObjectPtr< ControlComponent_obj > __new(::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ControlComponent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ControlComponent"); }

		virtual Void addSVG( ::String t);
		Dynamic addSVG_dyn();

		virtual Void addBitmap( ::neash::display::Bitmap bMap);
		Dynamic addBitmap_dyn();

		::String type; /* REM */ 
		::neash::display::Bitmap defaultBitmap; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
} // end namespace components

#endif /* INCLUDED_ca_confidant_glory_view_components_ControlComponent */ 
