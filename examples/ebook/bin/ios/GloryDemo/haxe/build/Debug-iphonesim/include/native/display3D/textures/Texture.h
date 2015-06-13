#ifndef INCLUDED_native_display3D_textures_Texture
#define INCLUDED_native_display3D_textures_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display3D/textures/TextureBase.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS3(native,display3D,textures,Texture)
HX_DECLARE_CLASS3(native,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Texture)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display3D{
namespace textures{


class Texture_obj : public ::native::display3D::textures::TextureBase_obj{
	public:
		typedef ::native::display3D::textures::TextureBase_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::native::gl::Texture glTexture);

	public:
		static hx::ObjectPtr< Texture_obj > __new(::native::gl::Texture glTexture);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		virtual Void uploadFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::native::display::BitmapData bitmapData,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadCompressedTextureFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		::native::gl::Texture glTexture; /* REM */ 
};

} // end namespace native
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_native_display3D_textures_Texture */ 
