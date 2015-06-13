#ifndef INCLUDED_format_svg_RenderContext
#define INCLUDED_format_svg_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,RenderContext)
HX_DECLARE_CLASS2(neash,geom,Matrix)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace format{
namespace svg{


class RenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderContext_obj OBJ_;
		RenderContext_obj();
		Void __construct(::neash::geom::Matrix inMatrix,::neash::geom::Rectangle inRect,Dynamic inW,Dynamic inH);

	public:
		static hx::ObjectPtr< RenderContext_obj > __new(::neash::geom::Matrix inMatrix,::neash::geom::Rectangle inRect,Dynamic inW,Dynamic inH);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RenderContext_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderContext"); }

		Float lastY; /* REM */ 
		Float lastX; /* REM */ 
		Float firstY; /* REM */ 
		Float firstX; /* REM */ 
		Float rectH; /* REM */ 
		Float rectW; /* REM */ 
		::neash::geom::Rectangle rect; /* REM */ 
		::neash::geom::Matrix matrix; /* REM */ 
		virtual Void setLast( Float inX,Float inY);
		Dynamic setLast_dyn();

		virtual Float transY( Float inX,Float inY);
		Dynamic transY_dyn();

		virtual Float transX( Float inX,Float inY);
		Dynamic transX_dyn();

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_RenderContext */ 
