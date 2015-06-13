#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#define INCLUDED_haxe_xml__Fast_NodeListAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Fast,NodeListAccess)
namespace haxe{
namespace xml{
namespace _Fast{


class NodeListAccess_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NodeListAccess_obj OBJ_;
		NodeListAccess_obj();
		Void __construct(::Xml x);

	public:
		static hx::ObjectPtr< NodeListAccess_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NodeListAccess_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NodeListAccess"); }

		virtual ::List resolve( ::String name);
		Dynamic resolve_dyn();

		::Xml __x; /* REM */ 
};

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast

#endif /* INCLUDED_haxe_xml__Fast_NodeListAccess */ 
