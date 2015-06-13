#include <hxcpp.h>

#ifndef INCLUDED_format_svg_DisplayElement
#include <format/svg/DisplayElement.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
namespace format{
namespace svg{

Void Group_obj::__construct()
{
HX_STACK_PUSH("Group::new","format/svg/Group.hx",7);
{
	HX_STACK_LINE(8)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(9)
	this->children = Array_obj< ::format::svg::DisplayElement >::__new();
}
;
	return null();
}

Group_obj::~Group_obj() { }

Dynamic Group_obj::__CreateEmpty() { return  new Group_obj; }
hx::ObjectPtr< Group_obj > Group_obj::__new()
{  hx::ObjectPtr< Group_obj > result = new Group_obj();
	result->__construct();
	return result;}

Dynamic Group_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Group_obj > result = new Group_obj();
	result->__construct();
	return result;}

::format::svg::Group Group_obj::findGroup( ::String inName){
	HX_STACK_PUSH("Group::findGroup","format/svg/Group.hx",14);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::format::svg::DisplayElement > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		while(((_g < _g1->length))){
			HX_STACK_LINE(15)
			::format::svg::DisplayElement child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(15)
			++(_g);
			HX_STACK_LINE(16)
			{
				::format::svg::DisplayElement _switch_1 = (child);
				switch((_switch_1)->GetIndex()){
					case 1: {
						::format::svg::Group group = _switch_1->__Param(0);
{
							HX_STACK_LINE(18)
							if (((group->name == inName))){
								HX_STACK_LINE(20)
								return group;
							}
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
	HX_STACK_LINE(23)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,findGroup,return )

bool Group_obj::hasGroup( ::String inName){
	HX_STACK_PUSH("Group::hasGroup","format/svg/Group.hx",12);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(12)
	return (this->findGroup(inName) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,hasGroup,return )


Group_obj::Group_obj()
{
}

void Group_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Group);
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Group_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Group_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"hasGroup") ) { return hasGroup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findGroup") ) { return findGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Group_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::format::svg::DisplayElement > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Group_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("children"),
	HX_CSTRING("name"),
	HX_CSTRING("findGroup"),
	HX_CSTRING("hasGroup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Group_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Group_obj::__mClass,"__mClass");
};

Class Group_obj::__mClass;

void Group_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.Group"), hx::TCanCast< Group_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Group_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
