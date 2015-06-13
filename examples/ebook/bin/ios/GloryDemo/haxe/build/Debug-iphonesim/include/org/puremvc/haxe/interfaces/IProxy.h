#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#define INCLUDED_org_puremvc_haxe_interfaces_IProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{


class IProxy_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IProxy_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void onRemove( )=0;
		Dynamic onRemove_dyn();
virtual Void onRegister( )=0;
		Dynamic onRegister_dyn();
virtual Dynamic getData( )=0;
		Dynamic getData_dyn();
virtual Void setData( Dynamic data)=0;
		Dynamic setData_dyn();
virtual ::String getProxyName( )=0;
		Dynamic getProxyName_dyn();
};

#define DELEGATE_org_puremvc_haxe_interfaces_IProxy \
virtual Void onRemove( ) { return mDelegate->onRemove();}  \
virtual Dynamic onRemove_dyn() { return mDelegate->onRemove_dyn();}  \
virtual Void onRegister( ) { return mDelegate->onRegister();}  \
virtual Dynamic onRegister_dyn() { return mDelegate->onRegister_dyn();}  \
virtual Dynamic getData( ) { return mDelegate->getData();}  \
virtual Dynamic getData_dyn() { return mDelegate->getData_dyn();}  \
virtual Void setData( Dynamic data) { return mDelegate->setData(data);}  \
virtual Dynamic setData_dyn() { return mDelegate->setData_dyn();}  \
virtual ::String getProxyName( ) { return mDelegate->getProxyName();}  \
virtual Dynamic getProxyName_dyn() { return mDelegate->getProxyName_dyn();}  \


template<typename IMPL>
class IProxy_delegate_ : public IProxy_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IProxy_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_interfaces_IProxy
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_interfaces_IProxy */ 
