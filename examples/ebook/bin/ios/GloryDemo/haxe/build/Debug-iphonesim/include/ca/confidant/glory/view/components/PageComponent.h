#ifndef INCLUDED_ca_confidant_glory_view_components_PageComponent
#define INCLUDED_ca_confidant_glory_view_components_PageComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ActorComponent)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,PageComponent)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace ca{
namespace confidant{
namespace glory{
namespace view{
namespace components{


class PageComponent_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef PageComponent_obj OBJ_;
		PageComponent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PageComponent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PageComponent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PageComponent"); }

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void addActor( ::String key,::ca::confidant::glory::view::components::ActorComponent spr);
		Dynamic addActor_dyn();

		::Hash myActors; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
} // end namespace components

#endif /* INCLUDED_ca_confidant_glory_view_components_PageComponent */ 
