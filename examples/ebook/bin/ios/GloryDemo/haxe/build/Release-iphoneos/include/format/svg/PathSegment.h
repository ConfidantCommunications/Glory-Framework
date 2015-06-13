#ifndef INCLUDED_format_svg_PathSegment
#define INCLUDED_format_svg_PathSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class PathSegment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathSegment_obj OBJ_;
		PathSegment_obj();
		Void __construct(Float inX,Float inY);

	public:
		static hx::ObjectPtr< PathSegment_obj > __new(Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PathSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PathSegment"); }

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);
		Dynamic toGfx_dyn();

		virtual Float prevCY( );
		Dynamic prevCY_dyn();

		virtual Float prevCX( );
		Dynamic prevCX_dyn();

		virtual Float prevY( );
		Dynamic prevY_dyn();

		virtual Float prevX( );
		Dynamic prevX_dyn();

		virtual int getType( );
		Dynamic getType_dyn();

		Float y; /* REM */ 
		Float x; /* REM */ 
		static int MOVE; /* REM */ 
		static int DRAW; /* REM */ 
		static int CURVE; /* REM */ 
		static int CUBIC; /* REM */ 
		static int ARC; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_PathSegment */ 
