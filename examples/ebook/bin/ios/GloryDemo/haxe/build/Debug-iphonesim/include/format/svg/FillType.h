#ifndef INCLUDED_format_svg_FillType
#define INCLUDED_format_svg_FillType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Grad)
namespace format{
namespace svg{


class FillType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FillType_obj OBJ_;

	public:
		FillType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.svg.FillType"); }
		::String __ToString() const { return HX_CSTRING("FillType.") + tag; }

		static ::format::svg::FillType FillGrad(::format::svg::Grad grad);
		static Dynamic FillGrad_dyn();
		static ::format::svg::FillType FillNone;
		static inline ::format::svg::FillType FillNone_dyn() { return FillNone; }
		static ::format::svg::FillType FillSolid(int colour);
		static Dynamic FillSolid_dyn();
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_FillType */ 
