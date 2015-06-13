#ifndef INCLUDED_native_display3D_Context3D
#define INCLUDED_native_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DirectRenderer)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,OpenGLView)
HX_DECLARE_CLASS2(native,display3D,Context3D)
HX_DECLARE_CLASS2(native,display3D,Context3DCompareMode)
HX_DECLARE_CLASS2(native,display3D,Context3DProgramType)
HX_DECLARE_CLASS2(native,display3D,Context3DStencilAction)
HX_DECLARE_CLASS2(native,display3D,Context3DTextureFormat)
HX_DECLARE_CLASS2(native,display3D,Context3DTriangleFace)
HX_DECLARE_CLASS2(native,display3D,Context3DVertexBufferFormat)
HX_DECLARE_CLASS2(native,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(native,display3D,Program3D)
HX_DECLARE_CLASS2(native,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(native,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(native,display3D,textures,Texture)
HX_DECLARE_CLASS3(native,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Matrix3D)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display3D{


class Context3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3D"); }

		virtual Void updateBlendStatus( );
		Dynamic updateBlendStatus_dyn();

		virtual Void setVertexBufferAt( int index,::native::display3D::VertexBuffer3D buffer,hx::Null< int >  bufferOffset,::native::display3D::Context3DVertexBufferFormat format);
		Dynamic setVertexBufferAt_dyn();

		virtual Void setTextureAt( int sampler,::native::display3D::textures::TextureBase texture);
		Dynamic setTextureAt_dyn();

		virtual Void setStencilReferenceValue( int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask);
		Dynamic setStencilReferenceValue_dyn();

		virtual Void setStencilActions( ::native::display3D::Context3DTriangleFace triangleFace,::native::display3D::Context3DCompareMode compareMode,::native::display3D::Context3DStencilAction actionOnBothPass,::native::display3D::Context3DStencilAction actionOnDepthFail,::native::display3D::Context3DStencilAction actionOnDepthPassStencilFail);
		Dynamic setStencilActions_dyn();

		virtual Void setScissorRectangle( ::native::geom::Rectangle rectangle);
		Dynamic setScissorRectangle_dyn();

		virtual Void setRenderToTexture( ::native::display3D::textures::TextureBase texture,hx::Null< bool >  enableDepthAndStencil,hx::Null< int >  antiAlias,hx::Null< int >  surfaceSelector);
		Dynamic setRenderToTexture_dyn();

		virtual Void setRenderToBackBuffer( );
		Dynamic setRenderToBackBuffer_dyn();

		virtual Void setRenderMethod( Dynamic func);
		Dynamic setRenderMethod_dyn();

		virtual Void setProgramConstantsFromVector( ::native::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  numRegisters);
		Dynamic setProgramConstantsFromVector_dyn();

		virtual Void setProgramConstantsFromMatrix( int programType,int firstRegister,::native::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);
		Dynamic setProgramConstantsFromMatrix_dyn();

		virtual Void setProgramConstantsFromByteArray( ::native::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::native::utils::ByteArray data,int byteArrayOffset);
		Dynamic setProgramConstantsFromByteArray_dyn();

		virtual Void setProgram( ::native::display3D::Program3D program3D);
		Dynamic setProgram_dyn();

		virtual Void setDepthTest( bool depthMask,int passCompareMode);
		Dynamic setDepthTest_dyn();

		virtual Void setCulling( int triangleFaceToCull);
		Dynamic setCulling_dyn();

		virtual Void setColorMask( bool red,bool green,bool blue,bool alpha);
		Dynamic setColorMask_dyn();

		virtual Void setBlendFactors( int sourceFactor,int destinationFactor);
		Dynamic setBlendFactors_dyn();

		virtual Void present( );
		Dynamic present_dyn();

		virtual Void drawTriangles( ::native::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);
		Dynamic drawTriangles_dyn();

		virtual Void drawToBitmapData( ::native::display::BitmapData destination);
		Dynamic drawToBitmapData_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::native::display3D::VertexBuffer3D createVertexBuffer( int numVertices,int data32PerVertex);
		Dynamic createVertexBuffer_dyn();

		virtual ::native::display3D::textures::Texture createTexture( int width,int height,::native::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		Dynamic createTexture_dyn();

		virtual ::native::display3D::Program3D createProgram( );
		Dynamic createProgram_dyn();

		virtual ::native::display3D::IndexBuffer3D createIndexBuffer( int numIndices);
		Dynamic createIndexBuffer_dyn();

		virtual ::native::display3D::textures::CubeTexture createCubeTexture( int size,::native::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		Dynamic createCubeTexture_dyn();

		virtual Void configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  enableDepthAndStencil);
		Dynamic configureBackBuffer_dyn();

		virtual Void clear( hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< int >  stencil,hx::Null< int >  mask);
		Dynamic clear_dyn();

		bool drawing; /* REM */ 
		int blendSourceFactor; /* REM */ 
		bool blendEnabled; /* REM */ 
		int blendDestinationFactor; /* REM */ 
		::native::display::OpenGLView ogl; /* REM */ 
		::native::display3D::Program3D currentProgram; /* REM */ 
		bool enableErrorChecking; /* REM */ 
		::String driverInfo; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3D */ 
