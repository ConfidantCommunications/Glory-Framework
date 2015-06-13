#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_view_ControlComponentMediator
#include <ca/confidant/glory/view/ControlComponentMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_components_ControlComponent
#include <ca/confidant/glory/view/components/ControlComponent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
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
	HX_STACK_PUSH("ControlComponentMediator::control","ca/confidant/glory/view/ControlComponentMediator.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ControlComponentMediator_obj,control,return )

Void ControlComponentMediator_obj::onControlClicked( ::native::events::MouseEvent e){
{
		HX_STACK_PUSH("ControlComponentMediator::onControlClicked","ca/confidant/glory/view/ControlComponentMediator.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(53)
		Dynamic a = e->get_currentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(56)
		Array< ::String > actionsArray = a->__Field(HX_CSTRING("action"),true)->__Field(HX_CSTRING("split"),true)(HX_CSTRING(","));		HX_STACK_VAR(actionsArray,"actionsArray");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			while(((_g < actionsArray->length))){
				HX_STACK_LINE(61)
				::String thisAction = actionsArray->__get(_g);		HX_STACK_VAR(thisAction,"thisAction");
				HX_STACK_LINE(61)
				++(_g);
				HX_STACK_LINE(63)
				Array< ::String > actionArray = thisAction.split(HX_CSTRING(":"));		HX_STACK_VAR(actionArray,"actionArray");
				HX_STACK_LINE(65)
				::String _switch_1 = (actionArray->__get((int)0));
				if (  ( _switch_1==HX_CSTRING("transitionOut"))){
					HX_STACK_LINE(66)
					this->sendNotification(HX_CSTRING("removePage"),actionArray->__get((int)1),null());
				}
				else if (  ( _switch_1==HX_CSTRING("pageSkipTo"))){
					HX_STACK_LINE(68)
					this->sendNotification(HX_CSTRING("changePage"),actionArray->__get((int)1),null());
				}
				else if (  ( _switch_1==HX_CSTRING("pageForward"))){
					HX_STACK_LINE(70)
					this->sendNotification(HX_CSTRING("changePage"),HX_CSTRING("pageForward"),null());
				}
				else if (  ( _switch_1==HX_CSTRING("pageBackward"))){
					HX_STACK_LINE(72)
					this->sendNotification(HX_CSTRING("changePage"),HX_CSTRING("pageBackward"),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlComponentMediator_obj,onControlClicked,(void))

Void ControlComponentMediator_obj::onMouseUp( ::native::events::MouseEvent e){
{
		HX_STACK_PUSH("ControlComponentMediator::onMouseUp","ca/confidant/glory/view/ControlComponentMediator.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(43)
		Dynamic a = e->get_currentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(44)
		::String _switch_2 = (a->__Field(HX_CSTRING("action"),true));
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

Void ControlComponentMediator_obj::onMouseDown( ::native::events::MouseEvent e){
{
		HX_STACK_PUSH("ControlComponentMediator::onMouseDown","ca/confidant/glory/view/ControlComponentMediator.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(30)
		Dynamic a = e->get_currentTarget();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(31)
		::String _switch_3 = (a->__Field(HX_CSTRING("action"),true));
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
		this->control()->addEventListener(::native::events::MouseEvent_obj::CLICK,this->onControlClicked_dyn(),null(),null(),null());
		HX_STACK_LINE(25)
		this->control()->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		this->control()->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(27)
		this->control()->addEventListener(::native::events::MouseEvent_obj::MOUSE_OUT,this->onMouseUp_dyn(),null(),null(),null());
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
