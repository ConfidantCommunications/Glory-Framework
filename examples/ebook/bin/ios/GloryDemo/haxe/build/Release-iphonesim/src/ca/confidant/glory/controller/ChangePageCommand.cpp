#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_ChangePageCommand
#include <ca/confidant/glory/controller/ChangePageCommand.h>
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
HX_STACK_PUSH("ChangePageCommand::new","ca/confidant/glory/controller/ChangePageCommand.hx",29);
{
	HX_STACK_LINE(29)
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

Void ChangePageCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("ChangePageCommand::execute","ca/confidant/glory/controller/ChangePageCommand.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(36)
		::haxe::Log_obj::trace((HX_CSTRING("ChangePageCommand:") + ::Std_obj::string(note->getBody())),hx::SourceInfo(HX_CSTRING("ChangePageCommand.hx"),36,HX_CSTRING("ca.confidant.glory.controller.ChangePageCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(37)
		this->pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));
		HX_STACK_LINE(38)
		this->appMediator = hx::TCast< ca::confidant::glory::view::ApplicationMediator >::cast(this->facade->retrieveMediator(HX_CSTRING("ApplicationMediator")));
		HX_STACK_LINE(39)
		::String action = hx::TCast< String >::cast(note->getBody());		HX_STACK_VAR(action,"action");
		HX_STACK_LINE(41)
		::String _switch_1 = (action);
		if (  ( _switch_1==HX_CSTRING("pageForward"))){
			HX_STACK_LINE(44)
			::Hash nextPage = this->pcp->getNextPage();		HX_STACK_VAR(nextPage,"nextPage");
			HX_STACK_LINE(45)
			if (((nextPage != null()))){
				HX_STACK_LINE(46)
				this->sendNotification(HX_CSTRING("removePage"),this->pcp->getCurrentPage()->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(47)
				this->sendNotification(HX_CSTRING("buildPage"),nextPage->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(48)
				this->pcp->setCurrentPageById(nextPage->get(HX_CSTRING("id")));
			}
		}
		else if (  ( _switch_1==HX_CSTRING("pageBackward"))){
			HX_STACK_LINE(53)
			::Hash prevPage = this->pcp->getPreviousPage();		HX_STACK_VAR(prevPage,"prevPage");
			HX_STACK_LINE(54)
			if (((prevPage != null()))){
				HX_STACK_LINE(55)
				this->sendNotification(HX_CSTRING("removePage"),this->pcp->getCurrentPage()->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(56)
				this->sendNotification(HX_CSTRING("buildPage"),prevPage->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(57)
				this->pcp->setCurrentPageById(prevPage->get(HX_CSTRING("id")));
			}
		}
		else  {
			HX_STACK_LINE(62)
			::Hash p = this->pcp->getPageById(action);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(63)
			bool overlay = (p->get(HX_CSTRING("type")) == HX_CSTRING("overlay"));		HX_STACK_VAR(overlay,"overlay");
			HX_STACK_LINE(66)
			if (((p != null()))){
				HX_STACK_LINE(68)
				if ((!(overlay))){
					HX_STACK_LINE(68)
					this->sendNotification(HX_CSTRING("removePage"),this->pcp->getCurrentPage()->get(HX_CSTRING("id")),null());
				}
				HX_STACK_LINE(72)
				this->sendNotification(HX_CSTRING("buildPage"),p->get(HX_CSTRING("id")),null());
				HX_STACK_LINE(73)
				if ((!(overlay))){
					HX_STACK_LINE(73)
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
