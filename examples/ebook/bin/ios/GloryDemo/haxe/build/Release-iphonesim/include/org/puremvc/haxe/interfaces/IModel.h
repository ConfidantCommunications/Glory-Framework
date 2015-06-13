#ifndef INCLUDED_org_puremvc_haxe_interfaces_IModel
#define INCLUDED_org_puremvc_haxe_interfaces_IModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IModel)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{


class IModel_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IModel_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool hasProxy( ::String proxyName)=0;
		Dynamic hasProxy_dyn();
virtual ::org::puremvc::haxe::interfaces::IProxy removeProxy( ::String proxyName)=0;
		Dynamic removeProxy_dyn();
virtual ::org::puremvc::haxe::interfaces::IProxy retrieveProxy( ::String proxyName)=0;
		Dynamic retrieveProxy_dyn();
virtual Void registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy)=0;
		Dynamic registerProxy_dyn();
};

#define DELEGATE_org_puremvc_haxe_interfaces_IModel \
virtual bool hasProxy( ::String proxyName) { return mDelegate->hasProxy(proxyName);}  \
virtual Dynamic hasProxy_dyn() { return mDelegate->hasProxy_dyn();}  \
virtual ::org::puremvc::haxe::interfaces::IProxy removeProxy( ::String proxyName) { return mDelegate->removeProxy(proxyName);}  \
virtual Dynamic removeProxy_dyn() { return mDelegate->removeProxy_dyn();}  \
virtual ::org::puremvc::haxe::interfaces::IProxy retrieveProxy( ::String proxyName) { return mDelegate->retrieveProxy(proxyName);}  \
virtual Dynamic retrieveProxy_dyn() { return mDelegate->retrieveProxy_dyn();}  \
virtual Void registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy) { return mDelegate->registerProxy(proxy);}  \
virtual Dynamic registerProxy_dyn() { return mDelegate->registerProxy_dyn();}  \


template<typename IMPL>
class IModel_delegate_ : public IModel_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IModel_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_interfaces_IModel
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_interfaces_IModel */ 
