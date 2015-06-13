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
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_pages_Psvg
#include <pages/Psvg.h>
#endif
namespace pages{

Void Psvg_obj::__construct()
{
HX_STACK_PUSH("Psvg::new","pages/Psvg.hx",10);
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

Psvg_obj::~Psvg_obj() { }

Dynamic Psvg_obj::__CreateEmpty() { return  new Psvg_obj; }
hx::ObjectPtr< Psvg_obj > Psvg_obj::__new()
{  hx::ObjectPtr< Psvg_obj > result = new Psvg_obj();
	result->__construct();
	return result;}

Dynamic Psvg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Psvg_obj > result = new Psvg_obj();
	result->__construct();
	return result;}

Void Psvg_obj::onTimerTick( ){
{
		HX_STACK_PUSH("Psvg::onTimerTick","pages/Psvg.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(23)
		::ca::confidant::glory::view::components::ActorComponent _g = this->star;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		_g->set_rotation((_g->get_rotation() + (int)20));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Psvg_obj,onTimerTick,(void))

Void Psvg_obj::startTimer( hx::Null< int >  __o_i){
int i = __o_i.Default(50);
	HX_STACK_PUSH("Psvg::startTimer","pages/Psvg.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
{
		HX_STACK_LINE(19)
		this->myTimer = ::haxe::Timer_obj::__new(i);
		HX_STACK_LINE(20)
		this->myTimer->run = this->onTimerTick_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Psvg_obj,startTimer,(void))

Void Psvg_obj::init( ){
{
		HX_STACK_PUSH("Psvg::init","pages/Psvg.hx",13);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14)
		this->star = this->myActors->get(HX_CSTRING("star1"));
		HX_STACK_LINE(15)
		this->startTimer(null());
	}
return null();
}



Psvg_obj::Psvg_obj()
{
}

void Psvg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Psvg);
	HX_MARK_MEMBER_NAME(star,"star");
	HX_MARK_MEMBER_NAME(myTimer,"myTimer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Psvg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(star,"star");
	HX_VISIT_MEMBER_NAME(myTimer,"myTimer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Psvg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"star") ) { return star; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myTimer") ) { return myTimer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimer") ) { return startTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onTimerTick") ) { return onTimerTick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Psvg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"star") ) { star=inValue.Cast< ::ca::confidant::glory::view::components::ActorComponent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myTimer") ) { myTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Psvg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("star"));
	outFields->push(HX_CSTRING("myTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onTimerTick"),
	HX_CSTRING("startTimer"),
	HX_CSTRING("init"),
	HX_CSTRING("star"),
	HX_CSTRING("myTimer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Psvg_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Psvg_obj::__mClass,"__mClass");
};

Class Psvg_obj::__mClass;

void Psvg_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("pages.Psvg"), hx::TCanCast< Psvg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Psvg_obj::__boot()
{
}

} // end namespace pages
