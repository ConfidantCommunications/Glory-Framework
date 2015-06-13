#ifndef INCLUDED_ca_confidant_glory_view_ControlComponentMediator
#define INCLUDED_ca_confidant_glory_view_ControlComponentMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS4(ca,confidant,glory,view,ControlComponentMediator)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ControlComponent)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace ca{
namespace confidant{
namespace glory{
namespace view{


class ControlComponentMediator_obj : public ::org::puremvc::haxe::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::mediator::Mediator_obj super;
		typedef ControlComponentMediator_obj OBJ_;
		ControlComponentMediator_obj();
		Void __construct(::String id,::ca::confidant::glory::view::components::ControlComponent viewComponent);

	public:
		static hx::ObjectPtr< ControlComponentMediator_obj > __new(::String id,::ca::confidant::glory::view::components::ControlComponent viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ControlComponentMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ControlComponentMediator"); }

		virtual ::ca::confidant::glory::view::components::ControlComponent control( );
		Dynamic control_dyn();

		virtual Void onControlClicked( ::native::events::MouseEvent e);
		Dynamic onControlClicked_dyn();

		virtual Void onMouseUp( ::native::events::MouseEvent e);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::native::events::MouseEvent e);
		Dynamic onMouseDown_dyn();

		virtual Void addListeners( );
		Dynamic addListeners_dyn();

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view

#endif /* INCLUDED_ca_confidant_glory_view_ControlComponentMediator */ 
