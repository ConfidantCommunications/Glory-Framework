#ifndef INCLUDED_org_puremvc_haxe_interfaces_IObserver
#define INCLUDED_org_puremvc_haxe_interfaces_IObserver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IObserver)
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{


class IObserver_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IObserver_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool compareNotifyContext( Dynamic object)=0;
		Dynamic compareNotifyContext_dyn();
virtual Void notifyObserver( ::org::puremvc::haxe::interfaces::INotification notification)=0;
		Dynamic notifyObserver_dyn();
virtual Void setNotifyContext( Dynamic notifyContext)=0;
		Dynamic setNotifyContext_dyn();
virtual Void setNotifyMethod( Dynamic notifyMethod)=0;
		Dynamic setNotifyMethod_dyn();
};

#define DELEGATE_org_puremvc_haxe_interfaces_IObserver \
virtual bool compareNotifyContext( Dynamic object) { return mDelegate->compareNotifyContext(object);}  \
virtual Dynamic compareNotifyContext_dyn() { return mDelegate->compareNotifyContext_dyn();}  \
virtual Void notifyObserver( ::org::puremvc::haxe::interfaces::INotification notification) { return mDelegate->notifyObserver(notification);}  \
virtual Dynamic notifyObserver_dyn() { return mDelegate->notifyObserver_dyn();}  \
virtual Void setNotifyContext( Dynamic notifyContext) { return mDelegate->setNotifyContext(notifyContext);}  \
virtual Dynamic setNotifyContext_dyn() { return mDelegate->setNotifyContext_dyn();}  \
virtual Void setNotifyMethod( Dynamic notifyMethod) { return mDelegate->setNotifyMethod(notifyMethod);}  \
virtual Dynamic setNotifyMethod_dyn() { return mDelegate->setNotifyMethod_dyn();}  \


template<typename IMPL>
class IObserver_delegate_ : public IObserver_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IObserver_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_interfaces_IObserver
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_interfaces_IObserver */ 
