#ifndef INCLUDED_haxe_xml_Fast
#define INCLUDED_haxe_xml_Fast

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(haxe,xml,_Fast,AttribAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,HasAttribAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,HasNodeAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,NodeAccess)
HX_DECLARE_CLASS3(haxe,xml,_Fast,NodeListAccess)
namespace haxe{
namespace xml{


class Fast_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Fast_obj OBJ_;
		Fast_obj();
		Void __construct(::Xml x);

	public:
		static hx::ObjectPtr< Fast_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Fast_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Fast"); }

		virtual Dynamic getElements( );
		Dynamic getElements_dyn();

		virtual ::String getInnerHTML( );
		Dynamic getInnerHTML_dyn();

		virtual ::String getInnerData( );
		Dynamic getInnerData_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		Dynamic elements; /* REM */ 
		::haxe::xml::_Fast::HasNodeAccess hasNode; /* REM */ 
		::haxe::xml::_Fast::HasAttribAccess has; /* REM */ 
		::haxe::xml::_Fast::AttribAccess att; /* REM */ 
		::haxe::xml::_Fast::NodeListAccess nodes; /* REM */ 
		::haxe::xml::_Fast::NodeAccess node; /* REM */ 
		::String innerHTML; /* REM */ 
		::String innerData; /* REM */ 
		::String name; /* REM */ 
		::Xml x; /* REM */ 
};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Fast */ 
