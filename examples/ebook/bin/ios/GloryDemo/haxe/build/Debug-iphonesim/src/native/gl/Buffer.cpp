#include <hxcpp.h>

#ifndef INCLUDED_native_gl_Buffer
#include <native/gl/Buffer.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
namespace native{
namespace gl{

Void Buffer_obj::__construct(int inVersion,Dynamic inId)
{
HX_STACK_PUSH("Buffer::new","native/gl/GL.hx",1606);
{
	HX_STACK_LINE(1606)
	super::__construct(inVersion,inId);
}
;
	return null();
}

Buffer_obj::~Buffer_obj() { }

Dynamic Buffer_obj::__CreateEmpty() { return  new Buffer_obj; }
hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(int inVersion,Dynamic inId)
{  hx::ObjectPtr< Buffer_obj > result = new Buffer_obj();
	result->__construct(inVersion,inId);
	return result;}

Dynamic Buffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Buffer_obj > result = new Buffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Buffer_obj::getType( ){
	HX_STACK_PUSH("Buffer::getType","native/gl/GL.hx",1607);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1607)
	return HX_CSTRING("Buffer");
}



Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Buffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Buffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

Class Buffer_obj::__mClass;

void Buffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.Buffer"), hx::TCanCast< Buffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Buffer_obj::__boot()
{
}

} // end namespace native
} // end namespace gl
