#include <hxcpp.h>

#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_display_DirectRenderer
#include <native/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace native{
namespace display{

Void DirectRenderer_obj::__construct(::String __o_inType)
{
HX_STACK_PUSH("DirectRenderer::new","native/display/DirectRenderer.hx",12);
::String inType = __o_inType.Default(HX_CSTRING("DirectRenderer"));
{
	HX_STACK_LINE(12)
	Array< ::native::display::DirectRenderer > _g = Array_obj< ::native::display::DirectRenderer >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	super::__construct(::native::display::DirectRenderer_obj::nme_direct_renderer_create(),inType);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::native::display::DirectRenderer >,_g)
	Void run(Dynamic _){
		HX_STACK_PUSH("*::_Function_1_1","native/display/DirectRenderer.hx",16);
		HX_STACK_ARG(_,"_");
		{
			HX_STACK_LINE(16)
			::native::display::DirectRenderer_obj::nme_direct_renderer_set(_g->__get((int)0)->nmeHandle,_g->__get((int)0)->nmeOnRender_dyn());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(16)
	this->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE, Dynamic(new _Function_1_1(_g)),null(),null(),null());

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::native::display::DirectRenderer >,_g)
	Void run(Dynamic _){
		HX_STACK_PUSH("*::_Function_1_2","native/display/DirectRenderer.hx",17);
		HX_STACK_ARG(_,"_");
		{
			HX_STACK_LINE(17)
			::native::display::DirectRenderer_obj::nme_direct_renderer_set(_g->__get((int)0)->nmeHandle,null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(17)
	this->addEventListener(::native::events::Event_obj::REMOVED_FROM_STAGE, Dynamic(new _Function_1_2(_g)),null(),null(),null());
}
;
	return null();
}

DirectRenderer_obj::~DirectRenderer_obj() { }

Dynamic DirectRenderer_obj::__CreateEmpty() { return  new DirectRenderer_obj; }
hx::ObjectPtr< DirectRenderer_obj > DirectRenderer_obj::__new(::String __o_inType)
{  hx::ObjectPtr< DirectRenderer_obj > result = new DirectRenderer_obj();
	result->__construct(__o_inType);
	return result;}

Dynamic DirectRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectRenderer_obj > result = new DirectRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_render,DirectRenderer_obj)
Void run(::native::geom::Rectangle inRect){
{
		HX_STACK_PUSH("DirectRenderer::render","native/display/DirectRenderer.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inRect,"inRect");
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void DirectRenderer_obj::nmeOnRender( Dynamic inRect){
{
		HX_STACK_PUSH("DirectRenderer::nmeOnRender","native/display/DirectRenderer.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inRect,"inRect");
		HX_STACK_LINE(22)
		if (((this->render_dyn() != null()))){
			HX_STACK_LINE(24)
			this->render(::native::geom::Rectangle_obj::__new(inRect->__Field(HX_CSTRING("x"),true),inRect->__Field(HX_CSTRING("y"),true),inRect->__Field(HX_CSTRING("width"),true),inRect->__Field(HX_CSTRING("height"),true)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,nmeOnRender,(void))

Dynamic DirectRenderer_obj::nme_direct_renderer_create;

Dynamic DirectRenderer_obj::nme_direct_renderer_set;


DirectRenderer_obj::DirectRenderer_obj()
{
	render = new __default_render(this);
}

void DirectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectRenderer);
	HX_MARK_MEMBER_NAME(render,"render");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(render,"render");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DirectRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeOnRender") ) { return nmeOnRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_direct_renderer_set") ) { return nme_direct_renderer_set; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_direct_renderer_create") ) { return nme_direct_renderer_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_direct_renderer_set") ) { nme_direct_renderer_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_direct_renderer_create") ) { nme_direct_renderer_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_direct_renderer_create"),
	HX_CSTRING("nme_direct_renderer_set"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("nmeOnRender"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::nme_direct_renderer_create,"nme_direct_renderer_create");
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::nme_direct_renderer_set,"nme_direct_renderer_set");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::nme_direct_renderer_create,"nme_direct_renderer_create");
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::nme_direct_renderer_set,"nme_direct_renderer_set");
};

Class DirectRenderer_obj::__mClass;

void DirectRenderer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.DirectRenderer"), hx::TCanCast< DirectRenderer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DirectRenderer_obj::__boot()
{
	nme_direct_renderer_create= ::native::Loader_obj::load(HX_CSTRING("nme_direct_renderer_create"),(int)0);
	nme_direct_renderer_set= ::native::Loader_obj::load(HX_CSTRING("nme_direct_renderer_set"),(int)2);
}

} // end namespace native
} // end namespace display
