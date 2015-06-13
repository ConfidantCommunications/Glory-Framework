#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Observer
#define INCLUDED_org_puremvc_haxe_patterns_observer_Observer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/IObserver.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IObserver)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Observer)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace observer{


class Observer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Observer_obj OBJ_;
		Observer_obj();
		Void __construct(Dynamic notifyMethod,Dynamic notifyContext);

	public:
		static hx::ObjectPtr< Observer_obj > __new(Dynamic notifyMethod,Dynamic notifyContext);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Observer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IObserver_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IObserver_delegate_< Observer_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Observer"); }

		virtual bool compareNotifyContext( Dynamic object);
		Dynamic compareNotifyContext_dyn();

		virtual Void notifyObserver( ::org::puremvc::haxe::interfaces::INotification notification);
		Dynamic notifyObserver_dyn();

		virtual Dynamic getNotifyContext( );
		Dynamic getNotifyContext_dyn();

		virtual Dynamic getNotifyMethod( );
		Dynamic getNotifyMethod_dyn();

		virtual Void setNotifyContext( Dynamic notifyContext);
		Dynamic setNotifyContext_dyn();

		virtual Void setNotifyMethod( Dynamic notifyMethod);
		Dynamic setNotifyMethod_dyn();

		Dynamic context; /* REM */ 
		Dynamic notify; /* REM */ 
		Dynamic &notify_dyn() { return notify;}
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace observer

#endif /* INCLUDED_org_puremvc_haxe_patterns_observer_Observer */ 
