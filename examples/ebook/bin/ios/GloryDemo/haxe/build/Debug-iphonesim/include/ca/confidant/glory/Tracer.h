#ifndef INCLUDED_ca_confidant_glory_Tracer
#define INCLUDED_ca_confidant_glory_Tracer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(ca,confidant,glory,Tracer)
namespace ca{
namespace confidant{
namespace glory{


class Tracer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tracer_obj OBJ_;
		Tracer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Tracer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tracer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tracer"); }

		static Void setRedirection( );
		static Dynamic setRedirection_dyn();

		static Void customTrace( Dynamic v,Dynamic inf);
		static Dynamic customTrace_dyn();

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory

#endif /* INCLUDED_ca_confidant_glory_Tracer */ 
