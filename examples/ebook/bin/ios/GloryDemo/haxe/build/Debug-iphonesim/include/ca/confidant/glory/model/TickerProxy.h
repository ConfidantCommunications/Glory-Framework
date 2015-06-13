#ifndef INCLUDED_ca_confidant_glory_model_TickerProxy
#define INCLUDED_ca_confidant_glory_model_TickerProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS4(ca,confidant,glory,model,TickerProxy)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace model{


class TickerProxy_obj : public ::org::puremvc::haxe::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::proxy::Proxy_obj super;
		typedef TickerProxy_obj OBJ_;
		TickerProxy_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TickerProxy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TickerProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TickerProxy"); }

		virtual Void setInterval( int i);
		Dynamic setInterval_dyn();

		virtual Void onTimerTick( );
		Dynamic onTimerTick_dyn();

		virtual Void stopTimer( );
		Dynamic stopTimer_dyn();

		virtual Void startTimer( hx::Null< int >  i);
		Dynamic startTimer_dyn();

		::haxe::Timer myTimer; /* REM */ 
		int interval; /* REM */ 
		static ::String NAME; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model

#endif /* INCLUDED_ca_confidant_glory_model_TickerProxy */ 
