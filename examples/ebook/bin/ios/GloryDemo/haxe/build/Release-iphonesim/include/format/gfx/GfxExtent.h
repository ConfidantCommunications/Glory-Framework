#ifndef INCLUDED_format_gfx_GfxExtent
#define INCLUDED_format_gfx_GfxExtent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxExtent)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace format{
namespace gfx{


class GfxExtent_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef GfxExtent_obj OBJ_;
		GfxExtent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GfxExtent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GfxExtent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GfxExtent"); }

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);

		virtual Void lineTo( Float inX,Float inY);

		virtual Void moveTo( Float inX,Float inY);

		virtual bool geometryOnly( );

		virtual Void addExtent( Float inX,Float inY);
		Dynamic addExtent_dyn();

		::neash::geom::Rectangle extent; /* REM */ 
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_GfxExtent */ 
