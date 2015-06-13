#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_core_View
#include <org/puremvc/haxe/core/View.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
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

Void View_obj::__construct()
{
HX_STACK_PUSH("View::new","org/puremvc/haxe/core/View.hx",40);
{
	HX_STACK_LINE(41)
	::org::puremvc::haxe::core::View_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(42)
	this->mediatorMap = ::Hash_obj::__new();
	HX_STACK_LINE(43)
	this->observerMap = ::Hash_obj::__new();
	HX_STACK_LINE(44)
	this->initializeView();
}
;
	return null();
}

View_obj::~View_obj() { }

Dynamic View_obj::__CreateEmpty() { return  new View_obj; }
hx::ObjectPtr< View_obj > View_obj::__new()
{  hx::ObjectPtr< View_obj > result = new View_obj();
	result->__construct();
	return result;}

Dynamic View_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< View_obj > result = new View_obj();
	result->__construct();
	return result;}

hx::Object *View_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IView_obj)) return operator ::org::puremvc::haxe::interfaces::IView_obj *();
	return super::__ToInterface(inType);
}

bool View_obj::hasMediator( ::String mediatorName){
	HX_STACK_PUSH("View::hasMediator","org/puremvc/haxe/core/View.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mediatorName,"mediatorName");
	HX_STACK_LINE(207)
	return this->mediatorMap->exists(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,hasMediator,return )

::org::puremvc::haxe::interfaces::IMediator View_obj::removeMediator( ::String mediatorName){
	HX_STACK_PUSH("View::removeMediator","org/puremvc/haxe/core/View.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mediatorName,"mediatorName");
	HX_STACK_LINE(180)
	::org::puremvc::haxe::interfaces::IMediator mediator = this->mediatorMap->get(mediatorName);		HX_STACK_VAR(mediator,"mediator");
	HX_STACK_LINE(182)
	if (((mediator != null()))){
		HX_STACK_LINE(185)
		Array< ::String > interests = mediator->listNotificationInterests();		HX_STACK_VAR(interests,"interests");
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = interests->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			while(((_g1 < _g))){
				HX_STACK_LINE(186)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(190)
				this->removeObserver(interests->__get(i),mediator);
			}
		}
		HX_STACK_LINE(194)
		this->mediatorMap->remove(mediatorName);
		HX_STACK_LINE(197)
		mediator->onRemove();
	}
	HX_STACK_LINE(200)
	return mediator;
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,removeMediator,return )

::org::puremvc::haxe::interfaces::IMediator View_obj::retrieveMediator( ::String mediatorName){
	HX_STACK_PUSH("View::retrieveMediator","org/puremvc/haxe/core/View.hx",170);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mediatorName,"mediatorName");
	HX_STACK_LINE(170)
	return this->mediatorMap->get(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,retrieveMediator,return )

Void View_obj::registerMediator( ::org::puremvc::haxe::interfaces::IMediator mediator){
{
		HX_STACK_PUSH("View::registerMediator","org/puremvc/haxe/core/View.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mediator,"mediator");
		HX_STACK_LINE(146)
		if ((this->mediatorMap->exists(mediator->getMediatorName()))){
			HX_STACK_LINE(146)
			return null();
		}
		HX_STACK_LINE(149)
		this->mediatorMap->set(mediator->getMediatorName(),mediator);
		HX_STACK_LINE(152)
		Array< ::String > interests = mediator->listNotificationInterests();		HX_STACK_VAR(interests,"interests");
		HX_STACK_LINE(153)
		if (((interests->length > (int)0))){
			HX_STACK_LINE(156)
			::org::puremvc::haxe::patterns::observer::Observer observer = ::org::puremvc::haxe::patterns::observer::Observer_obj::__new(mediator->handleNotification_dyn(),mediator);		HX_STACK_VAR(observer,"observer");
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = interests->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(159)
				while(((_g1 < _g))){
					HX_STACK_LINE(159)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(160)
					this->registerObserver(interests->__get(i),observer);
				}
			}
		}
		HX_STACK_LINE(163)
		mediator->onRegister();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,registerMediator,(void))

Void View_obj::removeObserver( ::String notificationName,Dynamic notifyContext){
{
		HX_STACK_PUSH("View::removeObserver","org/puremvc/haxe/core/View.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_ARG(notifyContext,"notifyContext");
		HX_STACK_LINE(109)
		::List observers = this->observerMap->get(notificationName);		HX_STACK_VAR(observers,"observers");
		HX_STACK_LINE(112)
		for(::cpp::FastIterator_obj< ::org::puremvc::haxe::interfaces::IObserver > *__it = ::cpp::CreateFastIterator< ::org::puremvc::haxe::interfaces::IObserver >(observers->iterator());  __it->hasNext(); ){
			::org::puremvc::haxe::interfaces::IObserver observer = __it->next();
			if (((observer->compareNotifyContext(notifyContext) == true))){
				HX_STACK_LINE(118)
				observers->remove(observer);
				HX_STACK_LINE(119)
				break;
			}
;
		}
		HX_STACK_LINE(125)
		if ((observers->isEmpty())){
			HX_STACK_LINE(126)
			this->observerMap->remove(notificationName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(View_obj,removeObserver,(void))

Void View_obj::notifyObservers( ::org::puremvc::haxe::interfaces::INotification notification){
{
		HX_STACK_PUSH("View::notifyObservers","org/puremvc/haxe/core/View.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notification,"notification");
		HX_STACK_LINE(84)
		if ((this->observerMap->exists(notification->getName()))){
			HX_STACK_LINE(88)
			::List observers_ref = this->observerMap->get(notification->getName());		HX_STACK_VAR(observers_ref,"observers_ref");
			HX_STACK_LINE(92)
			::List observers = ::List_obj::__new();		HX_STACK_VAR(observers,"observers");
			HX_STACK_LINE(93)
			Dynamic iterator_ref = observers_ref->iterator();		HX_STACK_VAR(iterator_ref,"iterator_ref");
			HX_STACK_LINE(94)
			for(::cpp::FastIterator_obj< ::org::puremvc::haxe::interfaces::IObserver > *__it = ::cpp::CreateFastIterator< ::org::puremvc::haxe::interfaces::IObserver >(iterator_ref);  __it->hasNext(); ){
				::org::puremvc::haxe::interfaces::IObserver observer = __it->next();
				observers->add(observer);
			}
			HX_STACK_LINE(97)
			Dynamic iterator = observers->iterator();		HX_STACK_VAR(iterator,"iterator");
			HX_STACK_LINE(98)
			for(::cpp::FastIterator_obj< ::org::puremvc::haxe::interfaces::IObserver > *__it = ::cpp::CreateFastIterator< ::org::puremvc::haxe::interfaces::IObserver >(iterator);  __it->hasNext(); ){
				::org::puremvc::haxe::interfaces::IObserver observer = __it->next();
				observer->notifyObserver(notification);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,notifyObservers,(void))

Void View_obj::registerObserver( ::String notificationName,::org::puremvc::haxe::interfaces::IObserver observer){
{
		HX_STACK_PUSH("View::registerObserver","org/puremvc/haxe/core/View.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_ARG(observer,"observer");
		HX_STACK_LINE(71)
		if ((!(this->observerMap->exists(notificationName)))){
			HX_STACK_LINE(72)
			this->observerMap->set(notificationName,::List_obj::__new());
		}
		HX_STACK_LINE(73)
		this->observerMap->get(notificationName)->__Field(HX_CSTRING("add"),true)(observer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(View_obj,registerObserver,(void))

Void View_obj::initializeView( ){
{
		HX_STACK_PUSH("View::initializeView","org/puremvc/haxe/core/View.hx",54);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View_obj,initializeView,(void))

::org::puremvc::haxe::interfaces::IView View_obj::getInstance( ){
	HX_STACK_PUSH("View::getInstance","org/puremvc/haxe/core/View.hx",61);
	HX_STACK_LINE(62)
	if (((::org::puremvc::haxe::core::View_obj::instance == null()))){
		HX_STACK_LINE(62)
		::org::puremvc::haxe::core::View_obj::instance = ::org::puremvc::haxe::core::View_obj::__new();
	}
	HX_STACK_LINE(63)
	return ::org::puremvc::haxe::core::View_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(View_obj,getInstance,return )

::org::puremvc::haxe::interfaces::IView View_obj::instance;


View_obj::View_obj()
{
}

void View_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(View);
	HX_MARK_MEMBER_NAME(observerMap,"observerMap");
	HX_MARK_MEMBER_NAME(mediatorMap,"mediatorMap");
	HX_MARK_END_CLASS();
}

void View_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(observerMap,"observerMap");
	HX_VISIT_MEMBER_NAME(mediatorMap,"mediatorMap");
}

Dynamic View_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"observerMap") ) { return observerMap; }
		if (HX_FIELD_EQ(inName,"mediatorMap") ) { return mediatorMap; }
		if (HX_FIELD_EQ(inName,"hasMediator") ) { return hasMediator_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeMediator") ) { return removeMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"removeObserver") ) { return removeObserver_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeView") ) { return initializeView_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyObservers") ) { return notifyObservers_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"retrieveMediator") ) { return retrieveMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"registerMediator") ) { return registerMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"registerObserver") ) { return registerObserver_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic View_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::org::puremvc::haxe::interfaces::IView >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"observerMap") ) { observerMap=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mediatorMap") ) { mediatorMap=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void View_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("observerMap"));
	outFields->push(HX_CSTRING("mediatorMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("observerMap"),
	HX_CSTRING("mediatorMap"),
	HX_CSTRING("hasMediator"),
	HX_CSTRING("removeMediator"),
	HX_CSTRING("retrieveMediator"),
	HX_CSTRING("registerMediator"),
	HX_CSTRING("removeObserver"),
	HX_CSTRING("notifyObservers"),
	HX_CSTRING("registerObserver"),
	HX_CSTRING("initializeView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(View_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(View_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(View_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(View_obj::instance,"instance");
};

Class View_obj::__mClass;

void View_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.core.View"), hx::TCanCast< View_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void View_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace core
