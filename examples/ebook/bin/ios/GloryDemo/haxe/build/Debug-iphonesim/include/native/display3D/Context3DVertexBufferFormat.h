#ifndef INCLUDED_native_display3D_Context3DVertexBufferFormat
#define INCLUDED_native_display3D_Context3DVertexBufferFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Context3DVertexBufferFormat)
namespace native{
namespace display3D{


class Context3DVertexBufferFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DVertexBufferFormat_obj OBJ_;

	public:
		Context3DVertexBufferFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display3D.Context3DVertexBufferFormat"); }
		::String __ToString() const { return HX_CSTRING("Context3DVertexBufferFormat.") + tag; }

		static ::native::display3D::Context3DVertexBufferFormat BYTES_4;
		static inline ::native::display3D::Context3DVertexBufferFormat BYTES_4_dyn() { return BYTES_4; }
		static ::native::display3D::Context3DVertexBufferFormat FLOAT_1;
		static inline ::native::display3D::Context3DVertexBufferFormat FLOAT_1_dyn() { return FLOAT_1; }
		static ::native::display3D::Context3DVertexBufferFormat FLOAT_2;
		static inline ::native::display3D::Context3DVertexBufferFormat FLOAT_2_dyn() { return FLOAT_2; }
		static ::native::display3D::Context3DVertexBufferFormat FLOAT_3;
		static inline ::native::display3D::Context3DVertexBufferFormat FLOAT_3_dyn() { return FLOAT_3; }
		static ::native::display3D::Context3DVertexBufferFormat FLOAT_4;
		static inline ::native::display3D::Context3DVertexBufferFormat FLOAT_4_dyn() { return FLOAT_4; }
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3DVertexBufferFormat */ 
