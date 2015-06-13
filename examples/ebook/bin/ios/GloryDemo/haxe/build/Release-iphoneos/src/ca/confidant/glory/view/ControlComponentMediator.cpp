#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ControlComponentMediator
#include <ca/confidant/glory/view/ControlComponentMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_components_ControlComponent
#include <ca/confidant/glory/view/components/ControlComponent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#include <org/puremvc/haxe/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
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
namespace view{

Void ControlComponentMediator_obj::__construct(::String id,::ca::confidant::glory::view::components::ControlComponent viewComponent)
{
HX_STACK_PUSH("ControlComponentMediator::new","ca/confidant/glory/view/ControlComponentMediator.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct(id,viewComponent);
	HX_STACK_LINE(20)
	this->addListeners();
}
;
	return null();
}

ControlComponentMediator_obj::~ControlComponentMediator_obj() { }

Dynamic ControlComponentMediator_obj::__CreateEmpty() { return  new ControlComponentMediator_obj; }
hx::ObjectPtr< ControlComponentMediator_obj > ControlComponentMediator_obj::__new(::String id,::ca::confidant::glory::view::components::ControlComponent viewComponent)
{  hx::ObjectPtr< ControlComponentMediator_obj > result = new ControlComponentMediator_obj();
	result->__construct(id,viewComponent);
	return result;}

Dynamic ControlComponentMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControlComponentMediator_obj > result = new ControlComponentMediator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::ca::confidant::glory::view::components::ControlComponent ControlComponentMediator_obj::control( ){
	HX_STACK_PUSH("ControlComponentMediator::control","ca/confidant/glory/view/ControlComponentMediator.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ControlComponentMediator_obj,control,return )

Void ControlComponentMediator_obj::onControlClicked( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("ControlComponentMediator::onControlClicked","ca/confidant/glory/view/ControlComponentMediator.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(53)
		Dynamic a = e->nmeGetCurrentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(56)
		Array< ::String > controlArray = (hx::TCast< String >::cast(a->__Field(HX_CSTRING("type"),true))).split(HX_CSTRING(":"));		HX_STACK_VAR(controlArray,"controlArray");
		HX_STACK_LINE(58)
		::String _switch_1 = (controlArray->__get((int)0));
		if (  ( _switch_1==HX_CSTRING("pageForward"))){
			HX_STACK_LINE(60)
			::haxe::Log_obj::trace(HX_CSTRING("pageForward"),hx::SourceInfo(HX_CSTRING("ControlComponentMediator.hx"),60,HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"),HX_CSTRING("onControlClicked")));
			HX_STACK_LINE(61)
			this->sendNotification(HX_CSTRING("changePage"),HX_CSTRING("pageForward"),null());
		}
		else if (  ( _switch_1==HX_CSTRING("pageBackward"))){
			HX_STACK_LINE(63)
			::haxe::Log_obj::trace(HX_CSTRING("pageBackward"),hx::SourceInfo(HX_CSTRING("ControlComponentMediator.hx"),63,HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"),HX_CSTRING("onControlClicked")));
			HX_STACK_LINE(64)
			this->sendNotification(HX_CSTRING("changePage"),HX_CSTRING("pageBackward"),null());
		}
		else if (  ( _switch_1==HX_CSTRING("pageSkipTo"))){
			HX_STACK_LINE(66)
			::haxe::Log_obj::trace((HX_CSTRING("pageSkipTo:") + controlArray->__get((int)1)),hx::SourceInfo(HX_CSTRING("ControlComponentMediator.hx"),66,HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"),HX_CSTRING("onControlClicked")));
			HX_STACK_LINE(67)
			this->sendNotification(HX_CSTRING("changePage"),controlArray->__get((int)1),null());
		}
		else if (  ( _switch_1==HX_CSTRING("toggleMenu"))){
			HX_STACK_LINE(71)
			::haxe::Log_obj::trace(HX_CSTRING("toggleOptions"),hx::SourceInfo(HX_CSTRING("ControlComponentMediator.hx"),71,HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"),HX_CSTRING("onControlClicked")));
			HX_STACK_LINE(72)
			this->sendNotification(HX_CSTRING("toggleOptions"),null(),null());
		}
		else if (  ( _switch_1==HX_CSTRING("getURL"))){
			HX_STACK_LINE(74)
			::ca::confidant::glory::model::PagesConfigProxy pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));		HX_STACK_VAR(pcp,"pcp");
			HX_STACK_LINE(75)
			this->sendNotification(HX_CSTRING("httpLink"),pcp->getControlHref(this->mediatorName),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlComponentMediator_obj,onControlClicked,(void))

Void ControlComponentMediator_obj::onMouseUp( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("ControlComponentMediator::onMouseUp","ca/confidant/glory/view/ControlComponentMediator.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(43)
		Dynamic a = e->nmeGetCurrentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(44)
		::String _switch_2 = (a->__Field(HX_CSTRING("type"),true));
		if (  ( _switch_2==HX_CSTRING("panRight"))){
			HX_STACK_LINE(46)
			::haxe::Log_obj::trace(HX_CSTRING("onMouseUp"),hx::SourceInfo(HX_CSTRING("ControlComponentMediator.hx"),46,HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"),HX_CSTRING("onMouseUp")));
			HX_STACK_LINE(47)
			this->sendNotification(HX_CSTRING("panStop"),null(),null());
		}
		else if (  ( _switch_2==HX_CSTRING("panLeft"))){
			HX_STACK_LINE(48)
			this->sendNotification(HX_CSTRING("panStop"),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlComponentMediator_obj,onMouseUp,(void))

Void ControlComponentMediator_obj::onMouseDown( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("ControlComponentMediator::onMouseDown","ca/confidant/glory/view/ControlComponentMediator.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(30)
		Dynamic a = e->nmeGetCurrentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(31)
		::String _switch_3 = (a->__Field(HX_CSTRING("type"),true));
		if (  ( _switch_3==HX_CSTRING("panRight"))){
			HX_STACK_LINE(33)
			::haxe::Log_obj::trace(HX_CSTRING("onMouseDown"),hx::SourceInfo(HX_CSTRING("ControlComponentMediator.hx"),33,HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"),HX_CSTRING("onMouseDown")));
			HX_STACK_LINE(35)
			this->sendNotification(HX_CSTRING("panRight"),null(),null());
		}
		else if (  ( _switch_3==HX_CSTRING("panLeft"))){
			HX_STACK_LINE(36)
			this->sendNotification(HX_CSTRING("panLeft"),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlComponentMediator_obj,onMouseDown,(void))

Void ControlComponentMediator_obj::addListeners( ){
{
		HX_STACK_PUSH("ControlComponentMediator::addListeners","ca/confidant/glory/view/ControlComponentMediator.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_LINE(24)
		this->control()->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->onControlClicked_dyn(),null(),null(),null());
		HX_STACK_LINE(25)
		this->control()->addEventListener(::neash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		this->control()->addEventListener(::neash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(27)
		this->control()->addEventListener(::neash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ControlComponentMediator_obj,addListeners,(void))


ControlComponentMediator_obj::ControlComponentMediator_obj()
{
}

void ControlComponentMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlComponentMediator);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlComponentMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ControlComponentMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { return control_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addListeners") ) { return addListeners_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onControlClicked") ) { return onControlClicked_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ControlComponentMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ControlComponentMediator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("control"),
	HX_CSTRING("onControlClicked"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("addListeners"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlComponentMediator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlComponentMediator_obj::__mClass,"__mClass");
};

Class ControlComponentMediator_obj::__mClass;

void ControlComponentMediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.ControlComponentMediator"), hx::TCanCast< ControlComponentMediator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ControlComponentMediator_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
