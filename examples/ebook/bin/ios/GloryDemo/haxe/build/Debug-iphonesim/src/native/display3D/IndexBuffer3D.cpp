#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display3D_IndexBuffer3D
#include <native/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_native_gl_Buffer
#include <native/gl/Buffer.h>
#endif
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace display3D{

Void IndexBuffer3D_obj::__construct(::native::gl::Buffer glBuffer,int numIndices)
{
HX_STACK_PUSH("IndexBuffer3D::new","native/display3D/IndexBuffer3D.hx",16);
{
	HX_STACK_LINE(18)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(19)
	this->numIndices = numIndices;
}
;
	return null();
}

IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::native::gl::Buffer glBuffer,int numIndices)
{  hx::ObjectPtr< IndexBuffer3D_obj > result = new IndexBuffer3D_obj();
	result->__construct(glBuffer,numIndices);
	return result;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > result = new IndexBuffer3D_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void IndexBuffer3D_obj::uploadFromVector( Array< int > data,int startOffset,int count){
{
		HX_STACK_PUSH("IndexBuffer3D::uploadFromVector","native/display3D/IndexBuffer3D.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(startOffset,"startOffset");
		HX_STACK_ARG(count,"count");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::native::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_PUSH("IndexBuffer3D::uploadFromByteArray","native/display3D/IndexBuffer3D.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_ARG(byteArray,"byteArray");
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
		HX_STACK_ARG(startOffset,"startOffset");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(28)
		::native::gl::GL_obj::bindBuffer((int)34963,this->glBuffer);
		HX_STACK_LINE(29)
		::native::gl::GL_obj::bufferData((int)34963,byteArray,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::native::gl::Buffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numIndices"));
	outFields->push(HX_CSTRING("glBuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadFromVector"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("numIndices"),
	HX_CSTRING("glBuffer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.IndexBuffer3D"), hx::TCanCast< IndexBuffer3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IndexBuffer3D_obj::__boot()
{
}

} // end namespace native
} // end namespace display3D
