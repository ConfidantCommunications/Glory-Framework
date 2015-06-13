#ifndef INCLUDED_native_display3D_Context3DStencilAction
#define INCLUDED_native_display3D_Context3DStencilAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Context3DStencilAction)
namespace native{
namespace display3D{


class Context3DStencilAction_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DStencilAction_obj OBJ_;

	public:
		Context3DStencilAction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display3D.Context3DStencilAction"); }
		::String __ToString() const { return HX_CSTRING("Context3DStencilAction.") + tag; }

		static ::native::display3D::Context3DStencilAction DECREMENT_SATURATE;
		static inline ::native::display3D::Context3DStencilAction DECREMENT_SATURATE_dyn() { return DECREMENT_SATURATE; }
		static ::native::display3D::Context3DStencilAction DECREMENT_WRAP;
		static inline ::native::display3D::Context3DStencilAction DECREMENT_WRAP_dyn() { return DECREMENT_WRAP; }
		static ::native::display3D::Context3DStencilAction INCREMENT_SATURATE;
		static inline ::native::display3D::Context3DStencilAction INCREMENT_SATURATE_dyn() { return INCREMENT_SATURATE; }
		static ::native::display3D::Context3DStencilAction INCREMENT_WRAP;
		static inline ::native::display3D::Context3DStencilAction INCREMENT_WRAP_dyn() { return INCREMENT_WRAP; }
		static ::native::display3D::Context3DStencilAction INVERT;
		static inline ::native::display3D::Context3DStencilAction INVERT_dyn() { return INVERT; }
		static ::native::display3D::Context3DStencilAction KEEP;
		static inline ::native::display3D::Context3DStencilAction KEEP_dyn() { return KEEP; }
		static ::native::display3D::Context3DStencilAction SET;
		static inline ::native::display3D::Context3DStencilAction SET_dyn() { return SET; }
		static ::native::display3D::Context3DStencilAction ZERO;
		static inline ::native::display3D::Context3DStencilAction ZERO_dyn() { return ZERO; }
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3DStencilAction */ 
