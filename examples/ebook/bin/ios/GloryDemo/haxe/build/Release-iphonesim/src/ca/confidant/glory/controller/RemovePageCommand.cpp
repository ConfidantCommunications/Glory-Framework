#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_RemovePageCommand
#include <ca/confidant/glory/controller/RemovePageCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy
#include <ca/confidant/glory/model/ControlsRegistryProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ApplicationMediator
#include <ca/confidant/glory/view/ApplicationMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_PageMediator
#include <ca/confidant/glory/view/PageMediator.h>
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
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
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
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand
#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
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
namespace controller{

Void RemovePageCommand_obj::__construct()
{
HX_STACK_PUSH("RemovePageCommand::new","ca/confidant/glory/controller/RemovePageCommand.hx",25);
{
	HX_STACK_LINE(25)
	super::__construct();
}
;
	return null();
}

RemovePageCommand_obj::~RemovePageCommand_obj() { }

Dynamic RemovePageCommand_obj::__CreateEmpty() { return  new RemovePageCommand_obj; }
hx::ObjectPtr< RemovePageCommand_obj > RemovePageCommand_obj::__new()
{  hx::ObjectPtr< RemovePageCommand_obj > result = new RemovePageCommand_obj();
	result->__construct();
	return result;}

Dynamic RemovePageCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RemovePageCommand_obj > result = new RemovePageCommand_obj();
	result->__construct();
	return result;}

Void RemovePageCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("RemovePageCommand::execute","ca/confidant/glory/controller/RemovePageCommand.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(32)
		::String pageId = hx::TCast< String >::cast(note->getBody());		HX_STACK_VAR(pageId,"pageId");
		HX_STACK_LINE(34)
		this->pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));
		HX_STACK_LINE(35)
		this->appMediator = hx::TCast< ca::confidant::glory::view::ApplicationMediator >::cast(this->facade->retrieveMediator(HX_CSTRING("ApplicationMediator")));
		HX_STACK_LINE(36)
		this->crp = hx::TCast< ca::confidant::glory::model::ControlsRegistryProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::ControlsRegistryProxy_obj::NAME));
		HX_STACK_LINE(41)
		::ca::confidant::glory::view::PageMediator pageMediator = hx::TCast< ca::confidant::glory::view::PageMediator >::cast(this->facade->retrieveMediator(pageId));		HX_STACK_VAR(pageMediator,"pageMediator");
		HX_STACK_LINE(42)
		::neash::display::Sprite s = hx::TCast< neash::display::Sprite >::cast(pageMediator->getViewComponent());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(46)
		while(((s->nmeGetNumChildren() > (int)0))){
			HX_STACK_LINE(47)
			::neash::display::DisplayObject child = s->getChildAt((int)0);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(48)
			if ((this->facade->hasMediator(child->nmeGetName()))){
				HX_STACK_LINE(48)
				this->facade->removeMediator(child->nmeGetName());
			}
			HX_STACK_LINE(51)
			if ((this->facade->hasProxy(child->nmeGetName()))){
				HX_STACK_LINE(51)
				this->facade->removeProxy(child->nmeGetName());
			}
			HX_STACK_LINE(54)
			s->removeChild(child);
			HX_STACK_LINE(55)
			child = null();
		}
		HX_STACK_LINE(59)
		pageMediator = null();
		HX_STACK_LINE(60)
		this->facade->removeMediator(pageId);
		HX_STACK_LINE(63)
		this->appMediator->removeDisplayObject(s);
		HX_STACK_LINE(64)
		s = null();
	}
return null();
}



RemovePageCommand_obj::RemovePageCommand_obj()
{
}

void RemovePageCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RemovePageCommand);
	HX_MARK_MEMBER_NAME(crp,"crp");
	HX_MARK_MEMBER_NAME(appMediator,"appMediator");
	HX_MARK_MEMBER_NAME(pcp,"pcp");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RemovePageCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(crp,"crp");
	HX_VISIT_MEMBER_NAME(appMediator,"appMediator");
	HX_VISIT_MEMBER_NAME(pcp,"pcp");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RemovePageCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"crp") ) { return crp; }
		if (HX_FIELD_EQ(inName,"pcp") ) { return pcp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { return appMediator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RemovePageCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"crp") ) { crp=inValue.Cast< ::ca::confidant::glory::model::ControlsRegistryProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pcp") ) { pcp=inValue.Cast< ::ca::confidant::glory::model::PagesConfigProxy >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { appMediator=inValue.Cast< ::ca::confidant::glory::view::ApplicationMediator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RemovePageCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("crp"));
	outFields->push(HX_CSTRING("appMediator"));
	outFields->push(HX_CSTRING("pcp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	HX_CSTRING("crp"),
	HX_CSTRING("appMediator"),
	HX_CSTRING("pcp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RemovePageCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RemovePageCommand_obj::__mClass,"__mClass");
};

Class RemovePageCommand_obj::__mClass;

void RemovePageCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.RemovePageCommand"), hx::TCanCast< RemovePageCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RemovePageCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
