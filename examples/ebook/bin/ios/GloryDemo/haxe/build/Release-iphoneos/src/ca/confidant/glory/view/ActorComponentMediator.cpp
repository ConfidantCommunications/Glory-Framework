#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_model_ActorComponentConfigProxy
#include <ca/confidant/glory/model/ActorComponentConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ActorComponentMediator
#include <ca/confidant/glory/view/ActorComponentMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_components_ActorComponent
#include <ca/confidant/glory/view/components/ActorComponent.h>
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
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
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

Void ActorComponentMediator_obj::__construct(::String id,::ca::confidant::glory::view::components::ActorComponent viewComponent,::ca::confidant::glory::model::ActorComponentConfigProxy accp)
{
HX_STACK_PUSH("ActorComponentMediator::new","ca/confidant/glory/view/ActorComponentMediator.hx",24);
{
	HX_STACK_LINE(25)
	super::__construct(id,viewComponent);
	HX_STACK_LINE(26)
	this->config = accp;
	HX_STACK_LINE(27)
	this->addListeners();
}
;
	return null();
}

ActorComponentMediator_obj::~ActorComponentMediator_obj() { }

Dynamic ActorComponentMediator_obj::__CreateEmpty() { return  new ActorComponentMediator_obj; }
hx::ObjectPtr< ActorComponentMediator_obj > ActorComponentMediator_obj::__new(::String id,::ca::confidant::glory::view::components::ActorComponent viewComponent,::ca::confidant::glory::model::ActorComponentConfigProxy accp)
{  hx::ObjectPtr< ActorComponentMediator_obj > result = new ActorComponentMediator_obj();
	result->__construct(id,viewComponent,accp);
	return result;}

Dynamic ActorComponentMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorComponentMediator_obj > result = new ActorComponentMediator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::ca::confidant::glory::view::components::ActorComponent ActorComponentMediator_obj::actor( ){
	HX_STACK_PUSH("ActorComponentMediator::actor","ca/confidant/glory/view/ActorComponentMediator.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(113)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ActorComponentMediator_obj,actor,return )

Void ActorComponentMediator_obj::onPanRight( Dynamic e){
{
		HX_STACK_PUSH("ActorComponentMediator::onPanRight","ca/confidant/glory/view/ActorComponentMediator.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(108)
		this->actor()->nmeSetX((this->actor()->nmeGetX() - (int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ActorComponentMediator_obj,onPanRight,(void))

Void ActorComponentMediator_obj::onPanLeft( Dynamic e){
{
		HX_STACK_PUSH("ActorComponentMediator::onPanLeft","ca/confidant/glory/view/ActorComponentMediator.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(102)
		this->actor()->nmeSetX((this->actor()->nmeGetX() + (int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ActorComponentMediator_obj,onPanLeft,(void))

Void ActorComponentMediator_obj::handleNotification( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("ActorComponentMediator::handleNotification","ca/confidant/glory/view/ActorComponentMediator.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(85)
		::String _switch_1 = (note->getName());
		if (  ( _switch_1==HX_CSTRING("timerTick"))){
		}
		else if (  ( _switch_1==HX_CSTRING("panLeft"))){
			HX_STACK_LINE(90)
			this->actor()->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->onPanLeft_dyn(),null(),null(),null());
		}
		else if (  ( _switch_1==HX_CSTRING("panRight"))){
			HX_STACK_LINE(92)
			this->actor()->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->onPanRight_dyn(),null(),null(),null());
		}
		else if (  ( _switch_1==HX_CSTRING("panStop"))){
			HX_STACK_LINE(95)
			this->actor()->removeEventListener(::neash::events::Event_obj::ENTER_FRAME,this->onPanRight_dyn(),null());
			HX_STACK_LINE(96)
			this->actor()->removeEventListener(::neash::events::Event_obj::ENTER_FRAME,this->onPanLeft_dyn(),null());
		}
	}
return null();
}


Array< ::String > ActorComponentMediator_obj::listNotificationInterests( ){
	HX_STACK_PUSH("ActorComponentMediator::listNotificationInterests","ca/confidant/glory/view/ActorComponentMediator.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("timerTick")).Add(HX_CSTRING("panLeft")).Add(HX_CSTRING("panRight")).Add(HX_CSTRING("panStop"));
}


Void ActorComponentMediator_obj::onActorClicked( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("ActorComponentMediator::onActorClicked","ca/confidant/glory/view/ActorComponentMediator.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(45)
		Dynamic a = e->nmeGetCurrentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(46)
		::haxe::Log_obj::trace(a->__Field(HX_CSTRING("name"),true),hx::SourceInfo(HX_CSTRING("ActorComponentMediator.hx"),46,HX_CSTRING("ca.confidant.glory.view.ActorComponentMediator"),HX_CSTRING("onActorClicked")));
		HX_STACK_LINE(49)
		::String _switch_2 = (this->config->type);
		if (  ( _switch_2==HX_CSTRING("colour"))){
			HX_STACK_LINE(50)
			a->__Field(HX_CSTRING("toggleColour"),true)();
		}
		else if (  ( _switch_2==HX_CSTRING("control"))){
			HX_STACK_LINE(58)
			::ca::confidant::glory::model::PagesConfigProxy pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));		HX_STACK_VAR(pcp,"pcp");
			HX_STACK_LINE(61)
			Array< ::String > actionArray = this->config->action.split(HX_CSTRING(":"));		HX_STACK_VAR(actionArray,"actionArray");
			HX_STACK_LINE(63)
			::String _switch_3 = (actionArray->__get((int)0));
			if (  ( _switch_3==HX_CSTRING("transitionOut"))){
				HX_STACK_LINE(64)
				this->sendNotification(HX_CSTRING("removePage"),actionArray->__get((int)1),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ActorComponentMediator_obj,onActorClicked,(void))

Void ActorComponentMediator_obj::addListeners( ){
{
		HX_STACK_PUSH("ActorComponentMediator::addListeners","ca/confidant/glory/view/ActorComponentMediator.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		this->actor()->addEventListener(::neash::events::MouseEvent_obj::CLICK,this->onActorClicked_dyn(),null(),null(),null());
		HX_STACK_LINE(36)
		this->actor()->nmeSetMouseEnabled(true);
		HX_STACK_LINE(37)
		if (((this->type == HX_CSTRING("getURL")))){
			HX_STACK_LINE(39)
			this->actor()->useHandCursor = true;
			HX_STACK_LINE(40)
			this->actor()->buttonMode = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ActorComponentMediator_obj,addListeners,(void))


ActorComponentMediator_obj::ActorComponentMediator_obj()
{
}

void ActorComponentMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorComponentMediator);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(config,"config");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActorComponentMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(config,"config");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ActorComponentMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"actor") ) { return actor_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onPanLeft") ) { return onPanLeft_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onPanRight") ) { return onPanRight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addListeners") ) { return addListeners_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onActorClicked") ) { return onActorClicked_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActorComponentMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< ::ca::confidant::glory::model::ActorComponentConfigProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorComponentMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("config"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("actor"),
	HX_CSTRING("onPanRight"),
	HX_CSTRING("onPanLeft"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("onActorClicked"),
	HX_CSTRING("addListeners"),
	HX_CSTRING("type"),
	HX_CSTRING("config"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorComponentMediator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorComponentMediator_obj::__mClass,"__mClass");
};

Class ActorComponentMediator_obj::__mClass;

void ActorComponentMediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.ActorComponentMediator"), hx::TCanCast< ActorComponentMediator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorComponentMediator_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
