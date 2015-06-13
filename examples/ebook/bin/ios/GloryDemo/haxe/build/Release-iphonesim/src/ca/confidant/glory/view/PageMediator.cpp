#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_view_PageMediator
#include <ca/confidant/glory/view/PageMediator.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_components_PageComponent
#include <ca/confidant/glory/view/components/PageComponent.h>
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

Void PageMediator_obj::__construct(::String id,::ca::confidant::glory::view::components::PageComponent viewComponent)
{
HX_STACK_PUSH("PageMediator::new","ca/confidant/glory/view/PageMediator.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct(id,viewComponent);
}
;
	return null();
}

PageMediator_obj::~PageMediator_obj() { }

Dynamic PageMediator_obj::__CreateEmpty() { return  new PageMediator_obj; }
hx::ObjectPtr< PageMediator_obj > PageMediator_obj::__new(::String id,::ca::confidant::glory::view::components::PageComponent viewComponent)
{  hx::ObjectPtr< PageMediator_obj > result = new PageMediator_obj();
	result->__construct(id,viewComponent);
	return result;}

Dynamic PageMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PageMediator_obj > result = new PageMediator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::ca::confidant::glory::view::components::PageComponent PageMediator_obj::page( ){
	HX_STACK_PUSH("PageMediator::page","ca/confidant/glory/view/PageMediator.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(PageMediator_obj,page,return )


PageMediator_obj::PageMediator_obj()
{
}

void PageMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PageMediator);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PageMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PageMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { return page_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PageMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PageMediator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("page"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PageMediator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PageMediator_obj::__mClass,"__mClass");
};

Class PageMediator_obj::__mClass;

void PageMediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.PageMediator"), hx::TCanCast< PageMediator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PageMediator_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
