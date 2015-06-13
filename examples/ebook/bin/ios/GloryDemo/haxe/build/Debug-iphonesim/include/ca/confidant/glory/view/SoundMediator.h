#ifndef INCLUDED_ca_confidant_glory_view_SoundMediator
#define INCLUDED_ca_confidant_glory_view_SoundMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS4(ca,confidant,glory,view,SoundMediator)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,media,Sound)
HX_DECLARE_CLASS2(native,media,SoundChannel)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace ca{
namespace confidant{
namespace glory{
namespace view{


class SoundMediator_obj : public ::org::puremvc::haxe::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::mediator::Mediator_obj super;
		typedef SoundMediator_obj OBJ_;
		SoundMediator_obj();
		Void __construct(::String id,::native::media::Sound theSound);

	public:
		static hx::ObjectPtr< SoundMediator_obj > __new(::String id,::native::media::Sound theSound);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundMediator"); }

		virtual ::native::media::Sound sound( );
		Dynamic sound_dyn();

		virtual Void handleNotification( ::org::puremvc::haxe::interfaces::INotification note);

		virtual Array< ::String > listNotificationInterests( );

		virtual Void addListeners( );
		Dynamic addListeners_dyn();

		::native::media::SoundChannel sc; /* REM */ 
		::native::media::Sound mySound; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view

#endif /* INCLUDED_ca_confidant_glory_view_SoundMediator */ 
