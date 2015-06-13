#ifndef INCLUDED_native_geom_Matrix3D
#define INCLUDED_native_geom_Matrix3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Matrix3D)
HX_DECLARE_CLASS2(native,geom,Vector3D)
namespace native{
namespace geom{


class Matrix3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix3D_obj OBJ_;
		Matrix3D_obj();
		Void __construct(Array< Float > v);

	public:
		static hx::ObjectPtr< Matrix3D_obj > __new(Array< Float > v);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Matrix3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Matrix3D"); }

		virtual ::native::geom::Vector3D set_position( ::native::geom::Vector3D val);
		Dynamic set_position_dyn();

		virtual ::native::geom::Vector3D get_position( );
		Dynamic get_position_dyn();

		virtual Float get_determinant( );
		Dynamic get_determinant_dyn();

		virtual Void transpose( );
		Dynamic transpose_dyn();

		virtual Void transformVectors( Array< Float > vin,Array< Float > vout);
		Dynamic transformVectors_dyn();

		virtual ::native::geom::Vector3D transformVector( ::native::geom::Vector3D v);
		Dynamic transformVector_dyn();

		virtual bool recompose( Array< ::native::geom::Vector3D > components);
		Dynamic recompose_dyn();

		virtual Void prependTranslation( Float x,Float y,Float z);
		Dynamic prependTranslation_dyn();

		virtual Void prependScale( Float xScale,Float yScale,Float zScale);
		Dynamic prependScale_dyn();

		virtual Void prependRotation( Float degrees,::native::geom::Vector3D axis,::native::geom::Vector3D pivotPoint);
		Dynamic prependRotation_dyn();

		virtual Void prepend( ::native::geom::Matrix3D rhs);
		Dynamic prepend_dyn();

		virtual bool invert( );
		Dynamic invert_dyn();

		virtual Void interpolateTo( ::native::geom::Matrix3D toMat,Float percent);
		Dynamic interpolateTo_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::native::geom::Vector3D deltaTransformVector( ::native::geom::Vector3D v);
		Dynamic deltaTransformVector_dyn();

		virtual Array< ::native::geom::Vector3D > decompose( );
		Dynamic decompose_dyn();

		virtual ::native::geom::Matrix3D clone( );
		Dynamic clone_dyn();

		virtual Void appendTranslation( Float x,Float y,Float z);
		Dynamic appendTranslation_dyn();

		virtual Void appendScale( Float xScale,Float yScale,Float zScale);
		Dynamic appendScale_dyn();

		virtual Void appendRotation( Float degrees,::native::geom::Vector3D axis,::native::geom::Vector3D pivotPoint);
		Dynamic appendRotation_dyn();

		virtual Void append( ::native::geom::Matrix3D lhs);
		Dynamic append_dyn();

		Array< Float > rawData; /* REM */ 
		::native::geom::Vector3D position; /* REM */ 
		Float determinant; /* REM */ 
		static ::native::geom::Matrix3D create2D( Float x,Float y,hx::Null< Float >  scale,hx::Null< Float >  rotation);
		static Dynamic create2D_dyn();

		static ::native::geom::Matrix3D createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty);
		static Dynamic createABCD_dyn();

		static ::native::geom::Matrix3D createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar);
		static Dynamic createOrtho_dyn();

		static ::native::geom::Matrix3D getAxisRotation( Float x,Float y,Float z,Float degrees);
		static Dynamic getAxisRotation_dyn();

		static ::native::geom::Matrix3D interpolate( ::native::geom::Matrix3D thisMat,::native::geom::Matrix3D toMat,Float percent);
		static Dynamic interpolate_dyn();

};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_Matrix3D */ 
