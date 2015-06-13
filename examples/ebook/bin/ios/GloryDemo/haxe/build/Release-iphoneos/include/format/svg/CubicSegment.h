#ifndef INCLUDED_format_svg_CubicSegment
#define INCLUDED_format_svg_CubicSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,CubicSegment)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,QuadraticSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class CubicSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef CubicSegment_obj OBJ_;
		CubicSegment_obj();
		Void __construct(Float inCX1,Float inCY1,Float inCX2,Float inCY2,Float inX,Float inY);

	public:
		static hx::ObjectPtr< CubicSegment_obj > __new(Float inCX1,Float inCY1,Float inCX2,Float inCY2,Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubicSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubicSegment"); }

		virtual int getType( );

		virtual Array< ::format::svg::QuadraticSegment > toQuadratics( Float tx0,Float ty0);
		Dynamic toQuadratics_dyn();

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);

		virtual Float Interp( Float a,Float b,Float frac);
		Dynamic Interp_dyn();

		virtual Float prevCY( );

		virtual Float prevCX( );

		Float cy2; /* REM */ 
		Float cx2; /* REM */ 
		Float cy1; /* REM */ 
		Float cx1; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_CubicSegment */ 
