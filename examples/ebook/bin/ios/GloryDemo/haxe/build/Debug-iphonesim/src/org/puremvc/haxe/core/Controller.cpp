#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_core_Controller
#include <org/puremvc/haxe/core/Controller.h>
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
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IObserver
#include <org/puremvc/haxe/interfaces/IObserver.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IView
#include <org/puremvc/haxe/interfaces/IView.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Observer
#include <org/puremvc/haxe/patterns/observer/Observer.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace core{

Void Controller_obj::__construct()
{
HX_STACK_PUSH("Controller::new","org/puremvc/haxe/core/Controller.hx",44);
{
	HX_STACK_LINE(45)
	::org::puremvc::haxe::core::Controller_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(46)
	this->commandMap = ::Hash_obj::__new();
	HX_STACK_LINE(47)
	this->initializeController();
}
;
	return null();
}

Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new()
{  hx::ObjectPtr< Controller_obj > result = new Controller_obj();
	result->__construct();
	return result;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > result = new Controller_obj();
	result->__construct();
	return result;}

hx::Object *Controller_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IController_obj)) return operator ::org::puremvc::haxe::interfaces::IController_obj *();
	return super::__ToInterface(inType);
}

Void Controller_obj::removeCommand( ::String notificationName){
{
		HX_STACK_PUSH("Controller::removeCommand","org/puremvc/haxe/core/Controller.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_LINE(115)
		if ((this->hasCommand(notificationName))){
			HX_STACK_LINE(120)
			this->view->removeObserver(notificationName,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(122)
			this->commandMap->remove(notificationName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,removeCommand,(void))

bool Controller_obj::hasCommand( ::String notificationName){
	HX_STACK_PUSH("Controller::hasCommand","org/puremvc/haxe/core/Controller.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(notificationName,"notificationName");
	HX_STACK_LINE(107)
	return this->commandMap->exists(notificationName);
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,hasCommand,return )

Void Controller_obj::registerCommand( ::String notificationName,::Class commandClassRef){
{
		HX_STACK_PUSH("Controller::registerCommand","org/puremvc/haxe/core/Controller.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_ARG(commandClassRef,"commandClassRef");
		HX_STACK_LINE(98)
		if ((!(this->commandMap->exists(notificationName)))){
			HX_STACK_LINE(99)
			this->view->registerObserver(notificationName,::org::puremvc::haxe::patterns::observer::Observer_obj::__new(this->executeCommand_dyn(),hx::ObjectPtr<OBJ_>(this)));
		}
		HX_STACK_LINE(100)
		this->commandMap->set(notificationName,commandClassRef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,registerCommand,(void))

Void Controller_obj::executeCommand( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("Controller::executeCommand","org/puremvc/haxe/core/Controller.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(79)
		::Class commandClassRef = this->commandMap->get(note->getName());		HX_STACK_VAR(commandClassRef,"commandClassRef");
		HX_STACK_LINE(80)
		if (((commandClassRef == null()))){
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(82)
		::org::puremvc::haxe::interfaces::ICommand commandInstance = ::Type_obj::createInstance(commandClassRef,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(commandInstance,"commandInstance");
		HX_STACK_LINE(83)
		commandInstance->execute(note);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,executeCommand,(void))

Void Controller_obj::initializeController( ){
{
		HX_STACK_PUSH("Controller::initializeController","org/puremvc/haxe/core/Controller.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		this->view = ::org::puremvc::haxe::core::View_obj::getInstance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,initializeController,(void))

::org::puremvc::haxe::interfaces::IController Controller_obj::getInstance( ){
	HX_STACK_PUSH("Controller::getInstance","org/puremvc/haxe/core/Controller.hx",68);
	HX_STACK_LINE(69)
	if (((::org::puremvc::haxe::core::Controller_obj::instance == null()))){
		HX_STACK_LINE(69)
		::org::puremvc::haxe::core::Controller_obj::instance = ::org::puremvc::haxe::core::Controller_obj::__new();
	}
	HX_STACK_LINE(70)
	return ::org::puremvc::haxe::core::Controller_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,getInstance,return )

::org::puremvc::haxe::interfaces::IController Controller_obj::instance;


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(commandMap,"commandMap");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commandMap,"commandMap");
	HX_VISIT_MEMBER_NAME(view,"view");
}

Dynamic Controller_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandMap") ) { return commandMap; }
		if (HX_FIELD_EQ(inName,"hasCommand") ) { return hasCommand_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeCommand") ) { return removeCommand_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"executeCommand") ) { return executeCommand_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerCommand") ) { return registerCommand_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initializeController") ) { return initializeController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::org::puremvc::haxe::interfaces::IView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::org::puremvc::haxe::interfaces::IController >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandMap") ) { commandMap=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("commandMap"));
	outFields->push(HX_CSTRING("view"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("commandMap"),
	HX_CSTRING("view"),
	HX_CSTRING("removeCommand"),
	HX_CSTRING("hasCommand"),
	HX_CSTRING("registerCommand"),
	HX_CSTRING("executeCommand"),
	HX_CSTRING("initializeController"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Controller_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Controller_obj::instance,"instance");
};

Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.core.Controller"), hx::TCanCast< Controller_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Controller_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace core
