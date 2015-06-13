#ifndef INCLUDED_format_svg_DisplayElement
#define INCLUDED_format_svg_DisplayElement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,DisplayElement)
HX_DECLARE_CLASS2(format,svg,Group)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,Text)
namespace format{
namespace svg{


class DisplayElement_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DisplayElement_obj OBJ_;

	public:
		DisplayElement_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.svg.DisplayElement"); }
		::String __ToString() const { return HX_CSTRING("DisplayElement.") + tag; }

		static ::format::svg::DisplayElement DisplayGroup(::format::svg::Group group);
		static Dynamic DisplayGroup_dyn();
		static ::format::svg::DisplayElement DisplayPath(::format::svg::Path path);
		static Dynamic DisplayPath_dyn();
		static ::format::svg::DisplayElement DisplayText(::format::svg::Text text);
		static Dynamic DisplayText_dyn();
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_DisplayElement */ 
