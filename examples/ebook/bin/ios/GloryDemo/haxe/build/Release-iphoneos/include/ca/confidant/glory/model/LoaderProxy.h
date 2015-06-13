#ifndef INCLUDED_ca_confidant_glory_model_LoaderProxy
#define INCLUDED_ca_confidant_glory_model_LoaderProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(ca,confidant,glory,model,LoaderProxy)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace model{


class LoaderProxy_obj : public ::org::puremvc::haxe::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::proxy::Proxy_obj super;
		typedef LoaderProxy_obj OBJ_;
		LoaderProxy_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LoaderProxy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LoaderProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LoaderProxy"); }

		virtual Void loadAllAssets( );
		Dynamic loadAllAssets_dyn();

		virtual ::neash::display::BitmapData getBitmapData( ::String id,hx::Null< bool >  b);
		Dynamic getBitmapData_dyn();

		virtual ::String getText( ::String id);
		Dynamic getText_dyn();

		virtual Dynamic retrieveLoadedAsset( ::String key);
		Dynamic retrieveLoadedAsset_dyn();

		virtual Void loadXML( ::String src);
		Dynamic loadXML_dyn();

		::Hash loadedItems; /* REM */ 
		static ::String NAME; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model

#endif /* INCLUDED_ca_confidant_glory_model_LoaderProxy */ 
