#ifndef INCLUDED_ca_confidant_glory_view_components_ActorComponent
#define INCLUDED_ca_confidant_glory_view_components_ActorComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ActorComponent)
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


class ActorComponent_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef ActorComponent_obj OBJ_;
		ActorComponent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ActorComponent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorComponent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ActorComponent"); }

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

#endif /* INCLUDED_ca_confidant_glory_view_components_ActorComponent */ 
