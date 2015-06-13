#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_BuildPageCommand
#include <ca/confidant/glory/controller/BuildPageCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_ActorComponentConfigProxy
#include <ca/confidant/glory/model/ActorComponentConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_LoaderProxy
#include <ca/confidant/glory/model/LoaderProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ActorComponentMediator
#include <ca/confidant/glory/view/ActorComponentMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ApplicationMediator
#include <ca/confidant/glory/view/ApplicationMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_PageMediator
#include <ca/confidant/glory/view/PageMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_components_ActorComponent
#include <ca/confidant/glory/view/components/ActorComponent.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_components_PageComponent
#include <ca/confidant/glory/view/components/PageComponent.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_neash_display_Bitmap
#include <neash/display/Bitmap.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
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
#ifndef INCLUDED_neash_display_PixelSnapping
#include <neash/display/PixelSnapping.h>
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

Void BuildPageCommand_obj::__construct()
{
HX_STACK_PUSH("BuildPageCommand::new","ca/confidant/glory/controller/BuildPageCommand.hx",37);
{
	HX_STACK_LINE(37)
	super::__construct();
}
;
	return null();
}

BuildPageCommand_obj::~BuildPageCommand_obj() { }

Dynamic BuildPageCommand_obj::__CreateEmpty() { return  new BuildPageCommand_obj; }
hx::ObjectPtr< BuildPageCommand_obj > BuildPageCommand_obj::__new()
{  hx::ObjectPtr< BuildPageCommand_obj > result = new BuildPageCommand_obj();
	result->__construct();
	return result;}

Dynamic BuildPageCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BuildPageCommand_obj > result = new BuildPageCommand_obj();
	result->__construct();
	return result;}

::ca::confidant::glory::view::components::ActorComponent BuildPageCommand_obj::makeActor( ::haxe::xml::Fast actor){
	HX_STACK_PUSH("BuildPageCommand::makeActor","ca/confidant/glory/controller/BuildPageCommand.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actor,"actor");
	HX_STACK_LINE(84)
	::String ext = (hx::TCast< String >::cast(actor->att->resolve(HX_CSTRING("src")))).substr((int)-3,null());		HX_STACK_VAR(ext,"ext");
	HX_STACK_LINE(91)
	::ca::confidant::glory::view::components::ActorComponent a = ::ca::confidant::glory::view::components::ActorComponent_obj::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(95)
	if (((ext == HX_CSTRING("svg")))){
		HX_STACK_LINE(96)
		::String theText = this->lp->getText((HX_CSTRING("assets/") + actor->att->resolve(HX_CSTRING("src"))));		HX_STACK_VAR(theText,"theText");
		HX_STACK_LINE(97)
		a->addSVG(theText);
	}
	else{
		HX_STACK_LINE(99)
		::neash::display::BitmapData imageData = this->lp->getBitmapData((HX_CSTRING("assets/") + actor->att->resolve(HX_CSTRING("src"))),true);		HX_STACK_VAR(imageData,"imageData");
		HX_STACK_LINE(100)
		::neash::display::Bitmap b = ::neash::display::Bitmap_obj::__new(imageData,null(),null());		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(101)
		a->addBitmap(b);
	}
	HX_STACK_LINE(103)
	::String action;		HX_STACK_VAR(action,"action");
	HX_STACK_LINE(104)
	if ((actor->has->resolve(HX_CSTRING("action")))){
		HX_STACK_LINE(104)
		action = ::Std_obj::string(actor->att->resolve(HX_CSTRING("action")));
	}
	else{
		HX_STACK_LINE(106)
		action = HX_CSTRING("");
	}
	HX_STACK_LINE(109)
	::ca::confidant::glory::model::ActorComponentConfigProxy accp = ::ca::confidant::glory::model::ActorComponentConfigProxy_obj::__new(actor->att->resolve(HX_CSTRING("id")),::Std_obj::string(actor->att->resolve(HX_CSTRING("type"))),action);		HX_STACK_VAR(accp,"accp");
	HX_STACK_LINE(110)
	this->facade->registerProxy(accp);
	HX_STACK_LINE(111)
	::ca::confidant::glory::view::ActorComponentMediator acm = ::ca::confidant::glory::view::ActorComponentMediator_obj::__new(actor->att->resolve(HX_CSTRING("id")),a,accp);		HX_STACK_VAR(acm,"acm");
	HX_STACK_LINE(112)
	this->facade->registerMediator(acm);
	HX_STACK_LINE(114)
	a->nmeSetX(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("x"))));
	HX_STACK_LINE(115)
	a->nmeSetY(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("y"))));
	HX_STACK_LINE(116)
	a->nmeSetWidth(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("width"))));
	HX_STACK_LINE(117)
	a->nmeSetHeight(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("height"))));
	HX_STACK_LINE(118)
	a->type = actor->att->resolve(HX_CSTRING("type"));
	HX_STACK_LINE(119)
	a->nmeSetName(actor->att->resolve(HX_CSTRING("id")));
	HX_STACK_LINE(120)
	if (((a->type == HX_CSTRING("control")))){
		HX_STACK_LINE(122)
		a->nmeSetMouseEnabled(true);
		HX_STACK_LINE(123)
		a->useHandCursor = true;
		HX_STACK_LINE(124)
		a->buttonMode = true;
	}
	HX_STACK_LINE(126)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC1(BuildPageCommand_obj,makeActor,return )

Void BuildPageCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("BuildPageCommand::execute","ca/confidant/glory/controller/BuildPageCommand.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(43)
		::haxe::Log_obj::trace(HX_CSTRING("BuildPageCommand"),hx::SourceInfo(HX_CSTRING("BuildPageCommand.hx"),43,HX_CSTRING("ca.confidant.glory.controller.BuildPageCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(45)
		this->pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));
		HX_STACK_LINE(46)
		this->lp = hx::TCast< ca::confidant::glory::model::LoaderProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::LoaderProxy_obj::NAME));
		HX_STACK_LINE(47)
		this->appMediator = hx::TCast< ca::confidant::glory::view::ApplicationMediator >::cast(this->facade->retrieveMediator(HX_CSTRING("ApplicationMediator")));
		HX_STACK_LINE(48)
		::String pageId = hx::TCast< String >::cast(note->getBody());		HX_STACK_VAR(pageId,"pageId");
		HX_STACK_LINE(53)
		::String class_name = (HX_CSTRING("pages.P") + pageId);		HX_STACK_VAR(class_name,"class_name");
		HX_STACK_LINE(54)
		::Class a_class = ::Type_obj::resolveClass(class_name);		HX_STACK_VAR(a_class,"a_class");
		HX_STACK_LINE(55)
		::ca::confidant::glory::view::components::PageComponent s = (  (((a_class != null()))) ? ::ca::confidant::glory::view::components::PageComponent(::Type_obj::createInstance(a_class,Dynamic( Array_obj<Dynamic>::__new()))) : ::ca::confidant::glory::view::components::PageComponent(::ca::confidant::glory::view::components::PageComponent_obj::__new()) );		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(57)
		s->nmeSetName(pageId);
		HX_STACK_LINE(59)
		if (((this->pcp->getPageById(pageId)->get(HX_CSTRING("type")) == HX_CSTRING("overlay")))){
			HX_STACK_LINE(59)
			this->appMediator->addDisplayObject(s,(int)-1);
		}
		else{
			HX_STACK_LINE(62)
			this->appMediator->addDisplayObject(s,(int)0);
		}
		HX_STACK_LINE(68)
		::ca::confidant::glory::view::PageMediator pm = ::ca::confidant::glory::view::PageMediator_obj::__new(pageId,s);		HX_STACK_VAR(pm,"pm");
		HX_STACK_LINE(69)
		this->facade->registerMediator(pm);
		HX_STACK_LINE(71)
		::List actorsList = this->pcp->getPageActors(pageId);		HX_STACK_VAR(actorsList,"actorsList");
		HX_STACK_LINE(73)
		if (((actorsList->length > (int)0))){
			HX_STACK_LINE(73)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(actorsList->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast thisActor = __it->next();
				s->addActor(thisActor->att->resolve(HX_CSTRING("id")),this->makeActor(thisActor));
			}
		}
		HX_STACK_LINE(80)
		s->init();
	}
return null();
}



BuildPageCommand_obj::BuildPageCommand_obj()
{
}

void BuildPageCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BuildPageCommand);
	HX_MARK_MEMBER_NAME(lp,"lp");
	HX_MARK_MEMBER_NAME(appMediator,"appMediator");
	HX_MARK_MEMBER_NAME(pcp,"pcp");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BuildPageCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lp,"lp");
	HX_VISIT_MEMBER_NAME(appMediator,"appMediator");
	HX_VISIT_MEMBER_NAME(pcp,"pcp");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BuildPageCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lp") ) { return lp; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pcp") ) { return pcp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeActor") ) { return makeActor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { return appMediator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BuildPageCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lp") ) { lp=inValue.Cast< ::ca::confidant::glory::model::LoaderProxy >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pcp") ) { pcp=inValue.Cast< ::ca::confidant::glory::model::PagesConfigProxy >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { appMediator=inValue.Cast< ::ca::confidant::glory::view::ApplicationMediator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BuildPageCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lp"));
	outFields->push(HX_CSTRING("appMediator"));
	outFields->push(HX_CSTRING("pcp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("makeActor"),
	HX_CSTRING("execute"),
	HX_CSTRING("lp"),
	HX_CSTRING("appMediator"),
	HX_CSTRING("pcp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuildPageCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuildPageCommand_obj::__mClass,"__mClass");
};

Class BuildPageCommand_obj::__mClass;

void BuildPageCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.BuildPageCommand"), hx::TCanCast< BuildPageCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BuildPageCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
