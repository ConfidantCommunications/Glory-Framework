#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
namespace native{
namespace gl{

Void Object_obj::__construct(int inVersion,Dynamic inId)
{
HX_STACK_PUSH("Object::new","native/gl/GL.hx",1589);
{
	HX_STACK_LINE(1589)
	this->version = inVersion;
	HX_STACK_LINE(1589)
	this->id = inId;
}
;
	return null();
}

Object_obj::~Object_obj() { }

Dynamic Object_obj::__CreateEmpty() { return  new Object_obj; }
hx::ObjectPtr< Object_obj > Object_obj::__new(int inVersion,Dynamic inId)
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct(inVersion,inId);
	return result;}

Dynamic Object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Object_obj::get_valid( ){
	HX_STACK_PUSH("Object::get_valid","native/gl/GL.hx",1598);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1598)
	return this->isValid();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_valid,return )

bool Object_obj::get_invalidated( ){
	HX_STACK_PUSH("Object::get_invalidated","native/gl/GL.hx",1597);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1597)
	return this->isInvalid();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_invalidated,return )

bool Object_obj::isInvalid( ){
	HX_STACK_PUSH("Object::isInvalid","native/gl/GL.hx",1594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1594)
	return !(this->isValid());
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,isInvalid,return )

bool Object_obj::isValid( ){
	HX_STACK_PUSH("Object::isValid","native/gl/GL.hx",1593);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1593)
	return (bool((this->id != null())) && bool((this->version == ::native::gl::GL_obj::get_version())));
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,isValid,return )

::String Object_obj::toString( ){
	HX_STACK_PUSH("Object::toString","native/gl/GL.hx",1592);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1592)
	return (((this->getType() + HX_CSTRING("(")) + ::Std_obj::string(this->id)) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toString,return )

Void Object_obj::invalidate( ){
{
		HX_STACK_PUSH("Object::invalidate","native/gl/GL.hx",1591);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1591)
		this->id = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,invalidate,(void))

::String Object_obj::getType( ){
	HX_STACK_PUSH("Object::getType","native/gl/GL.hx",1590);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1590)
	return HX_CSTRING("GLObject");
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getType,return )


Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(valid,"valid");
	HX_MARK_MEMBER_NAME(invalidated,"invalidated");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(valid,"valid");
	HX_VISIT_MEMBER_NAME(invalidated,"invalidated");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic Object_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { return inCallProp ? get_valid() : valid; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_valid") ) { return get_valid_dyn(); }
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return isInvalid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { return inCallProp ? get_invalidated() : invalidated; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_invalidated") ) { return get_invalidated_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { valid=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { invalidated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("valid"));
	outFields->push(HX_CSTRING("invalidated"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_valid"),
	HX_CSTRING("get_invalidated"),
	HX_CSTRING("isInvalid"),
	HX_CSTRING("isValid"),
	HX_CSTRING("toString"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("getType"),
	HX_CSTRING("version"),
	HX_CSTRING("valid"),
	HX_CSTRING("invalidated"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

Class Object_obj::__mClass;

void Object_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.Object"), hx::TCanCast< Object_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Object_obj::__boot()
{
}

} // end namespace native
} // end namespace gl
