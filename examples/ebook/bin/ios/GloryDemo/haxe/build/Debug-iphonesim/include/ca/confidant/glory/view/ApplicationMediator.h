#ifndef INCLUDED_ca_confidant_glory_view_ApplicationMediator
#define INCLUDED_ca_confidant_glory_view_ApplicationMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS3(ca,confidant,glory,GloryFrameworkApp)
HX_DECLARE_CLASS4(ca,confidant,glory,model,LoaderProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,model,PagesConfigProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,view,ApplicationMediator)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace view{


class ApplicationMediator_obj : public ::org::puremvc::haxe::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::mediator::Mediator_obj super;
		typedef ApplicationMediator_obj OBJ_;
		ApplicationMediator_obj();
		Void __construct(::ca::confidant::glory::GloryFrameworkApp viewComponent);

	public:
		static hx::ObjectPtr< ApplicationMediator_obj > __new(::ca::confidant::glory::GloryFrameworkApp viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ApplicationMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ApplicationMediator"); }

		virtual ::ca::confidant::glory::GloryFrameworkApp getApp( );
		Dynamic getApp_dyn();

		virtual Void handleNotification( ::org::puremvc::haxe::interfaces::INotification note);

		virtual int getIndex( ::native::display::DisplayObject d);
		Dynamic getIndex_dyn();

		virtual Void reportLayers( );
		Dynamic reportLayers_dyn();

		virtual Void removeDisplayObject( ::native::display::DisplayObject d);
		Dynamic removeDisplayObject_dyn();

		virtual Void addDisplayObject( ::native::display::DisplayObject d,hx::Null< int >  level);
		Dynamic addDisplayObject_dyn();

		virtual Array< ::String > listNotificationInterests( );

		::ca::confidant::glory::model::PagesConfigProxy pagesConfigProxy; /* REM */ 
		::ca::confidant::glory::model::LoaderProxy loaderProxy; /* REM */ 
		static ::String NAME; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view

#endif /* INCLUDED_ca_confidant_glory_view_ApplicationMediator */ 
