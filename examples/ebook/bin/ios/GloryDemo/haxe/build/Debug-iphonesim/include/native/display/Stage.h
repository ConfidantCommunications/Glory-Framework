#ifndef INCLUDED_native_display_Stage
#define INCLUDED_native_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/DisplayObjectContainer.h>
HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,display,Stage3D)
HX_DECLARE_CLASS2(native,display,StageAlign)
HX_DECLARE_CLASS2(native,display,StageDisplayState)
HX_DECLARE_CLASS2(native,display,StageQuality)
HX_DECLARE_CLASS2(native,display,StageScaleMode)
HX_DECLARE_CLASS2(native,display,TouchInfo)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace native{
namespace display{


class Stage_obj : public ::native::display::DisplayObjectContainer_obj{
	public:
		typedef ::native::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();
		Void __construct(Dynamic inHandle,int inWidth,int inHeight);

	public:
		static hx::ObjectPtr< Stage_obj > __new(Dynamic inHandle,int inWidth,int inHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stage"); }

		virtual int get_stageWidth( );
		Dynamic get_stageWidth_dyn();

		virtual int get_stageHeight( );
		Dynamic get_stageHeight_dyn();

		virtual bool set_stageFocusRect( bool inVal);
		Dynamic set_stageFocusRect_dyn();

		virtual bool get_stageFocusRect( );
		Dynamic get_stageFocusRect_dyn();

		virtual ::native::display::Stage get_stage( );

		virtual ::native::display::StageScaleMode set_scaleMode( ::native::display::StageScaleMode inMode);
		Dynamic set_scaleMode_dyn();

		virtual ::native::display::StageScaleMode get_scaleMode( );
		Dynamic get_scaleMode_dyn();

		virtual ::native::display::StageQuality set_quality( ::native::display::StageQuality inQuality);
		Dynamic set_quality_dyn();

		virtual ::native::display::StageQuality get_quality( );
		Dynamic get_quality_dyn();

		virtual bool get_isOpenGL( );
		Dynamic get_isOpenGL_dyn();

		virtual Float set_frameRate( Float inRate);
		Dynamic set_frameRate_dyn();

		virtual ::native::display::InteractiveObject set_focus( ::native::display::InteractiveObject inObject);
		Dynamic set_focus_dyn();

		virtual ::native::display::InteractiveObject get_focus( );
		Dynamic get_focus_dyn();

		virtual Float get_dpiScale( );
		Dynamic get_dpiScale_dyn();

		virtual ::native::display::StageDisplayState set_displayState( ::native::display::StageDisplayState inState);
		Dynamic set_displayState_dyn();

		virtual ::native::display::StageDisplayState get_displayState( );
		Dynamic get_displayState_dyn();

		virtual ::native::display::StageAlign set_align( ::native::display::StageAlign inMode);
		Dynamic set_align_dyn();

		virtual ::native::display::StageAlign get_align( );
		Dynamic get_align_dyn();

		virtual Void showCursor( bool inShow);
		Dynamic showCursor_dyn();

		virtual Float nmeUpdateNextWake( );
		Dynamic nmeUpdateNextWake_dyn();

		virtual Void nmeStopDrag( ::native::display::Sprite sprite);
		Dynamic nmeStopDrag_dyn();

		virtual Void nmeStartDrag( ::native::display::Sprite sprite,bool lockCenter,::native::geom::Rectangle bounds);
		Dynamic nmeStartDrag_dyn();

		virtual Void nmeSetActive( bool inActive);
		Dynamic nmeSetActive_dyn();

		virtual Void nmeRender( bool inSendEnterFrame);
		Dynamic nmeRender_dyn();

		virtual Void nmePollTimers( );
		Dynamic nmePollTimers_dyn();

		virtual Void nmeOnTouch( Dynamic inEvent,::String inType,::native::display::TouchInfo touchInfo);
		Dynamic nmeOnTouch_dyn();

		virtual Void nmeOnResize( Float inW,Float inH);
		Dynamic nmeOnResize_dyn();

		virtual Void nmeOnMouse( Dynamic inEvent,::String inType,bool inFromMouse);
		Dynamic nmeOnMouse_dyn();

		virtual Void nmeOnKey( Dynamic inEvent,::String inType);
		Dynamic nmeOnKey_dyn();

		virtual Void nmeOnJoystick( Dynamic inEvent,::String inType);
		Dynamic nmeOnJoystick_dyn();

		virtual Void nmeOnFocus( Dynamic inEvent);
		Dynamic nmeOnFocus_dyn();

		virtual Void nmeOnChange( Dynamic inEvent);
		Dynamic nmeOnChange_dyn();

		virtual Float nmeNextFrameDue( Float inOtherTimers);
		Dynamic nmeNextFrameDue_dyn();

		virtual Void nmeDrag( ::native::geom::Point inMouse);
		Dynamic nmeDrag_dyn();

		virtual Dynamic nmeProcessStageEvent( Dynamic inEvent);
		Dynamic nmeProcessStageEvent_dyn();

		virtual Void dummyTrace( );
		Dynamic dummyTrace_dyn();

		virtual Float nmeDoProcessStageEvent( Dynamic inEvent);
		Dynamic nmeDoProcessStageEvent_dyn();

		virtual Void nmeCheckRender( );
		Dynamic nmeCheckRender_dyn();

		virtual bool nmeCheckInOuts( ::native::events::MouseEvent inEvent,Array< ::native::display::InteractiveObject > inStack,::native::display::TouchInfo touchInfo);
		Dynamic nmeCheckInOuts_dyn();

		virtual Void nmeCheckFocusInOuts( Dynamic inEvent,Array< ::native::display::InteractiveObject > inStack);
		Dynamic nmeCheckFocusInOuts_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		::IntHash nmeTouchInfo; /* REM */ 
		Array< ::native::display::InteractiveObject > nmeMouseOverObjects; /* REM */ 
		Float nmeLastRender; /* REM */ 
		Array< ::native::display::InteractiveObject > nmeLastDown; /* REM */ 
		Float nmeLastClickTime; /* REM */ 
		bool nmeInvalid; /* REM */ 
		Float nmeFramePeriod; /* REM */ 
		Array< ::native::display::InteractiveObject > nmeFocusOverObjects; /* REM */ 
		Float nmeDragOffsetY; /* REM */ 
		Float nmeDragOffsetX; /* REM */ 
		::native::display::Sprite nmeDragObject; /* REM */ 
		::native::geom::Rectangle nmeDragBounds; /* REM */ 
		::IntHash nmeJoyAxisData; /* REM */ 
		Array< ::native::display::Stage3D > stage3Ds; /* REM */ 
		int stageWidth; /* REM */ 
		int stageHeight; /* REM */ 
		bool stageFocusRect; /* REM */ 
		::native::display::StageScaleMode scaleMode; /* REM */ 
		Dynamic renderRequest; /* REM */ 
		Dynamic &renderRequest_dyn() { return renderRequest;}
		::native::display::StageQuality quality; /* REM */ 
		bool pauseWhenDeactivated; /* REM */ 
		Dynamic onQuit; /* REM */ 
		Dynamic &onQuit_dyn() { return onQuit;}
		Dynamic onKey; /* REM */ 
		Dynamic &onKey_dyn() { return onKey;}
		bool isOpenGL; /* REM */ 
		Float frameRate; /* REM */ 
		::native::display::InteractiveObject focus; /* REM */ 
		Float dpiScale; /* REM */ 
		::native::display::StageDisplayState displayState; /* REM */ 
		::native::display::StageAlign align; /* REM */ 
		bool active; /* REM */ 
		static Float nmeEarlyWakeup; /* REM */ 
		static int OrientationPortrait; /* REM */ 
		static int OrientationPortraitUpsideDown; /* REM */ 
		static int OrientationLandscapeRight; /* REM */ 
		static int OrientationLandscapeLeft; /* REM */ 
		static int OrientationFaceUp; /* REM */ 
		static int OrientationFaceDown; /* REM */ 
		static int efLeftDown; /* REM */ 
		static int efShiftDown; /* REM */ 
		static int efCtrlDown; /* REM */ 
		static int efAltDown; /* REM */ 
		static int efCommandDown; /* REM */ 
		static int efLocationRight; /* REM */ 
		static int efNoNativeClick; /* REM */ 
		static Array< ::String > nmeMouseChanges; /* REM */ 
		static Array< ::String > nmeTouchChanges; /* REM */ 
		static Array< ::String > sClickEvents; /* REM */ 
		static Array< ::String > sDownEvents; /* REM */ 
		static Array< ::String > sUpEvents; /* REM */ 
		static Dynamic getOrientation;
		static inline Dynamic &getOrientation_dyn() {return getOrientation; }

		static Dynamic getNormalOrientation;
		static inline Dynamic &getNormalOrientation_dyn() {return getNormalOrientation; }

		static Void setFixedOrientation( int inOrientation);
		static Dynamic setFixedOrientation_dyn();

		static Dynamic shouldRotateInterface;
		static inline Dynamic &shouldRotateInterface_dyn() {return shouldRotateInterface; }

		static Dynamic nme_set_stage_handler; /* REM */ 
		static Dynamic &nme_set_stage_handler_dyn() { return nme_set_stage_handler;}
		static Dynamic nme_render_stage; /* REM */ 
		static Dynamic &nme_render_stage_dyn() { return nme_render_stage;}
		static Dynamic nme_stage_get_focus_id; /* REM */ 
		static Dynamic &nme_stage_get_focus_id_dyn() { return nme_stage_get_focus_id;}
		static Dynamic nme_stage_set_focus; /* REM */ 
		static Dynamic &nme_stage_set_focus_dyn() { return nme_stage_set_focus;}
		static Dynamic nme_stage_get_focus_rect; /* REM */ 
		static Dynamic &nme_stage_get_focus_rect_dyn() { return nme_stage_get_focus_rect;}
		static Dynamic nme_stage_set_focus_rect; /* REM */ 
		static Dynamic &nme_stage_set_focus_rect_dyn() { return nme_stage_set_focus_rect;}
		static Dynamic nme_stage_is_opengl; /* REM */ 
		static Dynamic &nme_stage_is_opengl_dyn() { return nme_stage_is_opengl;}
		static Dynamic nme_stage_get_stage_width; /* REM */ 
		static Dynamic &nme_stage_get_stage_width_dyn() { return nme_stage_get_stage_width;}
		static Dynamic nme_stage_get_stage_height; /* REM */ 
		static Dynamic &nme_stage_get_stage_height_dyn() { return nme_stage_get_stage_height;}
		static Dynamic nme_stage_get_dpi_scale; /* REM */ 
		static Dynamic &nme_stage_get_dpi_scale_dyn() { return nme_stage_get_dpi_scale;}
		static Dynamic nme_stage_get_scale_mode; /* REM */ 
		static Dynamic &nme_stage_get_scale_mode_dyn() { return nme_stage_get_scale_mode;}
		static Dynamic nme_stage_set_scale_mode; /* REM */ 
		static Dynamic &nme_stage_set_scale_mode_dyn() { return nme_stage_set_scale_mode;}
		static Dynamic nme_stage_get_align; /* REM */ 
		static Dynamic &nme_stage_get_align_dyn() { return nme_stage_get_align;}
		static Dynamic nme_stage_set_align; /* REM */ 
		static Dynamic &nme_stage_set_align_dyn() { return nme_stage_set_align;}
		static Dynamic nme_stage_get_quality; /* REM */ 
		static Dynamic &nme_stage_get_quality_dyn() { return nme_stage_get_quality;}
		static Dynamic nme_stage_set_quality; /* REM */ 
		static Dynamic &nme_stage_set_quality_dyn() { return nme_stage_set_quality;}
		static Dynamic nme_stage_get_display_state; /* REM */ 
		static Dynamic &nme_stage_get_display_state_dyn() { return nme_stage_get_display_state;}
		static Dynamic nme_stage_set_display_state; /* REM */ 
		static Dynamic &nme_stage_set_display_state_dyn() { return nme_stage_set_display_state;}
		static Dynamic nme_stage_set_next_wake; /* REM */ 
		static Dynamic &nme_stage_set_next_wake_dyn() { return nme_stage_set_next_wake;}
		static Dynamic nme_stage_request_render; /* REM */ 
		static Dynamic nme_stage_show_cursor; /* REM */ 
		static Dynamic &nme_stage_show_cursor_dyn() { return nme_stage_show_cursor;}
		static Dynamic nme_stage_set_fixed_orientation; /* REM */ 
		static Dynamic &nme_stage_set_fixed_orientation_dyn() { return nme_stage_set_fixed_orientation;}
		static Dynamic nme_stage_get_orientation; /* REM */ 
		static Dynamic &nme_stage_get_orientation_dyn() { return nme_stage_get_orientation;}
		static Dynamic nme_stage_get_normal_orientation; /* REM */ 
		static Dynamic &nme_stage_get_normal_orientation_dyn() { return nme_stage_get_normal_orientation;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_Stage */ 
