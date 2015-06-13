#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#define INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#include <org/puremvc/haxe/interfaces/IMediator.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace mediator{


class Mediator_obj : public ::org::puremvc::haxe::patterns::observer::Notifier_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::observer::Notifier_obj super;
		typedef Mediator_obj OBJ_;
		Mediator_obj();
		Void __construct(::String mediatorName,Dynamic viewComponent);

	public:
		static hx::ObjectPtr< Mediator_obj > __new(::String mediatorName,Dynamic viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IMediator_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IMediator_delegate_< Mediator_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Mediator"); }

		Dynamic viewComponent; /* REM */ 
		::String mediatorName; /* REM */ 
		virtual Void onRemove( );
		Dynamic onRemove_dyn();

		virtual Void onRegister( );
		Dynamic onRegister_dyn();

		virtual Void handleNotification( ::org::puremvc::haxe::interfaces::INotification notification);
		Dynamic handleNotification_dyn();

		virtual Array< ::String > listNotificationInterests( );
		Dynamic listNotificationInterests_dyn();

		virtual Dynamic getViewComponent( );
		Dynamic getViewComponent_dyn();

		virtual Void setViewComponent( Dynamic viewComponent);
		Dynamic setViewComponent_dyn();

		virtual ::String getMediatorName( );
		Dynamic getMediatorName_dyn();

		static ::String NAME; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace mediator

#endif /* INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator */ 
