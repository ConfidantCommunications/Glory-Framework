#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
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
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace view{
namespace components{

Void PageComponent_obj::__construct()
{
HX_STACK_PUSH("PageComponent::new","ca/confidant/glory/view/components/PageComponent.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	this->myActors = ::Hash_obj::__new();
	HX_STACK_LINE(18)
	::haxe::Log_obj::trace(HX_CSTRING("new Page!"),hx::SourceInfo(HX_CSTRING("PageComponent.hx"),18,HX_CSTRING("ca.confidant.glory.view.components.PageComponent"),HX_CSTRING("new")));
}
;
	return null();
}

PageComponent_obj::~PageComponent_obj() { }

Dynamic PageComponent_obj::__CreateEmpty() { return  new PageComponent_obj; }
hx::ObjectPtr< PageComponent_obj > PageComponent_obj::__new()
{  hx::ObjectPtr< PageComponent_obj > result = new PageComponent_obj();
	result->__construct();
	return result;}

Dynamic PageComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PageComponent_obj > result = new PageComponent_obj();
	result->__construct();
	return result;}

Void PageComponent_obj::init( ){
{
		HX_STACK_PUSH("PageComponent::init","ca/confidant/glory/view/components/PageComponent.hx",29);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageComponent_obj,init,(void))

Void PageComponent_obj::addActor( ::String key,::ca::confidant::glory::view::components::ActorComponent spr){
{
		HX_STACK_PUSH("PageComponent::addActor","ca/confidant/glory/view/components/PageComponent.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(spr,"spr");
		HX_STACK_LINE(22)
		this->addChild(spr);
		HX_STACK_LINE(23)
		this->myActors->set(key,spr);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PageComponent_obj,addActor,(void))


PageComponent_obj::PageComponent_obj()
{
}

void PageComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PageComponent);
	HX_MARK_MEMBER_NAME(myActors,"myActors");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PageComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myActors,"myActors");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PageComponent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addActor") ) { return addActor_dyn(); }
		if (HX_FIELD_EQ(inName,"myActors") ) { return myActors; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PageComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"myActors") ) { myActors=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PageComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("myActors"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("addActor"),
	HX_CSTRING("myActors"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PageComponent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PageComponent_obj::__mClass,"__mClass");
};

Class PageComponent_obj::__mClass;

void PageComponent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.components.PageComponent"), hx::TCanCast< PageComponent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PageComponent_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
} // end namespace components
