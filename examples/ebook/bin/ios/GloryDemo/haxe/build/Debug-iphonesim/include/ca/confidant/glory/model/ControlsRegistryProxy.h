#ifndef INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy
#define INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS4(ca,confidant,glory,model,ControlsRegistryProxy)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace model{


class ControlsRegistryProxy_obj : public ::org::puremvc::haxe::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::proxy::Proxy_obj super;
		typedef ControlsRegistryProxy_obj OBJ_;
		ControlsRegistryProxy_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ControlsRegistryProxy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ControlsRegistryProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ControlsRegistryProxy"); }

		virtual Void registerControl( ::native::display::DisplayObject d);
		Dynamic registerControl_dyn();

		virtual Array< ::native::display::DisplayObject > getControls( );
		Dynamic getControls_dyn();

		Array< ::native::display::DisplayObject > controls; /* REM */ 
		int currentPage; /* REM */ 
		static ::String NAME; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model

#endif /* INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy */ 
