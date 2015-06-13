#ifndef INCLUDED_ca_confidant_glory_view_ActorComponentMediator
#define INCLUDED_ca_confidant_glory_view_ActorComponentMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS4(ca,confidant,glory,model,ActorComponentConfigProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,view,ActorComponentMediator)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ActorComponent)
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
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace view{


class ActorComponentMediator_obj : public ::org::puremvc::haxe::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::mediator::Mediator_obj super;
		typedef ActorComponentMediator_obj OBJ_;
		ActorComponentMediator_obj();
		Void __construct(::String id,::ca::confidant::glory::view::components::ActorComponent viewComponent,::ca::confidant::glory::model::ActorComponentConfigProxy accp);

	public:
		static hx::ObjectPtr< ActorComponentMediator_obj > __new(::String id,::ca::confidant::glory::view::components::ActorComponent viewComponent,::ca::confidant::glory::model::ActorComponentConfigProxy accp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorComponentMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ActorComponentMediator"); }

		virtual ::ca::confidant::glory::view::components::ActorComponent actor( );
		Dynamic actor_dyn();

		virtual Void onPanRight( Dynamic e);
		Dynamic onPanRight_dyn();

		virtual Void onPanLeft( Dynamic e);
		Dynamic onPanLeft_dyn();

		virtual Void handleNotification( ::org::puremvc::haxe::interfaces::INotification note);

		virtual Array< ::String > listNotificationInterests( );

		virtual Void onActorClicked( ::native::events::MouseEvent e);
		Dynamic onActorClicked_dyn();

		virtual Void addListeners( );
		Dynamic addListeners_dyn();

		::String type; /* REM */ 
		::ca::confidant::glory::model::ActorComponentConfigProxy config; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view

#endif /* INCLUDED_ca_confidant_glory_view_ActorComponentMediator */ 
