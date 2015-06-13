#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#define INCLUDED_ca_confidant_glory_model_PagesConfigProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(ca,confidant,glory,model,PagesConfigProxy)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace model{


class PagesConfigProxy_obj : public ::org::puremvc::haxe::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::proxy::Proxy_obj super;
		typedef PagesConfigProxy_obj OBJ_;
		PagesConfigProxy_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PagesConfigProxy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PagesConfigProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PagesConfigProxy"); }

		virtual ::Xml pagesXML( );
		Dynamic pagesXML_dyn();

		virtual Dynamic getConfigXML( int i);
		Dynamic getConfigXML_dyn();

		virtual Void parseXML( );
		Dynamic parseXML_dyn();

		virtual int numpages( );
		Dynamic numpages_dyn();

		virtual Dynamic getPosition( int i);
		Dynamic getPosition_dyn();

		virtual ::Hash getPage( ::String pageId);
		Dynamic getPage_dyn();

		virtual ::String getActorHref( ::String controlId);
		Dynamic getActorHref_dyn();

		virtual ::String getControlHref( ::String controlId);
		Dynamic getControlHref_dyn();

		virtual ::List getAppControls( );
		Dynamic getAppControls_dyn();

		virtual ::List getPageActors( ::String pageId);
		Dynamic getPageActors_dyn();

		virtual ::String getBackground( ::String pageId);
		Dynamic getBackground_dyn();

		virtual ::Hash getPreviousPage( );
		Dynamic getPreviousPage_dyn();

		virtual ::Hash getNextPage( );
		Dynamic getNextPage_dyn();

		virtual ::Hash getPageById( ::String id);
		Dynamic getPageById_dyn();

		virtual Void setCurrentPageById( ::String id);
		Dynamic setCurrentPageById_dyn();

		virtual ::Hash getCurrentPage( );
		Dynamic getCurrentPage_dyn();

		virtual Void loadXML( ::String rawXML);
		Dynamic loadXML_dyn();

		int currentPage; /* REM */ 
		::String chosenLayout; /* REM */ 
		Dynamic chosenpages; /* REM */ 
		Dynamic randomPositions; /* REM */ 
		Array< ::Hash > positions; /* REM */ 
		Dynamic randomPicks; /* REM */ 
		Dynamic imageItems; /* REM */ 
		Array< ::Hash > allPages; /* REM */ 
		::haxe::xml::Fast fast; /* REM */ 
		::Xml _pagesXML; /* REM */ 
		static ::String NAME; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model

#endif /* INCLUDED_ca_confidant_glory_model_PagesConfigProxy */ 
