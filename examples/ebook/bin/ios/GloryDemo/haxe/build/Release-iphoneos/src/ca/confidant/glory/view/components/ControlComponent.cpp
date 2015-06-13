#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_view_components_ControlComponent
#include <ca/confidant/glory/view/components/ControlComponent.h>
#endif
#ifndef INCLUDED_format_SVG
#include <format/SVG.h>
#endif
#ifndef INCLUDED_neash_display_Bitmap
#include <neash/display/Bitmap.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
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
namespace ca{
namespace confidant{
namespace glory{
namespace view{
namespace components{

Void ControlComponent_obj::__construct(::String type)
{
HX_STACK_PUSH("ControlComponent::new","ca/confidant/glory/view/components/ControlComponent.hx",16);
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	this->type = type;
}
;
	return null();
}

ControlComponent_obj::~ControlComponent_obj() { }

Dynamic ControlComponent_obj::__CreateEmpty() { return  new ControlComponent_obj; }
hx::ObjectPtr< ControlComponent_obj > ControlComponent_obj::__new(::String type)
{  hx::ObjectPtr< ControlComponent_obj > result = new ControlComponent_obj();
	result->__construct(type);
	return result;}

Dynamic ControlComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControlComponent_obj > result = new ControlComponent_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ControlComponent_obj::addSVG( ::String t){
{
		HX_STACK_PUSH("ControlComponent::addSVG","ca/confidant/glory/view/components/ControlComponent.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(t,"t");
		HX_STACK_LINE(27)
		::format::SVG svg = ::format::SVG_obj::__new(t);		HX_STACK_VAR(svg,"svg");
		HX_STACK_LINE(28)
		svg->render(this->nmeGetGraphics(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlComponent_obj,addSVG,(void))

Void ControlComponent_obj::addBitmap( ::neash::display::Bitmap bMap){
{
		HX_STACK_PUSH("ControlComponent::addBitmap","ca/confidant/glory/view/components/ControlComponent.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bMap,"bMap");
		HX_STACK_LINE(23)
		this->defaultBitmap = bMap;
		HX_STACK_LINE(24)
		this->addChild(bMap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlComponent_obj,addBitmap,(void))


ControlComponent_obj::ControlComponent_obj()
{
}

void ControlComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlComponent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(defaultBitmap,"defaultBitmap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(defaultBitmap,"defaultBitmap");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ControlComponent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSVG") ) { return addSVG_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBitmap") ) { return addBitmap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultBitmap") ) { return defaultBitmap; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ControlComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultBitmap") ) { defaultBitmap=inValue.Cast< ::neash::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ControlComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("defaultBitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addSVG"),
	HX_CSTRING("addBitmap"),
	HX_CSTRING("type"),
	HX_CSTRING("defaultBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlComponent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlComponent_obj::__mClass,"__mClass");
};

Class ControlComponent_obj::__mClass;

void ControlComponent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.components.ControlComponent"), hx::TCanCast< ControlComponent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ControlComponent_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
} // end namespace components
