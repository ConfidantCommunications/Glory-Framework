#ifndef INCLUDED_native_display3D_textures_CubeTexture
#define INCLUDED_native_display3D_textures_CubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display3D/textures/TextureBase.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS3(native,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(native,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display3D{
namespace textures{


class CubeTexture_obj : public ::native::display3D::textures::TextureBase_obj{
	public:
		typedef ::native::display3D::textures::TextureBase_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CubeTexture_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubeTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubeTexture"); }

		virtual Void uploadFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::native::display::BitmapData source,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadCompressedTextureFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

};

} // end namespace native
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_native_display3D_textures_CubeTexture */ 
