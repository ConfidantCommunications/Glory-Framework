#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_InitPageSoundsCommand
#include <ca/confidant/glory/controller/InitPageSoundsCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_SoundMediator
#include <ca/confidant/glory/view/SoundMediator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
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

Void InitPageSoundsCommand_obj::__construct()
{
HX_STACK_PUSH("InitPageSoundsCommand::new","ca/confidant/glory/controller/InitPageSoundsCommand.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

InitPageSoundsCommand_obj::~InitPageSoundsCommand_obj() { }

Dynamic InitPageSoundsCommand_obj::__CreateEmpty() { return  new InitPageSoundsCommand_obj; }
hx::ObjectPtr< InitPageSoundsCommand_obj > InitPageSoundsCommand_obj::__new()
{  hx::ObjectPtr< InitPageSoundsCommand_obj > result = new InitPageSoundsCommand_obj();
	result->__construct();
	return result;}

Dynamic InitPageSoundsCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InitPageSoundsCommand_obj > result = new InitPageSoundsCommand_obj();
	result->__construct();
	return result;}

Void InitPageSoundsCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("InitPageSoundsCommand::execute","ca/confidant/glory/controller/InitPageSoundsCommand.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(21)
		::haxe::Log_obj::trace(HX_CSTRING("InitPageSoundsCommand"),hx::SourceInfo(HX_CSTRING("InitPageSoundsCommand.hx"),21,HX_CSTRING("ca.confidant.glory.controller.InitPageSoundsCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(22)
		::ca::confidant::glory::model::PagesConfigProxy pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));		HX_STACK_VAR(pcp,"pcp");
		HX_STACK_LINE(23)
		::String pageId = hx::TCast< String >::cast(note->getBody());		HX_STACK_VAR(pageId,"pageId");
		HX_STACK_LINE(24)
		::List sounds = pcp->getPageSounds(pageId);		HX_STACK_VAR(sounds,"sounds");
		HX_STACK_LINE(26)
		if (((sounds->length > (int)0))){
			HX_STACK_LINE(26)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(sounds->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast thisSound = __it->next();
				{
					HX_STACK_LINE(28)
					::haxe::Log_obj::trace((HX_CSTRING("adding sound:") + thisSound->att->resolve(HX_CSTRING("src"))),hx::SourceInfo(HX_CSTRING("InitPageSoundsCommand.hx"),28,HX_CSTRING("ca.confidant.glory.controller.InitPageSoundsCommand"),HX_CSTRING("execute")));
					HX_STACK_LINE(29)
					::native::media::Sound s = ::nme::installer::Assets_obj::getSound((HX_CSTRING("assets/") + thisSound->att->resolve(HX_CSTRING("src"))));		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					this->facade->registerMediator(::ca::confidant::glory::view::SoundMediator_obj::__new(thisSound->att->resolve(HX_CSTRING("id")),s));
				}
;
			}
		}
	}
return null();
}



InitPageSoundsCommand_obj::InitPageSoundsCommand_obj()
{
}

void InitPageSoundsCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InitPageSoundsCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InitPageSoundsCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic InitPageSoundsCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InitPageSoundsCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InitPageSoundsCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InitPageSoundsCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InitPageSoundsCommand_obj::__mClass,"__mClass");
};

Class InitPageSoundsCommand_obj::__mClass;

void InitPageSoundsCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.InitPageSoundsCommand"), hx::TCanCast< InitPageSoundsCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InitPageSoundsCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
