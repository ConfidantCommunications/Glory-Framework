#ifndef INCLUDED_native_gl_GL
#define INCLUDED_native_gl_GL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,geom,Matrix3D)
HX_DECLARE_CLASS2(native,gl,Buffer)
HX_DECLARE_CLASS2(native,gl,Framebuffer)
HX_DECLARE_CLASS2(native,gl,GL)
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Program)
HX_DECLARE_CLASS2(native,gl,Renderbuffer)
HX_DECLARE_CLASS2(native,gl,Shader)
HX_DECLARE_CLASS2(native,gl,Texture)
HX_DECLARE_CLASS2(native,utils,ArrayBufferView)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,Float32Array)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace gl{


class GL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GL_obj OBJ_;
		GL_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GL"); }

		static int DEPTH_BUFFER_BIT; /* REM */ 
		static int STENCIL_BUFFER_BIT; /* REM */ 
		static int COLOR_BUFFER_BIT; /* REM */ 
		static int POINTS; /* REM */ 
		static int LINES; /* REM */ 
		static int LINE_LOOP; /* REM */ 
		static int LINE_STRIP; /* REM */ 
		static int TRIANGLES; /* REM */ 
		static int TRIANGLE_STRIP; /* REM */ 
		static int TRIANGLE_FAN; /* REM */ 
		static int ZERO; /* REM */ 
		static int ONE; /* REM */ 
		static int SRC_COLOR; /* REM */ 
		static int ONE_MINUS_SRC_COLOR; /* REM */ 
		static int SRC_ALPHA; /* REM */ 
		static int ONE_MINUS_SRC_ALPHA; /* REM */ 
		static int DST_ALPHA; /* REM */ 
		static int ONE_MINUS_DST_ALPHA; /* REM */ 
		static int DST_COLOR; /* REM */ 
		static int ONE_MINUS_DST_COLOR; /* REM */ 
		static int SRC_ALPHA_SATURATE; /* REM */ 
		static int FUNC_ADD; /* REM */ 
		static int BLEND_EQUATION; /* REM */ 
		static int BLEND_EQUATION_RGB; /* REM */ 
		static int BLEND_EQUATION_ALPHA; /* REM */ 
		static int FUNC_SUBTRACT; /* REM */ 
		static int FUNC_REVERSE_SUBTRACT; /* REM */ 
		static int BLEND_DST_RGB; /* REM */ 
		static int BLEND_SRC_RGB; /* REM */ 
		static int BLEND_DST_ALPHA; /* REM */ 
		static int BLEND_SRC_ALPHA; /* REM */ 
		static int CONSTANT_COLOR; /* REM */ 
		static int ONE_MINUS_CONSTANT_COLOR; /* REM */ 
		static int CONSTANT_ALPHA; /* REM */ 
		static int ONE_MINUS_CONSTANT_ALPHA; /* REM */ 
		static int BLEND_COLOR; /* REM */ 
		static int ARRAY_BUFFER; /* REM */ 
		static int ELEMENT_ARRAY_BUFFER; /* REM */ 
		static int ARRAY_BUFFER_BINDING; /* REM */ 
		static int ELEMENT_ARRAY_BUFFER_BINDING; /* REM */ 
		static int STREAM_DRAW; /* REM */ 
		static int STATIC_DRAW; /* REM */ 
		static int DYNAMIC_DRAW; /* REM */ 
		static int BUFFER_SIZE; /* REM */ 
		static int BUFFER_USAGE; /* REM */ 
		static int CURRENT_VERTEX_ATTRIB; /* REM */ 
		static int FRONT; /* REM */ 
		static int BACK; /* REM */ 
		static int FRONT_AND_BACK; /* REM */ 
		static int CULL_FACE; /* REM */ 
		static int BLEND; /* REM */ 
		static int DITHER; /* REM */ 
		static int STENCIL_TEST; /* REM */ 
		static int DEPTH_TEST; /* REM */ 
		static int SCISSOR_TEST; /* REM */ 
		static int POLYGON_OFFSET_FILL; /* REM */ 
		static int SAMPLE_ALPHA_TO_COVERAGE; /* REM */ 
		static int SAMPLE_COVERAGE; /* REM */ 
		static int NO_ERROR; /* REM */ 
		static int INVALID_ENUM; /* REM */ 
		static int INVALID_VALUE; /* REM */ 
		static int INVALID_OPERATION; /* REM */ 
		static int OUT_OF_MEMORY; /* REM */ 
		static int CW; /* REM */ 
		static int CCW; /* REM */ 
		static int LINE_WIDTH; /* REM */ 
		static int ALIASED_POINT_SIZE_RANGE; /* REM */ 
		static int ALIASED_LINE_WIDTH_RANGE; /* REM */ 
		static int CULL_FACE_MODE; /* REM */ 
		static int FRONT_FACE; /* REM */ 
		static int DEPTH_RANGE; /* REM */ 
		static int DEPTH_WRITEMASK; /* REM */ 
		static int DEPTH_CLEAR_VALUE; /* REM */ 
		static int DEPTH_FUNC; /* REM */ 
		static int STENCIL_CLEAR_VALUE; /* REM */ 
		static int STENCIL_FUNC; /* REM */ 
		static int STENCIL_FAIL; /* REM */ 
		static int STENCIL_PASS_DEPTH_FAIL; /* REM */ 
		static int STENCIL_PASS_DEPTH_PASS; /* REM */ 
		static int STENCIL_REF; /* REM */ 
		static int STENCIL_VALUE_MASK; /* REM */ 
		static int STENCIL_WRITEMASK; /* REM */ 
		static int STENCIL_BACK_FUNC; /* REM */ 
		static int STENCIL_BACK_FAIL; /* REM */ 
		static int STENCIL_BACK_PASS_DEPTH_FAIL; /* REM */ 
		static int STENCIL_BACK_PASS_DEPTH_PASS; /* REM */ 
		static int STENCIL_BACK_REF; /* REM */ 
		static int STENCIL_BACK_VALUE_MASK; /* REM */ 
		static int STENCIL_BACK_WRITEMASK; /* REM */ 
		static int VIEWPORT; /* REM */ 
		static int SCISSOR_BOX; /* REM */ 
		static int COLOR_CLEAR_VALUE; /* REM */ 
		static int COLOR_WRITEMASK; /* REM */ 
		static int UNPACK_ALIGNMENT; /* REM */ 
		static int PACK_ALIGNMENT; /* REM */ 
		static int MAX_TEXTURE_SIZE; /* REM */ 
		static int MAX_VIEWPORT_DIMS; /* REM */ 
		static int SUBPIXEL_BITS; /* REM */ 
		static int RED_BITS; /* REM */ 
		static int GREEN_BITS; /* REM */ 
		static int BLUE_BITS; /* REM */ 
		static int ALPHA_BITS; /* REM */ 
		static int DEPTH_BITS; /* REM */ 
		static int STENCIL_BITS; /* REM */ 
		static int POLYGON_OFFSET_UNITS; /* REM */ 
		static int POLYGON_OFFSET_FACTOR; /* REM */ 
		static int TEXTURE_BINDING_2D; /* REM */ 
		static int SAMPLE_BUFFERS; /* REM */ 
		static int SAMPLES; /* REM */ 
		static int SAMPLE_COVERAGE_VALUE; /* REM */ 
		static int SAMPLE_COVERAGE_INVERT; /* REM */ 
		static int COMPRESSED_TEXTURE_FORMATS; /* REM */ 
		static int DONT_CARE; /* REM */ 
		static int FASTEST; /* REM */ 
		static int NICEST; /* REM */ 
		static int GENERATE_MIPMAP_HINT; /* REM */ 
		static int BYTE; /* REM */ 
		static int UNSIGNED_BYTE; /* REM */ 
		static int SHORT; /* REM */ 
		static int UNSIGNED_SHORT; /* REM */ 
		static int INT; /* REM */ 
		static int UNSIGNED_INT; /* REM */ 
		static int FLOAT; /* REM */ 
		static int DEPTH_COMPONENT; /* REM */ 
		static int ALPHA; /* REM */ 
		static int RGB; /* REM */ 
		static int RGBA; /* REM */ 
		static int LUMINANCE; /* REM */ 
		static int LUMINANCE_ALPHA; /* REM */ 
		static int UNSIGNED_SHORT_4_4_4_4; /* REM */ 
		static int UNSIGNED_SHORT_5_5_5_1; /* REM */ 
		static int UNSIGNED_SHORT_5_6_5; /* REM */ 
		static int FRAGMENT_SHADER; /* REM */ 
		static int VERTEX_SHADER; /* REM */ 
		static int MAX_VERTEX_ATTRIBS; /* REM */ 
		static int MAX_VERTEX_UNIFORM_VECTORS; /* REM */ 
		static int MAX_VARYING_VECTORS; /* REM */ 
		static int MAX_COMBINED_TEXTURE_IMAGE_UNITS; /* REM */ 
		static int MAX_VERTEX_TEXTURE_IMAGE_UNITS; /* REM */ 
		static int MAX_TEXTURE_IMAGE_UNITS; /* REM */ 
		static int MAX_FRAGMENT_UNIFORM_VECTORS; /* REM */ 
		static int SHADER_TYPE; /* REM */ 
		static int DELETE_STATUS; /* REM */ 
		static int LINK_STATUS; /* REM */ 
		static int VALIDATE_STATUS; /* REM */ 
		static int ATTACHED_SHADERS; /* REM */ 
		static int ACTIVE_UNIFORMS; /* REM */ 
		static int ACTIVE_ATTRIBUTES; /* REM */ 
		static int SHADING_LANGUAGE_VERSION; /* REM */ 
		static int CURRENT_PROGRAM; /* REM */ 
		static int NEVER; /* REM */ 
		static int LESS; /* REM */ 
		static int EQUAL; /* REM */ 
		static int LEQUAL; /* REM */ 
		static int GREATER; /* REM */ 
		static int NOTEQUAL; /* REM */ 
		static int GEQUAL; /* REM */ 
		static int ALWAYS; /* REM */ 
		static int KEEP; /* REM */ 
		static int REPLACE; /* REM */ 
		static int INCR; /* REM */ 
		static int DECR; /* REM */ 
		static int INVERT; /* REM */ 
		static int INCR_WRAP; /* REM */ 
		static int DECR_WRAP; /* REM */ 
		static int VENDOR; /* REM */ 
		static int RENDERER; /* REM */ 
		static int VERSION; /* REM */ 
		static int NEAREST; /* REM */ 
		static int LINEAR; /* REM */ 
		static int NEAREST_MIPMAP_NEAREST; /* REM */ 
		static int LINEAR_MIPMAP_NEAREST; /* REM */ 
		static int NEAREST_MIPMAP_LINEAR; /* REM */ 
		static int LINEAR_MIPMAP_LINEAR; /* REM */ 
		static int TEXTURE_MAG_FILTER; /* REM */ 
		static int TEXTURE_MIN_FILTER; /* REM */ 
		static int TEXTURE_WRAP_S; /* REM */ 
		static int TEXTURE_WRAP_T; /* REM */ 
		static int TEXTURE_2D; /* REM */ 
		static int TEXTURE; /* REM */ 
		static int TEXTURE_CUBE_MAP; /* REM */ 
		static int TEXTURE_BINDING_CUBE_MAP; /* REM */ 
		static int TEXTURE_CUBE_MAP_POSITIVE_X; /* REM */ 
		static int TEXTURE_CUBE_MAP_NEGATIVE_X; /* REM */ 
		static int TEXTURE_CUBE_MAP_POSITIVE_Y; /* REM */ 
		static int TEXTURE_CUBE_MAP_NEGATIVE_Y; /* REM */ 
		static int TEXTURE_CUBE_MAP_POSITIVE_Z; /* REM */ 
		static int TEXTURE_CUBE_MAP_NEGATIVE_Z; /* REM */ 
		static int MAX_CUBE_MAP_TEXTURE_SIZE; /* REM */ 
		static int TEXTURE0; /* REM */ 
		static int TEXTURE1; /* REM */ 
		static int TEXTURE2; /* REM */ 
		static int TEXTURE3; /* REM */ 
		static int TEXTURE4; /* REM */ 
		static int TEXTURE5; /* REM */ 
		static int TEXTURE6; /* REM */ 
		static int TEXTURE7; /* REM */ 
		static int TEXTURE8; /* REM */ 
		static int TEXTURE9; /* REM */ 
		static int TEXTURE10; /* REM */ 
		static int TEXTURE11; /* REM */ 
		static int TEXTURE12; /* REM */ 
		static int TEXTURE13; /* REM */ 
		static int TEXTURE14; /* REM */ 
		static int TEXTURE15; /* REM */ 
		static int TEXTURE16; /* REM */ 
		static int TEXTURE17; /* REM */ 
		static int TEXTURE18; /* REM */ 
		static int TEXTURE19; /* REM */ 
		static int TEXTURE20; /* REM */ 
		static int TEXTURE21; /* REM */ 
		static int TEXTURE22; /* REM */ 
		static int TEXTURE23; /* REM */ 
		static int TEXTURE24; /* REM */ 
		static int TEXTURE25; /* REM */ 
		static int TEXTURE26; /* REM */ 
		static int TEXTURE27; /* REM */ 
		static int TEXTURE28; /* REM */ 
		static int TEXTURE29; /* REM */ 
		static int TEXTURE30; /* REM */ 
		static int TEXTURE31; /* REM */ 
		static int ACTIVE_TEXTURE; /* REM */ 
		static int REPEAT; /* REM */ 
		static int CLAMP_TO_EDGE; /* REM */ 
		static int MIRRORED_REPEAT; /* REM */ 
		static int FLOAT_VEC2; /* REM */ 
		static int FLOAT_VEC3; /* REM */ 
		static int FLOAT_VEC4; /* REM */ 
		static int INT_VEC2; /* REM */ 
		static int INT_VEC3; /* REM */ 
		static int INT_VEC4; /* REM */ 
		static int BOOL; /* REM */ 
		static int BOOL_VEC2; /* REM */ 
		static int BOOL_VEC3; /* REM */ 
		static int BOOL_VEC4; /* REM */ 
		static int FLOAT_MAT2; /* REM */ 
		static int FLOAT_MAT3; /* REM */ 
		static int FLOAT_MAT4; /* REM */ 
		static int SAMPLER_2D; /* REM */ 
		static int SAMPLER_CUBE; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_ENABLED; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_SIZE; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_STRIDE; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_TYPE; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_NORMALIZED; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_POINTER; /* REM */ 
		static int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; /* REM */ 
		static int COMPILE_STATUS; /* REM */ 
		static int LOW_FLOAT; /* REM */ 
		static int MEDIUM_FLOAT; /* REM */ 
		static int HIGH_FLOAT; /* REM */ 
		static int LOW_INT; /* REM */ 
		static int MEDIUM_INT; /* REM */ 
		static int HIGH_INT; /* REM */ 
		static int FRAMEBUFFER; /* REM */ 
		static int RENDERBUFFER; /* REM */ 
		static int RGBA4; /* REM */ 
		static int RGB5_A1; /* REM */ 
		static int RGB565; /* REM */ 
		static int DEPTH_COMPONENT16; /* REM */ 
		static int STENCIL_INDEX; /* REM */ 
		static int STENCIL_INDEX8; /* REM */ 
		static int DEPTH_STENCIL; /* REM */ 
		static int RENDERBUFFER_WIDTH; /* REM */ 
		static int RENDERBUFFER_HEIGHT; /* REM */ 
		static int RENDERBUFFER_INTERNAL_FORMAT; /* REM */ 
		static int RENDERBUFFER_RED_SIZE; /* REM */ 
		static int RENDERBUFFER_GREEN_SIZE; /* REM */ 
		static int RENDERBUFFER_BLUE_SIZE; /* REM */ 
		static int RENDERBUFFER_ALPHA_SIZE; /* REM */ 
		static int RENDERBUFFER_DEPTH_SIZE; /* REM */ 
		static int RENDERBUFFER_STENCIL_SIZE; /* REM */ 
		static int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; /* REM */ 
		static int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; /* REM */ 
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; /* REM */ 
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; /* REM */ 
		static int COLOR_ATTACHMENT0; /* REM */ 
		static int DEPTH_ATTACHMENT; /* REM */ 
		static int STENCIL_ATTACHMENT; /* REM */ 
		static int DEPTH_STENCIL_ATTACHMENT; /* REM */ 
		static int NONE; /* REM */ 
		static int FRAMEBUFFER_COMPLETE; /* REM */ 
		static int FRAMEBUFFER_INCOMPLETE_ATTACHMENT; /* REM */ 
		static int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; /* REM */ 
		static int FRAMEBUFFER_INCOMPLETE_DIMENSIONS; /* REM */ 
		static int FRAMEBUFFER_UNSUPPORTED; /* REM */ 
		static int FRAMEBUFFER_BINDING; /* REM */ 
		static int RENDERBUFFER_BINDING; /* REM */ 
		static int MAX_RENDERBUFFER_SIZE; /* REM */ 
		static int INVALID_FRAMEBUFFER_OPERATION; /* REM */ 
		static int UNPACK_FLIP_Y_WEBGL; /* REM */ 
		static int UNPACK_PREMULTIPLY_ALPHA_WEBGL; /* REM */ 
		static int CONTEXT_LOST_WEBGL; /* REM */ 
		static int UNPACK_COLORSPACE_CONVERSION_WEBGL; /* REM */ 
		static int BROWSER_DEFAULT_WEBGL; /* REM */ 
		static int drawingBufferHeight; /* REM */ 
		static int drawingBufferWidth; /* REM */ 
		static int version; /* REM */ 
		static Void activeTexture( int texture);
		static Dynamic activeTexture_dyn();

		static Void attachShader( ::native::gl::Program program,::native::gl::Shader shader);
		static Dynamic attachShader_dyn();

		static Void bindAttribLocation( ::native::gl::Program program,int index,::String name);
		static Dynamic bindAttribLocation_dyn();

		static Void bindBitmapDataTexture( ::native::display::BitmapData texture);
		static Dynamic bindBitmapDataTexture_dyn();

		static Void bindBuffer( int target,::native::gl::Buffer buffer);
		static Dynamic bindBuffer_dyn();

		static Void bindFramebuffer( int target,::native::gl::Framebuffer framebuffer);
		static Dynamic bindFramebuffer_dyn();

		static Void bindRenderbuffer( int target,::native::gl::Renderbuffer renderbuffer);
		static Dynamic bindRenderbuffer_dyn();

		static Void bindTexture( int target,::native::gl::Texture texture);
		static Dynamic bindTexture_dyn();

		static Void blendColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic blendColor_dyn();

		static Void blendEquation( int mode);
		static Dynamic blendEquation_dyn();

		static Void blendEquationSeparate( int modeRGB,int modeAlpha);
		static Dynamic blendEquationSeparate_dyn();

		static Void blendFunc( int sfactor,int dfactor);
		static Dynamic blendFunc_dyn();

		static Void blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic blendFuncSeparate_dyn();

		static Void bufferData( int target,::native::utils::IMemoryRange data,int usage);
		static Dynamic bufferData_dyn();

		static Void bufferSubData( int target,int offset,::native::utils::IMemoryRange data);
		static Dynamic bufferSubData_dyn();

		static int checkFramebufferStatus( int target);
		static Dynamic checkFramebufferStatus_dyn();

		static Void clear( int mask);
		static Dynamic clear_dyn();

		static Void clearColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic clearColor_dyn();

		static Void clearDepth( Float depth);
		static Dynamic clearDepth_dyn();

		static Void clearStencil( int s);
		static Dynamic clearStencil_dyn();

		static Void colorMask( bool red,bool green,bool blue,bool alpha);
		static Dynamic colorMask_dyn();

		static Void compileShader( ::native::gl::Shader shader);
		static Dynamic compileShader_dyn();

		static Void compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::native::utils::IMemoryRange data);
		static Dynamic compressedTexImage2D_dyn();

		static Void compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::native::utils::IMemoryRange data);
		static Dynamic compressedTexSubImage2D_dyn();

		static Void copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic copyTexImage2D_dyn();

		static Void copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage2D_dyn();

		static ::native::gl::Buffer createBuffer( );
		static Dynamic createBuffer_dyn();

		static ::native::gl::Framebuffer createFramebuffer( );
		static Dynamic createFramebuffer_dyn();

		static ::native::gl::Program createProgram( );
		static Dynamic createProgram_dyn();

		static ::native::gl::Renderbuffer createRenderbuffer( );
		static Dynamic createRenderbuffer_dyn();

		static ::native::gl::Shader createShader( int type);
		static Dynamic createShader_dyn();

		static ::native::gl::Texture createTexture( );
		static Dynamic createTexture_dyn();

		static Void cullFace( int mode);
		static Dynamic cullFace_dyn();

		static Void deleteBuffer( ::native::gl::Buffer buffer);
		static Dynamic deleteBuffer_dyn();

		static Void deleteFramebuffer( ::native::gl::Framebuffer framebuffer);
		static Dynamic deleteFramebuffer_dyn();

		static Void deleteProgram( ::native::gl::Program program);
		static Dynamic deleteProgram_dyn();

		static Void deleteRenderbuffer( ::native::gl::Renderbuffer renderbuffer);
		static Dynamic deleteRenderbuffer_dyn();

		static Void deleteShader( ::native::gl::Shader shader);
		static Dynamic deleteShader_dyn();

		static Void deleteTexture( ::native::gl::Texture texture);
		static Dynamic deleteTexture_dyn();

		static Void depthFunc( int func);
		static Dynamic depthFunc_dyn();

		static Void depthMask( bool flag);
		static Dynamic depthMask_dyn();

		static Void depthRange( Float zNear,Float zFar);
		static Dynamic depthRange_dyn();

		static Void detachShader( ::native::gl::Program program,::native::gl::Shader shader);
		static Dynamic detachShader_dyn();

		static Void disable( int cap);
		static Dynamic disable_dyn();

		static Void disableVertexAttribArray( int index);
		static Dynamic disableVertexAttribArray_dyn();

		static Void drawArrays( int mode,int first,int count);
		static Dynamic drawArrays_dyn();

		static Void drawElements( int mode,int count,int type,int offset);
		static Dynamic drawElements_dyn();

		static Void enable( int cap);
		static Dynamic enable_dyn();

		static Void enableVertexAttribArray( int index);
		static Dynamic enableVertexAttribArray_dyn();

		static Void finish( );
		static Dynamic finish_dyn();

		static Void flush( );
		static Dynamic flush_dyn();

		static Void framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::native::gl::Renderbuffer renderbuffer);
		static Dynamic framebufferRenderbuffer_dyn();

		static Void framebufferTexture2D( int target,int attachment,int textarget,::native::gl::Texture texture,int level);
		static Dynamic framebufferTexture2D_dyn();

		static Void frontFace( int mode);
		static Dynamic frontFace_dyn();

		static Void generateMipmap( int target);
		static Dynamic generateMipmap_dyn();

		static Dynamic getActiveAttrib( ::native::gl::Program program,int index);
		static Dynamic getActiveAttrib_dyn();

		static Dynamic getActiveUniform( ::native::gl::Program program,int index);
		static Dynamic getActiveUniform_dyn();

		static Array< ::native::gl::Shader > getAttachedShaders( ::native::gl::Program program);
		static Dynamic getAttachedShaders_dyn();

		static int getAttribLocation( ::native::gl::Program program,::String name);
		static Dynamic getAttribLocation_dyn();

		static Dynamic getBufferParameter( int target,int pname);
		static Dynamic getBufferParameter_dyn();

		static Dynamic getContextAttributes( );
		static Dynamic getContextAttributes_dyn();

		static int getError( );
		static Dynamic getError_dyn();

		static Dynamic getExtension( ::String name);
		static Dynamic getExtension_dyn();

		static Dynamic getFramebufferAttachmentParameter( int target,int attachment,int pname);
		static Dynamic getFramebufferAttachmentParameter_dyn();

		static Dynamic getParameter( int pname);
		static Dynamic getParameter_dyn();

		static ::String getProgramInfoLog( ::native::gl::Program program);
		static Dynamic getProgramInfoLog_dyn();

		static int getProgramParameter( ::native::gl::Program program,int pname);
		static Dynamic getProgramParameter_dyn();

		static Dynamic getRenderbufferParameter( int target,int pname);
		static Dynamic getRenderbufferParameter_dyn();

		static ::String getShaderInfoLog( ::native::gl::Shader shader);
		static Dynamic getShaderInfoLog_dyn();

		static int getShaderParameter( ::native::gl::Shader shader,int pname);
		static Dynamic getShaderParameter_dyn();

		static Dynamic getShaderPrecisionFormat( int shadertype,int precisiontype);
		static Dynamic getShaderPrecisionFormat_dyn();

		static ::String getShaderSource( ::native::gl::Shader shader);
		static Dynamic getShaderSource_dyn();

		static Array< ::String > getSupportedExtensions( );
		static Dynamic getSupportedExtensions_dyn();

		static Dynamic getTexParameter( int target,int pname);
		static Dynamic getTexParameter_dyn();

		static Dynamic getUniform( ::native::gl::Program program,Dynamic location);
		static Dynamic getUniform_dyn();

		static Dynamic getUniformLocation( ::native::gl::Program program,::String name);
		static Dynamic getUniformLocation_dyn();

		static Dynamic getVertexAttrib( int index,int pname);
		static Dynamic getVertexAttrib_dyn();

		static int getVertexAttribOffset( int index,int pname);
		static Dynamic getVertexAttribOffset_dyn();

		static Void hint( int target,int mode);
		static Dynamic hint_dyn();

		static bool isBuffer( ::native::gl::Buffer buffer);
		static Dynamic isBuffer_dyn();

		static bool isEnabled( int cap);
		static Dynamic isEnabled_dyn();

		static bool isFramebuffer( ::native::gl::Framebuffer framebuffer);
		static Dynamic isFramebuffer_dyn();

		static bool isProgram( ::native::gl::Program program);
		static Dynamic isProgram_dyn();

		static bool isRenderbuffer( ::native::gl::Renderbuffer renderbuffer);
		static Dynamic isRenderbuffer_dyn();

		static bool isShader( ::native::gl::Shader shader);
		static Dynamic isShader_dyn();

		static bool isTexture( ::native::gl::Texture texture);
		static Dynamic isTexture_dyn();

		static Void lineWidth( Float width);
		static Dynamic lineWidth_dyn();

		static Void linkProgram( ::native::gl::Program program);
		static Dynamic linkProgram_dyn();

		static Dynamic load( ::String inName,int inArgCount);
		static Dynamic load_dyn();

		static Void pixelStorei( int pname,int param);
		static Dynamic pixelStorei_dyn();

		static Void polygonOffset( Float factor,Float units);
		static Dynamic polygonOffset_dyn();

		static Void readPixels( int x,int y,int width,int height,int format,int type,::native::utils::ByteArray pixels);
		static Dynamic readPixels_dyn();

		static Void renderbufferStorage( int target,int internalformat,int width,int height);
		static Dynamic renderbufferStorage_dyn();

		static Void sampleCoverage( Float value,bool invert);
		static Dynamic sampleCoverage_dyn();

		static Void scissor( int x,int y,int width,int height);
		static Dynamic scissor_dyn();

		static Void shaderSource( ::native::gl::Shader shader,::String source);
		static Dynamic shaderSource_dyn();

		static Void stencilFunc( int func,int ref,int mask);
		static Dynamic stencilFunc_dyn();

		static Void stencilFuncSeparate( int face,int func,int ref,int mask);
		static Dynamic stencilFuncSeparate_dyn();

		static Void stencilMask( int mask);
		static Dynamic stencilMask_dyn();

		static Void stencilMaskSeparate( int face,int mask);
		static Dynamic stencilMaskSeparate_dyn();

		static Void stencilOp( int fail,int zfail,int zpass);
		static Dynamic stencilOp_dyn();

		static Void stencilOpSeparate( int face,int fail,int zfail,int zpass);
		static Dynamic stencilOpSeparate_dyn();

		static Void texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::native::utils::ArrayBufferView pixels);
		static Dynamic texImage2D_dyn();

		static Void texParameterf( int target,int pname,Float param);
		static Dynamic texParameterf_dyn();

		static Void texParameteri( int target,int pname,int param);
		static Dynamic texParameteri_dyn();

		static Void texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::native::utils::ByteArray pixels);
		static Dynamic texSubImage2D_dyn();

		static Void uniform1f( Dynamic location,Float x);
		static Dynamic uniform1f_dyn();

		static Void uniform1fv( Dynamic location,Array< Float > x);
		static Dynamic uniform1fv_dyn();

		static Void uniform1i( Dynamic location,int x);
		static Dynamic uniform1i_dyn();

		static Void uniform1iv( Dynamic location,Array< int > v);
		static Dynamic uniform1iv_dyn();

		static Void uniform2f( Dynamic location,Float x,Float y);
		static Dynamic uniform2f_dyn();

		static Void uniform2fv( Dynamic location,Array< Float > v);
		static Dynamic uniform2fv_dyn();

		static Void uniform2i( Dynamic location,int x,int y);
		static Dynamic uniform2i_dyn();

		static Void uniform2iv( Dynamic location,Array< int > v);
		static Dynamic uniform2iv_dyn();

		static Void uniform3f( Dynamic location,Float x,Float y,Float z);
		static Dynamic uniform3f_dyn();

		static Void uniform3fv( Dynamic location,Array< Float > v);
		static Dynamic uniform3fv_dyn();

		static Void uniform3i( Dynamic location,int x,int y,int z);
		static Dynamic uniform3i_dyn();

		static Void uniform3iv( Dynamic location,Array< int > v);
		static Dynamic uniform3iv_dyn();

		static Void uniform4f( Dynamic location,Float x,Float y,Float z,Float w);
		static Dynamic uniform4f_dyn();

		static Void uniform4fv( Dynamic location,Array< Float > v);
		static Dynamic uniform4fv_dyn();

		static Void uniform4i( Dynamic location,int x,int y,int z,int w);
		static Dynamic uniform4i_dyn();

		static Void uniform4iv( Dynamic location,Array< int > v);
		static Dynamic uniform4iv_dyn();

		static Void uniformMatrix2fv( Dynamic location,bool transpose,::native::utils::Float32Array v);
		static Dynamic uniformMatrix2fv_dyn();

		static Void uniformMatrix3fv( Dynamic location,bool transpose,::native::utils::Float32Array v);
		static Dynamic uniformMatrix3fv_dyn();

		static Void uniformMatrix4fv( Dynamic location,bool transpose,::native::utils::Float32Array v);
		static Dynamic uniformMatrix4fv_dyn();

		static Void uniformMatrix3D( Dynamic location,bool transpose,::native::geom::Matrix3D matrix);
		static Dynamic uniformMatrix3D_dyn();

		static Void useProgram( ::native::gl::Program program);
		static Dynamic useProgram_dyn();

		static Void validateProgram( ::native::gl::Program program);
		static Dynamic validateProgram_dyn();

		static Void vertexAttrib1f( int indx,Float x);
		static Dynamic vertexAttrib1f_dyn();

		static Void vertexAttrib1fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib1fv_dyn();

		static Void vertexAttrib2f( int indx,Float x,Float y);
		static Dynamic vertexAttrib2f_dyn();

		static Void vertexAttrib2fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib2fv_dyn();

		static Void vertexAttrib3f( int indx,Float x,Float y,Float z);
		static Dynamic vertexAttrib3f_dyn();

		static Void vertexAttrib3fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib3fv_dyn();

		static Void vertexAttrib4f( int indx,Float x,Float y,Float z,Float w);
		static Dynamic vertexAttrib4f_dyn();

		static Void vertexAttrib4fv( int indx,Array< Float > values);
		static Dynamic vertexAttrib4fv_dyn();

		static Void vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset);
		static Dynamic vertexAttribPointer_dyn();

		static Void viewport( int x,int y,int width,int height);
		static Dynamic viewport_dyn();

		static int get_drawingBufferHeight( );
		static Dynamic get_drawingBufferHeight_dyn();

		static int get_drawingBufferWidth( );
		static Dynamic get_drawingBufferWidth_dyn();

		static int get_version( );
		static Dynamic get_version_dyn();

		static Dynamic nme_gl_active_texture; /* REM */ 
		static Dynamic &nme_gl_active_texture_dyn() { return nme_gl_active_texture;}
		static Dynamic nme_gl_attach_shader; /* REM */ 
		static Dynamic &nme_gl_attach_shader_dyn() { return nme_gl_attach_shader;}
		static Dynamic nme_gl_bind_attrib_location; /* REM */ 
		static Dynamic &nme_gl_bind_attrib_location_dyn() { return nme_gl_bind_attrib_location;}
		static Dynamic nme_gl_bind_bitmap_data_texture; /* REM */ 
		static Dynamic &nme_gl_bind_bitmap_data_texture_dyn() { return nme_gl_bind_bitmap_data_texture;}
		static Dynamic nme_gl_bind_buffer; /* REM */ 
		static Dynamic &nme_gl_bind_buffer_dyn() { return nme_gl_bind_buffer;}
		static Dynamic nme_gl_bind_framebuffer; /* REM */ 
		static Dynamic &nme_gl_bind_framebuffer_dyn() { return nme_gl_bind_framebuffer;}
		static Dynamic nme_gl_bind_renderbuffer; /* REM */ 
		static Dynamic &nme_gl_bind_renderbuffer_dyn() { return nme_gl_bind_renderbuffer;}
		static Dynamic nme_gl_bind_texture; /* REM */ 
		static Dynamic &nme_gl_bind_texture_dyn() { return nme_gl_bind_texture;}
		static Dynamic nme_gl_blend_color; /* REM */ 
		static Dynamic &nme_gl_blend_color_dyn() { return nme_gl_blend_color;}
		static Dynamic nme_gl_blend_equation; /* REM */ 
		static Dynamic &nme_gl_blend_equation_dyn() { return nme_gl_blend_equation;}
		static Dynamic nme_gl_blend_equation_separate; /* REM */ 
		static Dynamic &nme_gl_blend_equation_separate_dyn() { return nme_gl_blend_equation_separate;}
		static Dynamic nme_gl_blend_func; /* REM */ 
		static Dynamic &nme_gl_blend_func_dyn() { return nme_gl_blend_func;}
		static Dynamic nme_gl_blend_func_separate; /* REM */ 
		static Dynamic &nme_gl_blend_func_separate_dyn() { return nme_gl_blend_func_separate;}
		static Dynamic nme_gl_buffer_data; /* REM */ 
		static Dynamic &nme_gl_buffer_data_dyn() { return nme_gl_buffer_data;}
		static Dynamic nme_gl_buffer_sub_data; /* REM */ 
		static Dynamic &nme_gl_buffer_sub_data_dyn() { return nme_gl_buffer_sub_data;}
		static Dynamic nme_gl_check_framebuffer_status; /* REM */ 
		static Dynamic &nme_gl_check_framebuffer_status_dyn() { return nme_gl_check_framebuffer_status;}
		static Dynamic nme_gl_clear; /* REM */ 
		static Dynamic &nme_gl_clear_dyn() { return nme_gl_clear;}
		static Dynamic nme_gl_clear_color; /* REM */ 
		static Dynamic &nme_gl_clear_color_dyn() { return nme_gl_clear_color;}
		static Dynamic nme_gl_clear_depth; /* REM */ 
		static Dynamic &nme_gl_clear_depth_dyn() { return nme_gl_clear_depth;}
		static Dynamic nme_gl_clear_stencil; /* REM */ 
		static Dynamic &nme_gl_clear_stencil_dyn() { return nme_gl_clear_stencil;}
		static Dynamic nme_gl_color_mask; /* REM */ 
		static Dynamic &nme_gl_color_mask_dyn() { return nme_gl_color_mask;}
		static Dynamic nme_gl_compile_shader; /* REM */ 
		static Dynamic &nme_gl_compile_shader_dyn() { return nme_gl_compile_shader;}
		static Dynamic nme_gl_compressed_tex_image_2d; /* REM */ 
		static Dynamic &nme_gl_compressed_tex_image_2d_dyn() { return nme_gl_compressed_tex_image_2d;}
		static Dynamic nme_gl_compressed_tex_sub_image_2d; /* REM */ 
		static Dynamic &nme_gl_compressed_tex_sub_image_2d_dyn() { return nme_gl_compressed_tex_sub_image_2d;}
		static Dynamic nme_gl_copy_tex_image_2d; /* REM */ 
		static Dynamic &nme_gl_copy_tex_image_2d_dyn() { return nme_gl_copy_tex_image_2d;}
		static Dynamic nme_gl_copy_tex_sub_image_2d; /* REM */ 
		static Dynamic &nme_gl_copy_tex_sub_image_2d_dyn() { return nme_gl_copy_tex_sub_image_2d;}
		static Dynamic nme_gl_create_buffer; /* REM */ 
		static Dynamic &nme_gl_create_buffer_dyn() { return nme_gl_create_buffer;}
		static Dynamic nme_gl_create_framebuffer; /* REM */ 
		static Dynamic &nme_gl_create_framebuffer_dyn() { return nme_gl_create_framebuffer;}
		static Dynamic nme_gl_create_program; /* REM */ 
		static Dynamic &nme_gl_create_program_dyn() { return nme_gl_create_program;}
		static Dynamic nme_gl_create_render_buffer; /* REM */ 
		static Dynamic &nme_gl_create_render_buffer_dyn() { return nme_gl_create_render_buffer;}
		static Dynamic nme_gl_create_shader; /* REM */ 
		static Dynamic &nme_gl_create_shader_dyn() { return nme_gl_create_shader;}
		static Dynamic nme_gl_create_texture; /* REM */ 
		static Dynamic &nme_gl_create_texture_dyn() { return nme_gl_create_texture;}
		static Dynamic nme_gl_delete_buffer; /* REM */ 
		static Dynamic &nme_gl_delete_buffer_dyn() { return nme_gl_delete_buffer;}
		static Dynamic nme_gl_delete_program; /* REM */ 
		static Dynamic &nme_gl_delete_program_dyn() { return nme_gl_delete_program;}
		static Dynamic nme_gl_delete_shader; /* REM */ 
		static Dynamic &nme_gl_delete_shader_dyn() { return nme_gl_delete_shader;}
		static Dynamic nme_gl_delete_texture; /* REM */ 
		static Dynamic &nme_gl_delete_texture_dyn() { return nme_gl_delete_texture;}
		static Dynamic nme_gl_depth_func; /* REM */ 
		static Dynamic &nme_gl_depth_func_dyn() { return nme_gl_depth_func;}
		static Dynamic nme_gl_depth_mask; /* REM */ 
		static Dynamic &nme_gl_depth_mask_dyn() { return nme_gl_depth_mask;}
		static Dynamic nme_gl_depth_range; /* REM */ 
		static Dynamic &nme_gl_depth_range_dyn() { return nme_gl_depth_range;}
		static Dynamic nme_gl_detach_shader; /* REM */ 
		static Dynamic &nme_gl_detach_shader_dyn() { return nme_gl_detach_shader;}
		static Dynamic nme_gl_disable; /* REM */ 
		static Dynamic &nme_gl_disable_dyn() { return nme_gl_disable;}
		static Dynamic nme_gl_disable_vertex_attrib_array; /* REM */ 
		static Dynamic &nme_gl_disable_vertex_attrib_array_dyn() { return nme_gl_disable_vertex_attrib_array;}
		static Dynamic nme_gl_draw_arrays; /* REM */ 
		static Dynamic &nme_gl_draw_arrays_dyn() { return nme_gl_draw_arrays;}
		static Dynamic nme_gl_draw_elements; /* REM */ 
		static Dynamic &nme_gl_draw_elements_dyn() { return nme_gl_draw_elements;}
		static Dynamic nme_gl_enable; /* REM */ 
		static Dynamic &nme_gl_enable_dyn() { return nme_gl_enable;}
		static Dynamic nme_gl_enable_vertex_attrib_array; /* REM */ 
		static Dynamic &nme_gl_enable_vertex_attrib_array_dyn() { return nme_gl_enable_vertex_attrib_array;}
		static Dynamic nme_gl_finish; /* REM */ 
		static Dynamic &nme_gl_finish_dyn() { return nme_gl_finish;}
		static Dynamic nme_gl_flush; /* REM */ 
		static Dynamic &nme_gl_flush_dyn() { return nme_gl_flush;}
		static Dynamic nme_gl_framebuffer_renderbuffer; /* REM */ 
		static Dynamic &nme_gl_framebuffer_renderbuffer_dyn() { return nme_gl_framebuffer_renderbuffer;}
		static Dynamic nme_gl_framebuffer_texture2D; /* REM */ 
		static Dynamic &nme_gl_framebuffer_texture2D_dyn() { return nme_gl_framebuffer_texture2D;}
		static Dynamic nme_gl_front_face; /* REM */ 
		static Dynamic &nme_gl_front_face_dyn() { return nme_gl_front_face;}
		static Dynamic nme_gl_generate_mipmap; /* REM */ 
		static Dynamic &nme_gl_generate_mipmap_dyn() { return nme_gl_generate_mipmap;}
		static Dynamic nme_gl_get_active_attrib; /* REM */ 
		static Dynamic &nme_gl_get_active_attrib_dyn() { return nme_gl_get_active_attrib;}
		static Dynamic nme_gl_get_active_uniform; /* REM */ 
		static Dynamic &nme_gl_get_active_uniform_dyn() { return nme_gl_get_active_uniform;}
		static Dynamic nme_gl_get_attrib_location; /* REM */ 
		static Dynamic &nme_gl_get_attrib_location_dyn() { return nme_gl_get_attrib_location;}
		static Dynamic nme_gl_get_buffer_paramerter; /* REM */ 
		static Dynamic &nme_gl_get_buffer_paramerter_dyn() { return nme_gl_get_buffer_paramerter;}
		static Dynamic nme_gl_get_context_attributes; /* REM */ 
		static Dynamic &nme_gl_get_context_attributes_dyn() { return nme_gl_get_context_attributes;}
		static Dynamic nme_gl_get_error; /* REM */ 
		static Dynamic &nme_gl_get_error_dyn() { return nme_gl_get_error;}
		static Dynamic nme_gl_get_framebuffer_attachment_parameter; /* REM */ 
		static Dynamic &nme_gl_get_framebuffer_attachment_parameter_dyn() { return nme_gl_get_framebuffer_attachment_parameter;}
		static Dynamic nme_gl_get_parameter; /* REM */ 
		static Dynamic &nme_gl_get_parameter_dyn() { return nme_gl_get_parameter;}
		static Dynamic nme_gl_get_program_info_log; /* REM */ 
		static Dynamic &nme_gl_get_program_info_log_dyn() { return nme_gl_get_program_info_log;}
		static Dynamic nme_gl_get_program_parameter; /* REM */ 
		static Dynamic &nme_gl_get_program_parameter_dyn() { return nme_gl_get_program_parameter;}
		static Dynamic nme_gl_get_render_buffer_parameter; /* REM */ 
		static Dynamic &nme_gl_get_render_buffer_parameter_dyn() { return nme_gl_get_render_buffer_parameter;}
		static Dynamic nme_gl_get_shader_info_log; /* REM */ 
		static Dynamic &nme_gl_get_shader_info_log_dyn() { return nme_gl_get_shader_info_log;}
		static Dynamic nme_gl_get_shader_parameter; /* REM */ 
		static Dynamic &nme_gl_get_shader_parameter_dyn() { return nme_gl_get_shader_parameter;}
		static Dynamic nme_gl_get_shader_precision_format; /* REM */ 
		static Dynamic &nme_gl_get_shader_precision_format_dyn() { return nme_gl_get_shader_precision_format;}
		static Dynamic nme_gl_get_shader_source; /* REM */ 
		static Dynamic &nme_gl_get_shader_source_dyn() { return nme_gl_get_shader_source;}
		static Dynamic nme_gl_get_supported_extensions; /* REM */ 
		static Dynamic &nme_gl_get_supported_extensions_dyn() { return nme_gl_get_supported_extensions;}
		static Dynamic nme_gl_get_tex_parameter; /* REM */ 
		static Dynamic &nme_gl_get_tex_parameter_dyn() { return nme_gl_get_tex_parameter;}
		static Dynamic nme_gl_get_uniform; /* REM */ 
		static Dynamic &nme_gl_get_uniform_dyn() { return nme_gl_get_uniform;}
		static Dynamic nme_gl_get_uniform_location; /* REM */ 
		static Dynamic &nme_gl_get_uniform_location_dyn() { return nme_gl_get_uniform_location;}
		static Dynamic nme_gl_get_vertex_attrib; /* REM */ 
		static Dynamic &nme_gl_get_vertex_attrib_dyn() { return nme_gl_get_vertex_attrib;}
		static Dynamic nme_gl_get_vertex_attrib_offset; /* REM */ 
		static Dynamic &nme_gl_get_vertex_attrib_offset_dyn() { return nme_gl_get_vertex_attrib_offset;}
		static Dynamic nme_gl_hint; /* REM */ 
		static Dynamic &nme_gl_hint_dyn() { return nme_gl_hint;}
		static Dynamic nme_gl_is_buffer; /* REM */ 
		static Dynamic &nme_gl_is_buffer_dyn() { return nme_gl_is_buffer;}
		static Dynamic nme_gl_is_enabled; /* REM */ 
		static Dynamic &nme_gl_is_enabled_dyn() { return nme_gl_is_enabled;}
		static Dynamic nme_gl_is_framebuffer; /* REM */ 
		static Dynamic &nme_gl_is_framebuffer_dyn() { return nme_gl_is_framebuffer;}
		static Dynamic nme_gl_is_program; /* REM */ 
		static Dynamic &nme_gl_is_program_dyn() { return nme_gl_is_program;}
		static Dynamic nme_gl_is_renderbuffer; /* REM */ 
		static Dynamic &nme_gl_is_renderbuffer_dyn() { return nme_gl_is_renderbuffer;}
		static Dynamic nme_gl_is_shader; /* REM */ 
		static Dynamic &nme_gl_is_shader_dyn() { return nme_gl_is_shader;}
		static Dynamic nme_gl_is_texture; /* REM */ 
		static Dynamic &nme_gl_is_texture_dyn() { return nme_gl_is_texture;}
		static Dynamic nme_gl_line_width; /* REM */ 
		static Dynamic &nme_gl_line_width_dyn() { return nme_gl_line_width;}
		static Dynamic nme_gl_link_program; /* REM */ 
		static Dynamic &nme_gl_link_program_dyn() { return nme_gl_link_program;}
		static Dynamic nme_gl_pixel_storei; /* REM */ 
		static Dynamic &nme_gl_pixel_storei_dyn() { return nme_gl_pixel_storei;}
		static Dynamic nme_gl_polygon_offset; /* REM */ 
		static Dynamic &nme_gl_polygon_offset_dyn() { return nme_gl_polygon_offset;}
		static Dynamic nme_gl_renderbuffer_storage; /* REM */ 
		static Dynamic &nme_gl_renderbuffer_storage_dyn() { return nme_gl_renderbuffer_storage;}
		static Dynamic nme_gl_sample_coverage; /* REM */ 
		static Dynamic &nme_gl_sample_coverage_dyn() { return nme_gl_sample_coverage;}
		static Dynamic nme_gl_scissor; /* REM */ 
		static Dynamic &nme_gl_scissor_dyn() { return nme_gl_scissor;}
		static Dynamic nme_gl_shader_source; /* REM */ 
		static Dynamic &nme_gl_shader_source_dyn() { return nme_gl_shader_source;}
		static Dynamic nme_gl_stencil_func; /* REM */ 
		static Dynamic &nme_gl_stencil_func_dyn() { return nme_gl_stencil_func;}
		static Dynamic nme_gl_stencil_func_separate; /* REM */ 
		static Dynamic &nme_gl_stencil_func_separate_dyn() { return nme_gl_stencil_func_separate;}
		static Dynamic nme_gl_stencil_mask; /* REM */ 
		static Dynamic &nme_gl_stencil_mask_dyn() { return nme_gl_stencil_mask;}
		static Dynamic nme_gl_stencil_mask_separate; /* REM */ 
		static Dynamic &nme_gl_stencil_mask_separate_dyn() { return nme_gl_stencil_mask_separate;}
		static Dynamic nme_gl_stencil_op; /* REM */ 
		static Dynamic &nme_gl_stencil_op_dyn() { return nme_gl_stencil_op;}
		static Dynamic nme_gl_stencil_op_separate; /* REM */ 
		static Dynamic &nme_gl_stencil_op_separate_dyn() { return nme_gl_stencil_op_separate;}
		static Dynamic nme_gl_tex_image_2d; /* REM */ 
		static Dynamic &nme_gl_tex_image_2d_dyn() { return nme_gl_tex_image_2d;}
		static Dynamic nme_gl_tex_parameterf; /* REM */ 
		static Dynamic &nme_gl_tex_parameterf_dyn() { return nme_gl_tex_parameterf;}
		static Dynamic nme_gl_tex_parameteri; /* REM */ 
		static Dynamic &nme_gl_tex_parameteri_dyn() { return nme_gl_tex_parameteri;}
		static Dynamic nme_gl_tex_sub_image_2d; /* REM */ 
		static Dynamic &nme_gl_tex_sub_image_2d_dyn() { return nme_gl_tex_sub_image_2d;}
		static Dynamic nme_gl_uniform1f; /* REM */ 
		static Dynamic &nme_gl_uniform1f_dyn() { return nme_gl_uniform1f;}
		static Dynamic nme_gl_uniform1fv; /* REM */ 
		static Dynamic &nme_gl_uniform1fv_dyn() { return nme_gl_uniform1fv;}
		static Dynamic nme_gl_uniform1i; /* REM */ 
		static Dynamic &nme_gl_uniform1i_dyn() { return nme_gl_uniform1i;}
		static Dynamic nme_gl_uniform1iv; /* REM */ 
		static Dynamic &nme_gl_uniform1iv_dyn() { return nme_gl_uniform1iv;}
		static Dynamic nme_gl_uniform2f; /* REM */ 
		static Dynamic &nme_gl_uniform2f_dyn() { return nme_gl_uniform2f;}
		static Dynamic nme_gl_uniform2fv; /* REM */ 
		static Dynamic &nme_gl_uniform2fv_dyn() { return nme_gl_uniform2fv;}
		static Dynamic nme_gl_uniform2i; /* REM */ 
		static Dynamic &nme_gl_uniform2i_dyn() { return nme_gl_uniform2i;}
		static Dynamic nme_gl_uniform2iv; /* REM */ 
		static Dynamic &nme_gl_uniform2iv_dyn() { return nme_gl_uniform2iv;}
		static Dynamic nme_gl_uniform3f; /* REM */ 
		static Dynamic &nme_gl_uniform3f_dyn() { return nme_gl_uniform3f;}
		static Dynamic nme_gl_uniform3fv; /* REM */ 
		static Dynamic &nme_gl_uniform3fv_dyn() { return nme_gl_uniform3fv;}
		static Dynamic nme_gl_uniform3i; /* REM */ 
		static Dynamic &nme_gl_uniform3i_dyn() { return nme_gl_uniform3i;}
		static Dynamic nme_gl_uniform3iv; /* REM */ 
		static Dynamic &nme_gl_uniform3iv_dyn() { return nme_gl_uniform3iv;}
		static Dynamic nme_gl_uniform4f; /* REM */ 
		static Dynamic &nme_gl_uniform4f_dyn() { return nme_gl_uniform4f;}
		static Dynamic nme_gl_uniform4fv; /* REM */ 
		static Dynamic &nme_gl_uniform4fv_dyn() { return nme_gl_uniform4fv;}
		static Dynamic nme_gl_uniform4i; /* REM */ 
		static Dynamic &nme_gl_uniform4i_dyn() { return nme_gl_uniform4i;}
		static Dynamic nme_gl_uniform4iv; /* REM */ 
		static Dynamic &nme_gl_uniform4iv_dyn() { return nme_gl_uniform4iv;}
		static Dynamic nme_gl_uniform_matrix; /* REM */ 
		static Dynamic &nme_gl_uniform_matrix_dyn() { return nme_gl_uniform_matrix;}
		static Dynamic nme_gl_use_program; /* REM */ 
		static Dynamic &nme_gl_use_program_dyn() { return nme_gl_use_program;}
		static Dynamic nme_gl_validate_program; /* REM */ 
		static Dynamic &nme_gl_validate_program_dyn() { return nme_gl_validate_program;}
		static Dynamic nme_gl_version; /* REM */ 
		static Dynamic &nme_gl_version_dyn() { return nme_gl_version;}
		static Dynamic nme_gl_vertex_attrib1f; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib1f_dyn() { return nme_gl_vertex_attrib1f;}
		static Dynamic nme_gl_vertex_attrib1fv; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib1fv_dyn() { return nme_gl_vertex_attrib1fv;}
		static Dynamic nme_gl_vertex_attrib2f; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib2f_dyn() { return nme_gl_vertex_attrib2f;}
		static Dynamic nme_gl_vertex_attrib2fv; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib2fv_dyn() { return nme_gl_vertex_attrib2fv;}
		static Dynamic nme_gl_vertex_attrib3f; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib3f_dyn() { return nme_gl_vertex_attrib3f;}
		static Dynamic nme_gl_vertex_attrib3fv; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib3fv_dyn() { return nme_gl_vertex_attrib3fv;}
		static Dynamic nme_gl_vertex_attrib4f; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib4f_dyn() { return nme_gl_vertex_attrib4f;}
		static Dynamic nme_gl_vertex_attrib4fv; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib4fv_dyn() { return nme_gl_vertex_attrib4fv;}
		static Dynamic nme_gl_vertex_attrib_pointer; /* REM */ 
		static Dynamic &nme_gl_vertex_attrib_pointer_dyn() { return nme_gl_vertex_attrib_pointer;}
		static Dynamic nme_gl_viewport; /* REM */ 
		static Dynamic &nme_gl_viewport_dyn() { return nme_gl_viewport;}
};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_GL */ 
