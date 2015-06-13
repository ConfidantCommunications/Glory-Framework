#ifndef INCLUDED_format_gfx_GfxGraphics
#define INCLUDED_format_gfx_GfxGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxGraphics)
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS2(neash,display,Graphics)
namespace format{
namespace gfx{


class GfxGraphics_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef GfxGraphics_obj OBJ_;
		GfxGraphics_obj();
		Void __construct(::neash::display::Graphics inGraphics);

	public:
		static hx::ObjectPtr< GfxGraphics_obj > __new(::neash::display::Graphics inGraphics);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GfxGraphics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GfxGraphics"); }

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);

		virtual Void lineTo( Float inX,Float inY);

		virtual Void moveTo( Float inX,Float inY);

		virtual Void endLineStyle( );

		virtual Void lineStyle( ::format::gfx::LineStyle style);

		virtual Void endFill( );

		virtual Void beginFill( int color,Float alpha);

		virtual Void beginGradientFill( ::format::gfx::Gradient grad);

		::neash::display::Graphics graphics; /* REM */ 
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_GfxGraphics */ 
