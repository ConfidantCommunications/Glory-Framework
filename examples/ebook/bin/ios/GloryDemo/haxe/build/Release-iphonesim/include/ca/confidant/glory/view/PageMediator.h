#ifndef INCLUDED_ca_confidant_glory_view_PageMediator
#define INCLUDED_ca_confidant_glory_view_PageMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS4(ca,confidant,glory,view,PageMediator)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,PageComponent)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace ca{
namespace confidant{
namespace glory{
namespace view{


class PageMediator_obj : public ::org::puremvc::haxe::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::mediator::Mediator_obj super;
		typedef PageMediator_obj OBJ_;
		PageMediator_obj();
		Void __construct(::String id,::ca::confidant::glory::view::components::PageComponent viewComponent);

	public:
		static hx::ObjectPtr< PageMediator_obj > __new(::String id,::ca::confidant::glory::view::components::PageComponent viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PageMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PageMediator"); }

		virtual ::ca::confidant::glory::view::components::PageComponent page( );
		Dynamic page_dyn();

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view

#endif /* INCLUDED_ca_confidant_glory_view_PageMediator */ 
