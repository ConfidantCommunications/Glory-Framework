#ifndef INCLUDED_org_puremvc_haxe_core_Model
#define INCLUDED_org_puremvc_haxe_core_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/IModel.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(org,puremvc,haxe,core,Model)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IModel)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace core{


class Model_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Model_obj OBJ_;
		Model_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Model_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Model_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IModel_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IModel_delegate_< Model_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Model"); }

		::Hash proxyMap; /* REM */ 
		virtual ::org::puremvc::haxe::interfaces::IProxy removeProxy( ::String proxyName);
		Dynamic removeProxy_dyn();

		virtual bool hasProxy( ::String proxyName);
		Dynamic hasProxy_dyn();

		virtual ::org::puremvc::haxe::interfaces::IProxy retrieveProxy( ::String proxyName);
		Dynamic retrieveProxy_dyn();

		virtual Void registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy);
		Dynamic registerProxy_dyn();

		virtual Void initializeModel( );
		Dynamic initializeModel_dyn();

		static ::org::puremvc::haxe::interfaces::IModel getInstance( );
		static Dynamic getInstance_dyn();

		static ::org::puremvc::haxe::interfaces::IModel instance; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace core

#endif /* INCLUDED_org_puremvc_haxe_core_Model */ 
