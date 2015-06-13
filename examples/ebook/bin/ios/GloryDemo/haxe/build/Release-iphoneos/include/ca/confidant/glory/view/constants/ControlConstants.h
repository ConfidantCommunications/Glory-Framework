#ifndef INCLUDED_ca_confidant_glory_view_constants_ControlConstants
#define INCLUDED_ca_confidant_glory_view_constants_ControlConstants

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(ca,confidant,glory,view,constants,ControlConstants)
namespace ca{
namespace confidant{
namespace glory{
namespace view{
namespace constants{


class ControlConstants_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ControlConstants_obj OBJ_;
		ControlConstants_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ControlConstants_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ControlConstants_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ControlConstants"); }

		static ::String PAGE_FORWARD; /* REM */ 
		static ::String PAGE_BACKWARD; /* REM */ 
		static ::String PAGE_SKIP_TO; /* REM */ 
		static ::String TOGGLE_MENU; /* REM */ 
		static ::String GET_URL; /* REM */ 
		static ::String PAN_RIGHT_CONTROL; /* REM */ 
		static ::String PAN_LEFT_CONTROL; /* REM */ 
		static ::String TRANSITION_OUT; /* REM */ 
		static ::String TRANSITION_IN; /* REM */ 
		static ::String CONTROL; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
} // end namespace constants

#endif /* INCLUDED_ca_confidant_glory_view_constants_ControlConstants */ 
