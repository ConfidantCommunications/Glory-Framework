#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Program3D
#include <native/display3D/Program3D.h>
#endif
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
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
namespace display3D{

Void Program3D_obj::__construct(::native::gl::Program program)
{
HX_STACK_PUSH("Program3D::new","native/display3D/Program3D.hx",13);
{
	HX_STACK_LINE(13)
	this->glProgram = program;
}
;
	return null();
}

Program3D_obj::~Program3D_obj() { }

Dynamic Program3D_obj::__CreateEmpty() { return  new Program3D_obj; }
hx::ObjectPtr< Program3D_obj > Program3D_obj::__new(::native::gl::Program program)
{  hx::ObjectPtr< Program3D_obj > result = new Program3D_obj();
	result->__construct(program);
	return result;}

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program3D_obj > result = new Program3D_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Program3D_obj::upload( ::native::gl::Shader vertexShader,::native::gl::Shader fragmentShader){
{
		HX_STACK_PUSH("Program3D::upload","native/display3D/Program3D.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertexShader,"vertexShader");
		HX_STACK_ARG(fragmentShader,"fragmentShader");
		HX_STACK_LINE(31)
		::native::gl::GL_obj::attachShader(this->glProgram,vertexShader);
		HX_STACK_LINE(32)
		::native::gl::GL_obj::attachShader(this->glProgram,fragmentShader);
		HX_STACK_LINE(33)
		::native::gl::GL_obj::linkProgram(this->glProgram);
		HX_STACK_LINE(35)
		if (((::native::gl::GL_obj::getProgramParameter(this->glProgram,(int)35714) == (int)0))){
			HX_STACK_LINE(37)
			::String result = ::native::gl::GL_obj::getProgramInfoLog(this->glProgram);		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(38)
			if (((result != HX_CSTRING("")))){
				HX_STACK_LINE(38)
				hx::Throw (result);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))

Void Program3D_obj::dispose( ){
{
		HX_STACK_PUSH("Program3D::dispose","native/display3D/Program3D.hx",20);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))


Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
}

Dynamic Program3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return glProgram; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Program3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast< ::native::gl::Program >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("glProgram"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("upload"),
	HX_CSTRING("dispose"),
	HX_CSTRING("glProgram"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

Class Program3D_obj::__mClass;

void Program3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Program3D"), hx::TCanCast< Program3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Program3D_obj::__boot()
{
}

} // end namespace native
} // end namespace display3D
