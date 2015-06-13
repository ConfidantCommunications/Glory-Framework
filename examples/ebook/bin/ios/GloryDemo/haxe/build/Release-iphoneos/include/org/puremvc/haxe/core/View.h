#ifndef INCLUDED_org_puremvc_haxe_core_View
#define INCLUDED_org_puremvc_haxe_core_View

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/IView.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(org,puremvc,haxe,core,View)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IObserver)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IView)
namespace org{
namespace puremvc{
namespace haxe{
namespace core{


class View_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef View_obj OBJ_;
		View_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< View_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~View_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IView_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IView_delegate_< View_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("View"); }

		::Hash observerMap; /* REM */ 
		::Hash mediatorMap; /* REM */ 
		virtual bool hasMediator( ::String mediatorName);
		Dynamic hasMediator_dyn();

		virtual ::org::puremvc::haxe::interfaces::IMediator removeMediator( ::String mediatorName);
		Dynamic removeMediator_dyn();

		virtual ::org::puremvc::haxe::interfaces::IMediator retrieveMediator( ::String mediatorName);
		Dynamic retrieveMediator_dyn();

		virtual Void registerMediator( ::org::puremvc::haxe::interfaces::IMediator mediator);
		Dynamic registerMediator_dyn();

		virtual Void removeObserver( ::String notificationName,Dynamic notifyContext);
		Dynamic removeObserver_dyn();

		virtual Void notifyObservers( ::org::puremvc::haxe::interfaces::INotification notification);
		Dynamic notifyObservers_dyn();

		virtual Void registerObserver( ::String notificationName,::org::puremvc::haxe::interfaces::IObserver observer);
		Dynamic registerObserver_dyn();

		virtual Void initializeView( );
		Dynamic initializeView_dyn();

		static ::org::puremvc::haxe::interfaces::IView getInstance( );
		static Dynamic getInstance_dyn();

		static ::org::puremvc::haxe::interfaces::IView instance; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace core

#endif /* INCLUDED_org_puremvc_haxe_core_View */ 
