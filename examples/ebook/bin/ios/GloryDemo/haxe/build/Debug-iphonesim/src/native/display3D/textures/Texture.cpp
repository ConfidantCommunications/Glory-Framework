#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display3D_textures_Texture
#include <native/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_native_display3D_textures_TextureBase
#include <native/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Texture
#include <native/gl/Texture.h>
#endif
#ifndef INCLUDED_native_utils_ArrayBufferView
#include <native/utils/ArrayBufferView.h>
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
namespace textures{

Void Texture_obj::__construct(::native::gl::Texture glTexture)
{
HX_STACK_PUSH("Texture::new","native/display3D/textures/Texture.hx",18);
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	this->glTexture = glTexture;
}
;
	return null();
}

Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::native::gl::Texture glTexture)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(glTexture);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Texture_obj::uploadFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("Texture::uploadFromByteArray","native/display3D/textures/Texture.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(miplevel,"miplevel");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::native::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("Texture::uploadFromBitmapData","native/display3D/textures/Texture.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_ARG(miplevel,"miplevel");
{
		HX_STACK_LINE(36)
		::native::gl::GL_obj::bindTexture((int)3553,this->glTexture);
		HX_STACK_LINE(38)
		::native::utils::ByteArray p = bitmapData->getPixels(::native::geom::Rectangle_obj::__new((int)0,(int)0,bitmapData->get_width(),bitmapData->get_height()));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(39)
		int num = (bitmapData->get_width() * bitmapData->get_height());		HX_STACK_VAR(num,"num");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			while(((_g < num))){
				HX_STACK_LINE(41)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(43)
				int alpha = p->__get((i * (int)4));		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(44)
				int red = p->__get(((i * (int)4) + (int)1));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(45)
				int green = p->__get(((i * (int)4) + (int)2));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(46)
				int blue = p->__get(((i * (int)4) + (int)3));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(48)
				hx::__ArrayImplRef(p,(i * (int)4)) = red;
				HX_STACK_LINE(49)
				hx::__ArrayImplRef(p,((i * (int)4) + (int)1)) = green;
				HX_STACK_LINE(50)
				hx::__ArrayImplRef(p,((i * (int)4) + (int)2)) = blue;
				HX_STACK_LINE(51)
				hx::__ArrayImplRef(p,((i * (int)4) + (int)3)) = alpha;
			}
		}
		HX_STACK_LINE(55)
		::native::gl::GL_obj::texImage2D((int)3553,(int)0,(int)6408,bitmapData->get_width(),bitmapData->get_height(),(int)0,(int)6408,(int)5121,::native::utils::ArrayBufferView_obj::__new(p,(int)0,null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadCompressedTextureFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_PUSH("Texture::uploadCompressedTextureFromByteArray","native/display3D/textures/Texture.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(async,"async");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(glTexture,"glTexture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glTexture,"glTexture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Texture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"glTexture") ) { return glTexture; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"glTexture") ) { glTexture=inValue.Cast< ::native::gl::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("glTexture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadCompressedTextureFromByteArray"),
	HX_CSTRING("glTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.textures.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Texture_obj::__boot()
{
}

} // end namespace native
} // end namespace display3D
} // end namespace textures
