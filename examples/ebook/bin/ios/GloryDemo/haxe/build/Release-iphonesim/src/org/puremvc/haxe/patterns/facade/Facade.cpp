#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_core_Controller
#include <org/puremvc/haxe/core/Controller.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_core_Model
#include <org/puremvc/haxe/core/Model.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_core_View
#include <org/puremvc/haxe/core/View.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IController
#include <org/puremvc/haxe/interfaces/IController.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#include <org/puremvc/haxe/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IModel
#include <org/puremvc/haxe/interfaces/IModel.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IView
#include <org/puremvc/haxe/interfaces/IView.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_facade_Facade
#include <org/puremvc/haxe/patterns/facade/Facade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notification
#include <org/puremvc/haxe/patterns/observer/Notification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace facade{

Void Facade_obj::__construct()
{
HX_STACK_PUSH("Facade::new","org/puremvc/haxe/patterns/facade/Facade.hx",42);
{
	HX_STACK_LINE(43)
	::org::puremvc::haxe::patterns::facade::Facade_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(44)
	this->initializeFacade();
}
;
	return null();
}

Facade_obj::~Facade_obj() { }

Dynamic Facade_obj::__CreateEmpty() { return  new Facade_obj; }
hx::ObjectPtr< Facade_obj > Facade_obj::__new()
{  hx::ObjectPtr< Facade_obj > result = new Facade_obj();
	result->__construct();
	return result;}

Dynamic Facade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Facade_obj > result = new Facade_obj();
	result->__construct();
	return result;}

hx::Object *Facade_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IFacade_obj)) return operator ::org::puremvc::haxe::interfaces::IFacade_obj *();
	return super::__ToInterface(inType);
}

Void Facade_obj::notifyObservers( ::org::puremvc::haxe::interfaces::INotification notification){
{
		HX_STACK_PUSH("Facade::notifyObservers","org/puremvc/haxe/patterns/facade/Facade.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notification,"notification");
		HX_STACK_LINE(247)
		if (((this->view != null()))){
			HX_STACK_LINE(248)
			this->view->notifyObservers(notification);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,notifyObservers,(void))

Void Facade_obj::sendNotification( ::String notificationName,Dynamic body,::String type){
{
		HX_STACK_PUSH("Facade::sendNotification","org/puremvc/haxe/patterns/facade/Facade.hx",239);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_ARG(body,"body");
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(239)
		this->notifyObservers(::org::puremvc::haxe::patterns::observer::Notification_obj::__new(notificationName,body,type));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Facade_obj,sendNotification,(void))

bool Facade_obj::hasMediator( ::String mediatorName){
	HX_STACK_PUSH("Facade::hasMediator","org/puremvc/haxe/patterns/facade/Facade.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mediatorName,"mediatorName");
	HX_STACK_LINE(228)
	return this->view->hasMediator(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,hasMediator,return )

::org::puremvc::haxe::interfaces::IMediator Facade_obj::removeMediator( ::String mediatorName){
	HX_STACK_PUSH("Facade::removeMediator","org/puremvc/haxe/patterns/facade/Facade.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mediatorName,"mediatorName");
	HX_STACK_LINE(219)
	::org::puremvc::haxe::interfaces::IMediator mediator = null();		HX_STACK_VAR(mediator,"mediator");
	HX_STACK_LINE(220)
	if (((this->view != null()))){
		HX_STACK_LINE(220)
		mediator = this->view->removeMediator(mediatorName);
	}
	HX_STACK_LINE(221)
	return mediator;
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeMediator,return )

::org::puremvc::haxe::interfaces::IMediator Facade_obj::retrieveMediator( ::String mediatorName){
	HX_STACK_PUSH("Facade::retrieveMediator","org/puremvc/haxe/patterns/facade/Facade.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mediatorName,"mediatorName");
	HX_STACK_LINE(210)
	return this->view->retrieveMediator(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,retrieveMediator,return )

Void Facade_obj::registerMediator( ::org::puremvc::haxe::interfaces::IMediator mediator){
{
		HX_STACK_PUSH("Facade::registerMediator","org/puremvc/haxe/patterns/facade/Facade.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mediator,"mediator");
		HX_STACK_LINE(202)
		if (((this->view != null()))){
			HX_STACK_LINE(203)
			this->view->registerMediator(mediator);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,registerMediator,(void))

bool Facade_obj::hasProxy( ::String proxyName){
	HX_STACK_PUSH("Facade::hasProxy","org/puremvc/haxe/patterns/facade/Facade.hx",194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyName,"proxyName");
	HX_STACK_LINE(194)
	return this->model->hasProxy(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,hasProxy,return )

::org::puremvc::haxe::interfaces::IProxy Facade_obj::removeProxy( ::String proxyName){
	HX_STACK_PUSH("Facade::removeProxy","org/puremvc/haxe/patterns/facade/Facade.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyName,"proxyName");
	HX_STACK_LINE(185)
	::org::puremvc::haxe::interfaces::IProxy proxy = null();		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(186)
	if (((this->model != null()))){
		HX_STACK_LINE(186)
		proxy = this->model->removeProxy(proxyName);
	}
	HX_STACK_LINE(187)
	return proxy;
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeProxy,return )

::org::puremvc::haxe::interfaces::IProxy Facade_obj::retrieveProxy( ::String proxyName){
	HX_STACK_PUSH("Facade::retrieveProxy","org/puremvc/haxe/patterns/facade/Facade.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyName,"proxyName");
	HX_STACK_LINE(176)
	return this->model->retrieveProxy(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,retrieveProxy,return )

Void Facade_obj::registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy){
{
		HX_STACK_PUSH("Facade::registerProxy","org/puremvc/haxe/patterns/facade/Facade.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_ARG(proxy,"proxy");
		HX_STACK_LINE(168)
		this->model->registerProxy(proxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,registerProxy,(void))

bool Facade_obj::hasCommand( ::String notificationName){
	HX_STACK_PUSH("Facade::hasCommand","org/puremvc/haxe/patterns/facade/Facade.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(notificationName,"notificationName");
	HX_STACK_LINE(160)
	return this->controller->hasCommand(notificationName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,hasCommand,return )

Void Facade_obj::removeCommand( ::String notificationName){
{
		HX_STACK_PUSH("Facade::removeCommand","org/puremvc/haxe/patterns/facade/Facade.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_LINE(152)
		this->controller->removeCommand(notificationName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeCommand,(void))

Void Facade_obj::registerCommand( ::String notificationName,::Class commandClassRef){
{
		HX_STACK_PUSH("Facade::registerCommand","org/puremvc/haxe/patterns/facade/Facade.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_ARG(commandClassRef,"commandClassRef");
		HX_STACK_LINE(144)
		this->controller->registerCommand(notificationName,commandClassRef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Facade_obj,registerCommand,(void))

Void Facade_obj::initializeView( ){
{
		HX_STACK_PUSH("Facade::initializeView","org/puremvc/haxe/patterns/facade/Facade.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_LINE(136)
		if (((this->view != null()))){
			HX_STACK_LINE(136)
			return null();
		}
		HX_STACK_LINE(137)
		this->view = ::org::puremvc::haxe::core::View_obj::getInstance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeView,(void))

Void Facade_obj::initializeModel( ){
{
		HX_STACK_PUSH("Facade::initializeModel","org/puremvc/haxe/patterns/facade/Facade.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(112)
		if (((this->model != null()))){
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(113)
		this->model = ::org::puremvc::haxe::core::Model_obj::getInstance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeModel,(void))

Void Facade_obj::initializeController( ){
{
		HX_STACK_PUSH("Facade::initializeController","org/puremvc/haxe/patterns/facade/Facade.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		if (((this->controller != null()))){
			HX_STACK_LINE(85)
			return null();
		}
		HX_STACK_LINE(86)
		this->controller = ::org::puremvc::haxe::core::Controller_obj::getInstance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeController,(void))

Void Facade_obj::initializeFacade( ){
{
		HX_STACK_PUSH("Facade::initializeFacade","org/puremvc/haxe/patterns/facade/Facade.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		this->initializeModel();
		HX_STACK_LINE(57)
		this->initializeController();
		HX_STACK_LINE(58)
		this->initializeView();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeFacade,(void))

::org::puremvc::haxe::interfaces::IFacade Facade_obj::getInstance( ){
	HX_STACK_PUSH("Facade::getInstance","org/puremvc/haxe/patterns/facade/Facade.hx",65);
	HX_STACK_LINE(66)
	if (((::org::puremvc::haxe::patterns::facade::Facade_obj::instance == null()))){
		HX_STACK_LINE(66)
		::org::puremvc::haxe::patterns::facade::Facade_obj::instance = ::org::puremvc::haxe::patterns::facade::Facade_obj::__new();
	}
	HX_STACK_LINE(67)
	return ::org::puremvc::haxe::patterns::facade::Facade_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,getInstance,return )

::org::puremvc::haxe::interfaces::IFacade Facade_obj::instance;


Facade_obj::Facade_obj()
{
}

void Facade_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Facade);
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(controller,"controller");
	HX_MARK_END_CLASS();
}

void Facade_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(controller,"controller");
}

Dynamic Facade_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"hasProxy") ) { return hasProxy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		if (HX_FIELD_EQ(inName,"hasCommand") ) { return hasCommand_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMediator") ) { return hasMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"removeProxy") ) { return removeProxy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"retrieveProxy") ) { return retrieveProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"registerProxy") ) { return registerProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCommand") ) { return removeCommand_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeMediator") ) { return removeMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeView") ) { return initializeView_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyObservers") ) { return notifyObservers_dyn(); }
		if (HX_FIELD_EQ(inName,"registerCommand") ) { return registerCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeModel") ) { return initializeModel_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sendNotification") ) { return sendNotification_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveMediator") ) { return retrieveMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"registerMediator") ) { return registerMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeFacade") ) { return initializeFacade_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initializeController") ) { return initializeController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Facade_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::org::puremvc::haxe::interfaces::IView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::org::puremvc::haxe::interfaces::IModel >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::org::puremvc::haxe::interfaces::IFacade >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::org::puremvc::haxe::interfaces::IController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Facade_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("model"));
	outFields->push(HX_CSTRING("controller"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("view"),
	HX_CSTRING("model"),
	HX_CSTRING("controller"),
	HX_CSTRING("notifyObservers"),
	HX_CSTRING("sendNotification"),
	HX_CSTRING("hasMediator"),
	HX_CSTRING("removeMediator"),
	HX_CSTRING("retrieveMediator"),
	HX_CSTRING("registerMediator"),
	HX_CSTRING("hasProxy"),
	HX_CSTRING("removeProxy"),
	HX_CSTRING("retrieveProxy"),
	HX_CSTRING("registerProxy"),
	HX_CSTRING("hasCommand"),
	HX_CSTRING("removeCommand"),
	HX_CSTRING("registerCommand"),
	HX_CSTRING("initializeView"),
	HX_CSTRING("initializeModel"),
	HX_CSTRING("initializeController"),
	HX_CSTRING("initializeFacade"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Facade_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Facade_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Facade_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Facade_obj::instance,"instance");
};

Class Facade_obj::__mClass;

void Facade_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.facade.Facade"), hx::TCanCast< Facade_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Facade_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace facade
