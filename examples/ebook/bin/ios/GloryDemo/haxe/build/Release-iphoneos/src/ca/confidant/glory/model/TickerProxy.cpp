#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_model_TickerProxy
#include <ca/confidant/glory/model/TickerProxy.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy
#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace model{

Void TickerProxy_obj::__construct()
{
HX_STACK_PUSH("TickerProxy::new","ca/confidant/glory/model/TickerProxy.hx",23);
{
	HX_STACK_LINE(23)
	super::__construct(::ca::confidant::glory::model::TickerProxy_obj::NAME,null());
}
;
	return null();
}

TickerProxy_obj::~TickerProxy_obj() { }

Dynamic TickerProxy_obj::__CreateEmpty() { return  new TickerProxy_obj; }
hx::ObjectPtr< TickerProxy_obj > TickerProxy_obj::__new()
{  hx::ObjectPtr< TickerProxy_obj > result = new TickerProxy_obj();
	result->__construct();
	return result;}

Dynamic TickerProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TickerProxy_obj > result = new TickerProxy_obj();
	result->__construct();
	return result;}

Void TickerProxy_obj::setInterval( int i){
{
		HX_STACK_PUSH("TickerProxy::setInterval","ca/confidant/glory/model/TickerProxy.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(39)
		this->interval = i;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TickerProxy_obj,setInterval,(void))

Void TickerProxy_obj::onTimerTick( ){
{
		HX_STACK_PUSH("TickerProxy::onTimerTick","ca/confidant/glory/model/TickerProxy.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->sendNotification(HX_CSTRING("timerTick"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TickerProxy_obj,onTimerTick,(void))

Void TickerProxy_obj::stopTimer( ){
{
		HX_STACK_PUSH("TickerProxy::stopTimer","ca/confidant/glory/model/TickerProxy.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->myTimer->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TickerProxy_obj,stopTimer,(void))

Void TickerProxy_obj::startTimer( hx::Null< int >  __o_i){
int i = __o_i.Default(0);
	HX_STACK_PUSH("TickerProxy::startTimer","ca/confidant/glory/model/TickerProxy.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
{
		HX_STACK_LINE(29)
		this->myTimer = ::haxe::Timer_obj::__new(this->interval);
		HX_STACK_LINE(30)
		this->myTimer->run = this->onTimerTick_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TickerProxy_obj,startTimer,(void))

::String TickerProxy_obj::NAME;


TickerProxy_obj::TickerProxy_obj()
{
}

void TickerProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TickerProxy);
	HX_MARK_MEMBER_NAME(myTimer,"myTimer");
	HX_MARK_MEMBER_NAME(interval,"interval");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TickerProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myTimer,"myTimer");
	HX_VISIT_MEMBER_NAME(interval,"interval");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TickerProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myTimer") ) { return myTimer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interval") ) { return interval; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopTimer") ) { return stopTimer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimer") ) { return startTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setInterval") ) { return setInterval_dyn(); }
		if (HX_FIELD_EQ(inName,"onTimerTick") ) { return onTimerTick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TickerProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myTimer") ) { myTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interval") ) { interval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TickerProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("myTimer"));
	outFields->push(HX_CSTRING("interval"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setInterval"),
	HX_CSTRING("onTimerTick"),
	HX_CSTRING("stopTimer"),
	HX_CSTRING("startTimer"),
	HX_CSTRING("myTimer"),
	HX_CSTRING("interval"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TickerProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TickerProxy_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TickerProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TickerProxy_obj::NAME,"NAME");
};

Class TickerProxy_obj::__mClass;

void TickerProxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.model.TickerProxy"), hx::TCanCast< TickerProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TickerProxy_obj::__boot()
{
	NAME= HX_CSTRING("TickerProxy");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model
