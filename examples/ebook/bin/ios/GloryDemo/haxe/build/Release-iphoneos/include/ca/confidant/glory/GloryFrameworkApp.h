#ifndef INCLUDED_ca_confidant_glory_GloryFrameworkApp
#define INCLUDED_ca_confidant_glory_GloryFrameworkApp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS3(ca,confidant,glory,GloryFrameworkApp)
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


class GloryFrameworkApp_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef GloryFrameworkApp_obj OBJ_;
		GloryFrameworkApp_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GloryFrameworkApp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GloryFrameworkApp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GloryFrameworkApp"); }

		virtual Void displayMessage( ::String m);
		Dynamic displayMessage_dyn();

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory

#endif /* INCLUDED_ca_confidant_glory_GloryFrameworkApp */ 
