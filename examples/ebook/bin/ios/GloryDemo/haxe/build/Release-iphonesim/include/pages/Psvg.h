#ifndef INCLUDED_pages_Psvg
#define INCLUDED_pages_Psvg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <ca/confidant/glory/view/components/PageComponent.h>
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ActorComponent)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,PageComponent)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS1(pages,Psvg)
namespace pages{


class Psvg_obj : public ::ca::confidant::glory::view::components::PageComponent_obj{
	public:
		typedef ::ca::confidant::glory::view::components::PageComponent_obj super;
		typedef Psvg_obj OBJ_;
		Psvg_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Psvg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Psvg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Psvg"); }

		virtual Void onTimerTick( );
		Dynamic onTimerTick_dyn();

		virtual Void startTimer( hx::Null< int >  i);
		Dynamic startTimer_dyn();

		virtual Void init( );

		::ca::confidant::glory::view::components::ActorComponent star; /* REM */ 
		::haxe::Timer myTimer; /* REM */ 
};

} // end namespace pages

#endif /* INCLUDED_pages_Psvg */ 
