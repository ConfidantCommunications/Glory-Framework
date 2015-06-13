#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_BuildControlsCommand
#include <ca/confidant/glory/controller/BuildControlsCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy
#include <ca/confidant/glory/model/ControlsRegistryProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_LoaderProxy
#include <ca/confidant/glory/model/LoaderProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ApplicationMediator
#include <ca/confidant/glory/view/ApplicationMediator.h>
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
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
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
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
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

Void BuildControlsCommand_obj::__construct()
{
HX_STACK_PUSH("BuildControlsCommand::new","ca/confidant/glory/controller/BuildControlsCommand.hx",26);
{
	HX_STACK_LINE(26)
	super::__construct();
}
;
	return null();
}

BuildControlsCommand_obj::~BuildControlsCommand_obj() { }

Dynamic BuildControlsCommand_obj::__CreateEmpty() { return  new BuildControlsCommand_obj; }
hx::ObjectPtr< BuildControlsCommand_obj > BuildControlsCommand_obj::__new()
{  hx::ObjectPtr< BuildControlsCommand_obj > result = new BuildControlsCommand_obj();
	result->__construct();
	return result;}

Dynamic BuildControlsCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BuildControlsCommand_obj > result = new BuildControlsCommand_obj();
	result->__construct();
	return result;}

Void BuildControlsCommand_obj::makeControl( ::haxe::xml::Fast actor){
{
		HX_STACK_PUSH("BuildControlsCommand::makeControl","ca/confidant/glory/controller/BuildControlsCommand.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(48)
		try{
			HX_STACK_LINE(50)
			::String ext = (hx::TCast< String >::cast(actor->att->resolve(HX_CSTRING("src")))).substr((int)-3,null());		HX_STACK_VAR(ext,"ext");
			HX_STACK_LINE(51)
			::ca::confidant::glory::view::components::ControlComponent a = ::ca::confidant::glory::view::components::ControlComponent_obj::__new(::Std_obj::string(actor->att->resolve(HX_CSTRING("action"))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(53)
			if (((ext == HX_CSTRING("svg")))){
				HX_STACK_LINE(54)
				::String theText = this->lp->getText((HX_CSTRING("assets/") + actor->att->resolve(HX_CSTRING("src"))));		HX_STACK_VAR(theText,"theText");
				HX_STACK_LINE(55)
				a->addSVG(theText);
			}
			else{
				HX_STACK_LINE(57)
				::native::display::BitmapData imageData = this->lp->getBitmapData((HX_CSTRING("assets/") + actor->att->resolve(HX_CSTRING("src"))),true);		HX_STACK_VAR(imageData,"imageData");
				HX_STACK_LINE(58)
				::native::display::Bitmap b = ::native::display::Bitmap_obj::__new(imageData,null(),null());		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(59)
				a->addBitmap(b);
			}
			HX_STACK_LINE(62)
			::ca::confidant::glory::view::ControlComponentMediator acm = ::ca::confidant::glory::view::ControlComponentMediator_obj::__new(actor->att->resolve(HX_CSTRING("id")),a);		HX_STACK_VAR(acm,"acm");
			HX_STACK_LINE(63)
			this->facade->registerMediator(acm);
			HX_STACK_LINE(64)
			this->appMediator->addDisplayObject(a,null());
			HX_STACK_LINE(65)
			this->csp->registerControl(a);
			HX_STACK_LINE(66)
			a->set_x(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("x"))));
			HX_STACK_LINE(67)
			a->set_y(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("y"))));
			HX_STACK_LINE(68)
			a->set_width(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("width"))));
			HX_STACK_LINE(69)
			a->set_height(::Std_obj::parseInt(actor->att->resolve(HX_CSTRING("height"))));
			HX_STACK_LINE(70)
			a->set_mouseEnabled(true);
			HX_STACK_LINE(71)
			a->useHandCursor = true;
			HX_STACK_LINE(72)
			a->buttonMode = true;
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					HX_STACK_LINE(75)
					::haxe::Log_obj::trace(::Std_obj::string(e),hx::SourceInfo(HX_CSTRING("BuildControlsCommand.hx"),76,HX_CSTRING("ca.confidant.glory.controller.BuildControlsCommand"),HX_CSTRING("makeControl")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BuildControlsCommand_obj,makeControl,(void))

Void BuildControlsCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("BuildControlsCommand::execute","ca/confidant/glory/controller/BuildControlsCommand.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(34)
		::haxe::Log_obj::trace(HX_CSTRING("BuildControlsCommand"),hx::SourceInfo(HX_CSTRING("BuildControlsCommand.hx"),34,HX_CSTRING("ca.confidant.glory.controller.BuildControlsCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(35)
		this->pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));
		HX_STACK_LINE(36)
		this->csp = hx::TCast< ca::confidant::glory::model::ControlsRegistryProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::ControlsRegistryProxy_obj::NAME));
		HX_STACK_LINE(37)
		this->lp = hx::TCast< ca::confidant::glory::model::LoaderProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::LoaderProxy_obj::NAME));
		HX_STACK_LINE(38)
		this->appMediator = hx::TCast< ca::confidant::glory::view::ApplicationMediator >::cast(this->facade->retrieveMediator(HX_CSTRING("ApplicationMediator")));
		HX_STACK_LINE(40)
		::List controlsList = this->pcp->getAppControls();		HX_STACK_VAR(controlsList,"controlsList");
		HX_STACK_LINE(41)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(controlsList->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast thisControl = __it->next();
			this->makeControl(thisControl);
		}
	}
return null();
}



BuildControlsCommand_obj::BuildControlsCommand_obj()
{
}

void BuildControlsCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BuildControlsCommand);
	HX_MARK_MEMBER_NAME(lp,"lp");
	HX_MARK_MEMBER_NAME(appMediator,"appMediator");
	HX_MARK_MEMBER_NAME(csp,"csp");
	HX_MARK_MEMBER_NAME(pcp,"pcp");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BuildControlsCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lp,"lp");
	HX_VISIT_MEMBER_NAME(appMediator,"appMediator");
	HX_VISIT_MEMBER_NAME(csp,"csp");
	HX_VISIT_MEMBER_NAME(pcp,"pcp");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BuildControlsCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lp") ) { return lp; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"csp") ) { return csp; }
		if (HX_FIELD_EQ(inName,"pcp") ) { return pcp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makeControl") ) { return makeControl_dyn(); }
		if (HX_FIELD_EQ(inName,"appMediator") ) { return appMediator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BuildControlsCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lp") ) { lp=inValue.Cast< ::ca::confidant::glory::model::LoaderProxy >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"csp") ) { csp=inValue.Cast< ::ca::confidant::glory::model::ControlsRegistryProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pcp") ) { pcp=inValue.Cast< ::ca::confidant::glory::model::PagesConfigProxy >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appMediator") ) { appMediator=inValue.Cast< ::ca::confidant::glory::view::ApplicationMediator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BuildControlsCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lp"));
	outFields->push(HX_CSTRING("appMediator"));
	outFields->push(HX_CSTRING("csp"));
	outFields->push(HX_CSTRING("pcp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("makeControl"),
	HX_CSTRING("execute"),
	HX_CSTRING("lp"),
	HX_CSTRING("appMediator"),
	HX_CSTRING("csp"),
	HX_CSTRING("pcp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuildControlsCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuildControlsCommand_obj::__mClass,"__mClass");
};

Class BuildControlsCommand_obj::__mClass;

void BuildControlsCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.BuildControlsCommand"), hx::TCanCast< BuildControlsCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BuildControlsCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
