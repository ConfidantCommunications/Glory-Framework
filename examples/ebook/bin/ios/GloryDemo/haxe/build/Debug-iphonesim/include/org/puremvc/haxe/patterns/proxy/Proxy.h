#ifndef INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy
#define INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#include <org/puremvc/haxe/interfaces/IProxy.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace proxy{


class Proxy_obj : public ::org::puremvc::haxe::patterns::observer::Notifier_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::observer::Notifier_obj super;
		typedef Proxy_obj OBJ_;
		Proxy_obj();
		Void __construct(::String proxyName,Dynamic data);

	public:
		static hx::ObjectPtr< Proxy_obj > __new(::String proxyName,Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Proxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IProxy_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IProxy_delegate_< Proxy_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Proxy"); }

		Dynamic data; /* REM */ 
		::String proxyName; /* REM */ 
		virtual Void onRemove( );
		Dynamic onRemove_dyn();

		virtual Void onRegister( );
		Dynamic onRegister_dyn();

		virtual Dynamic getData( );
		Dynamic getData_dyn();

		virtual Void setData( Dynamic data);
		Dynamic setData_dyn();

		virtual ::String getProxyName( );
		Dynamic getProxyName_dyn();

		static ::String NAME; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace proxy

#endif /* INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy */ 
