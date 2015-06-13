#ifndef INCLUDED_native_geom_Vector3D
#define INCLUDED_native_geom_Vector3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Vector3D)
namespace native{
namespace geom{


class Vector3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector3D_obj OBJ_;
		Vector3D_obj();
		Void __construct(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic __o_w);

	public:
		static hx::ObjectPtr< Vector3D_obj > __new(Dynamic __o_x,Dynamic __o_y,Dynamic __o_z,Dynamic __o_w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vector3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vector3D"); }

		virtual Float get_lengthSquared( );
		Dynamic get_lengthSquared_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::native::geom::Vector3D subtract( ::native::geom::Vector3D a);
		Dynamic subtract_dyn();

		virtual Void scaleBy( Float s);
		Dynamic scaleBy_dyn();

		virtual Void project( );
		Dynamic project_dyn();

		virtual Float normalize( );
		Dynamic normalize_dyn();

		virtual Void negate( );
		Dynamic negate_dyn();

		virtual bool nearEquals( ::native::geom::Vector3D toCompare,Float tolerance,Dynamic allFour);
		Dynamic nearEquals_dyn();

		virtual Void incrementBy( ::native::geom::Vector3D a);
		Dynamic incrementBy_dyn();

		virtual bool equals( ::native::geom::Vector3D toCompare,Dynamic allFour);
		Dynamic equals_dyn();

		virtual Float dotProduct( ::native::geom::Vector3D a);
		Dynamic dotProduct_dyn();

		virtual Void decrementBy( ::native::geom::Vector3D a);
		Dynamic decrementBy_dyn();

		virtual ::native::geom::Vector3D crossProduct( ::native::geom::Vector3D a);
		Dynamic crossProduct_dyn();

		virtual ::native::geom::Vector3D clone( );
		Dynamic clone_dyn();

		virtual ::native::geom::Vector3D add( ::native::geom::Vector3D a);
		Dynamic add_dyn();

		Float z; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		Float w; /* REM */ 
		Float lengthSquared; /* REM */ 
		Float length; /* REM */ 
		static ::native::geom::Vector3D X_AXIS; /* REM */ 
		static ::native::geom::Vector3D Y_AXIS; /* REM */ 
		static ::native::geom::Vector3D Z_AXIS; /* REM */ 
		static Float angleBetween( ::native::geom::Vector3D a,::native::geom::Vector3D b);
		static Dynamic angleBetween_dyn();

		static Float distance( ::native::geom::Vector3D pt1,::native::geom::Vector3D pt2);
		static Dynamic distance_dyn();

		static ::native::geom::Vector3D get_X_AXIS( );
		static Dynamic get_X_AXIS_dyn();

		static ::native::geom::Vector3D get_Y_AXIS( );
		static Dynamic get_Y_AXIS_dyn();

		static ::native::geom::Vector3D get_Z_AXIS( );
		static Dynamic get_Z_AXIS_dyn();

};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_Vector3D */ 
