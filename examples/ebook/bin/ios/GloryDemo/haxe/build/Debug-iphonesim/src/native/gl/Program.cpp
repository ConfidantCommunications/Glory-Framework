#include <hxcpp.h>

#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Program
#include <native/gl/Program.h>
#endif
#ifndef INCLUDED_native_gl_Shader
#include <native/gl/Shader.h>
#endif
namespace native{
namespace gl{

Void Program_obj::__construct(int inVersion,Dynamic inId)
{
HX_STACK_PUSH("Program::new","native/gl/GL.hx",1626);
{
	HX_STACK_LINE(1628)
	super::__construct(inVersion,inId);
	HX_STACK_LINE(1629)
	this->shaders = Array_obj< ::native::gl::Shader >::__new();
}
;
	return null();
}

Program_obj::~Program_obj() { }

Dynamic Program_obj::__CreateEmpty() { return  new Program_obj; }
hx::ObjectPtr< Program_obj > Program_obj::__new(int inVersion,Dynamic inId)
{  hx::ObjectPtr< Program_obj > result = new Program_obj();
	result->__construct(inVersion,inId);
	return result;}

Dynamic Program_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program_obj > result = new Program_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Array< ::native::gl::Shader > Program_obj::getShaders( ){
	HX_STACK_PUSH("Program::getShaders","native/gl/GL.hx",1636);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1636)
	return this->shaders->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Program_obj,getShaders,return )

::String Program_obj::getType( ){
	HX_STACK_PUSH("Program::getType","native/gl/GL.hx",1635);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1635)
	return HX_CSTRING("Program");
}


Void Program_obj::attach( ::native::gl::Shader s){
{
		HX_STACK_PUSH("Program::attach","native/gl/GL.hx",1634);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(1634)
		this->shaders->push(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program_obj,attach,(void))


Program_obj::Program_obj()
{
}

void Program_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Program_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Program_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShaders") ) { return getShaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Program_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Array< ::native::gl::Shader > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shaders"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getShaders"),
	HX_CSTRING("getType"),
	HX_CSTRING("attach"),
	HX_CSTRING("shaders"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program_obj::__mClass,"__mClass");
};

Class Program_obj::__mClass;

void Program_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.Program"), hx::TCanCast< Program_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Program_obj::__boot()
{
}

} // end namespace native
} // end namespace gl
