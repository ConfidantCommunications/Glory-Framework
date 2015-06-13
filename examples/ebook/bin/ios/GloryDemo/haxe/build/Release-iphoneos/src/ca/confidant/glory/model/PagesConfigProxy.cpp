#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy
#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace model{

Void PagesConfigProxy_obj::__construct()
{
HX_STACK_PUSH("PagesConfigProxy::new","ca/confidant/glory/model/PagesConfigProxy.hx",33);
{
	HX_STACK_LINE(33)
	super::__construct(HX_CSTRING("pagesConfigProxy"),null());
}
;
	return null();
}

PagesConfigProxy_obj::~PagesConfigProxy_obj() { }

Dynamic PagesConfigProxy_obj::__CreateEmpty() { return  new PagesConfigProxy_obj; }
hx::ObjectPtr< PagesConfigProxy_obj > PagesConfigProxy_obj::__new()
{  hx::ObjectPtr< PagesConfigProxy_obj > result = new PagesConfigProxy_obj();
	result->__construct();
	return result;}

Dynamic PagesConfigProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PagesConfigProxy_obj > result = new PagesConfigProxy_obj();
	result->__construct();
	return result;}

::Xml PagesConfigProxy_obj::pagesXML( ){
	HX_STACK_PUSH("PagesConfigProxy::pagesXML","ca/confidant/glory/model/PagesConfigProxy.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_LINE(205)
	return this->_pagesXML;
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,pagesXML,return )

Dynamic PagesConfigProxy_obj::getConfigXML( int i){
	HX_STACK_PUSH("PagesConfigProxy::getConfigXML","ca/confidant/glory/model/PagesConfigProxy.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(199)
	return this->randomPicks->__GetItem(i)->__Field(HX_CSTRING("config"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getConfigXML,return )

Void PagesConfigProxy_obj::parseXML( ){
{
		HX_STACK_PUSH("PagesConfigProxy::parseXML","ca/confidant/glory/model/PagesConfigProxy.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_LINE(169)
		this->allPages = Array_obj< ::Hash >::__new();
		HX_STACK_LINE(171)
		this->imageItems = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(175)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->fast->nodes->resolve(HX_CSTRING("page"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast thispage = __it->next();
			{
				HX_STACK_LINE(176)
				::Hash h = ::Hash_obj::__new();		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(177)
				if ((thispage->has->resolve(HX_CSTRING("id")))){
					HX_STACK_LINE(177)
					h->set(HX_CSTRING("id"),thispage->att->resolve(HX_CSTRING("id")));
				}
				HX_STACK_LINE(180)
				if ((thispage->has->resolve(HX_CSTRING("src")))){
					HX_STACK_LINE(180)
					h->set(HX_CSTRING("src"),thispage->att->resolve(HX_CSTRING("src")));
				}
				HX_STACK_LINE(181)
				if ((thispage->has->resolve(HX_CSTRING("type")))){
					HX_STACK_LINE(181)
					h->set(HX_CSTRING("type"),thispage->att->resolve(HX_CSTRING("type")));
				}
				HX_STACK_LINE(182)
				if ((thispage->hasNode->resolve(HX_CSTRING("background")))){
					HX_STACK_LINE(182)
					h->set(HX_CSTRING("background"),thispage->node->resolve(HX_CSTRING("background"))->att->resolve(HX_CSTRING("src")));
				}
				HX_STACK_LINE(183)
				if ((thispage->hasNode->resolve(HX_CSTRING("actor")))){
					HX_STACK_LINE(183)
					h->set(HX_CSTRING("actors"),thispage->nodes->resolve(HX_CSTRING("actor")));
				}
				HX_STACK_LINE(190)
				this->allPages->push(h);
			}
;
		}
		HX_STACK_LINE(195)
		this->sendNotification(HX_CSTRING("pagesConfigReady"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,parseXML,(void))

int PagesConfigProxy_obj::numpages( ){
	HX_STACK_PUSH("PagesConfigProxy::numpages","ca/confidant/glory/model/PagesConfigProxy.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	return this->allPages->length;
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,numpages,return )

Dynamic PagesConfigProxy_obj::getPosition( int i){
	HX_STACK_PUSH("PagesConfigProxy::getPosition","ca/confidant/glory/model/PagesConfigProxy.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(161)
	return this->randomPositions->__GetItem(i);
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getPosition,return )

::Hash PagesConfigProxy_obj::getPage( ::String pageId){
	HX_STACK_PUSH("PagesConfigProxy::getPage","ca/confidant/glory/model/PagesConfigProxy.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pageId,"pageId");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Hash > _g1 = this->allPages;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while(((_g < _g1->length))){
			HX_STACK_LINE(154)
			::Hash thispage = _g1->__get(_g);		HX_STACK_VAR(thispage,"thispage");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(155)
			if (((thispage->get(HX_CSTRING("id")) == pageId))){
				HX_STACK_LINE(155)
				return thispage;
			}
		}
	}
	HX_STACK_LINE(159)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getPage,return )

::String PagesConfigProxy_obj::getActorHref( ::String controlId){
	HX_STACK_PUSH("PagesConfigProxy::getActorHref","ca/confidant/glory/model/PagesConfigProxy.hx",141);
	HX_STACK_THIS(this);
	HX_STACK_ARG(controlId,"controlId");
	HX_STACK_LINE(142)
	if ((this->fast->node->resolve(HX_CSTRING("page"))->hasNode->resolve(HX_CSTRING("actor")))){
		HX_STACK_LINE(142)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->fast->node->resolve(HX_CSTRING("page"))->nodes->resolve(HX_CSTRING("actor"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node = __it->next();
			if (((node->att->resolve(HX_CSTRING("id")) == controlId))){
				HX_STACK_LINE(145)
				return node->att->resolve(HX_CSTRING("href"));
			}
;
		}
	}
	HX_STACK_LINE(151)
	return HX_CSTRING("#");
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getActorHref,return )

::String PagesConfigProxy_obj::getControlHref( ::String controlId){
	HX_STACK_PUSH("PagesConfigProxy::getControlHref","ca/confidant/glory/model/PagesConfigProxy.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(controlId,"controlId");
	HX_STACK_LINE(130)
	if ((this->fast->node->resolve(HX_CSTRING("controls"))->hasNode->resolve(HX_CSTRING("button")))){
		HX_STACK_LINE(130)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->fast->node->resolve(HX_CSTRING("controls"))->nodes->resolve(HX_CSTRING("button"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node = __it->next();
			if (((node->att->resolve(HX_CSTRING("id")) == controlId))){
				HX_STACK_LINE(133)
				return node->att->resolve(HX_CSTRING("href"));
			}
;
		}
	}
	HX_STACK_LINE(139)
	return HX_CSTRING("#");
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getControlHref,return )

::List PagesConfigProxy_obj::getAppControls( ){
	HX_STACK_PUSH("PagesConfigProxy::getAppControls","ca/confidant/glory/model/PagesConfigProxy.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_LINE(123)
	::haxe::Log_obj::trace(HX_CSTRING("getAppControls"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),123,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getAppControls")));
	HX_STACK_LINE(124)
	if ((this->fast->node->resolve(HX_CSTRING("controls"))->hasNode->resolve(HX_CSTRING("button")))){
		HX_STACK_LINE(124)
		return this->fast->node->resolve(HX_CSTRING("controls"))->nodes->resolve(HX_CSTRING("button"));
	}
	HX_STACK_LINE(127)
	return ::List_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,getAppControls,return )

::List PagesConfigProxy_obj::getPageActors( ::String pageId){
	HX_STACK_PUSH("PagesConfigProxy::getPageActors","ca/confidant/glory/model/PagesConfigProxy.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pageId,"pageId");
	HX_STACK_LINE(112)
	::Hash p = this->getPage(pageId);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(113)
	if (((bool((p != null())) && bool((p->get(HX_CSTRING("actors")) != null()))))){
		HX_STACK_LINE(114)
		::haxe::Log_obj::trace(HX_CSTRING("returning actors!"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),114,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getPageActors")));
		HX_STACK_LINE(115)
		return p->get(HX_CSTRING("actors"));
	}
	else{
		HX_STACK_LINE(118)
		::haxe::Log_obj::trace(HX_CSTRING("returning empty!"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),118,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getPageActors")));
		HX_STACK_LINE(119)
		return ::List_obj::__new();
	}
	HX_STACK_LINE(113)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getPageActors,return )

::String PagesConfigProxy_obj::getBackground( ::String pageId){
	HX_STACK_PUSH("PagesConfigProxy::getBackground","ca/confidant/glory/model/PagesConfigProxy.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pageId,"pageId");
	HX_STACK_LINE(105)
	::Hash p = this->getPage(pageId);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(106)
	if (((p != null()))){
		HX_STACK_LINE(106)
		return p->get(HX_CSTRING("background"));
	}
	HX_STACK_LINE(109)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getBackground,return )

::Hash PagesConfigProxy_obj::getPreviousPage( ){
	HX_STACK_PUSH("PagesConfigProxy::getPreviousPage","ca/confidant/glory/model/PagesConfigProxy.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(88)
	int j = (int)1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(90)
	while((((this->currentPage - j) >= (int)0))){
		HX_STACK_LINE(90)
		if (((this->allPages->__get((this->currentPage - j))->get(HX_CSTRING("type")) == HX_CSTRING("normal")))){
			HX_STACK_LINE(93)
			::haxe::Log_obj::trace(HX_CSTRING("normal"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),93,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getPreviousPage")));
			HX_STACK_LINE(94)
			return this->allPages->__get((this->currentPage - j));
		}
		else{
			HX_STACK_LINE(96)
			::haxe::Log_obj::trace(HX_CSTRING("notnormal"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),96,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getPreviousPage")));
			HX_STACK_LINE(97)
			(j)++;
		}
	}
	HX_STACK_LINE(101)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,getPreviousPage,return )

::Hash PagesConfigProxy_obj::getNextPage( ){
	HX_STACK_PUSH("PagesConfigProxy::getNextPage","ca/confidant/glory/model/PagesConfigProxy.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	int j = (int)1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(71)
	while((((this->currentPage + j) < this->allPages->length))){
		HX_STACK_LINE(71)
		if (((this->allPages->__get((this->currentPage + j))->get(HX_CSTRING("type")) == HX_CSTRING("normal")))){
			HX_STACK_LINE(74)
			::haxe::Log_obj::trace(HX_CSTRING("normal"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),74,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getNextPage")));
			HX_STACK_LINE(75)
			return this->allPages->__get((this->currentPage + j));
		}
		else{
			HX_STACK_LINE(77)
			::haxe::Log_obj::trace(HX_CSTRING("notnormal"),hx::SourceInfo(HX_CSTRING("PagesConfigProxy.hx"),77,HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"),HX_CSTRING("getNextPage")));
			HX_STACK_LINE(78)
			(j)++;
		}
	}
	HX_STACK_LINE(82)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,getNextPage,return )

::Hash PagesConfigProxy_obj::getPageById( ::String id){
	HX_STACK_PUSH("PagesConfigProxy::getPageById","ca/confidant/glory/model/PagesConfigProxy.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->allPages->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		while(((_g1 < _g))){
			HX_STACK_LINE(59)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			if (((this->allPages->__get(i)->get(HX_CSTRING("id")) == id))){
				HX_STACK_LINE(60)
				return this->allPages->__get(i);
			}
		}
	}
	HX_STACK_LINE(65)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,getPageById,return )

Void PagesConfigProxy_obj::setCurrentPageById( ::String id){
{
		HX_STACK_PUSH("PagesConfigProxy::setCurrentPageById","ca/confidant/glory/model/PagesConfigProxy.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_LINE(52)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->allPages->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		while(((_g1 < _g))){
			HX_STACK_LINE(52)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(53)
			if (((this->allPages->__get(i)->get(HX_CSTRING("id")) == id))){
				HX_STACK_LINE(53)
				this->currentPage = i;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,setCurrentPageById,(void))

::Hash PagesConfigProxy_obj::getCurrentPage( ){
	HX_STACK_PUSH("PagesConfigProxy::getCurrentPage","ca/confidant/glory/model/PagesConfigProxy.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->allPages->__get(this->currentPage);
}


HX_DEFINE_DYNAMIC_FUNC0(PagesConfigProxy_obj,getCurrentPage,return )

Void PagesConfigProxy_obj::loadXML( ::String rawXML){
{
		HX_STACK_PUSH("PagesConfigProxy::loadXML","ca/confidant/glory/model/PagesConfigProxy.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rawXML,"rawXML");
		HX_STACK_LINE(39)
		this->randomPicks = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(40)
		this->positions = Array_obj< ::Hash >::__new();
		HX_STACK_LINE(41)
		this->randomPositions = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(42)
		this->currentPage = (int)0;
		HX_STACK_LINE(43)
		this->_pagesXML = ::Xml_obj::parse(rawXML);
		HX_STACK_LINE(44)
		this->fast = ::haxe::xml::Fast_obj::__new(this->_pagesXML->firstElement());
		HX_STACK_LINE(46)
		this->parseXML();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PagesConfigProxy_obj,loadXML,(void))

::String PagesConfigProxy_obj::NAME;


PagesConfigProxy_obj::PagesConfigProxy_obj()
{
}

void PagesConfigProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PagesConfigProxy);
	HX_MARK_MEMBER_NAME(currentPage,"currentPage");
	HX_MARK_MEMBER_NAME(chosenLayout,"chosenLayout");
	HX_MARK_MEMBER_NAME(chosenpages,"chosenpages");
	HX_MARK_MEMBER_NAME(randomPositions,"randomPositions");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(randomPicks,"randomPicks");
	HX_MARK_MEMBER_NAME(imageItems,"imageItems");
	HX_MARK_MEMBER_NAME(allPages,"allPages");
	HX_MARK_MEMBER_NAME(fast,"fast");
	HX_MARK_MEMBER_NAME(_pagesXML,"_pagesXML");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PagesConfigProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentPage,"currentPage");
	HX_VISIT_MEMBER_NAME(chosenLayout,"chosenLayout");
	HX_VISIT_MEMBER_NAME(chosenpages,"chosenpages");
	HX_VISIT_MEMBER_NAME(randomPositions,"randomPositions");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(randomPicks,"randomPicks");
	HX_VISIT_MEMBER_NAME(imageItems,"imageItems");
	HX_VISIT_MEMBER_NAME(allPages,"allPages");
	HX_VISIT_MEMBER_NAME(fast,"fast");
	HX_VISIT_MEMBER_NAME(_pagesXML,"_pagesXML");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PagesConfigProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		if (HX_FIELD_EQ(inName,"fast") ) { return fast; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPage") ) { return getPage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadXML") ) { return loadXML_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pagesXML") ) { return pagesXML_dyn(); }
		if (HX_FIELD_EQ(inName,"parseXML") ) { return parseXML_dyn(); }
		if (HX_FIELD_EQ(inName,"numpages") ) { return numpages_dyn(); }
		if (HX_FIELD_EQ(inName,"allPages") ) { return allPages; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		if (HX_FIELD_EQ(inName,"_pagesXML") ) { return _pagesXML; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageItems") ) { return imageItems; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextPage") ) { return getNextPage_dyn(); }
		if (HX_FIELD_EQ(inName,"getPageById") ) { return getPageById_dyn(); }
		if (HX_FIELD_EQ(inName,"currentPage") ) { return currentPage; }
		if (HX_FIELD_EQ(inName,"chosenpages") ) { return chosenpages; }
		if (HX_FIELD_EQ(inName,"randomPicks") ) { return randomPicks; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getConfigXML") ) { return getConfigXML_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorHref") ) { return getActorHref_dyn(); }
		if (HX_FIELD_EQ(inName,"chosenLayout") ) { return chosenLayout; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getPageActors") ) { return getPageActors_dyn(); }
		if (HX_FIELD_EQ(inName,"getBackground") ) { return getBackground_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getControlHref") ) { return getControlHref_dyn(); }
		if (HX_FIELD_EQ(inName,"getAppControls") ) { return getAppControls_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentPage") ) { return getCurrentPage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getPreviousPage") ) { return getPreviousPage_dyn(); }
		if (HX_FIELD_EQ(inName,"randomPositions") ) { return randomPositions; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setCurrentPageById") ) { return setCurrentPageById_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PagesConfigProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fast") ) { fast=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allPages") ) { allPages=inValue.Cast< Array< ::Hash > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< ::Hash > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pagesXML") ) { _pagesXML=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageItems") ) { imageItems=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentPage") ) { currentPage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chosenpages") ) { chosenpages=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomPicks") ) { randomPicks=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chosenLayout") ) { chosenLayout=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"randomPositions") ) { randomPositions=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PagesConfigProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentPage"));
	outFields->push(HX_CSTRING("chosenLayout"));
	outFields->push(HX_CSTRING("chosenpages"));
	outFields->push(HX_CSTRING("randomPositions"));
	outFields->push(HX_CSTRING("positions"));
	outFields->push(HX_CSTRING("randomPicks"));
	outFields->push(HX_CSTRING("imageItems"));
	outFields->push(HX_CSTRING("allPages"));
	outFields->push(HX_CSTRING("fast"));
	outFields->push(HX_CSTRING("_pagesXML"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("pagesXML"),
	HX_CSTRING("getConfigXML"),
	HX_CSTRING("parseXML"),
	HX_CSTRING("numpages"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("getPage"),
	HX_CSTRING("getActorHref"),
	HX_CSTRING("getControlHref"),
	HX_CSTRING("getAppControls"),
	HX_CSTRING("getPageActors"),
	HX_CSTRING("getBackground"),
	HX_CSTRING("getPreviousPage"),
	HX_CSTRING("getNextPage"),
	HX_CSTRING("getPageById"),
	HX_CSTRING("setCurrentPageById"),
	HX_CSTRING("getCurrentPage"),
	HX_CSTRING("loadXML"),
	HX_CSTRING("currentPage"),
	HX_CSTRING("chosenLayout"),
	HX_CSTRING("chosenpages"),
	HX_CSTRING("randomPositions"),
	HX_CSTRING("positions"),
	HX_CSTRING("randomPicks"),
	HX_CSTRING("imageItems"),
	HX_CSTRING("allPages"),
	HX_CSTRING("fast"),
	HX_CSTRING("_pagesXML"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PagesConfigProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PagesConfigProxy_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PagesConfigProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PagesConfigProxy_obj::NAME,"NAME");
};

Class PagesConfigProxy_obj::__mClass;

void PagesConfigProxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.model.PagesConfigProxy"), hx::TCanCast< PagesConfigProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PagesConfigProxy_obj::__boot()
{
	NAME= HX_CSTRING("pagesConfigProxy");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model
