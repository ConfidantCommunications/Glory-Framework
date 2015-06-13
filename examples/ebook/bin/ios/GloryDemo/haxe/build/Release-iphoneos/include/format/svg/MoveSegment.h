#ifndef INCLUDED_format_svg_MoveSegment
#define INCLUDED_format_svg_MoveSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,svg,MoveSegment)
HX_DECLARE_CLASS2(format,svg,PathSegment)
namespace format{
namespace svg{


class MoveSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef MoveSegment_obj OBJ_;
		MoveSegment_obj();
		Void __construct(Float inX,Float inY);

	public:
		static hx::ObjectPtr< MoveSegment_obj > __new(Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MoveSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MoveSegment"); }

		virtual int getType( );

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_MoveSegment */ 
