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
#ifndef INCLUDED_pages_Ptitle
#include <pages/Ptitle.h>
#endif
namespace pages{

Void Ptitle_obj::__construct()
{
HX_STACK_PUSH("Ptitle::new","pages/Ptitle.hx",10);
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

Ptitle_obj::~Ptitle_obj() { }

Dynamic Ptitle_obj::__CreateEmpty() { return  new Ptitle_obj; }
hx::ObjectPtr< Ptitle_obj > Ptitle_obj::__new()
{  hx::ObjectPtr< Ptitle_obj > result = new Ptitle_obj();
	result->__construct();
	return result;}

Dynamic Ptitle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ptitle_obj > result = new Ptitle_obj();
	result->__construct();
	return result;}

Void Ptitle_obj::onTimerTick( ){
{
		HX_STACK_PUSH("Ptitle::onTimerTick","pages/Ptitle.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(23)
		::ca::confidant::glory::view::components::ActorComponent _g = this->star;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		_g->nmeSetRotation((_g->nmeGetRotation() + (int)20));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ptitle_obj,onTimerTick,(void))

Void Ptitle_obj::startTimer( hx::Null< int >  __o_i){
int i = __o_i.Default(50);
	HX_STACK_PUSH("Ptitle::startTimer","pages/Ptitle.hx",17);
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


HX_DEFINE_DYNAMIC_FUNC1(Ptitle_obj,startTimer,(void))

Void Ptitle_obj::init( ){
{
		HX_STACK_PUSH("Ptitle::init","pages/Ptitle.hx",13);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14)
		this->star = this->myActors->get(HX_CSTRING("star1"));
		HX_STACK_LINE(15)
		this->startTimer(null());
	}
return null();
}



Ptitle_obj::Ptitle_obj()
{
}

void Ptitle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ptitle);
	HX_MARK_MEMBER_NAME(star,"star");
	HX_MARK_MEMBER_NAME(myTimer,"myTimer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ptitle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(star,"star");
	HX_VISIT_MEMBER_NAME(myTimer,"myTimer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Ptitle_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Ptitle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void Ptitle_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Ptitle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ptitle_obj::__mClass,"__mClass");
};

Class Ptitle_obj::__mClass;

void Ptitle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("pages.Ptitle"), hx::TCanCast< Ptitle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ptitle_obj::__boot()
{
}

} // end namespace pages
