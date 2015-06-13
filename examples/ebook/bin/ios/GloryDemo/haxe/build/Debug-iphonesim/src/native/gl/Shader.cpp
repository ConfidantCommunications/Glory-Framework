#include <hxcpp.h>

#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Shader
#include <native/gl/Shader.h>
#endif
namespace native{
namespace gl{

Void Shader_obj::__construct(int inVersion,Dynamic inId)
{
HX_STACK_PUSH("Shader::new","native/gl/GL.hx",1652);
{
	HX_STACK_LINE(1652)
	super::__construct(inVersion,inId);
}
;
	return null();
}

Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(int inVersion,Dynamic inId)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inVersion,inId);
	return result;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Shader_obj::getType( ){
	HX_STACK_PUSH("Shader::getType","native/gl/GL.hx",1653);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1653)
	return HX_CSTRING("Shader");
}



Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.Shader"), hx::TCanCast< Shader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Shader_obj::__boot()
{
}

} // end namespace native
} // end namespace gl
