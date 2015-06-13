#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#define INCLUDED_org_puremvc_haxe_patterns_observer_Notifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/INotifier.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IFacade)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace observer{


class Notifier_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Notifier_obj OBJ_;
		Notifier_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Notifier_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Notifier_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::INotifier_obj *()
			{ return new ::org::puremvc::haxe::interfaces::INotifier_delegate_< Notifier_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Notifier"); }

		::org::puremvc::haxe::interfaces::IFacade facade; /* REM */ 
		virtual Void sendNotification( ::String notificationName,Dynamic body,::String type);
		Dynamic sendNotification_dyn();

};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace observer

#endif /* INCLUDED_org_puremvc_haxe_patterns_observer_Notifier */ 
