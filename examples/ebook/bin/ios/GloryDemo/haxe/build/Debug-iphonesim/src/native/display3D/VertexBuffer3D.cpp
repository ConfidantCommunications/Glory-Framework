#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display3D_VertexBuffer3D
#include <native/display3D/VertexBuffer3D.h>
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

Void VertexBuffer3D_obj::__construct(::native::gl::Buffer glBuffer,int numVertices,int data32PerVertex)
{
HX_STACK_PUSH("VertexBuffer3D::new","native/display3D/VertexBuffer3D.hx",17);
{
	HX_STACK_LINE(19)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(20)
	this->numVertices = numVertices;
	HX_STACK_LINE(21)
	this->data32PerVertex = data32PerVertex;
}
;
	return null();
}

VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::native::gl::Buffer glBuffer,int numVertices,int data32PerVertex)
{  hx::ObjectPtr< VertexBuffer3D_obj > result = new VertexBuffer3D_obj();
	result->__construct(glBuffer,numVertices,data32PerVertex);
	return result;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > result = new VertexBuffer3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void VertexBuffer3D_obj::uploadFromVector( Array< Float > data,int startVertex,int numVertices){
{
		HX_STACK_PUSH("VertexBuffer3D::uploadFromVector","native/display3D/VertexBuffer3D.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(startVertex,"startVertex");
		HX_STACK_ARG(numVertices,"numVertices");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::native::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_PUSH("VertexBuffer3D::uploadFromByteArray","native/display3D/VertexBuffer3D.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_ARG(byteArray,"byteArray");
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
		HX_STACK_ARG(startOffset,"startOffset");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(37)
		::native::gl::GL_obj::bindBuffer((int)34962,this->glBuffer);
		HX_STACK_LINE(38)
		::native::gl::GL_obj::bufferData((int)34962,byteArray,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::dispose( ){
{
		HX_STACK_PUSH("VertexBuffer3D::dispose","native/display3D/VertexBuffer3D.hx",26);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(data32PerVertex,"data32PerVertex");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { return data32PerVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::native::gl::Buffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { data32PerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("glBuffer"));
	outFields->push(HX_CSTRING("data32PerVertex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadFromVector"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("dispose"),
	HX_CSTRING("numVertices"),
	HX_CSTRING("glBuffer"),
	HX_CSTRING("data32PerVertex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.VertexBuffer3D"), hx::TCanCast< VertexBuffer3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void VertexBuffer3D_obj::__boot()
{
}

} // end namespace native
} // end namespace display3D
