#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_view_constants_ControlConstants
#include <ca/confidant/glory/view/constants/ControlConstants.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace view{
namespace constants{

Void ControlConstants_obj::__construct()
{
HX_STACK_PUSH("ControlConstants::new","ca/confidant/glory/view/constants/ControlConstants.hx",18);
{
}
;
	return null();
}

ControlConstants_obj::~ControlConstants_obj() { }

Dynamic ControlConstants_obj::__CreateEmpty() { return  new ControlConstants_obj; }
hx::ObjectPtr< ControlConstants_obj > ControlConstants_obj::__new()
{  hx::ObjectPtr< ControlConstants_obj > result = new ControlConstants_obj();
	result->__construct();
	return result;}

Dynamic ControlConstants_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControlConstants_obj > result = new ControlConstants_obj();
	result->__construct();
	return result;}

::String ControlConstants_obj::PAGE_FORWARD;

::String ControlConstants_obj::PAGE_BACKWARD;

::String ControlConstants_obj::PAGE_SKIP_TO;

::String ControlConstants_obj::TOGGLE_MENU;

::String ControlConstants_obj::GET_URL;

::String ControlConstants_obj::PAN_RIGHT_CONTROL;

::String ControlConstants_obj::PAN_LEFT_CONTROL;

::String ControlConstants_obj::TRANSITION_OUT;

::String ControlConstants_obj::TRANSITION_IN;

::String ControlConstants_obj::CONTROL;


ControlConstants_obj::ControlConstants_obj()
{
}

void ControlConstants_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlConstants);
	HX_MARK_END_CLASS();
}

void ControlConstants_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ControlConstants_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GET_URL") ) { return GET_URL; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return CONTROL; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOGGLE_MENU") ) { return TOGGLE_MENU; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PAGE_FORWARD") ) { return PAGE_FORWARD; }
		if (HX_FIELD_EQ(inName,"PAGE_SKIP_TO") ) { return PAGE_SKIP_TO; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PAGE_BACKWARD") ) { return PAGE_BACKWARD; }
		if (HX_FIELD_EQ(inName,"TRANSITION_IN") ) { return TRANSITION_IN; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT") ) { return TRANSITION_OUT; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PAN_LEFT_CONTROL") ) { return PAN_LEFT_CONTROL; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PAN_RIGHT_CONTROL") ) { return PAN_RIGHT_CONTROL; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ControlConstants_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GET_URL") ) { GET_URL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { CONTROL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOGGLE_MENU") ) { TOGGLE_MENU=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PAGE_FORWARD") ) { PAGE_FORWARD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGE_SKIP_TO") ) { PAGE_SKIP_TO=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PAGE_BACKWARD") ) { PAGE_BACKWARD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSITION_IN") ) { TRANSITION_IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT") ) { TRANSITION_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PAN_LEFT_CONTROL") ) { PAN_LEFT_CONTROL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PAN_RIGHT_CONTROL") ) { PAN_RIGHT_CONTROL=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ControlConstants_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PAGE_FORWARD"),
	HX_CSTRING("PAGE_BACKWARD"),
	HX_CSTRING("PAGE_SKIP_TO"),
	HX_CSTRING("TOGGLE_MENU"),
	HX_CSTRING("GET_URL"),
	HX_CSTRING("PAN_RIGHT_CONTROL"),
	HX_CSTRING("PAN_LEFT_CONTROL"),
	HX_CSTRING("TRANSITION_OUT"),
	HX_CSTRING("TRANSITION_IN"),
	HX_CSTRING("CONTROL"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlConstants_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::PAGE_FORWARD,"PAGE_FORWARD");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::PAGE_BACKWARD,"PAGE_BACKWARD");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::PAGE_SKIP_TO,"PAGE_SKIP_TO");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::TOGGLE_MENU,"TOGGLE_MENU");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::GET_URL,"GET_URL");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::PAN_RIGHT_CONTROL,"PAN_RIGHT_CONTROL");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::PAN_LEFT_CONTROL,"PAN_LEFT_CONTROL");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::TRANSITION_OUT,"TRANSITION_OUT");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::TRANSITION_IN,"TRANSITION_IN");
	HX_MARK_MEMBER_NAME(ControlConstants_obj::CONTROL,"CONTROL");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::PAGE_FORWARD,"PAGE_FORWARD");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::PAGE_BACKWARD,"PAGE_BACKWARD");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::PAGE_SKIP_TO,"PAGE_SKIP_TO");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::TOGGLE_MENU,"TOGGLE_MENU");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::GET_URL,"GET_URL");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::PAN_RIGHT_CONTROL,"PAN_RIGHT_CONTROL");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::PAN_LEFT_CONTROL,"PAN_LEFT_CONTROL");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::TRANSITION_OUT,"TRANSITION_OUT");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::TRANSITION_IN,"TRANSITION_IN");
	HX_VISIT_MEMBER_NAME(ControlConstants_obj::CONTROL,"CONTROL");
};

Class ControlConstants_obj::__mClass;

void ControlConstants_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.constants.ControlConstants"), hx::TCanCast< ControlConstants_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ControlConstants_obj::__boot()
{
	PAGE_FORWARD= HX_CSTRING("pageForward");
	PAGE_BACKWARD= HX_CSTRING("pageBackward");
	PAGE_SKIP_TO= HX_CSTRING("pageSkipTo");
	TOGGLE_MENU= HX_CSTRING("toggleMenu");
	GET_URL= HX_CSTRING("getURL");
	PAN_RIGHT_CONTROL= HX_CSTRING("panRight");
	PAN_LEFT_CONTROL= HX_CSTRING("panLeft");
	TRANSITION_OUT= HX_CSTRING("transitionOut");
	TRANSITION_IN= HX_CSTRING("transitionIn");
	CONTROL= HX_CSTRING("control");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
} // end namespace constants
