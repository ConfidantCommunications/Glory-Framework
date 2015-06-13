#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Matrix3D
#include <native/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_native_gl_Buffer
#include <native/gl/Buffer.h>
#endif
#ifndef INCLUDED_native_gl_Framebuffer
#include <native/gl/Framebuffer.h>
#endif
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Program
#include <native/gl/Program.h>
#endif
#ifndef INCLUDED_native_gl_Renderbuffer
#include <native/gl/Renderbuffer.h>
#endif
#ifndef INCLUDED_native_gl_Shader
#include <native/gl/Shader.h>
#endif
#ifndef INCLUDED_native_gl_Texture
#include <native/gl/Texture.h>
#endif
#ifndef INCLUDED_native_utils_ArrayBufferView
#include <native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_Float32Array
#include <native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace gl{

Void GL_obj::__construct()
{
	return null();
}

GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

int GL_obj::DEPTH_BUFFER_BIT;

int GL_obj::STENCIL_BUFFER_BIT;

int GL_obj::COLOR_BUFFER_BIT;

int GL_obj::POINTS;

int GL_obj::LINES;

int GL_obj::LINE_LOOP;

int GL_obj::LINE_STRIP;

int GL_obj::TRIANGLES;

int GL_obj::TRIANGLE_STRIP;

int GL_obj::TRIANGLE_FAN;

int GL_obj::ZERO;

int GL_obj::ONE;

int GL_obj::SRC_COLOR;

int GL_obj::ONE_MINUS_SRC_COLOR;

int GL_obj::SRC_ALPHA;

int GL_obj::ONE_MINUS_SRC_ALPHA;

int GL_obj::DST_ALPHA;

int GL_obj::ONE_MINUS_DST_ALPHA;

int GL_obj::DST_COLOR;

int GL_obj::ONE_MINUS_DST_COLOR;

int GL_obj::SRC_ALPHA_SATURATE;

int GL_obj::FUNC_ADD;

int GL_obj::BLEND_EQUATION;

int GL_obj::BLEND_EQUATION_RGB;

int GL_obj::BLEND_EQUATION_ALPHA;

int GL_obj::FUNC_SUBTRACT;

int GL_obj::FUNC_REVERSE_SUBTRACT;

int GL_obj::BLEND_DST_RGB;

int GL_obj::BLEND_SRC_RGB;

int GL_obj::BLEND_DST_ALPHA;

int GL_obj::BLEND_SRC_ALPHA;

int GL_obj::CONSTANT_COLOR;

int GL_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_obj::CONSTANT_ALPHA;

int GL_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_obj::BLEND_COLOR;

int GL_obj::ARRAY_BUFFER;

int GL_obj::ELEMENT_ARRAY_BUFFER;

int GL_obj::ARRAY_BUFFER_BINDING;

int GL_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_obj::STREAM_DRAW;

int GL_obj::STATIC_DRAW;

int GL_obj::DYNAMIC_DRAW;

int GL_obj::BUFFER_SIZE;

int GL_obj::BUFFER_USAGE;

int GL_obj::CURRENT_VERTEX_ATTRIB;

int GL_obj::FRONT;

int GL_obj::BACK;

int GL_obj::FRONT_AND_BACK;

int GL_obj::CULL_FACE;

int GL_obj::BLEND;

int GL_obj::DITHER;

int GL_obj::STENCIL_TEST;

int GL_obj::DEPTH_TEST;

int GL_obj::SCISSOR_TEST;

int GL_obj::POLYGON_OFFSET_FILL;

int GL_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_obj::SAMPLE_COVERAGE;

int GL_obj::NO_ERROR;

int GL_obj::INVALID_ENUM;

int GL_obj::INVALID_VALUE;

int GL_obj::INVALID_OPERATION;

int GL_obj::OUT_OF_MEMORY;

int GL_obj::CW;

int GL_obj::CCW;

int GL_obj::LINE_WIDTH;

int GL_obj::ALIASED_POINT_SIZE_RANGE;

int GL_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_obj::CULL_FACE_MODE;

int GL_obj::FRONT_FACE;

int GL_obj::DEPTH_RANGE;

int GL_obj::DEPTH_WRITEMASK;

int GL_obj::DEPTH_CLEAR_VALUE;

int GL_obj::DEPTH_FUNC;

int GL_obj::STENCIL_CLEAR_VALUE;

int GL_obj::STENCIL_FUNC;

int GL_obj::STENCIL_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_PASS;

int GL_obj::STENCIL_REF;

int GL_obj::STENCIL_VALUE_MASK;

int GL_obj::STENCIL_WRITEMASK;

int GL_obj::STENCIL_BACK_FUNC;

int GL_obj::STENCIL_BACK_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_obj::STENCIL_BACK_REF;

int GL_obj::STENCIL_BACK_VALUE_MASK;

int GL_obj::STENCIL_BACK_WRITEMASK;

int GL_obj::VIEWPORT;

int GL_obj::SCISSOR_BOX;

int GL_obj::COLOR_CLEAR_VALUE;

int GL_obj::COLOR_WRITEMASK;

int GL_obj::UNPACK_ALIGNMENT;

int GL_obj::PACK_ALIGNMENT;

int GL_obj::MAX_TEXTURE_SIZE;

int GL_obj::MAX_VIEWPORT_DIMS;

int GL_obj::SUBPIXEL_BITS;

int GL_obj::RED_BITS;

int GL_obj::GREEN_BITS;

int GL_obj::BLUE_BITS;

int GL_obj::ALPHA_BITS;

int GL_obj::DEPTH_BITS;

int GL_obj::STENCIL_BITS;

int GL_obj::POLYGON_OFFSET_UNITS;

int GL_obj::POLYGON_OFFSET_FACTOR;

int GL_obj::TEXTURE_BINDING_2D;

int GL_obj::SAMPLE_BUFFERS;

int GL_obj::SAMPLES;

int GL_obj::SAMPLE_COVERAGE_VALUE;

int GL_obj::SAMPLE_COVERAGE_INVERT;

int GL_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_obj::DONT_CARE;

int GL_obj::FASTEST;

int GL_obj::NICEST;

int GL_obj::GENERATE_MIPMAP_HINT;

int GL_obj::BYTE;

int GL_obj::UNSIGNED_BYTE;

int GL_obj::SHORT;

int GL_obj::UNSIGNED_SHORT;

int GL_obj::INT;

int GL_obj::UNSIGNED_INT;

int GL_obj::FLOAT;

int GL_obj::DEPTH_COMPONENT;

int GL_obj::ALPHA;

int GL_obj::RGB;

int GL_obj::RGBA;

int GL_obj::LUMINANCE;

int GL_obj::LUMINANCE_ALPHA;

int GL_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_obj::UNSIGNED_SHORT_5_6_5;

int GL_obj::FRAGMENT_SHADER;

int GL_obj::VERTEX_SHADER;

int GL_obj::MAX_VERTEX_ATTRIBS;

int GL_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_obj::MAX_VARYING_VECTORS;

int GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_obj::SHADER_TYPE;

int GL_obj::DELETE_STATUS;

int GL_obj::LINK_STATUS;

int GL_obj::VALIDATE_STATUS;

int GL_obj::ATTACHED_SHADERS;

int GL_obj::ACTIVE_UNIFORMS;

int GL_obj::ACTIVE_ATTRIBUTES;

int GL_obj::SHADING_LANGUAGE_VERSION;

int GL_obj::CURRENT_PROGRAM;

int GL_obj::NEVER;

int GL_obj::LESS;

int GL_obj::EQUAL;

int GL_obj::LEQUAL;

int GL_obj::GREATER;

int GL_obj::NOTEQUAL;

int GL_obj::GEQUAL;

int GL_obj::ALWAYS;

int GL_obj::KEEP;

int GL_obj::REPLACE;

int GL_obj::INCR;

int GL_obj::DECR;

int GL_obj::INVERT;

int GL_obj::INCR_WRAP;

int GL_obj::DECR_WRAP;

int GL_obj::VENDOR;

int GL_obj::RENDERER;

int GL_obj::VERSION;

int GL_obj::NEAREST;

int GL_obj::LINEAR;

int GL_obj::NEAREST_MIPMAP_NEAREST;

int GL_obj::LINEAR_MIPMAP_NEAREST;

int GL_obj::NEAREST_MIPMAP_LINEAR;

int GL_obj::LINEAR_MIPMAP_LINEAR;

int GL_obj::TEXTURE_MAG_FILTER;

int GL_obj::TEXTURE_MIN_FILTER;

int GL_obj::TEXTURE_WRAP_S;

int GL_obj::TEXTURE_WRAP_T;

int GL_obj::TEXTURE_2D;

int GL_obj::TEXTURE;

int GL_obj::TEXTURE_CUBE_MAP;

int GL_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_obj::TEXTURE0;

int GL_obj::TEXTURE1;

int GL_obj::TEXTURE2;

int GL_obj::TEXTURE3;

int GL_obj::TEXTURE4;

int GL_obj::TEXTURE5;

int GL_obj::TEXTURE6;

int GL_obj::TEXTURE7;

int GL_obj::TEXTURE8;

int GL_obj::TEXTURE9;

int GL_obj::TEXTURE10;

int GL_obj::TEXTURE11;

int GL_obj::TEXTURE12;

int GL_obj::TEXTURE13;

int GL_obj::TEXTURE14;

int GL_obj::TEXTURE15;

int GL_obj::TEXTURE16;

int GL_obj::TEXTURE17;

int GL_obj::TEXTURE18;

int GL_obj::TEXTURE19;

int GL_obj::TEXTURE20;

int GL_obj::TEXTURE21;

int GL_obj::TEXTURE22;

int GL_obj::TEXTURE23;

int GL_obj::TEXTURE24;

int GL_obj::TEXTURE25;

int GL_obj::TEXTURE26;

int GL_obj::TEXTURE27;

int GL_obj::TEXTURE28;

int GL_obj::TEXTURE29;

int GL_obj::TEXTURE30;

int GL_obj::TEXTURE31;

int GL_obj::ACTIVE_TEXTURE;

int GL_obj::REPEAT;

int GL_obj::CLAMP_TO_EDGE;

int GL_obj::MIRRORED_REPEAT;

int GL_obj::FLOAT_VEC2;

int GL_obj::FLOAT_VEC3;

int GL_obj::FLOAT_VEC4;

int GL_obj::INT_VEC2;

int GL_obj::INT_VEC3;

int GL_obj::INT_VEC4;

int GL_obj::BOOL;

int GL_obj::BOOL_VEC2;

int GL_obj::BOOL_VEC3;

int GL_obj::BOOL_VEC4;

int GL_obj::FLOAT_MAT2;

int GL_obj::FLOAT_MAT3;

int GL_obj::FLOAT_MAT4;

int GL_obj::SAMPLER_2D;

int GL_obj::SAMPLER_CUBE;

int GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_obj::COMPILE_STATUS;

int GL_obj::LOW_FLOAT;

int GL_obj::MEDIUM_FLOAT;

int GL_obj::HIGH_FLOAT;

int GL_obj::LOW_INT;

int GL_obj::MEDIUM_INT;

int GL_obj::HIGH_INT;

int GL_obj::FRAMEBUFFER;

int GL_obj::RENDERBUFFER;

int GL_obj::RGBA4;

int GL_obj::RGB5_A1;

int GL_obj::RGB565;

int GL_obj::DEPTH_COMPONENT16;

int GL_obj::STENCIL_INDEX;

int GL_obj::STENCIL_INDEX8;

int GL_obj::DEPTH_STENCIL;

int GL_obj::RENDERBUFFER_WIDTH;

int GL_obj::RENDERBUFFER_HEIGHT;

int GL_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_obj::RENDERBUFFER_RED_SIZE;

int GL_obj::RENDERBUFFER_GREEN_SIZE;

int GL_obj::RENDERBUFFER_BLUE_SIZE;

int GL_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_obj::COLOR_ATTACHMENT0;

int GL_obj::DEPTH_ATTACHMENT;

int GL_obj::STENCIL_ATTACHMENT;

int GL_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_obj::NONE;

int GL_obj::FRAMEBUFFER_COMPLETE;

int GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_obj::FRAMEBUFFER_BINDING;

int GL_obj::RENDERBUFFER_BINDING;

int GL_obj::MAX_RENDERBUFFER_SIZE;

int GL_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_obj::UNPACK_FLIP_Y_WEBGL;

int GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_obj::CONTEXT_LOST_WEBGL;

int GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_obj::BROWSER_DEFAULT_WEBGL;

int GL_obj::drawingBufferHeight;

int GL_obj::drawingBufferWidth;

int GL_obj::version;

Void GL_obj::activeTexture( int texture){
{
		HX_STACK_PUSH("GL::activeTexture","native/gl/GL.hx",440);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(440)
		::native::gl::GL_obj::nme_gl_active_texture(texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,activeTexture,(void))

Void GL_obj::attachShader( ::native::gl::Program program,::native::gl::Shader shader){
{
		HX_STACK_PUSH("GL::attachShader","native/gl/GL.hx",443);
		HX_STACK_ARG(program,"program");
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(445)
		program->attach(shader);
		HX_STACK_LINE(446)
		::native::gl::GL_obj::nme_gl_attach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::bindAttribLocation( ::native::gl::Program program,int index,::String name){
{
		HX_STACK_PUSH("GL::bindAttribLocation","native/gl/GL.hx",451);
		HX_STACK_ARG(program,"program");
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(451)
		::native::gl::GL_obj::nme_gl_bind_attrib_location(program->id,index,name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindAttribLocation,(void))

Void GL_obj::bindBitmapDataTexture( ::native::display::BitmapData texture){
{
		HX_STACK_PUSH("GL::bindBitmapDataTexture","native/gl/GL.hx",458);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(458)
		::native::gl::GL_obj::nme_gl_bind_bitmap_data_texture(texture->nmeHandle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,bindBitmapDataTexture,(void))

Void GL_obj::bindBuffer( int target,::native::gl::Buffer buffer){
{
		HX_STACK_PUSH("GL::bindBuffer","native/gl/GL.hx",465);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(buffer,"buffer");
		HX_STACK_LINE(465)
		::native::gl::GL_obj::nme_gl_bind_buffer(target,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bindFramebuffer( int target,::native::gl::Framebuffer framebuffer){
{
		HX_STACK_PUSH("GL::bindFramebuffer","native/gl/GL.hx",472);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(framebuffer,"framebuffer");
		HX_STACK_LINE(472)
		::native::gl::GL_obj::nme_gl_bind_framebuffer(target,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindFramebuffer,(void))

Void GL_obj::bindRenderbuffer( int target,::native::gl::Renderbuffer renderbuffer){
{
		HX_STACK_PUSH("GL::bindRenderbuffer","native/gl/GL.hx",479);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(renderbuffer,"renderbuffer");
		HX_STACK_LINE(479)
		::native::gl::GL_obj::nme_gl_bind_renderbuffer(target,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindRenderbuffer,(void))

Void GL_obj::bindTexture( int target,::native::gl::Texture texture){
{
		HX_STACK_PUSH("GL::bindTexture","native/gl/GL.hx",486);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(486)
		::native::gl::GL_obj::nme_gl_bind_texture(target,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("GL::blendColor","native/gl/GL.hx",493);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(493)
		::native::gl::GL_obj::nme_gl_blend_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendColor,(void))

Void GL_obj::blendEquation( int mode){
{
		HX_STACK_PUSH("GL::blendEquation","native/gl/GL.hx",500);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(500)
		::native::gl::GL_obj::nme_gl_blend_equation(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,blendEquation,(void))

Void GL_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_PUSH("GL::blendEquationSeparate","native/gl/GL.hx",507);
		HX_STACK_ARG(modeRGB,"modeRGB");
		HX_STACK_ARG(modeAlpha,"modeAlpha");
		HX_STACK_LINE(507)
		::native::gl::GL_obj::nme_gl_blend_equation_separate(modeRGB,modeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendEquationSeparate,(void))

Void GL_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_PUSH("GL::blendFunc","native/gl/GL.hx",514);
		HX_STACK_ARG(sfactor,"sfactor");
		HX_STACK_ARG(dfactor,"dfactor");
		HX_STACK_LINE(514)
		::native::gl::GL_obj::nme_gl_blend_func(sfactor,dfactor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendFunc,(void))

Void GL_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_PUSH("GL::blendFuncSeparate","native/gl/GL.hx",521);
		HX_STACK_ARG(srcRGB,"srcRGB");
		HX_STACK_ARG(dstRGB,"dstRGB");
		HX_STACK_ARG(srcAlpha,"srcAlpha");
		HX_STACK_ARG(dstAlpha,"dstAlpha");
		HX_STACK_LINE(521)
		::native::gl::GL_obj::nme_gl_blend_func_separate(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendFuncSeparate,(void))

Void GL_obj::bufferData( int target,::native::utils::IMemoryRange data,int usage){
{
		HX_STACK_PUSH("GL::bufferData","native/gl/GL.hx",528);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(usage,"usage");
		HX_STACK_LINE(528)
		::native::gl::GL_obj::nme_gl_buffer_data(target,data->getByteBuffer(),data->getStart(),data->getLength(),usage);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( int target,int offset,::native::utils::IMemoryRange data){
{
		HX_STACK_PUSH("GL::bufferSubData","native/gl/GL.hx",535);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(offset,"offset");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(535)
		::native::gl::GL_obj::nme_gl_buffer_sub_data(target,offset,data->getByteBuffer(),data->getStart(),data->getLength());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferSubData,(void))

int GL_obj::checkFramebufferStatus( int target){
	HX_STACK_PUSH("GL::checkFramebufferStatus","native/gl/GL.hx",542);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(542)
	return ::native::gl::GL_obj::nme_gl_check_framebuffer_status(target);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,checkFramebufferStatus,return )

Void GL_obj::clear( int mask){
{
		HX_STACK_PUSH("GL::clear","native/gl/GL.hx",549);
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(549)
		::native::gl::GL_obj::nme_gl_clear(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("GL::clearColor","native/gl/GL.hx",556);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(556)
		::native::gl::GL_obj::nme_gl_clear_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clearDepth( Float depth){
{
		HX_STACK_PUSH("GL::clearDepth","native/gl/GL.hx",563);
		HX_STACK_ARG(depth,"depth");
		HX_STACK_LINE(563)
		::native::gl::GL_obj::nme_gl_clear_depth(depth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepth,(void))

Void GL_obj::clearStencil( int s){
{
		HX_STACK_PUSH("GL::clearStencil","native/gl/GL.hx",570);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(570)
		::native::gl::GL_obj::nme_gl_clear_stencil(s);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearStencil,(void))

Void GL_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_PUSH("GL::colorMask","native/gl/GL.hx",577);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(577)
		::native::gl::GL_obj::nme_gl_color_mask(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,colorMask,(void))

Void GL_obj::compileShader( ::native::gl::Shader shader){
{
		HX_STACK_PUSH("GL::compileShader","native/gl/GL.hx",584);
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(584)
		::native::gl::GL_obj::nme_gl_compile_shader(shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Void GL_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::native::utils::IMemoryRange data){
{
		HX_STACK_PUSH("GL::compressedTexImage2D","native/gl/GL.hx",591);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(border,"border");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(591)
		::native::gl::GL_obj::nme_gl_compressed_tex_image_2d(target,level,internalformat,width,height,border,(  (((data == null()))) ? ::native::utils::ByteArray(null()) : ::native::utils::ByteArray(data->getByteBuffer()) ),(  (((data == null()))) ? Dynamic(null()) : Dynamic(data->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,compressedTexImage2D,(void))

Void GL_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::native::utils::IMemoryRange data){
{
		HX_STACK_PUSH("GL::compressedTexSubImage2D","native/gl/GL.hx",598);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(xoffset,"xoffset");
		HX_STACK_ARG(yoffset,"yoffset");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(598)
		::native::gl::GL_obj::nme_gl_compressed_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,(  (((data == null()))) ? ::native::utils::ByteArray(null()) : ::native::utils::ByteArray(data->getByteBuffer()) ),(  (((data == null()))) ? Dynamic(null()) : Dynamic(data->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,compressedTexSubImage2D,(void))

Void GL_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_PUSH("GL::copyTexImage2D","native/gl/GL.hx",605);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(border,"border");
		HX_STACK_LINE(605)
		::native::gl::GL_obj::nme_gl_copy_tex_image_2d(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexImage2D,(void))

Void GL_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_PUSH("GL::copyTexSubImage2D","native/gl/GL.hx",612);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(xoffset,"xoffset");
		HX_STACK_ARG(yoffset,"yoffset");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(612)
		::native::gl::GL_obj::nme_gl_copy_tex_sub_image_2d(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexSubImage2D,(void))

::native::gl::Buffer GL_obj::createBuffer( ){
	HX_STACK_PUSH("GL::createBuffer","native/gl/GL.hx",619);
	HX_STACK_LINE(619)
	return ::native::gl::Buffer_obj::__new(::native::gl::GL_obj::get_version(),::native::gl::GL_obj::nme_gl_create_buffer());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

::native::gl::Framebuffer GL_obj::createFramebuffer( ){
	HX_STACK_PUSH("GL::createFramebuffer","native/gl/GL.hx",626);
	HX_STACK_LINE(626)
	return ::native::gl::Framebuffer_obj::__new(::native::gl::GL_obj::get_version(),::native::gl::GL_obj::nme_gl_create_framebuffer());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createFramebuffer,return )

::native::gl::Program GL_obj::createProgram( ){
	HX_STACK_PUSH("GL::createProgram","native/gl/GL.hx",633);
	HX_STACK_LINE(633)
	return ::native::gl::Program_obj::__new(::native::gl::GL_obj::get_version(),::native::gl::GL_obj::nme_gl_create_program());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

::native::gl::Renderbuffer GL_obj::createRenderbuffer( ){
	HX_STACK_PUSH("GL::createRenderbuffer","native/gl/GL.hx",640);
	HX_STACK_LINE(640)
	return ::native::gl::Renderbuffer_obj::__new(::native::gl::GL_obj::get_version(),::native::gl::GL_obj::nme_gl_create_render_buffer());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createRenderbuffer,return )

::native::gl::Shader GL_obj::createShader( int type){
	HX_STACK_PUSH("GL::createShader","native/gl/GL.hx",647);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(647)
	return ::native::gl::Shader_obj::__new(::native::gl::GL_obj::get_version(),::native::gl::GL_obj::nme_gl_create_shader(type));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

::native::gl::Texture GL_obj::createTexture( ){
	HX_STACK_PUSH("GL::createTexture","native/gl/GL.hx",654);
	HX_STACK_LINE(654)
	return ::native::gl::Texture_obj::__new(::native::gl::GL_obj::get_version(),::native::gl::GL_obj::nme_gl_create_texture());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

Void GL_obj::cullFace( int mode){
{
		HX_STACK_PUSH("GL::cullFace","native/gl/GL.hx",661);
		HX_STACK_ARG(mode,"mode");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::deleteBuffer( ::native::gl::Buffer buffer){
{
		HX_STACK_PUSH("GL::deleteBuffer","native/gl/GL.hx",668);
		HX_STACK_ARG(buffer,"buffer");
		HX_STACK_LINE(670)
		::native::gl::GL_obj::nme_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(671)
		buffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteBuffer,(void))

Void GL_obj::deleteFramebuffer( ::native::gl::Framebuffer framebuffer){
{
		HX_STACK_PUSH("GL::deleteFramebuffer","native/gl/GL.hx",676);
		HX_STACK_ARG(framebuffer,"framebuffer");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteFramebuffer,(void))

Void GL_obj::deleteProgram( ::native::gl::Program program){
{
		HX_STACK_PUSH("GL::deleteProgram","native/gl/GL.hx",683);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(685)
		::native::gl::GL_obj::nme_gl_delete_program(program->id);
		HX_STACK_LINE(686)
		program->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::deleteRenderbuffer( ::native::gl::Renderbuffer renderbuffer){
{
		HX_STACK_PUSH("GL::deleteRenderbuffer","native/gl/GL.hx",691);
		HX_STACK_ARG(renderbuffer,"renderbuffer");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteRenderbuffer,(void))

Void GL_obj::deleteShader( ::native::gl::Shader shader){
{
		HX_STACK_PUSH("GL::deleteShader","native/gl/GL.hx",698);
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(700)
		::native::gl::GL_obj::nme_gl_delete_shader(shader->id);
		HX_STACK_LINE(701)
		shader->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::deleteTexture( ::native::gl::Texture texture){
{
		HX_STACK_PUSH("GL::deleteTexture","native/gl/GL.hx",706);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(708)
		::native::gl::GL_obj::nme_gl_delete_texture(texture->id);
		HX_STACK_LINE(709)
		texture->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTexture,(void))

Void GL_obj::depthFunc( int func){
{
		HX_STACK_PUSH("GL::depthFunc","native/gl/GL.hx",714);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(714)
		::native::gl::GL_obj::nme_gl_depth_func(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Void GL_obj::depthMask( bool flag){
{
		HX_STACK_PUSH("GL::depthMask","native/gl/GL.hx",721);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(721)
		::native::gl::GL_obj::nme_gl_depth_mask(flag);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_PUSH("GL::depthRange","native/gl/GL.hx",728);
		HX_STACK_ARG(zNear,"zNear");
		HX_STACK_ARG(zFar,"zFar");
		HX_STACK_LINE(728)
		::native::gl::GL_obj::nme_gl_depth_range(zNear,zFar);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,depthRange,(void))

Void GL_obj::detachShader( ::native::gl::Program program,::native::gl::Shader shader){
{
		HX_STACK_PUSH("GL::detachShader","native/gl/GL.hx",735);
		HX_STACK_ARG(program,"program");
		HX_STACK_ARG(shader,"shader");
		HX_STACK_LINE(735)
		::native::gl::GL_obj::nme_gl_detach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,detachShader,(void))

Void GL_obj::disable( int cap){
{
		HX_STACK_PUSH("GL::disable","native/gl/GL.hx",742);
		HX_STACK_ARG(cap,"cap");
		HX_STACK_LINE(742)
		::native::gl::GL_obj::nme_gl_disable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::disableVertexAttribArray( int index){
{
		HX_STACK_PUSH("GL::disableVertexAttribArray","native/gl/GL.hx",749);
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(749)
		::native::gl::GL_obj::nme_gl_disable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_PUSH("GL::drawArrays","native/gl/GL.hx",756);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(756)
		::native::gl::GL_obj::nme_gl_draw_arrays(mode,first,count);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,drawArrays,(void))

Void GL_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_PUSH("GL::drawElements","native/gl/GL.hx",763);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_ARG(count,"count");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(offset,"offset");
		HX_STACK_LINE(763)
		::native::gl::GL_obj::nme_gl_draw_elements(mode,count,type,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Void GL_obj::enable( int cap){
{
		HX_STACK_PUSH("GL::enable","native/gl/GL.hx",770);
		HX_STACK_ARG(cap,"cap");
		HX_STACK_LINE(770)
		::native::gl::GL_obj::nme_gl_enable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::enableVertexAttribArray( int index){
{
		HX_STACK_PUSH("GL::enableVertexAttribArray","native/gl/GL.hx",777);
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(777)
		::native::gl::GL_obj::nme_gl_enable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::finish( ){
{
		HX_STACK_PUSH("GL::finish","native/gl/GL.hx",784);
		HX_STACK_LINE(784)
		::native::gl::GL_obj::nme_gl_finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,finish,(void))

Void GL_obj::flush( ){
{
		HX_STACK_PUSH("GL::flush","native/gl/GL.hx",791);
		HX_STACK_LINE(791)
		::native::gl::GL_obj::nme_gl_flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,flush,(void))

Void GL_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::native::gl::Renderbuffer renderbuffer){
{
		HX_STACK_PUSH("GL::framebufferRenderbuffer","native/gl/GL.hx",798);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(attachment,"attachment");
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget");
		HX_STACK_ARG(renderbuffer,"renderbuffer");
		HX_STACK_LINE(798)
		::native::gl::GL_obj::nme_gl_framebuffer_renderbuffer(target,attachment,renderbuffertarget,renderbuffer->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,framebufferRenderbuffer,(void))

Void GL_obj::framebufferTexture2D( int target,int attachment,int textarget,::native::gl::Texture texture,int level){
{
		HX_STACK_PUSH("GL::framebufferTexture2D","native/gl/GL.hx",805);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(attachment,"attachment");
		HX_STACK_ARG(textarget,"textarget");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_ARG(level,"level");
		HX_STACK_LINE(805)
		::native::gl::GL_obj::nme_gl_framebuffer_texture2D(target,attachment,textarget,texture->id,level);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTexture2D,(void))

Void GL_obj::frontFace( int mode){
{
		HX_STACK_PUSH("GL::frontFace","native/gl/GL.hx",812);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(812)
		::native::gl::GL_obj::nme_gl_front_face(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,frontFace,(void))

Void GL_obj::generateMipmap( int target){
{
		HX_STACK_PUSH("GL::generateMipmap","native/gl/GL.hx",819);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(819)
		::native::gl::GL_obj::nme_gl_generate_mipmap(target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,generateMipmap,(void))

Dynamic GL_obj::getActiveAttrib( ::native::gl::Program program,int index){
	HX_STACK_PUSH("GL::getActiveAttrib","native/gl/GL.hx",826);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(826)
	return ::native::gl::GL_obj::nme_gl_get_active_attrib(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveAttrib,return )

Dynamic GL_obj::getActiveUniform( ::native::gl::Program program,int index){
	HX_STACK_PUSH("GL::getActiveUniform","native/gl/GL.hx",833);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(833)
	return ::native::gl::GL_obj::nme_gl_get_active_uniform(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniform,return )

Array< ::native::gl::Shader > GL_obj::getAttachedShaders( ::native::gl::Program program){
	HX_STACK_PUSH("GL::getAttachedShaders","native/gl/GL.hx",840);
	HX_STACK_ARG(program,"program");
	HX_STACK_LINE(840)
	return program->getShaders();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getAttachedShaders,return )

int GL_obj::getAttribLocation( ::native::gl::Program program,::String name){
	HX_STACK_PUSH("GL::getAttribLocation","native/gl/GL.hx",847);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(847)
	return ::native::gl::GL_obj::nme_gl_get_attrib_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

Dynamic GL_obj::getBufferParameter( int target,int pname){
	HX_STACK_PUSH("GL::getBufferParameter","native/gl/GL.hx",854);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(854)
	return ::native::gl::GL_obj::nme_gl_get_buffer_paramerter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameter,return )

Dynamic GL_obj::getContextAttributes( ){
	HX_STACK_PUSH("GL::getContextAttributes","native/gl/GL.hx",861);
	HX_STACK_LINE(863)
	Dynamic base = ::native::gl::GL_obj::nme_gl_get_context_attributes();		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(864)
	base->__FieldRef(HX_CSTRING("premultipliedAlpha")) = false;
	HX_STACK_LINE(865)
	base->__FieldRef(HX_CSTRING("preserveDrawingBuffer")) = false;
	HX_STACK_LINE(866)
	return base;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getContextAttributes,return )

int GL_obj::getError( ){
	HX_STACK_PUSH("GL::getError","native/gl/GL.hx",871);
	HX_STACK_LINE(871)
	return ::native::gl::GL_obj::nme_gl_get_error();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getError,return )

Dynamic GL_obj::getExtension( ::String name){
	HX_STACK_PUSH("GL::getExtension","native/gl/GL.hx",878);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(878)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getExtension,return )

Dynamic GL_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_PUSH("GL::getFramebufferAttachmentParameter","native/gl/GL.hx",886);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(attachment,"attachment");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(886)
	return ::native::gl::GL_obj::nme_gl_get_framebuffer_attachment_parameter(target,attachment,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameter,return )

Dynamic GL_obj::getParameter( int pname){
	HX_STACK_PUSH("GL::getParameter","native/gl/GL.hx",893);
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(893)
	return ::native::gl::GL_obj::nme_gl_get_parameter(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getParameter,return )

::String GL_obj::getProgramInfoLog( ::native::gl::Program program){
	HX_STACK_PUSH("GL::getProgramInfoLog","native/gl/GL.hx",900);
	HX_STACK_ARG(program,"program");
	HX_STACK_LINE(900)
	return ::native::gl::GL_obj::nme_gl_get_program_info_log(program->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getProgramInfoLog,return )

int GL_obj::getProgramParameter( ::native::gl::Program program,int pname){
	HX_STACK_PUSH("GL::getProgramParameter","native/gl/GL.hx",907);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(907)
	return ::native::gl::GL_obj::nme_gl_get_program_parameter(program->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

Dynamic GL_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_PUSH("GL::getRenderbufferParameter","native/gl/GL.hx",914);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(914)
	return ::native::gl::GL_obj::nme_gl_get_render_buffer_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameter,return )

::String GL_obj::getShaderInfoLog( ::native::gl::Shader shader){
	HX_STACK_PUSH("GL::getShaderInfoLog","native/gl/GL.hx",921);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(921)
	return ::native::gl::GL_obj::nme_gl_get_shader_info_log(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderInfoLog,return )

int GL_obj::getShaderParameter( ::native::gl::Shader shader,int pname){
	HX_STACK_PUSH("GL::getShaderParameter","native/gl/GL.hx",928);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(928)
	return ::native::gl::GL_obj::nme_gl_get_shader_parameter(shader->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Dynamic GL_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_PUSH("GL::getShaderPrecisionFormat","native/gl/GL.hx",935);
	HX_STACK_ARG(shadertype,"shadertype");
	HX_STACK_ARG(precisiontype,"precisiontype");
	HX_STACK_LINE(935)
	return ::native::gl::GL_obj::nme_gl_get_shader_precision_format(shadertype,precisiontype);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderPrecisionFormat,return )

::String GL_obj::getShaderSource( ::native::gl::Shader shader){
	HX_STACK_PUSH("GL::getShaderSource","native/gl/GL.hx",942);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(942)
	return ::native::gl::GL_obj::nme_gl_get_shader_source(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderSource,return )

Array< ::String > GL_obj::getSupportedExtensions( ){
	HX_STACK_PUSH("GL::getSupportedExtensions","native/gl/GL.hx",949);
	HX_STACK_LINE(951)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(952)
	::native::gl::GL_obj::nme_gl_get_supported_extensions(result);
	HX_STACK_LINE(953)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getSupportedExtensions,return )

Dynamic GL_obj::getTexParameter( int target,int pname){
	HX_STACK_PUSH("GL::getTexParameter","native/gl/GL.hx",958);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(958)
	return ::native::gl::GL_obj::nme_gl_get_tex_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameter,return )

Dynamic GL_obj::getUniform( ::native::gl::Program program,Dynamic location){
	HX_STACK_PUSH("GL::getUniform","native/gl/GL.hx",965);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(location,"location");
	HX_STACK_LINE(965)
	return ::native::gl::GL_obj::nme_gl_get_uniform(program->id,location);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniform,return )

Dynamic GL_obj::getUniformLocation( ::native::gl::Program program,::String name){
	HX_STACK_PUSH("GL::getUniformLocation","native/gl/GL.hx",972);
	HX_STACK_ARG(program,"program");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(972)
	return ::native::gl::GL_obj::nme_gl_get_uniform_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

Dynamic GL_obj::getVertexAttrib( int index,int pname){
	HX_STACK_PUSH("GL::getVertexAttrib","native/gl/GL.hx",979);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(979)
	return ::native::gl::GL_obj::nme_gl_get_vertex_attrib(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttrib,return )

int GL_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_PUSH("GL::getVertexAttribOffset","native/gl/GL.hx",986);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(pname,"pname");
	HX_STACK_LINE(986)
	return ::native::gl::GL_obj::nme_gl_get_vertex_attrib_offset(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribOffset,return )

Void GL_obj::hint( int target,int mode){
{
		HX_STACK_PUSH("GL::hint","native/gl/GL.hx",993);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(993)
		::native::gl::GL_obj::nme_gl_hint(target,mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,hint,(void))

bool GL_obj::isBuffer( ::native::gl::Buffer buffer){
	HX_STACK_PUSH("GL::isBuffer","native/gl/GL.hx",1000);
	HX_STACK_ARG(buffer,"buffer");
	HX_STACK_LINE(1000)
	return (bool((bool((buffer != null())) && bool((buffer->id > (int)0)))) && bool(::native::gl::GL_obj::nme_gl_is_buffer(buffer->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isBuffer,return )

bool GL_obj::isEnabled( int cap){
	HX_STACK_PUSH("GL::isEnabled","native/gl/GL.hx",1011);
	HX_STACK_ARG(cap,"cap");
	HX_STACK_LINE(1011)
	return ::native::gl::GL_obj::nme_gl_is_enabled(cap);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isEnabled,return )

bool GL_obj::isFramebuffer( ::native::gl::Framebuffer framebuffer){
	HX_STACK_PUSH("GL::isFramebuffer","native/gl/GL.hx",1018);
	HX_STACK_ARG(framebuffer,"framebuffer");
	HX_STACK_LINE(1018)
	return (bool((bool((framebuffer != null())) && bool((framebuffer->id > (int)0)))) && bool(::native::gl::GL_obj::nme_gl_is_framebuffer(framebuffer->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isFramebuffer,return )

bool GL_obj::isProgram( ::native::gl::Program program){
	HX_STACK_PUSH("GL::isProgram","native/gl/GL.hx",1025);
	HX_STACK_ARG(program,"program");
	HX_STACK_LINE(1025)
	return (bool((bool((program != null())) && bool((program->id > (int)0)))) && bool(::native::gl::GL_obj::nme_gl_is_program(program->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isProgram,return )

bool GL_obj::isRenderbuffer( ::native::gl::Renderbuffer renderbuffer){
	HX_STACK_PUSH("GL::isRenderbuffer","native/gl/GL.hx",1032);
	HX_STACK_ARG(renderbuffer,"renderbuffer");
	HX_STACK_LINE(1032)
	return (bool((bool((renderbuffer != null())) && bool((renderbuffer->id > (int)0)))) && bool(::native::gl::GL_obj::nme_gl_is_renderbuffer(renderbuffer->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isRenderbuffer,return )

bool GL_obj::isShader( ::native::gl::Shader shader){
	HX_STACK_PUSH("GL::isShader","native/gl/GL.hx",1039);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(1039)
	return (bool((bool((shader != null())) && bool((shader->id > (int)0)))) && bool(::native::gl::GL_obj::nme_gl_is_shader(shader->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isShader,return )

bool GL_obj::isTexture( ::native::gl::Texture texture){
	HX_STACK_PUSH("GL::isTexture","native/gl/GL.hx",1046);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_LINE(1046)
	return (bool((bool((texture != null())) && bool((texture->id > (int)0)))) && bool(::native::gl::GL_obj::nme_gl_is_texture(texture->id)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTexture,return )

Void GL_obj::lineWidth( Float width){
{
		HX_STACK_PUSH("GL::lineWidth","native/gl/GL.hx",1053);
		HX_STACK_ARG(width,"width");
		HX_STACK_LINE(1053)
		::native::gl::GL_obj::nme_gl_line_width(width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,lineWidth,(void))

Void GL_obj::linkProgram( ::native::gl::Program program){
{
		HX_STACK_PUSH("GL::linkProgram","native/gl/GL.hx",1060);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(1060)
		::native::gl::GL_obj::nme_gl_link_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Dynamic GL_obj::load( ::String inName,int inArgCount){
	HX_STACK_PUSH("GL::load","native/gl/GL.hx",1067);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_ARG(inArgCount,"inArgCount");
	HX_STACK_LINE(1067)
	try{
		HX_STACK_LINE(1069)
		return ::native::Loader_obj::load(inName,inArgCount);
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
				HX_STACK_LINE(1075)
				::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("GL.hx"),1075,HX_CSTRING("native.gl.GL"),HX_CSTRING("load")));
				HX_STACK_LINE(1076)
				return null();
			}
		}
	}
	HX_STACK_LINE(1067)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,load,return )

Void GL_obj::pixelStorei( int pname,int param){
{
		HX_STACK_PUSH("GL::pixelStorei","native/gl/GL.hx",1083);
		HX_STACK_ARG(pname,"pname");
		HX_STACK_ARG(param,"param");
		HX_STACK_LINE(1083)
		::native::gl::GL_obj::nme_gl_pixel_storei(pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,pixelStorei,(void))

Void GL_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_PUSH("GL::polygonOffset","native/gl/GL.hx",1090);
		HX_STACK_ARG(factor,"factor");
		HX_STACK_ARG(units,"units");
		HX_STACK_LINE(1090)
		::native::gl::GL_obj::nme_gl_polygon_offset(factor,units);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,polygonOffset,(void))

Void GL_obj::readPixels( int x,int y,int width,int height,int format,int type,::native::utils::ByteArray pixels){
{
		HX_STACK_PUSH("GL::readPixels","native/gl/GL.hx",1097);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pixels,"pixels");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,readPixels,(void))

Void GL_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_PUSH("GL::renderbufferStorage","native/gl/GL.hx",1104);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1104)
		::native::gl::GL_obj::nme_gl_renderbuffer_storage(target,internalformat,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,renderbufferStorage,(void))

Void GL_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_PUSH("GL::sampleCoverage","native/gl/GL.hx",1111);
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(invert,"invert");
		HX_STACK_LINE(1111)
		::native::gl::GL_obj::nme_gl_sample_coverage(value,invert);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,sampleCoverage,(void))

Void GL_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_PUSH("GL::scissor","native/gl/GL.hx",1118);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1118)
		::native::gl::GL_obj::nme_gl_scissor(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,scissor,(void))

Void GL_obj::shaderSource( ::native::gl::Shader shader,::String source){
{
		HX_STACK_PUSH("GL::shaderSource","native/gl/GL.hx",1125);
		HX_STACK_ARG(shader,"shader");
		HX_STACK_ARG(source,"source");
		HX_STACK_LINE(1125)
		::native::gl::GL_obj::nme_gl_shader_source(shader->id,source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_PUSH("GL::stencilFunc","native/gl/GL.hx",1132);
		HX_STACK_ARG(func,"func");
		HX_STACK_ARG(ref,"ref");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(1132)
		::native::gl::GL_obj::nme_gl_stencil_func(func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilFunc,(void))

Void GL_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_PUSH("GL::stencilFuncSeparate","native/gl/GL.hx",1139);
		HX_STACK_ARG(face,"face");
		HX_STACK_ARG(func,"func");
		HX_STACK_ARG(ref,"ref");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(1139)
		::native::gl::GL_obj::nme_gl_stencil_func_separate(face,func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilFuncSeparate,(void))

Void GL_obj::stencilMask( int mask){
{
		HX_STACK_PUSH("GL::stencilMask","native/gl/GL.hx",1146);
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(1146)
		::native::gl::GL_obj::nme_gl_stencil_mask(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,stencilMask,(void))

Void GL_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_PUSH("GL::stencilMaskSeparate","native/gl/GL.hx",1153);
		HX_STACK_ARG(face,"face");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_LINE(1153)
		::native::gl::GL_obj::nme_gl_stencil_mask_separate(face,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,stencilMaskSeparate,(void))

Void GL_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_PUSH("GL::stencilOp","native/gl/GL.hx",1160);
		HX_STACK_ARG(fail,"fail");
		HX_STACK_ARG(zfail,"zfail");
		HX_STACK_ARG(zpass,"zpass");
		HX_STACK_LINE(1160)
		::native::gl::GL_obj::nme_gl_stencil_op(fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilOp,(void))

Void GL_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_PUSH("GL::stencilOpSeparate","native/gl/GL.hx",1167);
		HX_STACK_ARG(face,"face");
		HX_STACK_ARG(fail,"fail");
		HX_STACK_ARG(zfail,"zfail");
		HX_STACK_ARG(zpass,"zpass");
		HX_STACK_LINE(1167)
		::native::gl::GL_obj::nme_gl_stencil_op_separate(face,fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilOpSeparate,(void))

Void GL_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::native::utils::ArrayBufferView pixels){
{
		HX_STACK_PUSH("GL::texImage2D","native/gl/GL.hx",1174);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(internalformat,"internalformat");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(border,"border");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(1174)
		::native::gl::GL_obj::nme_gl_tex_image_2d(target,level,internalformat,width,height,border,format,type,(  (((pixels == null()))) ? ::native::utils::ByteArray(null()) : ::native::utils::ByteArray(pixels->getByteBuffer()) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texImage2D,(void))

Void GL_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_PUSH("GL::texParameterf","native/gl/GL.hx",1181);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(pname,"pname");
		HX_STACK_ARG(param,"param");
		HX_STACK_LINE(1181)
		::native::gl::GL_obj::nme_gl_tex_parameterf(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameterf,(void))

Void GL_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_PUSH("GL::texParameteri","native/gl/GL.hx",1188);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(pname,"pname");
		HX_STACK_ARG(param,"param");
		HX_STACK_LINE(1188)
		::native::gl::GL_obj::nme_gl_tex_parameteri(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

Void GL_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::native::utils::ByteArray pixels){
{
		HX_STACK_PUSH("GL::texSubImage2D","native/gl/GL.hx",1195);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(level,"level");
		HX_STACK_ARG(xoffset,"xoffset");
		HX_STACK_ARG(yoffset,"yoffset");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(format,"format");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(1195)
		::native::gl::GL_obj::nme_gl_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,type,(  (((pixels == null()))) ? ::native::utils::ByteArray(null()) : ::native::utils::ByteArray(pixels->getByteBuffer()) ),(  (((pixels == null()))) ? Dynamic(null()) : Dynamic(pixels->getStart()) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texSubImage2D,(void))

Void GL_obj::uniform1f( Dynamic location,Float x){
{
		HX_STACK_PUSH("GL::uniform1f","native/gl/GL.hx",1202);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1202)
		::native::gl::GL_obj::nme_gl_uniform1f(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1f,(void))

Void GL_obj::uniform1fv( Dynamic location,Array< Float > x){
{
		HX_STACK_PUSH("GL::uniform1fv","native/gl/GL.hx",1209);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1209)
		::native::gl::GL_obj::nme_gl_uniform1fv(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1fv,(void))

Void GL_obj::uniform1i( Dynamic location,int x){
{
		HX_STACK_PUSH("GL::uniform1i","native/gl/GL.hx",1216);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1216)
		::native::gl::GL_obj::nme_gl_uniform1i(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1i,(void))

Void GL_obj::uniform1iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform1iv","native/gl/GL.hx",1223);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1223)
		::native::gl::GL_obj::nme_gl_uniform1iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1iv,(void))

Void GL_obj::uniform2f( Dynamic location,Float x,Float y){
{
		HX_STACK_PUSH("GL::uniform2f","native/gl/GL.hx",1230);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1230)
		::native::gl::GL_obj::nme_gl_uniform2f(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2f,(void))

Void GL_obj::uniform2fv( Dynamic location,Array< Float > v){
{
		HX_STACK_PUSH("GL::uniform2fv","native/gl/GL.hx",1237);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1237)
		::native::gl::GL_obj::nme_gl_uniform2fv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2fv,(void))

Void GL_obj::uniform2i( Dynamic location,int x,int y){
{
		HX_STACK_PUSH("GL::uniform2i","native/gl/GL.hx",1244);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1244)
		::native::gl::GL_obj::nme_gl_uniform2i(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2i,(void))

Void GL_obj::uniform2iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform2iv","native/gl/GL.hx",1251);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1251)
		::native::gl::GL_obj::nme_gl_uniform2iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2iv,(void))

Void GL_obj::uniform3f( Dynamic location,Float x,Float y,Float z){
{
		HX_STACK_PUSH("GL::uniform3f","native/gl/GL.hx",1258);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(1258)
		::native::gl::GL_obj::nme_gl_uniform3f(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3f,(void))

Void GL_obj::uniform3fv( Dynamic location,Array< Float > v){
{
		HX_STACK_PUSH("GL::uniform3fv","native/gl/GL.hx",1265);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1265)
		::native::gl::GL_obj::nme_gl_uniform3fv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3fv,(void))

Void GL_obj::uniform3i( Dynamic location,int x,int y,int z){
{
		HX_STACK_PUSH("GL::uniform3i","native/gl/GL.hx",1272);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(1272)
		::native::gl::GL_obj::nme_gl_uniform3i(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3i,(void))

Void GL_obj::uniform3iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform3iv","native/gl/GL.hx",1279);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1279)
		::native::gl::GL_obj::nme_gl_uniform3iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3iv,(void))

Void GL_obj::uniform4f( Dynamic location,Float x,Float y,Float z,Float w){
{
		HX_STACK_PUSH("GL::uniform4f","native/gl/GL.hx",1286);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(1286)
		::native::gl::GL_obj::nme_gl_uniform4f(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4f,(void))

Void GL_obj::uniform4fv( Dynamic location,Array< Float > v){
{
		HX_STACK_PUSH("GL::uniform4fv","native/gl/GL.hx",1293);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1293)
		::native::gl::GL_obj::nme_gl_uniform4fv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4fv,(void))

Void GL_obj::uniform4i( Dynamic location,int x,int y,int z,int w){
{
		HX_STACK_PUSH("GL::uniform4i","native/gl/GL.hx",1300);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(1300)
		::native::gl::GL_obj::nme_gl_uniform4i(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4i,(void))

Void GL_obj::uniform4iv( Dynamic location,Array< int > v){
{
		HX_STACK_PUSH("GL::uniform4iv","native/gl/GL.hx",1307);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1307)
		::native::gl::GL_obj::nme_gl_uniform4iv(location,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4iv,(void))

Void GL_obj::uniformMatrix2fv( Dynamic location,bool transpose,::native::utils::Float32Array v){
{
		HX_STACK_PUSH("GL::uniformMatrix2fv","native/gl/GL.hx",1314);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1314)
		::native::gl::GL_obj::nme_gl_uniform_matrix(location,transpose,v->getByteBuffer(),(int)2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix2fv,(void))

Void GL_obj::uniformMatrix3fv( Dynamic location,bool transpose,::native::utils::Float32Array v){
{
		HX_STACK_PUSH("GL::uniformMatrix3fv","native/gl/GL.hx",1321);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1321)
		::native::gl::GL_obj::nme_gl_uniform_matrix(location,transpose,v->getByteBuffer(),(int)3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3fv,(void))

Void GL_obj::uniformMatrix4fv( Dynamic location,bool transpose,::native::utils::Float32Array v){
{
		HX_STACK_PUSH("GL::uniformMatrix4fv","native/gl/GL.hx",1328);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(1328)
		::native::gl::GL_obj::nme_gl_uniform_matrix(location,transpose,v->getByteBuffer(),(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix4fv,(void))

Void GL_obj::uniformMatrix3D( Dynamic location,bool transpose,::native::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("GL::uniformMatrix3D","native/gl/GL.hx",1335);
		HX_STACK_ARG(location,"location");
		HX_STACK_ARG(transpose,"transpose");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(1335)
		::native::gl::GL_obj::nme_gl_uniform_matrix(location,transpose,::native::utils::Float32Array_obj::fromMatrix(matrix)->getByteBuffer(),(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3D,(void))

Void GL_obj::useProgram( ::native::gl::Program program){
{
		HX_STACK_PUSH("GL::useProgram","native/gl/GL.hx",1342);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(1342)
		::native::gl::GL_obj::nme_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Void GL_obj::validateProgram( ::native::gl::Program program){
{
		HX_STACK_PUSH("GL::validateProgram","native/gl/GL.hx",1349);
		HX_STACK_ARG(program,"program");
		HX_STACK_LINE(1349)
		::native::gl::GL_obj::nme_gl_validate_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,validateProgram,(void))

Void GL_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_PUSH("GL::vertexAttrib1f","native/gl/GL.hx",1356);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1356)
		::native::gl::GL_obj::nme_gl_vertex_attrib1f(indx,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1f,(void))

Void GL_obj::vertexAttrib1fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib1fv","native/gl/GL.hx",1363);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1363)
		::native::gl::GL_obj::nme_gl_vertex_attrib1fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1fv,(void))

Void GL_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_PUSH("GL::vertexAttrib2f","native/gl/GL.hx",1370);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1370)
		::native::gl::GL_obj::nme_gl_vertex_attrib2f(indx,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,vertexAttrib2f,(void))

Void GL_obj::vertexAttrib2fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib2fv","native/gl/GL.hx",1377);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1377)
		::native::gl::GL_obj::nme_gl_vertex_attrib2fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib2fv,(void))

Void GL_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_PUSH("GL::vertexAttrib3f","native/gl/GL.hx",1384);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(1384)
		::native::gl::GL_obj::nme_gl_vertex_attrib3f(indx,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,vertexAttrib3f,(void))

Void GL_obj::vertexAttrib3fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib3fv","native/gl/GL.hx",1391);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1391)
		::native::gl::GL_obj::nme_gl_vertex_attrib3fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib3fv,(void))

Void GL_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_PUSH("GL::vertexAttrib4f","native/gl/GL.hx",1398);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(1398)
		::native::gl::GL_obj::nme_gl_vertex_attrib4f(indx,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttrib4f,(void))

Void GL_obj::vertexAttrib4fv( int indx,Array< Float > values){
{
		HX_STACK_PUSH("GL::vertexAttrib4fv","native/gl/GL.hx",1405);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(values,"values");
		HX_STACK_LINE(1405)
		::native::gl::GL_obj::nme_gl_vertex_attrib4fv(indx,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib4fv,(void))

Void GL_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_PUSH("GL::vertexAttribPointer","native/gl/GL.hx",1412);
		HX_STACK_ARG(indx,"indx");
		HX_STACK_ARG(size,"size");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(normalized,"normalized");
		HX_STACK_ARG(stride,"stride");
		HX_STACK_ARG(offset,"offset");
		HX_STACK_LINE(1412)
		::native::gl::GL_obj::nme_gl_vertex_attrib_pointer(indx,size,type,normalized,stride,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_PUSH("GL::viewport","native/gl/GL.hx",1419);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1419)
		::native::gl::GL_obj::nme_gl_viewport(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

int GL_obj::get_drawingBufferHeight( ){
	HX_STACK_PUSH("GL::get_drawingBufferHeight","native/gl/GL.hx",1433);
	HX_STACK_LINE(1433)
	return ::native::Lib_obj::get_current()->get_stage()->get_stageHeight();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_drawingBufferHeight,return )

int GL_obj::get_drawingBufferWidth( ){
	HX_STACK_PUSH("GL::get_drawingBufferWidth","native/gl/GL.hx",1434);
	HX_STACK_LINE(1434)
	return ::native::Lib_obj::get_current()->get_stage()->get_stageWidth();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_drawingBufferWidth,return )

int GL_obj::get_version( ){
	HX_STACK_PUSH("GL::get_version","native/gl/GL.hx",1435);
	HX_STACK_LINE(1435)
	return ::native::gl::GL_obj::nme_gl_version();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_version,return )

Dynamic GL_obj::nme_gl_active_texture;

Dynamic GL_obj::nme_gl_attach_shader;

Dynamic GL_obj::nme_gl_bind_attrib_location;

Dynamic GL_obj::nme_gl_bind_bitmap_data_texture;

Dynamic GL_obj::nme_gl_bind_buffer;

Dynamic GL_obj::nme_gl_bind_framebuffer;

Dynamic GL_obj::nme_gl_bind_renderbuffer;

Dynamic GL_obj::nme_gl_bind_texture;

Dynamic GL_obj::nme_gl_blend_color;

Dynamic GL_obj::nme_gl_blend_equation;

Dynamic GL_obj::nme_gl_blend_equation_separate;

Dynamic GL_obj::nme_gl_blend_func;

Dynamic GL_obj::nme_gl_blend_func_separate;

Dynamic GL_obj::nme_gl_buffer_data;

Dynamic GL_obj::nme_gl_buffer_sub_data;

Dynamic GL_obj::nme_gl_check_framebuffer_status;

Dynamic GL_obj::nme_gl_clear;

Dynamic GL_obj::nme_gl_clear_color;

Dynamic GL_obj::nme_gl_clear_depth;

Dynamic GL_obj::nme_gl_clear_stencil;

Dynamic GL_obj::nme_gl_color_mask;

Dynamic GL_obj::nme_gl_compile_shader;

Dynamic GL_obj::nme_gl_compressed_tex_image_2d;

Dynamic GL_obj::nme_gl_compressed_tex_sub_image_2d;

Dynamic GL_obj::nme_gl_copy_tex_image_2d;

Dynamic GL_obj::nme_gl_copy_tex_sub_image_2d;

Dynamic GL_obj::nme_gl_create_buffer;

Dynamic GL_obj::nme_gl_create_framebuffer;

Dynamic GL_obj::nme_gl_create_program;

Dynamic GL_obj::nme_gl_create_render_buffer;

Dynamic GL_obj::nme_gl_create_shader;

Dynamic GL_obj::nme_gl_create_texture;

Dynamic GL_obj::nme_gl_delete_buffer;

Dynamic GL_obj::nme_gl_delete_program;

Dynamic GL_obj::nme_gl_delete_shader;

Dynamic GL_obj::nme_gl_delete_texture;

Dynamic GL_obj::nme_gl_depth_func;

Dynamic GL_obj::nme_gl_depth_mask;

Dynamic GL_obj::nme_gl_depth_range;

Dynamic GL_obj::nme_gl_detach_shader;

Dynamic GL_obj::nme_gl_disable;

Dynamic GL_obj::nme_gl_disable_vertex_attrib_array;

Dynamic GL_obj::nme_gl_draw_arrays;

Dynamic GL_obj::nme_gl_draw_elements;

Dynamic GL_obj::nme_gl_enable;

Dynamic GL_obj::nme_gl_enable_vertex_attrib_array;

Dynamic GL_obj::nme_gl_finish;

Dynamic GL_obj::nme_gl_flush;

Dynamic GL_obj::nme_gl_framebuffer_renderbuffer;

Dynamic GL_obj::nme_gl_framebuffer_texture2D;

Dynamic GL_obj::nme_gl_front_face;

Dynamic GL_obj::nme_gl_generate_mipmap;

Dynamic GL_obj::nme_gl_get_active_attrib;

Dynamic GL_obj::nme_gl_get_active_uniform;

Dynamic GL_obj::nme_gl_get_attrib_location;

Dynamic GL_obj::nme_gl_get_buffer_paramerter;

Dynamic GL_obj::nme_gl_get_context_attributes;

Dynamic GL_obj::nme_gl_get_error;

Dynamic GL_obj::nme_gl_get_framebuffer_attachment_parameter;

Dynamic GL_obj::nme_gl_get_parameter;

Dynamic GL_obj::nme_gl_get_program_info_log;

Dynamic GL_obj::nme_gl_get_program_parameter;

Dynamic GL_obj::nme_gl_get_render_buffer_parameter;

Dynamic GL_obj::nme_gl_get_shader_info_log;

Dynamic GL_obj::nme_gl_get_shader_parameter;

Dynamic GL_obj::nme_gl_get_shader_precision_format;

Dynamic GL_obj::nme_gl_get_shader_source;

Dynamic GL_obj::nme_gl_get_supported_extensions;

Dynamic GL_obj::nme_gl_get_tex_parameter;

Dynamic GL_obj::nme_gl_get_uniform;

Dynamic GL_obj::nme_gl_get_uniform_location;

Dynamic GL_obj::nme_gl_get_vertex_attrib;

Dynamic GL_obj::nme_gl_get_vertex_attrib_offset;

Dynamic GL_obj::nme_gl_hint;

Dynamic GL_obj::nme_gl_is_buffer;

Dynamic GL_obj::nme_gl_is_enabled;

Dynamic GL_obj::nme_gl_is_framebuffer;

Dynamic GL_obj::nme_gl_is_program;

Dynamic GL_obj::nme_gl_is_renderbuffer;

Dynamic GL_obj::nme_gl_is_shader;

Dynamic GL_obj::nme_gl_is_texture;

Dynamic GL_obj::nme_gl_line_width;

Dynamic GL_obj::nme_gl_link_program;

Dynamic GL_obj::nme_gl_pixel_storei;

Dynamic GL_obj::nme_gl_polygon_offset;

Dynamic GL_obj::nme_gl_renderbuffer_storage;

Dynamic GL_obj::nme_gl_sample_coverage;

Dynamic GL_obj::nme_gl_scissor;

Dynamic GL_obj::nme_gl_shader_source;

Dynamic GL_obj::nme_gl_stencil_func;

Dynamic GL_obj::nme_gl_stencil_func_separate;

Dynamic GL_obj::nme_gl_stencil_mask;

Dynamic GL_obj::nme_gl_stencil_mask_separate;

Dynamic GL_obj::nme_gl_stencil_op;

Dynamic GL_obj::nme_gl_stencil_op_separate;

Dynamic GL_obj::nme_gl_tex_image_2d;

Dynamic GL_obj::nme_gl_tex_parameterf;

Dynamic GL_obj::nme_gl_tex_parameteri;

Dynamic GL_obj::nme_gl_tex_sub_image_2d;

Dynamic GL_obj::nme_gl_uniform1f;

Dynamic GL_obj::nme_gl_uniform1fv;

Dynamic GL_obj::nme_gl_uniform1i;

Dynamic GL_obj::nme_gl_uniform1iv;

Dynamic GL_obj::nme_gl_uniform2f;

Dynamic GL_obj::nme_gl_uniform2fv;

Dynamic GL_obj::nme_gl_uniform2i;

Dynamic GL_obj::nme_gl_uniform2iv;

Dynamic GL_obj::nme_gl_uniform3f;

Dynamic GL_obj::nme_gl_uniform3fv;

Dynamic GL_obj::nme_gl_uniform3i;

Dynamic GL_obj::nme_gl_uniform3iv;

Dynamic GL_obj::nme_gl_uniform4f;

Dynamic GL_obj::nme_gl_uniform4fv;

Dynamic GL_obj::nme_gl_uniform4i;

Dynamic GL_obj::nme_gl_uniform4iv;

Dynamic GL_obj::nme_gl_uniform_matrix;

Dynamic GL_obj::nme_gl_use_program;

Dynamic GL_obj::nme_gl_validate_program;

Dynamic GL_obj::nme_gl_version;

Dynamic GL_obj::nme_gl_vertex_attrib1f;

Dynamic GL_obj::nme_gl_vertex_attrib1fv;

Dynamic GL_obj::nme_gl_vertex_attrib2f;

Dynamic GL_obj::nme_gl_vertex_attrib2fv;

Dynamic GL_obj::nme_gl_vertex_attrib3f;

Dynamic GL_obj::nme_gl_vertex_attrib3fv;

Dynamic GL_obj::nme_gl_vertex_attrib4f;

Dynamic GL_obj::nme_gl_vertex_attrib4fv;

Dynamic GL_obj::nme_gl_vertex_attrib_pointer;

Dynamic GL_obj::nme_gl_viewport;


GL_obj::GL_obj()
{
}

void GL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GL);
	HX_MARK_END_CLASS();
}

void GL_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic GL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { return CW; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { return ONE; }
		if (HX_FIELD_EQ(inName,"CCW") ) { return CCW; }
		if (HX_FIELD_EQ(inName,"INT") ) { return INT; }
		if (HX_FIELD_EQ(inName,"RGB") ) { return RGB; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { return ZERO; }
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { return BYTE; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA; }
		if (HX_FIELD_EQ(inName,"LESS") ) { return LESS; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { return KEEP; }
		if (HX_FIELD_EQ(inName,"INCR") ) { return INCR; }
		if (HX_FIELD_EQ(inName,"DECR") ) { return DECR; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { return BOOL; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { return LINES; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { return BLEND; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { return SHORT; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { return NEVER; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { return RGBA4; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { return POINTS; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { return DITHER; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { return NICEST; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { return LEQUAL; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { return GEQUAL; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { return ALWAYS; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { return INVERT; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { return LINEAR; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { return REPEAT; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { return RGB565; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { return SAMPLES; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { return FASTEST; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { return GREATER; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { return REPLACE; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { return NEAREST; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { return TEXTURE; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { return LOW_INT; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { return RGB5_A1; }
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { return FUNC_ADD; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { return VIEWPORT; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { return RED_BITS; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { return NOTEQUAL; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { return TEXTURE0; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { return TEXTURE1; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { return TEXTURE2; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { return TEXTURE3; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { return TEXTURE4; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { return TEXTURE5; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { return TEXTURE6; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { return TEXTURE7; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { return TEXTURE8; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { return TEXTURE9; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { return INT_VEC2; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { return INT_VEC3; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { return INT_VEC4; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { return HIGH_INT; }
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { return LINE_LOOP; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { return TRIANGLES; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { return SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { return SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { return DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { return DST_COLOR; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { return CULL_FACE; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { return BLUE_BITS; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { return DONT_CARE; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { return LUMINANCE; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { return INCR_WRAP; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { return DECR_WRAP; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { return TEXTURE10; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { return TEXTURE11; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { return TEXTURE12; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { return TEXTURE13; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { return TEXTURE14; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { return TEXTURE15; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { return TEXTURE16; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { return TEXTURE17; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { return TEXTURE18; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { return TEXTURE19; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { return TEXTURE20; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { return TEXTURE21; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { return TEXTURE22; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { return TEXTURE23; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { return TEXTURE24; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { return TEXTURE25; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { return TEXTURE26; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { return TEXTURE27; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { return TEXTURE28; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { return TEXTURE29; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { return TEXTURE30; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { return TEXTURE31; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { return BOOL_VEC2; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { return BOOL_VEC3; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { return BOOL_VEC4; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { return LOW_FLOAT; }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { return LINE_STRIP; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { return DEPTH_TEST; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { return LINE_WIDTH; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { return FRONT_FACE; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { return DEPTH_FUNC; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { return GREEN_BITS; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { return ALPHA_BITS; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { return DEPTH_BITS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { return TEXTURE_2D; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { return FLOAT_VEC2; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { return FLOAT_VEC3; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { return FLOAT_VEC4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { return FLOAT_MAT2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { return FLOAT_MAT3; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { return FLOAT_MAT4; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { return SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { return HIGH_FLOAT; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { return MEDIUM_INT; }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRange") ) { return depthRange_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { return BLEND_COLOR; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { return STREAM_DRAW; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { return STATIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { return BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { return DEPTH_RANGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { return STENCIL_REF; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { return SCISSOR_BOX; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { return SHADER_TYPE; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { return LINK_STATUS; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { return FRAMEBUFFER; }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_hint") ) { return nme_gl_hint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { return TRIANGLE_FAN; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { return ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { return DYNAMIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { return BUFFER_USAGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { return STENCIL_TEST; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { return SCISSOR_TEST; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { return STENCIL_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { return STENCIL_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { return STENCIL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return UNSIGNED_INT; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { return SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { return MEDIUM_FLOAT; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { return RENDERBUFFER; }
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_clear") ) { return nme_gl_clear; }
		if (HX_FIELD_EQ(inName,"nme_gl_flush") ) { return nme_gl_flush; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { return FUNC_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { return BLEND_DST_RGB; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { return BLEND_SRC_RGB; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { return SUBPIXEL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { return UNSIGNED_BYTE; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { return VERTEX_SHADER; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { return DELETE_STATUS; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { return CLAMP_TO_EDGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { return STENCIL_INDEX; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { return DEPTH_STENCIL; }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_enable") ) { return nme_gl_enable; }
		if (HX_FIELD_EQ(inName,"nme_gl_finish") ) { return nme_gl_finish; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { return TRIANGLE_STRIP; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { return BLEND_EQUATION; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { return CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { return CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { return FRONT_AND_BACK; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { return CULL_FACE_MODE; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { return PACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { return SAMPLE_BUFFERS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { return UNSIGNED_SHORT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { return TEXTURE_WRAP_S; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { return TEXTURE_WRAP_T; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { return ACTIVE_TEXTURE; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { return COMPILE_STATUS; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { return STENCIL_INDEX8; }
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_disable") ) { return nme_gl_disable; }
		if (HX_FIELD_EQ(inName,"nme_gl_scissor") ) { return nme_gl_scissor; }
		if (HX_FIELD_EQ(inName,"nme_gl_version") ) { return nme_gl_version; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { return BLEND_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { return BLEND_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { return SAMPLE_COVERAGE; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { return DEPTH_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { return COLOR_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { return DEPTH_COMPONENT; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { return LUMINANCE_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { return FRAGMENT_SHADER; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { return VALIDATE_STATUS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { return ACTIVE_UNIFORMS; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { return CURRENT_PROGRAM; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { return MIRRORED_REPEAT; }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3D") ) { return uniformMatrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_viewport") ) { return nme_gl_viewport; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { return DEPTH_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { return COLOR_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { return STENCIL_BACK_REF; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { return UNPACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { return MAX_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { return ATTACHED_SHADERS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { return TEXTURE_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { return DEPTH_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_get_error") ) { return nme_gl_get_error; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_buffer") ) { return nme_gl_is_buffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_shader") ) { return nme_gl_is_shader; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1f") ) { return nme_gl_uniform1f; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1i") ) { return nme_gl_uniform1i; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2f") ) { return nme_gl_uniform2f; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2i") ) { return nme_gl_uniform2i; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3f") ) { return nme_gl_uniform3f; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3i") ) { return nme_gl_uniform3i; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4f") ) { return nme_gl_uniform4f; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4i") ) { return nme_gl_uniform4i; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { return DEPTH_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { return STENCIL_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { return STENCIL_BACK_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { return STENCIL_BACK_FAIL; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { return COLOR_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { return MAX_VIEWPORT_DIMS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { return ACTIVE_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { return DEPTH_COMPONENT16; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { return COLOR_ATTACHMENT0; }
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_func") ) { return nme_gl_blend_func; }
		if (HX_FIELD_EQ(inName,"nme_gl_color_mask") ) { return nme_gl_color_mask; }
		if (HX_FIELD_EQ(inName,"nme_gl_depth_func") ) { return nme_gl_depth_func; }
		if (HX_FIELD_EQ(inName,"nme_gl_depth_mask") ) { return nme_gl_depth_mask; }
		if (HX_FIELD_EQ(inName,"nme_gl_front_face") ) { return nme_gl_front_face; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_enabled") ) { return nme_gl_is_enabled; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_program") ) { return nme_gl_is_program; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_texture") ) { return nme_gl_is_texture; }
		if (HX_FIELD_EQ(inName,"nme_gl_line_width") ) { return nme_gl_line_width; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_op") ) { return nme_gl_stencil_op; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1fv") ) { return nme_gl_uniform1fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1iv") ) { return nme_gl_uniform1iv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2fv") ) { return nme_gl_uniform2fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2iv") ) { return nme_gl_uniform2iv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3fv") ) { return nme_gl_uniform3fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3iv") ) { return nme_gl_uniform3iv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4fv") ) { return nme_gl_uniform4fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4iv") ) { return nme_gl_uniform4iv; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { return STENCIL_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { return SRC_ALPHA_SATURATE; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { return BLEND_EQUATION_RGB; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { return STENCIL_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { return TEXTURE_BINDING_2D; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { return MAX_VERTEX_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { return TEXTURE_MAG_FILTER; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { return TEXTURE_MIN_FILTER; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { return RENDERBUFFER_WIDTH; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { return STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { return CONTEXT_LOST_WEBGL; }
		if (HX_FIELD_EQ(inName,"drawingBufferWidth") ) { return inCallProp ? get_drawingBufferWidth() : drawingBufferWidth; }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_buffer") ) { return nme_gl_bind_buffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_color") ) { return nme_gl_blend_color; }
		if (HX_FIELD_EQ(inName,"nme_gl_buffer_data") ) { return nme_gl_buffer_data; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear_color") ) { return nme_gl_clear_color; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear_depth") ) { return nme_gl_clear_depth; }
		if (HX_FIELD_EQ(inName,"nme_gl_depth_range") ) { return nme_gl_depth_range; }
		if (HX_FIELD_EQ(inName,"nme_gl_draw_arrays") ) { return nme_gl_draw_arrays; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_uniform") ) { return nme_gl_get_uniform; }
		if (HX_FIELD_EQ(inName,"nme_gl_use_program") ) { return nme_gl_use_program; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { return ONE_MINUS_SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { return ONE_MINUS_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { return ONE_MINUS_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { return ONE_MINUS_DST_COLOR; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { return POLYGON_OFFSET_FILL; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { return STENCIL_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { return MAX_VARYING_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { return RENDERBUFFER_HEIGHT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { return FRAMEBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { return UNPACK_FLIP_Y_WEBGL; }
		if (HX_FIELD_EQ(inName,"drawingBufferHeight") ) { return inCallProp ? get_drawingBufferHeight() : drawingBufferHeight; }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_texture") ) { return nme_gl_bind_texture; }
		if (HX_FIELD_EQ(inName,"nme_gl_link_program") ) { return nme_gl_link_program; }
		if (HX_FIELD_EQ(inName,"nme_gl_pixel_storei") ) { return nme_gl_pixel_storei; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_func") ) { return nme_gl_stencil_func; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_mask") ) { return nme_gl_stencil_mask; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_image_2d") ) { return nme_gl_tex_image_2d; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { return BLEND_EQUATION_ALPHA; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { return ELEMENT_ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { return ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { return POLYGON_OFFSET_UNITS; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { return GENERATE_MIPMAP_HINT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { return UNSIGNED_SHORT_5_6_5; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { return LINEAR_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { return FRAMEBUFFER_COMPLETE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { return RENDERBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_attach_shader") ) { return nme_gl_attach_shader; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear_stencil") ) { return nme_gl_clear_stencil; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_buffer") ) { return nme_gl_create_buffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_shader") ) { return nme_gl_create_shader; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_buffer") ) { return nme_gl_delete_buffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_shader") ) { return nme_gl_delete_shader; }
		if (HX_FIELD_EQ(inName,"nme_gl_detach_shader") ) { return nme_gl_detach_shader; }
		if (HX_FIELD_EQ(inName,"nme_gl_draw_elements") ) { return nme_gl_draw_elements; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_parameter") ) { return nme_gl_get_parameter; }
		if (HX_FIELD_EQ(inName,"nme_gl_shader_source") ) { return nme_gl_shader_source; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { return FUNC_REVERSE_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { return CURRENT_VERTEX_ATTRIB; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { return POLYGON_OFFSET_FACTOR; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { return SAMPLE_COVERAGE_VALUE; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { return LINEAR_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { return NEAREST_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { return RENDERBUFFER_RED_SIZE; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { return MAX_RENDERBUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { return BROWSER_DEFAULT_WEBGL; }
		if (HX_FIELD_EQ(inName,"bindBitmapDataTexture") ) { return bindBitmapDataTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { return getVertexAttribOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_active_texture") ) { return nme_gl_active_texture; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_equation") ) { return nme_gl_blend_equation; }
		if (HX_FIELD_EQ(inName,"nme_gl_compile_shader") ) { return nme_gl_compile_shader; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_program") ) { return nme_gl_create_program; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_texture") ) { return nme_gl_create_texture; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_program") ) { return nme_gl_delete_program; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_texture") ) { return nme_gl_delete_texture; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_framebuffer") ) { return nme_gl_is_framebuffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_polygon_offset") ) { return nme_gl_polygon_offset; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_parameterf") ) { return nme_gl_tex_parameterf; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_parameteri") ) { return nme_gl_tex_parameteri; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform_matrix") ) { return nme_gl_uniform_matrix; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { return STENCIL_BACK_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { return SAMPLE_COVERAGE_INVERT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { return UNSIGNED_SHORT_4_4_4_4; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { return UNSIGNED_SHORT_5_5_5_1; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { return NEAREST_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { return RENDERBUFFER_BLUE_SIZE; }
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_drawingBufferWidth") ) { return get_drawingBufferWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_buffer_sub_data") ) { return nme_gl_buffer_sub_data; }
		if (HX_FIELD_EQ(inName,"nme_gl_generate_mipmap") ) { return nme_gl_generate_mipmap; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_renderbuffer") ) { return nme_gl_is_renderbuffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_sample_coverage") ) { return nme_gl_sample_coverage; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib1f") ) { return nme_gl_vertex_attrib1f; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib2f") ) { return nme_gl_vertex_attrib2f; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib3f") ) { return nme_gl_vertex_attrib3f; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib4f") ) { return nme_gl_vertex_attrib4f; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { return STENCIL_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { return STENCIL_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { return STENCIL_BACK_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { return MAX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { return RENDERBUFFER_GREEN_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { return RENDERBUFFER_ALPHA_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { return RENDERBUFFER_DEPTH_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { return FRAMEBUFFER_UNSUPPORTED; }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_drawingBufferHeight") ) { return get_drawingBufferHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_framebuffer") ) { return nme_gl_bind_framebuffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_sub_image_2d") ) { return nme_gl_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"nme_gl_validate_program") ) { return nme_gl_validate_program; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib1fv") ) { return nme_gl_vertex_attrib1fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib2fv") ) { return nme_gl_vertex_attrib2fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib3fv") ) { return nme_gl_vertex_attrib3fv; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib4fv") ) { return nme_gl_vertex_attrib4fv; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { return ONE_MINUS_CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { return ONE_MINUS_CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { return SAMPLE_ALPHA_TO_COVERAGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { return ALIASED_POINT_SIZE_RANGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { return ALIASED_LINE_WIDTH_RANGE; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { return SHADING_LANGUAGE_VERSION; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { return TEXTURE_BINDING_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { return VERTEX_ATTRIB_ARRAY_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { return VERTEX_ATTRIB_ARRAY_TYPE; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { return DEPTH_STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_renderbuffer") ) { return nme_gl_bind_renderbuffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_copy_tex_image_2d") ) { return nme_gl_copy_tex_image_2d; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_active_attrib") ) { return nme_gl_get_active_attrib; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_source") ) { return nme_gl_get_shader_source; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_tex_parameter") ) { return nme_gl_get_tex_parameter; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_vertex_attrib") ) { return nme_gl_get_vertex_attrib; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { return MAX_CUBE_MAP_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { return RENDERBUFFER_STENCIL_SIZE; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_framebuffer") ) { return nme_gl_create_framebuffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_active_uniform") ) { return nme_gl_get_active_uniform; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { return COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { return MAX_VERTEX_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { return VERTEX_ATTRIB_ARRAY_STRIDE; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_func_separate") ) { return nme_gl_blend_func_separate; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_attrib_location") ) { return nme_gl_get_attrib_location; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_info_log") ) { return nme_gl_get_shader_info_log; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_op_separate") ) { return nme_gl_stencil_op_separate; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { return TEXTURE_CUBE_MAP_POSITIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { return TEXTURE_CUBE_MAP_NEGATIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { return TEXTURE_CUBE_MAP_POSITIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { return TEXTURE_CUBE_MAP_POSITIVE_Z; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Z; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { return VERTEX_ATTRIB_ARRAY_ENABLED; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { return VERTEX_ATTRIB_ARRAY_POINTER; }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_attrib_location") ) { return nme_gl_bind_attrib_location; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_render_buffer") ) { return nme_gl_create_render_buffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_program_info_log") ) { return nme_gl_get_program_info_log; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_parameter") ) { return nme_gl_get_shader_parameter; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_uniform_location") ) { return nme_gl_get_uniform_location; }
		if (HX_FIELD_EQ(inName,"nme_gl_renderbuffer_storage") ) { return nme_gl_renderbuffer_storage; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { return ELEMENT_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { return STENCIL_BACK_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { return STENCIL_BACK_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { return MAX_FRAGMENT_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { return RENDERBUFFER_INTERNAL_FORMAT; }
		if (HX_FIELD_EQ(inName,"nme_gl_copy_tex_sub_image_2d") ) { return nme_gl_copy_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"nme_gl_framebuffer_texture2D") ) { return nme_gl_framebuffer_texture2D; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_buffer_paramerter") ) { return nme_gl_get_buffer_paramerter; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_program_parameter") ) { return nme_gl_get_program_parameter; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_func_separate") ) { return nme_gl_stencil_func_separate; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_mask_separate") ) { return nme_gl_stencil_mask_separate; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib_pointer") ) { return nme_gl_vertex_attrib_pointer; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { return INVALID_FRAMEBUFFER_OPERATION; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_context_attributes") ) { return nme_gl_get_context_attributes; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { return MAX_VERTEX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { return VERTEX_ATTRIB_ARRAY_NORMALIZED; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { return UNPACK_PREMULTIPLY_ALPHA_WEBGL; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_equation_separate") ) { return nme_gl_blend_equation_separate; }
		if (HX_FIELD_EQ(inName,"nme_gl_compressed_tex_image_2d") ) { return nme_gl_compressed_tex_image_2d; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_gl_bind_bitmap_data_texture") ) { return nme_gl_bind_bitmap_data_texture; }
		if (HX_FIELD_EQ(inName,"nme_gl_check_framebuffer_status") ) { return nme_gl_check_framebuffer_status; }
		if (HX_FIELD_EQ(inName,"nme_gl_framebuffer_renderbuffer") ) { return nme_gl_framebuffer_renderbuffer; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_supported_extensions") ) { return nme_gl_get_supported_extensions; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_vertex_attrib_offset") ) { return nme_gl_get_vertex_attrib_offset; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { return MAX_COMBINED_TEXTURE_IMAGE_UNITS; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { return FRAMEBUFFER_INCOMPLETE_DIMENSIONS; }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_gl_enable_vertex_attrib_array") ) { return nme_gl_enable_vertex_attrib_array; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { return VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { return UNPACK_COLORSPACE_CONVERSION_WEBGL; }
		if (HX_FIELD_EQ(inName,"nme_gl_compressed_tex_sub_image_2d") ) { return nme_gl_compressed_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"nme_gl_disable_vertex_attrib_array") ) { return nme_gl_disable_vertex_attrib_array; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_render_buffer_parameter") ) { return nme_gl_get_render_buffer_parameter; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_precision_format") ) { return nme_gl_get_shader_precision_format; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"nme_gl_get_framebuffer_attachment_parameter") ) { return nme_gl_get_framebuffer_attachment_parameter; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { CW=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { ONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CCW") ) { CCW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT") ) { INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB") ) { RGB=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { ZERO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { RGBA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LESS") ) { LESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { KEEP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR") ) { INCR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR") ) { DECR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { BOOL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { LINES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { BLEND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { NEVER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { RGBA4=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { POINTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { DITHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { NICEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { LEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { GEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { ALWAYS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { RGB565=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { FASTEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { GREATER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { REPLACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { LOW_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { RGB5_A1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { FUNC_ADD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { VIEWPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { RED_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { NOTEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { TEXTURE0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { TEXTURE1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { TEXTURE2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { TEXTURE3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { TEXTURE4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { TEXTURE5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { TEXTURE6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { TEXTURE7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { TEXTURE8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { TEXTURE9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { INT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { INT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { INT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { HIGH_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { LINE_LOOP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { TRIANGLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { CULL_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { BLUE_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { DONT_CARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { LUMINANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { INCR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { DECR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { TEXTURE10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { TEXTURE11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { TEXTURE12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { TEXTURE13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { TEXTURE14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { TEXTURE15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { TEXTURE16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { TEXTURE17=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { TEXTURE18=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { TEXTURE19=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { TEXTURE20=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { TEXTURE21=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { TEXTURE22=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { TEXTURE23=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { TEXTURE24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { TEXTURE25=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { TEXTURE26=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { TEXTURE27=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { TEXTURE28=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { TEXTURE29=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { TEXTURE30=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { TEXTURE31=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { BOOL_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { BOOL_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { BOOL_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { LOW_FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { LINE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { DEPTH_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { LINE_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { FRONT_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { DEPTH_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { GREEN_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { ALPHA_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { DEPTH_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { TEXTURE_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { FLOAT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { FLOAT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { FLOAT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { FLOAT_MAT2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { FLOAT_MAT3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { FLOAT_MAT4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { HIGH_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { MEDIUM_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { BLEND_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { STREAM_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { STATIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { DEPTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { STENCIL_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { SCISSOR_BOX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { SHADER_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { LINK_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_hint") ) { nme_gl_hint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { TRIANGLE_FAN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { DYNAMIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { BUFFER_USAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { STENCIL_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { SCISSOR_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { STENCIL_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { STENCIL_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { STENCIL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { MEDIUM_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { RENDERBUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear") ) { nme_gl_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_flush") ) { nme_gl_flush=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { FUNC_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { BLEND_DST_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { BLEND_SRC_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { SUBPIXEL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { UNSIGNED_BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { VERTEX_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { DELETE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { CLAMP_TO_EDGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { STENCIL_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { DEPTH_STENCIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_enable") ) { nme_gl_enable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_finish") ) { nme_gl_finish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { TRIANGLE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { BLEND_EQUATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { FRONT_AND_BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { CULL_FACE_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { PACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { SAMPLE_BUFFERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { UNSIGNED_SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { TEXTURE_WRAP_S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { TEXTURE_WRAP_T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { ACTIVE_TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { COMPILE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { STENCIL_INDEX8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_disable") ) { nme_gl_disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_scissor") ) { nme_gl_scissor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_version") ) { nme_gl_version=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { BLEND_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { BLEND_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { SAMPLE_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { DEPTH_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { COLOR_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { DEPTH_COMPONENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { LUMINANCE_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { FRAGMENT_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { VALIDATE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { ACTIVE_UNIFORMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { CURRENT_PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { MIRRORED_REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_viewport") ) { nme_gl_viewport=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { DEPTH_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { COLOR_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { STENCIL_BACK_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { UNPACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { MAX_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { ATTACHED_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { TEXTURE_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { DEPTH_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_error") ) { nme_gl_get_error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_buffer") ) { nme_gl_is_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_shader") ) { nme_gl_is_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1f") ) { nme_gl_uniform1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1i") ) { nme_gl_uniform1i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2f") ) { nme_gl_uniform2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2i") ) { nme_gl_uniform2i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3f") ) { nme_gl_uniform3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3i") ) { nme_gl_uniform3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4f") ) { nme_gl_uniform4f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4i") ) { nme_gl_uniform4i=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { DEPTH_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { STENCIL_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { STENCIL_BACK_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { STENCIL_BACK_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { COLOR_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { MAX_VIEWPORT_DIMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { ACTIVE_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { DEPTH_COMPONENT16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { COLOR_ATTACHMENT0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_func") ) { nme_gl_blend_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_color_mask") ) { nme_gl_color_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_depth_func") ) { nme_gl_depth_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_depth_mask") ) { nme_gl_depth_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_front_face") ) { nme_gl_front_face=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_enabled") ) { nme_gl_is_enabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_program") ) { nme_gl_is_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_texture") ) { nme_gl_is_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_line_width") ) { nme_gl_line_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_op") ) { nme_gl_stencil_op=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1fv") ) { nme_gl_uniform1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform1iv") ) { nme_gl_uniform1iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2fv") ) { nme_gl_uniform2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform2iv") ) { nme_gl_uniform2iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3fv") ) { nme_gl_uniform3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform3iv") ) { nme_gl_uniform3iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4fv") ) { nme_gl_uniform4fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform4iv") ) { nme_gl_uniform4iv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { STENCIL_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { SRC_ALPHA_SATURATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { BLEND_EQUATION_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { STENCIL_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { TEXTURE_BINDING_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { MAX_VERTEX_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { TEXTURE_MAG_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { TEXTURE_MIN_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { RENDERBUFFER_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { CONTEXT_LOST_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawingBufferWidth") ) { drawingBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_buffer") ) { nme_gl_bind_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_color") ) { nme_gl_blend_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_buffer_data") ) { nme_gl_buffer_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear_color") ) { nme_gl_clear_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear_depth") ) { nme_gl_clear_depth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_depth_range") ) { nme_gl_depth_range=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_draw_arrays") ) { nme_gl_draw_arrays=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_uniform") ) { nme_gl_get_uniform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_use_program") ) { nme_gl_use_program=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { ONE_MINUS_SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { ONE_MINUS_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { ONE_MINUS_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { ONE_MINUS_DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { POLYGON_OFFSET_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { STENCIL_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { MAX_VARYING_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { RENDERBUFFER_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { UNPACK_FLIP_Y_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawingBufferHeight") ) { drawingBufferHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_texture") ) { nme_gl_bind_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_link_program") ) { nme_gl_link_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_pixel_storei") ) { nme_gl_pixel_storei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_func") ) { nme_gl_stencil_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_mask") ) { nme_gl_stencil_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_image_2d") ) { nme_gl_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { BLEND_EQUATION_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { ELEMENT_ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { POLYGON_OFFSET_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { GENERATE_MIPMAP_HINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { UNSIGNED_SHORT_5_6_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { LINEAR_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { FRAMEBUFFER_COMPLETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { RENDERBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_attach_shader") ) { nme_gl_attach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_clear_stencil") ) { nme_gl_clear_stencil=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_buffer") ) { nme_gl_create_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_shader") ) { nme_gl_create_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_buffer") ) { nme_gl_delete_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_shader") ) { nme_gl_delete_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_detach_shader") ) { nme_gl_detach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_draw_elements") ) { nme_gl_draw_elements=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_parameter") ) { nme_gl_get_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_shader_source") ) { nme_gl_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { FUNC_REVERSE_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { CURRENT_VERTEX_ATTRIB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { POLYGON_OFFSET_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { SAMPLE_COVERAGE_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { LINEAR_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { NEAREST_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { RENDERBUFFER_RED_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { MAX_RENDERBUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { BROWSER_DEFAULT_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_active_texture") ) { nme_gl_active_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_equation") ) { nme_gl_blend_equation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_compile_shader") ) { nme_gl_compile_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_program") ) { nme_gl_create_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_texture") ) { nme_gl_create_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_program") ) { nme_gl_delete_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_delete_texture") ) { nme_gl_delete_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_framebuffer") ) { nme_gl_is_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_polygon_offset") ) { nme_gl_polygon_offset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_parameterf") ) { nme_gl_tex_parameterf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_parameteri") ) { nme_gl_tex_parameteri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_uniform_matrix") ) { nme_gl_uniform_matrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { STENCIL_BACK_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { SAMPLE_COVERAGE_INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { UNSIGNED_SHORT_4_4_4_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { UNSIGNED_SHORT_5_5_5_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { NEAREST_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { RENDERBUFFER_BLUE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_buffer_sub_data") ) { nme_gl_buffer_sub_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_generate_mipmap") ) { nme_gl_generate_mipmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_is_renderbuffer") ) { nme_gl_is_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_sample_coverage") ) { nme_gl_sample_coverage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib1f") ) { nme_gl_vertex_attrib1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib2f") ) { nme_gl_vertex_attrib2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib3f") ) { nme_gl_vertex_attrib3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib4f") ) { nme_gl_vertex_attrib4f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { STENCIL_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { STENCIL_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { STENCIL_BACK_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { MAX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { RENDERBUFFER_GREEN_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { RENDERBUFFER_ALPHA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { RENDERBUFFER_DEPTH_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { FRAMEBUFFER_UNSUPPORTED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_framebuffer") ) { nme_gl_bind_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_tex_sub_image_2d") ) { nme_gl_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_validate_program") ) { nme_gl_validate_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib1fv") ) { nme_gl_vertex_attrib1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib2fv") ) { nme_gl_vertex_attrib2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib3fv") ) { nme_gl_vertex_attrib3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib4fv") ) { nme_gl_vertex_attrib4fv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { ONE_MINUS_CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { ONE_MINUS_CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { SAMPLE_ALPHA_TO_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { ALIASED_POINT_SIZE_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { ALIASED_LINE_WIDTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { SHADING_LANGUAGE_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { TEXTURE_BINDING_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { VERTEX_ATTRIB_ARRAY_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { VERTEX_ATTRIB_ARRAY_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { DEPTH_STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_renderbuffer") ) { nme_gl_bind_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_copy_tex_image_2d") ) { nme_gl_copy_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_active_attrib") ) { nme_gl_get_active_attrib=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_source") ) { nme_gl_get_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_tex_parameter") ) { nme_gl_get_tex_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_vertex_attrib") ) { nme_gl_get_vertex_attrib=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { MAX_CUBE_MAP_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { RENDERBUFFER_STENCIL_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_framebuffer") ) { nme_gl_create_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_active_uniform") ) { nme_gl_get_active_uniform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { MAX_VERTEX_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { VERTEX_ATTRIB_ARRAY_STRIDE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_func_separate") ) { nme_gl_blend_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_attrib_location") ) { nme_gl_get_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_info_log") ) { nme_gl_get_shader_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_op_separate") ) { nme_gl_stencil_op_separate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { TEXTURE_CUBE_MAP_POSITIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { TEXTURE_CUBE_MAP_NEGATIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { TEXTURE_CUBE_MAP_POSITIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { TEXTURE_CUBE_MAP_NEGATIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { TEXTURE_CUBE_MAP_POSITIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { TEXTURE_CUBE_MAP_NEGATIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { VERTEX_ATTRIB_ARRAY_ENABLED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { VERTEX_ATTRIB_ARRAY_POINTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_bind_attrib_location") ) { nme_gl_bind_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_create_render_buffer") ) { nme_gl_create_render_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_program_info_log") ) { nme_gl_get_program_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_parameter") ) { nme_gl_get_shader_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_uniform_location") ) { nme_gl_get_uniform_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_renderbuffer_storage") ) { nme_gl_renderbuffer_storage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { ELEMENT_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { STENCIL_BACK_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { STENCIL_BACK_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { MAX_FRAGMENT_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { RENDERBUFFER_INTERNAL_FORMAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_copy_tex_sub_image_2d") ) { nme_gl_copy_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_framebuffer_texture2D") ) { nme_gl_framebuffer_texture2D=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_buffer_paramerter") ) { nme_gl_get_buffer_paramerter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_program_parameter") ) { nme_gl_get_program_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_func_separate") ) { nme_gl_stencil_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_stencil_mask_separate") ) { nme_gl_stencil_mask_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_vertex_attrib_pointer") ) { nme_gl_vertex_attrib_pointer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { INVALID_FRAMEBUFFER_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_context_attributes") ) { nme_gl_get_context_attributes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { MAX_VERTEX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { VERTEX_ATTRIB_ARRAY_NORMALIZED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { UNPACK_PREMULTIPLY_ALPHA_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_blend_equation_separate") ) { nme_gl_blend_equation_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_compressed_tex_image_2d") ) { nme_gl_compressed_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_gl_bind_bitmap_data_texture") ) { nme_gl_bind_bitmap_data_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_check_framebuffer_status") ) { nme_gl_check_framebuffer_status=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_framebuffer_renderbuffer") ) { nme_gl_framebuffer_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_supported_extensions") ) { nme_gl_get_supported_extensions=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_vertex_attrib_offset") ) { nme_gl_get_vertex_attrib_offset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { MAX_COMBINED_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { FRAMEBUFFER_INCOMPLETE_DIMENSIONS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_enable_vertex_attrib_array") ) { nme_gl_enable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { UNPACK_COLORSPACE_CONVERSION_WEBGL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_compressed_tex_sub_image_2d") ) { nme_gl_compressed_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_disable_vertex_attrib_array") ) { nme_gl_disable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_render_buffer_parameter") ) { nme_gl_get_render_buffer_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gl_get_shader_precision_format") ) { nme_gl_get_shader_precision_format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"nme_gl_get_framebuffer_attachment_parameter") ) { nme_gl_get_framebuffer_attachment_parameter=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEPTH_BUFFER_BIT"),
	HX_CSTRING("STENCIL_BUFFER_BIT"),
	HX_CSTRING("COLOR_BUFFER_BIT"),
	HX_CSTRING("POINTS"),
	HX_CSTRING("LINES"),
	HX_CSTRING("LINE_LOOP"),
	HX_CSTRING("LINE_STRIP"),
	HX_CSTRING("TRIANGLES"),
	HX_CSTRING("TRIANGLE_STRIP"),
	HX_CSTRING("TRIANGLE_FAN"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("SRC_COLOR"),
	HX_CSTRING("ONE_MINUS_SRC_COLOR"),
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("DST_ALPHA"),
	HX_CSTRING("ONE_MINUS_DST_ALPHA"),
	HX_CSTRING("DST_COLOR"),
	HX_CSTRING("ONE_MINUS_DST_COLOR"),
	HX_CSTRING("SRC_ALPHA_SATURATE"),
	HX_CSTRING("FUNC_ADD"),
	HX_CSTRING("BLEND_EQUATION"),
	HX_CSTRING("BLEND_EQUATION_RGB"),
	HX_CSTRING("BLEND_EQUATION_ALPHA"),
	HX_CSTRING("FUNC_SUBTRACT"),
	HX_CSTRING("FUNC_REVERSE_SUBTRACT"),
	HX_CSTRING("BLEND_DST_RGB"),
	HX_CSTRING("BLEND_SRC_RGB"),
	HX_CSTRING("BLEND_DST_ALPHA"),
	HX_CSTRING("BLEND_SRC_ALPHA"),
	HX_CSTRING("CONSTANT_COLOR"),
	HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"),
	HX_CSTRING("CONSTANT_ALPHA"),
	HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"),
	HX_CSTRING("BLEND_COLOR"),
	HX_CSTRING("ARRAY_BUFFER"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER"),
	HX_CSTRING("ARRAY_BUFFER_BINDING"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("STREAM_DRAW"),
	HX_CSTRING("STATIC_DRAW"),
	HX_CSTRING("DYNAMIC_DRAW"),
	HX_CSTRING("BUFFER_SIZE"),
	HX_CSTRING("BUFFER_USAGE"),
	HX_CSTRING("CURRENT_VERTEX_ATTRIB"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("CULL_FACE"),
	HX_CSTRING("BLEND"),
	HX_CSTRING("DITHER"),
	HX_CSTRING("STENCIL_TEST"),
	HX_CSTRING("DEPTH_TEST"),
	HX_CSTRING("SCISSOR_TEST"),
	HX_CSTRING("POLYGON_OFFSET_FILL"),
	HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"),
	HX_CSTRING("SAMPLE_COVERAGE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("CW"),
	HX_CSTRING("CCW"),
	HX_CSTRING("LINE_WIDTH"),
	HX_CSTRING("ALIASED_POINT_SIZE_RANGE"),
	HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"),
	HX_CSTRING("CULL_FACE_MODE"),
	HX_CSTRING("FRONT_FACE"),
	HX_CSTRING("DEPTH_RANGE"),
	HX_CSTRING("DEPTH_WRITEMASK"),
	HX_CSTRING("DEPTH_CLEAR_VALUE"),
	HX_CSTRING("DEPTH_FUNC"),
	HX_CSTRING("STENCIL_CLEAR_VALUE"),
	HX_CSTRING("STENCIL_FUNC"),
	HX_CSTRING("STENCIL_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_REF"),
	HX_CSTRING("STENCIL_VALUE_MASK"),
	HX_CSTRING("STENCIL_WRITEMASK"),
	HX_CSTRING("STENCIL_BACK_FUNC"),
	HX_CSTRING("STENCIL_BACK_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_BACK_REF"),
	HX_CSTRING("STENCIL_BACK_VALUE_MASK"),
	HX_CSTRING("STENCIL_BACK_WRITEMASK"),
	HX_CSTRING("VIEWPORT"),
	HX_CSTRING("SCISSOR_BOX"),
	HX_CSTRING("COLOR_CLEAR_VALUE"),
	HX_CSTRING("COLOR_WRITEMASK"),
	HX_CSTRING("UNPACK_ALIGNMENT"),
	HX_CSTRING("PACK_ALIGNMENT"),
	HX_CSTRING("MAX_TEXTURE_SIZE"),
	HX_CSTRING("MAX_VIEWPORT_DIMS"),
	HX_CSTRING("SUBPIXEL_BITS"),
	HX_CSTRING("RED_BITS"),
	HX_CSTRING("GREEN_BITS"),
	HX_CSTRING("BLUE_BITS"),
	HX_CSTRING("ALPHA_BITS"),
	HX_CSTRING("DEPTH_BITS"),
	HX_CSTRING("STENCIL_BITS"),
	HX_CSTRING("POLYGON_OFFSET_UNITS"),
	HX_CSTRING("POLYGON_OFFSET_FACTOR"),
	HX_CSTRING("TEXTURE_BINDING_2D"),
	HX_CSTRING("SAMPLE_BUFFERS"),
	HX_CSTRING("SAMPLES"),
	HX_CSTRING("SAMPLE_COVERAGE_VALUE"),
	HX_CSTRING("SAMPLE_COVERAGE_INVERT"),
	HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"),
	HX_CSTRING("DONT_CARE"),
	HX_CSTRING("FASTEST"),
	HX_CSTRING("NICEST"),
	HX_CSTRING("GENERATE_MIPMAP_HINT"),
	HX_CSTRING("BYTE"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("SHORT"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("INT"),
	HX_CSTRING("UNSIGNED_INT"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("DEPTH_COMPONENT"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("RGB"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("LUMINANCE"),
	HX_CSTRING("LUMINANCE_ALPHA"),
	HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"),
	HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"),
	HX_CSTRING("UNSIGNED_SHORT_5_6_5"),
	HX_CSTRING("FRAGMENT_SHADER"),
	HX_CSTRING("VERTEX_SHADER"),
	HX_CSTRING("MAX_VERTEX_ATTRIBS"),
	HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"),
	HX_CSTRING("MAX_VARYING_VECTORS"),
	HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"),
	HX_CSTRING("SHADER_TYPE"),
	HX_CSTRING("DELETE_STATUS"),
	HX_CSTRING("LINK_STATUS"),
	HX_CSTRING("VALIDATE_STATUS"),
	HX_CSTRING("ATTACHED_SHADERS"),
	HX_CSTRING("ACTIVE_UNIFORMS"),
	HX_CSTRING("ACTIVE_ATTRIBUTES"),
	HX_CSTRING("SHADING_LANGUAGE_VERSION"),
	HX_CSTRING("CURRENT_PROGRAM"),
	HX_CSTRING("NEVER"),
	HX_CSTRING("LESS"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("LEQUAL"),
	HX_CSTRING("GREATER"),
	HX_CSTRING("NOTEQUAL"),
	HX_CSTRING("GEQUAL"),
	HX_CSTRING("ALWAYS"),
	HX_CSTRING("KEEP"),
	HX_CSTRING("REPLACE"),
	HX_CSTRING("INCR"),
	HX_CSTRING("DECR"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("INCR_WRAP"),
	HX_CSTRING("DECR_WRAP"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST_MIPMAP_NEAREST"),
	HX_CSTRING("LINEAR_MIPMAP_NEAREST"),
	HX_CSTRING("NEAREST_MIPMAP_LINEAR"),
	HX_CSTRING("LINEAR_MIPMAP_LINEAR"),
	HX_CSTRING("TEXTURE_MAG_FILTER"),
	HX_CSTRING("TEXTURE_MIN_FILTER"),
	HX_CSTRING("TEXTURE_WRAP_S"),
	HX_CSTRING("TEXTURE_WRAP_T"),
	HX_CSTRING("TEXTURE_2D"),
	HX_CSTRING("TEXTURE"),
	HX_CSTRING("TEXTURE_CUBE_MAP"),
	HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"),
	HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"),
	HX_CSTRING("TEXTURE0"),
	HX_CSTRING("TEXTURE1"),
	HX_CSTRING("TEXTURE2"),
	HX_CSTRING("TEXTURE3"),
	HX_CSTRING("TEXTURE4"),
	HX_CSTRING("TEXTURE5"),
	HX_CSTRING("TEXTURE6"),
	HX_CSTRING("TEXTURE7"),
	HX_CSTRING("TEXTURE8"),
	HX_CSTRING("TEXTURE9"),
	HX_CSTRING("TEXTURE10"),
	HX_CSTRING("TEXTURE11"),
	HX_CSTRING("TEXTURE12"),
	HX_CSTRING("TEXTURE13"),
	HX_CSTRING("TEXTURE14"),
	HX_CSTRING("TEXTURE15"),
	HX_CSTRING("TEXTURE16"),
	HX_CSTRING("TEXTURE17"),
	HX_CSTRING("TEXTURE18"),
	HX_CSTRING("TEXTURE19"),
	HX_CSTRING("TEXTURE20"),
	HX_CSTRING("TEXTURE21"),
	HX_CSTRING("TEXTURE22"),
	HX_CSTRING("TEXTURE23"),
	HX_CSTRING("TEXTURE24"),
	HX_CSTRING("TEXTURE25"),
	HX_CSTRING("TEXTURE26"),
	HX_CSTRING("TEXTURE27"),
	HX_CSTRING("TEXTURE28"),
	HX_CSTRING("TEXTURE29"),
	HX_CSTRING("TEXTURE30"),
	HX_CSTRING("TEXTURE31"),
	HX_CSTRING("ACTIVE_TEXTURE"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("CLAMP_TO_EDGE"),
	HX_CSTRING("MIRRORED_REPEAT"),
	HX_CSTRING("FLOAT_VEC2"),
	HX_CSTRING("FLOAT_VEC3"),
	HX_CSTRING("FLOAT_VEC4"),
	HX_CSTRING("INT_VEC2"),
	HX_CSTRING("INT_VEC3"),
	HX_CSTRING("INT_VEC4"),
	HX_CSTRING("BOOL"),
	HX_CSTRING("BOOL_VEC2"),
	HX_CSTRING("BOOL_VEC3"),
	HX_CSTRING("BOOL_VEC4"),
	HX_CSTRING("FLOAT_MAT2"),
	HX_CSTRING("FLOAT_MAT3"),
	HX_CSTRING("FLOAT_MAT4"),
	HX_CSTRING("SAMPLER_2D"),
	HX_CSTRING("SAMPLER_CUBE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("COMPILE_STATUS"),
	HX_CSTRING("LOW_FLOAT"),
	HX_CSTRING("MEDIUM_FLOAT"),
	HX_CSTRING("HIGH_FLOAT"),
	HX_CSTRING("LOW_INT"),
	HX_CSTRING("MEDIUM_INT"),
	HX_CSTRING("HIGH_INT"),
	HX_CSTRING("FRAMEBUFFER"),
	HX_CSTRING("RENDERBUFFER"),
	HX_CSTRING("RGBA4"),
	HX_CSTRING("RGB5_A1"),
	HX_CSTRING("RGB565"),
	HX_CSTRING("DEPTH_COMPONENT16"),
	HX_CSTRING("STENCIL_INDEX"),
	HX_CSTRING("STENCIL_INDEX8"),
	HX_CSTRING("DEPTH_STENCIL"),
	HX_CSTRING("RENDERBUFFER_WIDTH"),
	HX_CSTRING("RENDERBUFFER_HEIGHT"),
	HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"),
	HX_CSTRING("RENDERBUFFER_RED_SIZE"),
	HX_CSTRING("RENDERBUFFER_GREEN_SIZE"),
	HX_CSTRING("RENDERBUFFER_BLUE_SIZE"),
	HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"),
	HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"),
	HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"),
	HX_CSTRING("COLOR_ATTACHMENT0"),
	HX_CSTRING("DEPTH_ATTACHMENT"),
	HX_CSTRING("STENCIL_ATTACHMENT"),
	HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("FRAMEBUFFER_COMPLETE"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"),
	HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"),
	HX_CSTRING("FRAMEBUFFER_BINDING"),
	HX_CSTRING("RENDERBUFFER_BINDING"),
	HX_CSTRING("MAX_RENDERBUFFER_SIZE"),
	HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"),
	HX_CSTRING("UNPACK_FLIP_Y_WEBGL"),
	HX_CSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL"),
	HX_CSTRING("CONTEXT_LOST_WEBGL"),
	HX_CSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL"),
	HX_CSTRING("BROWSER_DEFAULT_WEBGL"),
	HX_CSTRING("drawingBufferHeight"),
	HX_CSTRING("drawingBufferWidth"),
	HX_CSTRING("version"),
	HX_CSTRING("activeTexture"),
	HX_CSTRING("attachShader"),
	HX_CSTRING("bindAttribLocation"),
	HX_CSTRING("bindBitmapDataTexture"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("bindRenderbuffer"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("blendColor"),
	HX_CSTRING("blendEquation"),
	HX_CSTRING("blendEquationSeparate"),
	HX_CSTRING("blendFunc"),
	HX_CSTRING("blendFuncSeparate"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferSubData"),
	HX_CSTRING("checkFramebufferStatus"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("clearStencil"),
	HX_CSTRING("colorMask"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("compressedTexImage2D"),
	HX_CSTRING("compressedTexSubImage2D"),
	HX_CSTRING("copyTexImage2D"),
	HX_CSTRING("copyTexSubImage2D"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("createFramebuffer"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("createShader"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("cullFace"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("deleteFramebuffer"),
	HX_CSTRING("deleteProgram"),
	HX_CSTRING("deleteRenderbuffer"),
	HX_CSTRING("deleteShader"),
	HX_CSTRING("deleteTexture"),
	HX_CSTRING("depthFunc"),
	HX_CSTRING("depthMask"),
	HX_CSTRING("depthRange"),
	HX_CSTRING("detachShader"),
	HX_CSTRING("disable"),
	HX_CSTRING("disableVertexAttribArray"),
	HX_CSTRING("drawArrays"),
	HX_CSTRING("drawElements"),
	HX_CSTRING("enable"),
	HX_CSTRING("enableVertexAttribArray"),
	HX_CSTRING("finish"),
	HX_CSTRING("flush"),
	HX_CSTRING("framebufferRenderbuffer"),
	HX_CSTRING("framebufferTexture2D"),
	HX_CSTRING("frontFace"),
	HX_CSTRING("generateMipmap"),
	HX_CSTRING("getActiveAttrib"),
	HX_CSTRING("getActiveUniform"),
	HX_CSTRING("getAttachedShaders"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("getBufferParameter"),
	HX_CSTRING("getContextAttributes"),
	HX_CSTRING("getError"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("getFramebufferAttachmentParameter"),
	HX_CSTRING("getParameter"),
	HX_CSTRING("getProgramInfoLog"),
	HX_CSTRING("getProgramParameter"),
	HX_CSTRING("getRenderbufferParameter"),
	HX_CSTRING("getShaderInfoLog"),
	HX_CSTRING("getShaderParameter"),
	HX_CSTRING("getShaderPrecisionFormat"),
	HX_CSTRING("getShaderSource"),
	HX_CSTRING("getSupportedExtensions"),
	HX_CSTRING("getTexParameter"),
	HX_CSTRING("getUniform"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("getVertexAttrib"),
	HX_CSTRING("getVertexAttribOffset"),
	HX_CSTRING("hint"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isFramebuffer"),
	HX_CSTRING("isProgram"),
	HX_CSTRING("isRenderbuffer"),
	HX_CSTRING("isShader"),
	HX_CSTRING("isTexture"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("linkProgram"),
	HX_CSTRING("load"),
	HX_CSTRING("pixelStorei"),
	HX_CSTRING("polygonOffset"),
	HX_CSTRING("readPixels"),
	HX_CSTRING("renderbufferStorage"),
	HX_CSTRING("sampleCoverage"),
	HX_CSTRING("scissor"),
	HX_CSTRING("shaderSource"),
	HX_CSTRING("stencilFunc"),
	HX_CSTRING("stencilFuncSeparate"),
	HX_CSTRING("stencilMask"),
	HX_CSTRING("stencilMaskSeparate"),
	HX_CSTRING("stencilOp"),
	HX_CSTRING("stencilOpSeparate"),
	HX_CSTRING("texImage2D"),
	HX_CSTRING("texParameterf"),
	HX_CSTRING("texParameteri"),
	HX_CSTRING("texSubImage2D"),
	HX_CSTRING("uniform1f"),
	HX_CSTRING("uniform1fv"),
	HX_CSTRING("uniform1i"),
	HX_CSTRING("uniform1iv"),
	HX_CSTRING("uniform2f"),
	HX_CSTRING("uniform2fv"),
	HX_CSTRING("uniform2i"),
	HX_CSTRING("uniform2iv"),
	HX_CSTRING("uniform3f"),
	HX_CSTRING("uniform3fv"),
	HX_CSTRING("uniform3i"),
	HX_CSTRING("uniform3iv"),
	HX_CSTRING("uniform4f"),
	HX_CSTRING("uniform4fv"),
	HX_CSTRING("uniform4i"),
	HX_CSTRING("uniform4iv"),
	HX_CSTRING("uniformMatrix2fv"),
	HX_CSTRING("uniformMatrix3fv"),
	HX_CSTRING("uniformMatrix4fv"),
	HX_CSTRING("uniformMatrix3D"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("validateProgram"),
	HX_CSTRING("vertexAttrib1f"),
	HX_CSTRING("vertexAttrib1fv"),
	HX_CSTRING("vertexAttrib2f"),
	HX_CSTRING("vertexAttrib2fv"),
	HX_CSTRING("vertexAttrib3f"),
	HX_CSTRING("vertexAttrib3fv"),
	HX_CSTRING("vertexAttrib4f"),
	HX_CSTRING("vertexAttrib4fv"),
	HX_CSTRING("vertexAttribPointer"),
	HX_CSTRING("viewport"),
	HX_CSTRING("get_drawingBufferHeight"),
	HX_CSTRING("get_drawingBufferWidth"),
	HX_CSTRING("get_version"),
	HX_CSTRING("nme_gl_active_texture"),
	HX_CSTRING("nme_gl_attach_shader"),
	HX_CSTRING("nme_gl_bind_attrib_location"),
	HX_CSTRING("nme_gl_bind_bitmap_data_texture"),
	HX_CSTRING("nme_gl_bind_buffer"),
	HX_CSTRING("nme_gl_bind_framebuffer"),
	HX_CSTRING("nme_gl_bind_renderbuffer"),
	HX_CSTRING("nme_gl_bind_texture"),
	HX_CSTRING("nme_gl_blend_color"),
	HX_CSTRING("nme_gl_blend_equation"),
	HX_CSTRING("nme_gl_blend_equation_separate"),
	HX_CSTRING("nme_gl_blend_func"),
	HX_CSTRING("nme_gl_blend_func_separate"),
	HX_CSTRING("nme_gl_buffer_data"),
	HX_CSTRING("nme_gl_buffer_sub_data"),
	HX_CSTRING("nme_gl_check_framebuffer_status"),
	HX_CSTRING("nme_gl_clear"),
	HX_CSTRING("nme_gl_clear_color"),
	HX_CSTRING("nme_gl_clear_depth"),
	HX_CSTRING("nme_gl_clear_stencil"),
	HX_CSTRING("nme_gl_color_mask"),
	HX_CSTRING("nme_gl_compile_shader"),
	HX_CSTRING("nme_gl_compressed_tex_image_2d"),
	HX_CSTRING("nme_gl_compressed_tex_sub_image_2d"),
	HX_CSTRING("nme_gl_copy_tex_image_2d"),
	HX_CSTRING("nme_gl_copy_tex_sub_image_2d"),
	HX_CSTRING("nme_gl_create_buffer"),
	HX_CSTRING("nme_gl_create_framebuffer"),
	HX_CSTRING("nme_gl_create_program"),
	HX_CSTRING("nme_gl_create_render_buffer"),
	HX_CSTRING("nme_gl_create_shader"),
	HX_CSTRING("nme_gl_create_texture"),
	HX_CSTRING("nme_gl_delete_buffer"),
	HX_CSTRING("nme_gl_delete_program"),
	HX_CSTRING("nme_gl_delete_shader"),
	HX_CSTRING("nme_gl_delete_texture"),
	HX_CSTRING("nme_gl_depth_func"),
	HX_CSTRING("nme_gl_depth_mask"),
	HX_CSTRING("nme_gl_depth_range"),
	HX_CSTRING("nme_gl_detach_shader"),
	HX_CSTRING("nme_gl_disable"),
	HX_CSTRING("nme_gl_disable_vertex_attrib_array"),
	HX_CSTRING("nme_gl_draw_arrays"),
	HX_CSTRING("nme_gl_draw_elements"),
	HX_CSTRING("nme_gl_enable"),
	HX_CSTRING("nme_gl_enable_vertex_attrib_array"),
	HX_CSTRING("nme_gl_finish"),
	HX_CSTRING("nme_gl_flush"),
	HX_CSTRING("nme_gl_framebuffer_renderbuffer"),
	HX_CSTRING("nme_gl_framebuffer_texture2D"),
	HX_CSTRING("nme_gl_front_face"),
	HX_CSTRING("nme_gl_generate_mipmap"),
	HX_CSTRING("nme_gl_get_active_attrib"),
	HX_CSTRING("nme_gl_get_active_uniform"),
	HX_CSTRING("nme_gl_get_attrib_location"),
	HX_CSTRING("nme_gl_get_buffer_paramerter"),
	HX_CSTRING("nme_gl_get_context_attributes"),
	HX_CSTRING("nme_gl_get_error"),
	HX_CSTRING("nme_gl_get_framebuffer_attachment_parameter"),
	HX_CSTRING("nme_gl_get_parameter"),
	HX_CSTRING("nme_gl_get_program_info_log"),
	HX_CSTRING("nme_gl_get_program_parameter"),
	HX_CSTRING("nme_gl_get_render_buffer_parameter"),
	HX_CSTRING("nme_gl_get_shader_info_log"),
	HX_CSTRING("nme_gl_get_shader_parameter"),
	HX_CSTRING("nme_gl_get_shader_precision_format"),
	HX_CSTRING("nme_gl_get_shader_source"),
	HX_CSTRING("nme_gl_get_supported_extensions"),
	HX_CSTRING("nme_gl_get_tex_parameter"),
	HX_CSTRING("nme_gl_get_uniform"),
	HX_CSTRING("nme_gl_get_uniform_location"),
	HX_CSTRING("nme_gl_get_vertex_attrib"),
	HX_CSTRING("nme_gl_get_vertex_attrib_offset"),
	HX_CSTRING("nme_gl_hint"),
	HX_CSTRING("nme_gl_is_buffer"),
	HX_CSTRING("nme_gl_is_enabled"),
	HX_CSTRING("nme_gl_is_framebuffer"),
	HX_CSTRING("nme_gl_is_program"),
	HX_CSTRING("nme_gl_is_renderbuffer"),
	HX_CSTRING("nme_gl_is_shader"),
	HX_CSTRING("nme_gl_is_texture"),
	HX_CSTRING("nme_gl_line_width"),
	HX_CSTRING("nme_gl_link_program"),
	HX_CSTRING("nme_gl_pixel_storei"),
	HX_CSTRING("nme_gl_polygon_offset"),
	HX_CSTRING("nme_gl_renderbuffer_storage"),
	HX_CSTRING("nme_gl_sample_coverage"),
	HX_CSTRING("nme_gl_scissor"),
	HX_CSTRING("nme_gl_shader_source"),
	HX_CSTRING("nme_gl_stencil_func"),
	HX_CSTRING("nme_gl_stencil_func_separate"),
	HX_CSTRING("nme_gl_stencil_mask"),
	HX_CSTRING("nme_gl_stencil_mask_separate"),
	HX_CSTRING("nme_gl_stencil_op"),
	HX_CSTRING("nme_gl_stencil_op_separate"),
	HX_CSTRING("nme_gl_tex_image_2d"),
	HX_CSTRING("nme_gl_tex_parameterf"),
	HX_CSTRING("nme_gl_tex_parameteri"),
	HX_CSTRING("nme_gl_tex_sub_image_2d"),
	HX_CSTRING("nme_gl_uniform1f"),
	HX_CSTRING("nme_gl_uniform1fv"),
	HX_CSTRING("nme_gl_uniform1i"),
	HX_CSTRING("nme_gl_uniform1iv"),
	HX_CSTRING("nme_gl_uniform2f"),
	HX_CSTRING("nme_gl_uniform2fv"),
	HX_CSTRING("nme_gl_uniform2i"),
	HX_CSTRING("nme_gl_uniform2iv"),
	HX_CSTRING("nme_gl_uniform3f"),
	HX_CSTRING("nme_gl_uniform3fv"),
	HX_CSTRING("nme_gl_uniform3i"),
	HX_CSTRING("nme_gl_uniform3iv"),
	HX_CSTRING("nme_gl_uniform4f"),
	HX_CSTRING("nme_gl_uniform4fv"),
	HX_CSTRING("nme_gl_uniform4i"),
	HX_CSTRING("nme_gl_uniform4iv"),
	HX_CSTRING("nme_gl_uniform_matrix"),
	HX_CSTRING("nme_gl_use_program"),
	HX_CSTRING("nme_gl_validate_program"),
	HX_CSTRING("nme_gl_version"),
	HX_CSTRING("nme_gl_vertex_attrib1f"),
	HX_CSTRING("nme_gl_vertex_attrib1fv"),
	HX_CSTRING("nme_gl_vertex_attrib2f"),
	HX_CSTRING("nme_gl_vertex_attrib2fv"),
	HX_CSTRING("nme_gl_vertex_attrib3f"),
	HX_CSTRING("nme_gl_vertex_attrib3fv"),
	HX_CSTRING("nme_gl_vertex_attrib4f"),
	HX_CSTRING("nme_gl_vertex_attrib4fv"),
	HX_CSTRING("nme_gl_vertex_attrib_pointer"),
	HX_CSTRING("nme_gl_viewport"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::drawingBufferHeight,"drawingBufferHeight");
	HX_MARK_MEMBER_NAME(GL_obj::drawingBufferWidth,"drawingBufferWidth");
	HX_MARK_MEMBER_NAME(GL_obj::version,"version");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_active_texture,"nme_gl_active_texture");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_attach_shader,"nme_gl_attach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_bind_attrib_location,"nme_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_bind_bitmap_data_texture,"nme_gl_bind_bitmap_data_texture");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_bind_buffer,"nme_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_bind_framebuffer,"nme_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_bind_renderbuffer,"nme_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_bind_texture,"nme_gl_bind_texture");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_blend_color,"nme_gl_blend_color");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_blend_equation,"nme_gl_blend_equation");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_blend_equation_separate,"nme_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_blend_func,"nme_gl_blend_func");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_blend_func_separate,"nme_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_buffer_data,"nme_gl_buffer_data");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_buffer_sub_data,"nme_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_check_framebuffer_status,"nme_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_clear,"nme_gl_clear");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_clear_color,"nme_gl_clear_color");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_clear_depth,"nme_gl_clear_depth");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_clear_stencil,"nme_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_color_mask,"nme_gl_color_mask");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_compile_shader,"nme_gl_compile_shader");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_compressed_tex_image_2d,"nme_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_compressed_tex_sub_image_2d,"nme_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_copy_tex_image_2d,"nme_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_copy_tex_sub_image_2d,"nme_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_create_buffer,"nme_gl_create_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_create_framebuffer,"nme_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_create_program,"nme_gl_create_program");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_create_render_buffer,"nme_gl_create_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_create_shader,"nme_gl_create_shader");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_create_texture,"nme_gl_create_texture");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_delete_buffer,"nme_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_delete_program,"nme_gl_delete_program");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_delete_shader,"nme_gl_delete_shader");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_delete_texture,"nme_gl_delete_texture");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_depth_func,"nme_gl_depth_func");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_depth_mask,"nme_gl_depth_mask");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_depth_range,"nme_gl_depth_range");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_detach_shader,"nme_gl_detach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_disable,"nme_gl_disable");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_disable_vertex_attrib_array,"nme_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_draw_arrays,"nme_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_draw_elements,"nme_gl_draw_elements");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_enable,"nme_gl_enable");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_enable_vertex_attrib_array,"nme_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_finish,"nme_gl_finish");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_flush,"nme_gl_flush");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_framebuffer_renderbuffer,"nme_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_framebuffer_texture2D,"nme_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_front_face,"nme_gl_front_face");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_generate_mipmap,"nme_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_active_attrib,"nme_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_active_uniform,"nme_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_attrib_location,"nme_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_buffer_paramerter,"nme_gl_get_buffer_paramerter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_context_attributes,"nme_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_error,"nme_gl_get_error");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_framebuffer_attachment_parameter,"nme_gl_get_framebuffer_attachment_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_parameter,"nme_gl_get_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_program_info_log,"nme_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_program_parameter,"nme_gl_get_program_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_render_buffer_parameter,"nme_gl_get_render_buffer_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_shader_info_log,"nme_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_shader_parameter,"nme_gl_get_shader_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_shader_precision_format,"nme_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_shader_source,"nme_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_supported_extensions,"nme_gl_get_supported_extensions");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_tex_parameter,"nme_gl_get_tex_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_uniform,"nme_gl_get_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_uniform_location,"nme_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_vertex_attrib,"nme_gl_get_vertex_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_get_vertex_attrib_offset,"nme_gl_get_vertex_attrib_offset");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_hint,"nme_gl_hint");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_buffer,"nme_gl_is_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_enabled,"nme_gl_is_enabled");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_framebuffer,"nme_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_program,"nme_gl_is_program");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_renderbuffer,"nme_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_shader,"nme_gl_is_shader");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_is_texture,"nme_gl_is_texture");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_line_width,"nme_gl_line_width");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_link_program,"nme_gl_link_program");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_pixel_storei,"nme_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_polygon_offset,"nme_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_renderbuffer_storage,"nme_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_sample_coverage,"nme_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_scissor,"nme_gl_scissor");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_shader_source,"nme_gl_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_stencil_func,"nme_gl_stencil_func");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_stencil_func_separate,"nme_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_stencil_mask,"nme_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_stencil_mask_separate,"nme_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_stencil_op,"nme_gl_stencil_op");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_stencil_op_separate,"nme_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_tex_image_2d,"nme_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_tex_parameterf,"nme_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_tex_parameteri,"nme_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_tex_sub_image_2d,"nme_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform1f,"nme_gl_uniform1f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform1fv,"nme_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform1i,"nme_gl_uniform1i");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform1iv,"nme_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform2f,"nme_gl_uniform2f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform2fv,"nme_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform2i,"nme_gl_uniform2i");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform2iv,"nme_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform3f,"nme_gl_uniform3f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform3fv,"nme_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform3i,"nme_gl_uniform3i");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform3iv,"nme_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform4f,"nme_gl_uniform4f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform4fv,"nme_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform4i,"nme_gl_uniform4i");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform4iv,"nme_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_uniform_matrix,"nme_gl_uniform_matrix");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_use_program,"nme_gl_use_program");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_validate_program,"nme_gl_validate_program");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_version,"nme_gl_version");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib1f,"nme_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib1fv,"nme_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib2f,"nme_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib2fv,"nme_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib3f,"nme_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib3fv,"nme_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib4f,"nme_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib4fv,"nme_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib_pointer,"nme_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(GL_obj::nme_gl_viewport,"nme_gl_viewport");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::drawingBufferHeight,"drawingBufferHeight");
	HX_VISIT_MEMBER_NAME(GL_obj::drawingBufferWidth,"drawingBufferWidth");
	HX_VISIT_MEMBER_NAME(GL_obj::version,"version");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_active_texture,"nme_gl_active_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_attach_shader,"nme_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_bind_attrib_location,"nme_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_bind_bitmap_data_texture,"nme_gl_bind_bitmap_data_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_bind_buffer,"nme_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_bind_framebuffer,"nme_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_bind_renderbuffer,"nme_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_bind_texture,"nme_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_blend_color,"nme_gl_blend_color");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_blend_equation,"nme_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_blend_equation_separate,"nme_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_blend_func,"nme_gl_blend_func");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_blend_func_separate,"nme_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_buffer_data,"nme_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_buffer_sub_data,"nme_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_check_framebuffer_status,"nme_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_clear,"nme_gl_clear");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_clear_color,"nme_gl_clear_color");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_clear_depth,"nme_gl_clear_depth");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_clear_stencil,"nme_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_color_mask,"nme_gl_color_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_compile_shader,"nme_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_compressed_tex_image_2d,"nme_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_compressed_tex_sub_image_2d,"nme_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_copy_tex_image_2d,"nme_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_copy_tex_sub_image_2d,"nme_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_create_buffer,"nme_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_create_framebuffer,"nme_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_create_program,"nme_gl_create_program");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_create_render_buffer,"nme_gl_create_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_create_shader,"nme_gl_create_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_create_texture,"nme_gl_create_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_delete_buffer,"nme_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_delete_program,"nme_gl_delete_program");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_delete_shader,"nme_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_delete_texture,"nme_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_depth_func,"nme_gl_depth_func");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_depth_mask,"nme_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_depth_range,"nme_gl_depth_range");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_detach_shader,"nme_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_disable,"nme_gl_disable");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_disable_vertex_attrib_array,"nme_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_draw_arrays,"nme_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_draw_elements,"nme_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_enable,"nme_gl_enable");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_enable_vertex_attrib_array,"nme_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_finish,"nme_gl_finish");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_flush,"nme_gl_flush");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_framebuffer_renderbuffer,"nme_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_framebuffer_texture2D,"nme_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_front_face,"nme_gl_front_face");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_generate_mipmap,"nme_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_active_attrib,"nme_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_active_uniform,"nme_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_attrib_location,"nme_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_buffer_paramerter,"nme_gl_get_buffer_paramerter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_context_attributes,"nme_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_error,"nme_gl_get_error");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_framebuffer_attachment_parameter,"nme_gl_get_framebuffer_attachment_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_parameter,"nme_gl_get_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_program_info_log,"nme_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_program_parameter,"nme_gl_get_program_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_render_buffer_parameter,"nme_gl_get_render_buffer_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_shader_info_log,"nme_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_shader_parameter,"nme_gl_get_shader_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_shader_precision_format,"nme_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_shader_source,"nme_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_supported_extensions,"nme_gl_get_supported_extensions");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_tex_parameter,"nme_gl_get_tex_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_uniform,"nme_gl_get_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_uniform_location,"nme_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_vertex_attrib,"nme_gl_get_vertex_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_get_vertex_attrib_offset,"nme_gl_get_vertex_attrib_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_hint,"nme_gl_hint");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_buffer,"nme_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_enabled,"nme_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_framebuffer,"nme_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_program,"nme_gl_is_program");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_renderbuffer,"nme_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_shader,"nme_gl_is_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_is_texture,"nme_gl_is_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_line_width,"nme_gl_line_width");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_link_program,"nme_gl_link_program");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_pixel_storei,"nme_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_polygon_offset,"nme_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_renderbuffer_storage,"nme_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_sample_coverage,"nme_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_scissor,"nme_gl_scissor");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_shader_source,"nme_gl_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_stencil_func,"nme_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_stencil_func_separate,"nme_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_stencil_mask,"nme_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_stencil_mask_separate,"nme_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_stencil_op,"nme_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_stencil_op_separate,"nme_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_tex_image_2d,"nme_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_tex_parameterf,"nme_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_tex_parameteri,"nme_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_tex_sub_image_2d,"nme_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform1f,"nme_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform1fv,"nme_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform1i,"nme_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform1iv,"nme_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform2f,"nme_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform2fv,"nme_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform2i,"nme_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform2iv,"nme_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform3f,"nme_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform3fv,"nme_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform3i,"nme_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform3iv,"nme_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform4f,"nme_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform4fv,"nme_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform4i,"nme_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform4iv,"nme_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_uniform_matrix,"nme_gl_uniform_matrix");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_use_program,"nme_gl_use_program");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_validate_program,"nme_gl_validate_program");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_version,"nme_gl_version");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib1f,"nme_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib1fv,"nme_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib2f,"nme_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib2fv,"nme_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib3f,"nme_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib3fv,"nme_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib4f,"nme_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib4fv,"nme_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_vertex_attrib_pointer,"nme_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(GL_obj::nme_gl_viewport,"nme_gl_viewport");
};

Class GL_obj::__mClass;

void GL_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.GL"), hx::TCanCast< GL_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GL_obj::__boot()
{
	DEPTH_BUFFER_BIT= (int)256;
	STENCIL_BUFFER_BIT= (int)1024;
	COLOR_BUFFER_BIT= (int)16384;
	POINTS= (int)0;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	TRIANGLES= (int)4;
	TRIANGLE_STRIP= (int)5;
	TRIANGLE_FAN= (int)6;
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	ONE_MINUS_SRC_COLOR= (int)769;
	SRC_ALPHA= (int)770;
	ONE_MINUS_SRC_ALPHA= (int)771;
	DST_ALPHA= (int)772;
	ONE_MINUS_DST_ALPHA= (int)773;
	DST_COLOR= (int)774;
	ONE_MINUS_DST_COLOR= (int)775;
	SRC_ALPHA_SATURATE= (int)776;
	FUNC_ADD= (int)32774;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	FUNC_SUBTRACT= (int)32778;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	BLEND_DST_RGB= (int)32968;
	BLEND_SRC_RGB= (int)32969;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_SRC_ALPHA= (int)32971;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	BLEND_COLOR= (int)32773;
	ARRAY_BUFFER= (int)34962;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ARRAY_BUFFER_BINDING= (int)34964;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	STREAM_DRAW= (int)35040;
	STATIC_DRAW= (int)35044;
	DYNAMIC_DRAW= (int)35048;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	FRONT= (int)1028;
	BACK= (int)1029;
	FRONT_AND_BACK= (int)1032;
	CULL_FACE= (int)2884;
	BLEND= (int)3042;
	DITHER= (int)3024;
	STENCIL_TEST= (int)2960;
	DEPTH_TEST= (int)2929;
	SCISSOR_TEST= (int)3089;
	POLYGON_OFFSET_FILL= (int)32823;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_COVERAGE= (int)32928;
	NO_ERROR= (int)0;
	INVALID_ENUM= (int)1280;
	INVALID_VALUE= (int)1281;
	INVALID_OPERATION= (int)1282;
	OUT_OF_MEMORY= (int)1285;
	CW= (int)2304;
	CCW= (int)2305;
	LINE_WIDTH= (int)2849;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	CULL_FACE_MODE= (int)2885;
	FRONT_FACE= (int)2886;
	DEPTH_RANGE= (int)2928;
	DEPTH_WRITEMASK= (int)2930;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_FUNC= (int)2932;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FUNC= (int)2962;
	STENCIL_FAIL= (int)2964;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	VIEWPORT= (int)2978;
	SCISSOR_BOX= (int)3088;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	UNPACK_ALIGNMENT= (int)3317;
	PACK_ALIGNMENT= (int)3333;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VIEWPORT_DIMS= (int)3386;
	SUBPIXEL_BITS= (int)3408;
	RED_BITS= (int)3410;
	GREEN_BITS= (int)3411;
	BLUE_BITS= (int)3412;
	ALPHA_BITS= (int)3413;
	DEPTH_BITS= (int)3414;
	STENCIL_BITS= (int)3415;
	POLYGON_OFFSET_UNITS= (int)10752;
	POLYGON_OFFSET_FACTOR= (int)32824;
	TEXTURE_BINDING_2D= (int)32873;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLES= (int)32937;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	DONT_CARE= (int)4352;
	FASTEST= (int)4353;
	NICEST= (int)4354;
	GENERATE_MIPMAP_HINT= (int)33170;
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	INT= (int)5124;
	UNSIGNED_INT= (int)5125;
	FLOAT= (int)5126;
	DEPTH_COMPONENT= (int)6402;
	ALPHA= (int)6406;
	RGB= (int)6407;
	RGBA= (int)6408;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	FRAGMENT_SHADER= (int)35632;
	VERTEX_SHADER= (int)35633;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	SHADER_TYPE= (int)35663;
	DELETE_STATUS= (int)35712;
	LINK_STATUS= (int)35714;
	VALIDATE_STATUS= (int)35715;
	ATTACHED_SHADERS= (int)35717;
	ACTIVE_UNIFORMS= (int)35718;
	ACTIVE_ATTRIBUTES= (int)35721;
	SHADING_LANGUAGE_VERSION= (int)35724;
	CURRENT_PROGRAM= (int)35725;
	NEVER= (int)512;
	LESS= (int)513;
	EQUAL= (int)514;
	LEQUAL= (int)515;
	GREATER= (int)516;
	NOTEQUAL= (int)517;
	GEQUAL= (int)518;
	ALWAYS= (int)519;
	KEEP= (int)7680;
	REPLACE= (int)7681;
	INCR= (int)7682;
	DECR= (int)7683;
	INVERT= (int)5386;
	INCR_WRAP= (int)34055;
	DECR_WRAP= (int)34056;
	VENDOR= (int)7936;
	RENDERER= (int)7937;
	VERSION= (int)7938;
	NEAREST= (int)9728;
	LINEAR= (int)9729;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TEXTURE_2D= (int)3553;
	TEXTURE= (int)5890;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE2= (int)33986;
	TEXTURE3= (int)33987;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	ACTIVE_TEXTURE= (int)34016;
	REPEAT= (int)10497;
	CLAMP_TO_EDGE= (int)33071;
	MIRRORED_REPEAT= (int)33648;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	COMPILE_STATUS= (int)35713;
	LOW_FLOAT= (int)36336;
	MEDIUM_FLOAT= (int)36337;
	HIGH_FLOAT= (int)36338;
	LOW_INT= (int)36339;
	MEDIUM_INT= (int)36340;
	HIGH_INT= (int)36341;
	FRAMEBUFFER= (int)36160;
	RENDERBUFFER= (int)36161;
	RGBA4= (int)32854;
	RGB5_A1= (int)32855;
	RGB565= (int)36194;
	DEPTH_COMPONENT16= (int)33189;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	DEPTH_STENCIL= (int)34041;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	COLOR_ATTACHMENT0= (int)36064;
	DEPTH_ATTACHMENT= (int)36096;
	STENCIL_ATTACHMENT= (int)36128;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	NONE= (int)0;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRAMEBUFFER_BINDING= (int)36006;
	RENDERBUFFER_BINDING= (int)36007;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	CONTEXT_LOST_WEBGL= (int)37442;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	BROWSER_DEFAULT_WEBGL= (int)37444;
	nme_gl_active_texture= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_active_texture"),(int)1);
	nme_gl_attach_shader= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_attach_shader"),(int)2);
	nme_gl_bind_attrib_location= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_bind_attrib_location"),(int)3);
	nme_gl_bind_bitmap_data_texture= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_bind_bitmap_data_texture"),(int)1);
	nme_gl_bind_buffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_bind_buffer"),(int)2);
	nme_gl_bind_framebuffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_bind_framebuffer"),(int)2);
	nme_gl_bind_renderbuffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_bind_renderbuffer"),(int)2);
	nme_gl_bind_texture= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_bind_texture"),(int)2);
	nme_gl_blend_color= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_blend_color"),(int)4);
	nme_gl_blend_equation= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_blend_equation"),(int)1);
	nme_gl_blend_equation_separate= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_blend_equation_separate"),(int)2);
	nme_gl_blend_func= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_blend_func"),(int)2);
	nme_gl_blend_func_separate= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_blend_func_separate"),(int)4);
	nme_gl_buffer_data= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_buffer_data"),(int)5);
	nme_gl_buffer_sub_data= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_buffer_sub_data"),(int)5);
	nme_gl_check_framebuffer_status= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_check_framebuffer_status"),(int)1);
	nme_gl_clear= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_clear"),(int)1);
	nme_gl_clear_color= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_clear_color"),(int)4);
	nme_gl_clear_depth= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_clear_depth"),(int)1);
	nme_gl_clear_stencil= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_clear_stencil"),(int)1);
	nme_gl_color_mask= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_color_mask"),(int)4);
	nme_gl_compile_shader= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_compile_shader"),(int)1);
	nme_gl_compressed_tex_image_2d= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_compressed_tex_image_2d"),(int)-1);
	nme_gl_compressed_tex_sub_image_2d= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_compressed_tex_sub_image_2d"),(int)-1);
	nme_gl_copy_tex_image_2d= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_copy_tex_image_2d"),(int)-1);
	nme_gl_copy_tex_sub_image_2d= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_copy_tex_sub_image_2d"),(int)-1);
	nme_gl_create_buffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_create_buffer"),(int)0);
	nme_gl_create_framebuffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_create_framebuffer"),(int)0);
	nme_gl_create_program= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_create_program"),(int)0);
	nme_gl_create_render_buffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_create_render_buffer"),(int)0);
	nme_gl_create_shader= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_create_shader"),(int)1);
	nme_gl_create_texture= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_create_texture"),(int)0);
	nme_gl_delete_buffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_delete_buffer"),(int)1);
	nme_gl_delete_program= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_delete_program"),(int)1);
	nme_gl_delete_shader= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_delete_shader"),(int)1);
	nme_gl_delete_texture= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_delete_texture"),(int)1);
	nme_gl_depth_func= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_depth_func"),(int)1);
	nme_gl_depth_mask= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_depth_func"),(int)1);
	nme_gl_depth_range= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_depth_range"),(int)2);
	nme_gl_detach_shader= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_detach_shader"),(int)2);
	nme_gl_disable= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_disable"),(int)1);
	nme_gl_disable_vertex_attrib_array= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_disable_vertex_attrib_array"),(int)1);
	nme_gl_draw_arrays= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_draw_arrays"),(int)3);
	nme_gl_draw_elements= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_draw_elements"),(int)4);
	nme_gl_enable= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_enable"),(int)1);
	nme_gl_enable_vertex_attrib_array= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_enable_vertex_attrib_array"),(int)1);
	nme_gl_finish= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_finish"),(int)0);
	nme_gl_flush= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_flush"),(int)0);
	nme_gl_framebuffer_renderbuffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_framebuffer_renderbuffer"),(int)4);
	nme_gl_framebuffer_texture2D= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_framebuffer_texture2D"),(int)5);
	nme_gl_front_face= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_front_face"),(int)1);
	nme_gl_generate_mipmap= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_generate_mipmap"),(int)1);
	nme_gl_get_active_attrib= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_active_attrib"),(int)2);
	nme_gl_get_active_uniform= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_active_uniform"),(int)2);
	nme_gl_get_attrib_location= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_attrib_location"),(int)2);
	nme_gl_get_buffer_paramerter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_buffer_paramerter"),(int)2);
	nme_gl_get_context_attributes= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_context_attributes"),(int)0);
	nme_gl_get_error= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_error"),(int)0);
	nme_gl_get_framebuffer_attachment_parameter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_framebuffer_attachment_parameter"),(int)3);
	nme_gl_get_parameter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_parameter"),(int)1);
	nme_gl_get_program_info_log= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_program_info_log"),(int)1);
	nme_gl_get_program_parameter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_program_parameter"),(int)2);
	nme_gl_get_render_buffer_parameter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_render_buffer_parameter"),(int)2);
	nme_gl_get_shader_info_log= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_shader_info_log"),(int)1);
	nme_gl_get_shader_parameter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_shader_parameter"),(int)2);
	nme_gl_get_shader_precision_format= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_shader_precision_format"),(int)2);
	nme_gl_get_shader_source= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_shader_source"),(int)1);
	nme_gl_get_supported_extensions= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_supported_extensions"),(int)1);
	nme_gl_get_tex_parameter= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_tex_parameter"),(int)2);
	nme_gl_get_uniform= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_uniform"),(int)2);
	nme_gl_get_uniform_location= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_uniform_location"),(int)2);
	nme_gl_get_vertex_attrib= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_vertex_attrib"),(int)2);
	nme_gl_get_vertex_attrib_offset= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_get_vertex_attrib_offset"),(int)2);
	nme_gl_hint= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_hint"),(int)2);
	nme_gl_is_buffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_buffer"),(int)1);
	nme_gl_is_enabled= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_enabled"),(int)1);
	nme_gl_is_framebuffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_framebuffer"),(int)1);
	nme_gl_is_program= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_program"),(int)1);
	nme_gl_is_renderbuffer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_renderbuffer"),(int)1);
	nme_gl_is_shader= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_shader"),(int)1);
	nme_gl_is_texture= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_is_texture"),(int)1);
	nme_gl_line_width= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_line_width"),(int)1);
	nme_gl_link_program= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_link_program"),(int)1);
	nme_gl_pixel_storei= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_pixel_storei"),(int)2);
	nme_gl_polygon_offset= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_polygon_offset"),(int)2);
	nme_gl_renderbuffer_storage= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_renderbuffer_storage"),(int)4);
	nme_gl_sample_coverage= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_sample_coverage"),(int)2);
	nme_gl_scissor= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_scissor"),(int)4);
	nme_gl_shader_source= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_shader_source"),(int)2);
	nme_gl_stencil_func= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_stencil_func"),(int)3);
	nme_gl_stencil_func_separate= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_stencil_func_separate"),(int)4);
	nme_gl_stencil_mask= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_stencil_mask"),(int)1);
	nme_gl_stencil_mask_separate= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_stencil_mask_separate"),(int)2);
	nme_gl_stencil_op= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_stencil_op"),(int)3);
	nme_gl_stencil_op_separate= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_stencil_op_separate"),(int)4);
	nme_gl_tex_image_2d= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_tex_image_2d"),(int)-1);
	nme_gl_tex_parameterf= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_tex_parameterf"),(int)3);
	nme_gl_tex_parameteri= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_tex_parameteri"),(int)3);
	nme_gl_tex_sub_image_2d= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_tex_sub_image_2d"),(int)-1);
	nme_gl_uniform1f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform1f"),(int)2);
	nme_gl_uniform1fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform1fv"),(int)2);
	nme_gl_uniform1i= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform1i"),(int)2);
	nme_gl_uniform1iv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform1iv"),(int)2);
	nme_gl_uniform2f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform2f"),(int)3);
	nme_gl_uniform2fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform2fv"),(int)2);
	nme_gl_uniform2i= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform2i"),(int)3);
	nme_gl_uniform2iv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform2iv"),(int)2);
	nme_gl_uniform3f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform3f"),(int)4);
	nme_gl_uniform3fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform3fv"),(int)2);
	nme_gl_uniform3i= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform3i"),(int)4);
	nme_gl_uniform3iv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform3iv"),(int)2);
	nme_gl_uniform4f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform4f"),(int)5);
	nme_gl_uniform4fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform4fv"),(int)2);
	nme_gl_uniform4i= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform4i"),(int)5);
	nme_gl_uniform4iv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform4iv"),(int)2);
	nme_gl_uniform_matrix= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_uniform_matrix"),(int)4);
	nme_gl_use_program= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_use_program"),(int)1);
	nme_gl_validate_program= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_validate_program"),(int)1);
	nme_gl_version= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_version"),(int)0);
	nme_gl_vertex_attrib1f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib1f"),(int)2);
	nme_gl_vertex_attrib1fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib1fv"),(int)2);
	nme_gl_vertex_attrib2f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib2f"),(int)3);
	nme_gl_vertex_attrib2fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib2fv"),(int)2);
	nme_gl_vertex_attrib3f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib3f"),(int)4);
	nme_gl_vertex_attrib3fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib3fv"),(int)2);
	nme_gl_vertex_attrib4f= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib4f"),(int)5);
	nme_gl_vertex_attrib4fv= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib4fv"),(int)2);
	nme_gl_vertex_attrib_pointer= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_vertex_attrib_pointer"),(int)-1);
	nme_gl_viewport= ::native::gl::GL_obj::load(HX_CSTRING("nme_gl_viewport"),(int)4);
}

} // end namespace native
} // end namespace gl
