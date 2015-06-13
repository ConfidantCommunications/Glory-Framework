#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_ChangePageCommand
#include <ca/confidant/glory/controller/ChangePageCommand.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
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

Void ChangePageCommand_obj::__construct()
{
HX_STACK_PUSH("ChangePageCommand::new","ca/confidant/glory/controller/ChangePageCommand.hx",28);
{
	HX_STACK_LINE(28)
	super::__construct();
}
;
	return null();
}

ChangePageCommand_obj::~ChangePageCommand_obj() { }

Dynamic ChangePageCommand_obj::__CreateEmpty() { return  new ChangePageCommand_obj; }
hx::ObjectPtr< ChangePageCommand_obj > ChangePageCommand_obj::__new()
{  hx::ObjectPtr< ChangePageCommand_obj > result = new ChangePageCommand_obj();
	result->__construct();
	return result;}

Dynamic ChangePageCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ChangePageCommand_obj > result = new ChangePageCommand_obj();
	result->__construct();
	return result;}

Void ChangePageCommand_obj::floatControls( ){
{
		HX_STACK_PUSH("ChangePageCommand::floatControls","ca/confidant/glory/controller/ChangePageCommand.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		::ca::confidant::glory::model::ControlsRegistryProxy crp = hx::TCast< ca::confidant::glory::model::ControlsRegistryProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::ControlsRegistryProxy_obj::NAME));		HX_STACK_VAR(crp,"crp");
		HX_STACK_LINE(84)
		Dynamic controls = crp->getControls();		HX_STACK_VAR(controls,"controls");
		HX_STACK_LINE(86)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			while(((_g < controls->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(87)
				Dynamic thisControl = controls->__GetItem(_g);		HX_STACK_VAR(thisControl,"thisControl");
				HX_STACK_LINE(87)
				++(_g);
				HX_STACK_LINE(91)
				this->appMediator->removeDisplayObject(thisControl);
				HX_STACK_LINE(92)
				this->appMediator->addDisplayObject(thisControl,null());
				HX_STACK_LINE(93)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChangePageCommand_obj,floatControls,(void))

Void ChangePageCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("ChangePageCommand::execute","ca/confidant/glory/controller/ChangePageCommand.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(35)
		::haxe::Log_obj::trace(HX_CSTRING("ChangePageCommand"),hx::SourceInfo(HX_CSTRING("ChangePageCommand.hx"),35,HX_CSTRING("ca.confidant.glory.controller.ChangePageCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(36)
		this->pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));
		HX_STACK_LINE(37)
		this->appMediator = hx::TCast< ca::confidant::glory::view::ApplicationMediator >::cast(this->facade->retrieveMediator(HX_CSTRING("ApplicationMediator")));
		HX_STACK_LINE(38)
		::String action = hx::TCast< String >::cast(note->getBody());		HX_STACK_VAR(action,"action");
		HX_STACK_LINE(40)
		::String _switch_1 = (action);
		if (  ( _switch_1==HX_CSTRING("pageForward"))){
			HX_STACK_LINE(43)
			::Hash nextPage = this->pcp->getNextPage();		HX_STACK_VAR(nextPage,"nextPage");
			HX_STACK_LINE(44)
			if (((nextPage != null()))){
				HX_STACK_LINE(45)
				this->sendNotification(HX_CSTRING("removePage"),this->pcp->getCurrentPage()->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(46)
				this->sendNotification(HX_CSTRING("buildPage"),nextPage->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(47)
				this->pcp->setCurrentPageById(nextPage->get(HX_CSTRING("id")));
			}
			HX_STACK_LINE(49)
			this->floatControls();
		}
		else if (  ( _switch_1==HX_CSTRING("pageBackward"))){
			HX_STACK_LINE(52)
			::Hash prevPage = this->pcp->getPreviousPage();		HX_STACK_VAR(prevPage,"prevPage");
			HX_STACK_LINE(53)
			if (((prevPage != null()))){
				HX_STACK_LINE(54)
				this->sendNotification(HX_CSTRING("removePage"),this->pcp->getCurrentPage()->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(55)
				this->sendNotification(HX_CSTRING("buildPage"),prevPage->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(56)
				this->pcp->setCurrentPageById(prevPage->get(HX_CSTRING("id")));
			}
			HX_STACK_LINE(58)
			this->floatControls();
		}
		else  {
			HX_STACK_LINE(61)
			::Hash p = this->pcp->getPageById(action);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(62)
			bool overlay = (p->get(HX_CSTRING("type")) == HX_CSTRING("overlay"));		HX_STACK_VAR(overlay,"overlay");
			HX_STACK_LINE(65)
			if (((p != null()))){
				HX_STACK_LINE(67)
				if ((!(overlay))){
					HX_STACK_LINE(67)
					this->sendNotification(HX_CSTRING("removePage"),this->pcp->getCurrentPage()->get(HX_CSTRING("id")),null());
				}
				HX_STACK_LINE(71)
				this->sendNotification(HX_CSTRING("buildPage"),p->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(72)
				if ((!(overlay))){
					HX_STACK_LINE(73)
					this->floatControls();
					HX_STACK_LINE(74)
					this->pcp->setCurrentPageById(p->get(HX_CSTRING("id")));
				}
			}
		}
;
;
	}
return null();
}



ChangePageCommand_obj::ChangePageCommand_obj()
{
}

void ChangePageCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChangePageCommand);
	HX_MARK_MEMBER_NAME(appMediator,"appMediator");
	HX_MARK_MEMBER_NAME(pcp,"pcp");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChangePageCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appMediator,"appMediator");
	HX_VISIT_MEMBER_NAME(pcp,"pcp");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ChangePageCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pcp") ) { return pcp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { return appMediator; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"floatControls") ) { return floatControls_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ChangePageCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pcp") ) { pcp=inValue.Cast< ::ca::confidant::glory::model::PagesConfigProxy >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { appMediator=inValue.Cast< ::ca::confidant::glory::view::ApplicationMediator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChangePageCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appMediator"));
	outFields->push(HX_CSTRING("pcp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("floatControls"),
	HX_CSTRING("execute"),
	HX_CSTRING("appMediator"),
	HX_CSTRING("pcp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChangePageCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChangePageCommand_obj::__mClass,"__mClass");
};

Class ChangePageCommand_obj::__mClass;

void ChangePageCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.ChangePageCommand"), hx::TCanCast< ChangePageCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ChangePageCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
