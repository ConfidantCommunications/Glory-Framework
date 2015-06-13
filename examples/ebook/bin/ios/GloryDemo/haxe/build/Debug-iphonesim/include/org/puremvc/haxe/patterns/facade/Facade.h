#ifndef INCLUDED_org_puremvc_haxe_patterns_facade_Facade
#define INCLUDED_org_puremvc_haxe_patterns_facade_Facade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/IFacade.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IController)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IFacade)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IModel)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IView)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,facade,Facade)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace facade{


class Facade_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Facade_obj OBJ_;
		Facade_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Facade_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Facade_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IFacade_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IFacade_delegate_< Facade_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Facade"); }

		::org::puremvc::haxe::interfaces::IView view; /* REM */ 
		::org::puremvc::haxe::interfaces::IModel model; /* REM */ 
		::org::puremvc::haxe::interfaces::IController controller; /* REM */ 
		virtual Void notifyObservers( ::org::puremvc::haxe::interfaces::INotification notification);
		Dynamic notifyObservers_dyn();

		virtual Void sendNotification( ::String notificationName,Dynamic body,::String type);
		Dynamic sendNotification_dyn();

		virtual bool hasMediator( ::String mediatorName);
		Dynamic hasMediator_dyn();

		virtual ::org::puremvc::haxe::interfaces::IMediator removeMediator( ::String mediatorName);
		Dynamic removeMediator_dyn();

		virtual ::org::puremvc::haxe::interfaces::IMediator retrieveMediator( ::String mediatorName);
		Dynamic retrieveMediator_dyn();

		virtual Void registerMediator( ::org::puremvc::haxe::interfaces::IMediator mediator);
		Dynamic registerMediator_dyn();

		virtual bool hasProxy( ::String proxyName);
		Dynamic hasProxy_dyn();

		virtual ::org::puremvc::haxe::interfaces::IProxy removeProxy( ::String proxyName);
		Dynamic removeProxy_dyn();

		virtual ::org::puremvc::haxe::interfaces::IProxy retrieveProxy( ::String proxyName);
		Dynamic retrieveProxy_dyn();

		virtual Void registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy);
		Dynamic registerProxy_dyn();

		virtual bool hasCommand( ::String notificationName);
		Dynamic hasCommand_dyn();

		virtual Void removeCommand( ::String notificationName);
		Dynamic removeCommand_dyn();

		virtual Void registerCommand( ::String notificationName,::Class commandClassRef);
		Dynamic registerCommand_dyn();

		virtual Void initializeView( );
		Dynamic initializeView_dyn();

		virtual Void initializeModel( );
		Dynamic initializeModel_dyn();

		virtual Void initializeController( );
		Dynamic initializeController_dyn();

		virtual Void initializeFacade( );
		Dynamic initializeFacade_dyn();

		static ::org::puremvc::haxe::interfaces::IFacade getInstance( );
		static Dynamic getInstance_dyn();

		static ::org::puremvc::haxe::interfaces::IFacade instance; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace facade

#endif /* INCLUDED_org_puremvc_haxe_patterns_facade_Facade */ 
