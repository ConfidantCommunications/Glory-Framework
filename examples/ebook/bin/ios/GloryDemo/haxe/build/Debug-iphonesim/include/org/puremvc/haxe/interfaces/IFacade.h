#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#define INCLUDED_org_puremvc_haxe_interfaces_IFacade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IFacade)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{


class IFacade_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFacade_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void notifyObservers( ::org::puremvc::haxe::interfaces::INotification note)=0;
		Dynamic notifyObservers_dyn();
virtual Void sendNotification( ::String notificationName,Dynamic body,::String type)=0;
		Dynamic sendNotification_dyn();
virtual bool hasMediator( ::String mediatorName)=0;
		Dynamic hasMediator_dyn();
virtual ::org::puremvc::haxe::interfaces::IMediator removeMediator( ::String mediatorName)=0;
		Dynamic removeMediator_dyn();
virtual ::org::puremvc::haxe::interfaces::IMediator retrieveMediator( ::String mediatorName)=0;
		Dynamic retrieveMediator_dyn();
virtual Void registerMediator( ::org::puremvc::haxe::interfaces::IMediator mediator)=0;
		Dynamic registerMediator_dyn();
virtual bool hasCommand( ::String notificationName)=0;
		Dynamic hasCommand_dyn();
virtual Void removeCommand( ::String notificationName)=0;
		Dynamic removeCommand_dyn();
virtual Void registerCommand( ::String noteName,::Class commandClassRef)=0;
		Dynamic registerCommand_dyn();
virtual bool hasProxy( ::String proxyName)=0;
		Dynamic hasProxy_dyn();
virtual ::org::puremvc::haxe::interfaces::IProxy removeProxy( ::String proxyName)=0;
		Dynamic removeProxy_dyn();
virtual ::org::puremvc::haxe::interfaces::IProxy retrieveProxy( ::String proxyName)=0;
		Dynamic retrieveProxy_dyn();
virtual Void registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy)=0;
		Dynamic registerProxy_dyn();
};

#define DELEGATE_org_puremvc_haxe_interfaces_IFacade \
virtual Void notifyObservers( ::org::puremvc::haxe::interfaces::INotification note) { return mDelegate->notifyObservers(note);}  \
virtual Dynamic notifyObservers_dyn() { return mDelegate->notifyObservers_dyn();}  \
virtual Void sendNotification( ::String notificationName,Dynamic body,::String type) { return mDelegate->sendNotification(notificationName,body,type);}  \
virtual Dynamic sendNotification_dyn() { return mDelegate->sendNotification_dyn();}  \
virtual bool hasMediator( ::String mediatorName) { return mDelegate->hasMediator(mediatorName);}  \
virtual Dynamic hasMediator_dyn() { return mDelegate->hasMediator_dyn();}  \
virtual ::org::puremvc::haxe::interfaces::IMediator removeMediator( ::String mediatorName) { return mDelegate->removeMediator(mediatorName);}  \
virtual Dynamic removeMediator_dyn() { return mDelegate->removeMediator_dyn();}  \
virtual ::org::puremvc::haxe::interfaces::IMediator retrieveMediator( ::String mediatorName) { return mDelegate->retrieveMediator(mediatorName);}  \
virtual Dynamic retrieveMediator_dyn() { return mDelegate->retrieveMediator_dyn();}  \
virtual Void registerMediator( ::org::puremvc::haxe::interfaces::IMediator mediator) { return mDelegate->registerMediator(mediator);}  \
virtual Dynamic registerMediator_dyn() { return mDelegate->registerMediator_dyn();}  \
virtual bool hasCommand( ::String notificationName) { return mDelegate->hasCommand(notificationName);}  \
virtual Dynamic hasCommand_dyn() { return mDelegate->hasCommand_dyn();}  \
virtual Void removeCommand( ::String notificationName) { return mDelegate->removeCommand(notificationName);}  \
virtual Dynamic removeCommand_dyn() { return mDelegate->removeCommand_dyn();}  \
virtual Void registerCommand( ::String noteName,::Class commandClassRef) { return mDelegate->registerCommand(noteName,commandClassRef);}  \
virtual Dynamic registerCommand_dyn() { return mDelegate->registerCommand_dyn();}  \
virtual bool hasProxy( ::String proxyName) { return mDelegate->hasProxy(proxyName);}  \
virtual Dynamic hasProxy_dyn() { return mDelegate->hasProxy_dyn();}  \
virtual ::org::puremvc::haxe::interfaces::IProxy removeProxy( ::String proxyName) { return mDelegate->removeProxy(proxyName);}  \
virtual Dynamic removeProxy_dyn() { return mDelegate->removeProxy_dyn();}  \
virtual ::org::puremvc::haxe::interfaces::IProxy retrieveProxy( ::String proxyName) { return mDelegate->retrieveProxy(proxyName);}  \
virtual Dynamic retrieveProxy_dyn() { return mDelegate->retrieveProxy_dyn();}  \
virtual Void registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy) { return mDelegate->registerProxy(proxy);}  \
virtual Dynamic registerProxy_dyn() { return mDelegate->registerProxy_dyn();}  \


template<typename IMPL>
class IFacade_delegate_ : public IFacade_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFacade_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_interfaces_IFacade
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_interfaces_IFacade */ 
