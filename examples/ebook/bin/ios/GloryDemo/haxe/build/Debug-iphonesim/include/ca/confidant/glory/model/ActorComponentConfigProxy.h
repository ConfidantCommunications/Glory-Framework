#ifndef INCLUDED_ca_confidant_glory_model_ActorComponentConfigProxy
#define INCLUDED_ca_confidant_glory_model_ActorComponentConfigProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS4(ca,confidant,glory,model,ActorComponentConfigProxy)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace model{


class ActorComponentConfigProxy_obj : public ::org::puremvc::haxe::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::proxy::Proxy_obj super;
		typedef ActorComponentConfigProxy_obj OBJ_;
		ActorComponentConfigProxy_obj();
		Void __construct(::String id,::String theType,::String __o_theAction);

	public:
		static hx::ObjectPtr< ActorComponentConfigProxy_obj > __new(::String id,::String theType,::String __o_theAction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorComponentConfigProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ActorComponentConfigProxy"); }

		::String action; /* REM */ 
		::String type; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model

#endif /* INCLUDED_ca_confidant_glory_model_ActorComponentConfigProxy */ 
