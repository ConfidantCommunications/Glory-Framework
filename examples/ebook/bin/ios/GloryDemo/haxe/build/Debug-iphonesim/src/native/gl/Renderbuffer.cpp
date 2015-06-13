#include <hxcpp.h>

#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Renderbuffer
#include <native/gl/Renderbuffer.h>
#endif
namespace native{
namespace gl{

Void Renderbuffer_obj::__construct(int inVersion,Dynamic inId)
{
HX_STACK_PUSH("Renderbuffer::new","native/gl/GL.hx",1644);
{
	HX_STACK_LINE(1644)
	super::__construct(inVersion,inId);
}
;
	return null();
}

Renderbuffer_obj::~Renderbuffer_obj() { }

Dynamic Renderbuffer_obj::__CreateEmpty() { return  new Renderbuffer_obj; }
hx::ObjectPtr< Renderbuffer_obj > Renderbuffer_obj::__new(int inVersion,Dynamic inId)
{  hx::ObjectPtr< Renderbuffer_obj > result = new Renderbuffer_obj();
	result->__construct(inVersion,inId);
	return result;}

Dynamic Renderbuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderbuffer_obj > result = new Renderbuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Renderbuffer_obj::getType( ){
	HX_STACK_PUSH("Renderbuffer::getType","native/gl/GL.hx",1645);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1645)
	return HX_CSTRING("Renderbuffer");
}



Renderbuffer_obj::Renderbuffer_obj()
{
}

void Renderbuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderbuffer);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Renderbuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Renderbuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderbuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderbuffer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderbuffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderbuffer_obj::__mClass,"__mClass");
};

Class Renderbuffer_obj::__mClass;

void Renderbuffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.Renderbuffer"), hx::TCanCast< Renderbuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Renderbuffer_obj::__boot()
{
}

} // end namespace native
} // end namespace gl
