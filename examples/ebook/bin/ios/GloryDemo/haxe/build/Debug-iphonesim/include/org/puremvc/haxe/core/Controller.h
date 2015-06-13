#ifndef INCLUDED_org_puremvc_haxe_core_Controller
#define INCLUDED_org_puremvc_haxe_core_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/IController.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(org,puremvc,haxe,core,Controller)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IController)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IView)
namespace org{
namespace puremvc{
namespace haxe{
namespace core{


class Controller_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Controller_obj OBJ_;
		Controller_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Controller_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Controller_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::IController_obj *()
			{ return new ::org::puremvc::haxe::interfaces::IController_delegate_< Controller_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Controller"); }

		::Hash commandMap; /* REM */ 
		::org::puremvc::haxe::interfaces::IView view; /* REM */ 
		virtual Void removeCommand( ::String notificationName);
		Dynamic removeCommand_dyn();

		virtual bool hasCommand( ::String notificationName);
		Dynamic hasCommand_dyn();

		virtual Void registerCommand( ::String notificationName,::Class commandClassRef);
		Dynamic registerCommand_dyn();

		virtual Void executeCommand( ::org::puremvc::haxe::interfaces::INotification note);
		Dynamic executeCommand_dyn();

		virtual Void initializeController( );
		Dynamic initializeController_dyn();

		static ::org::puremvc::haxe::interfaces::IController getInstance( );
		static Dynamic getInstance_dyn();

		static ::org::puremvc::haxe::interfaces::IController instance; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace core

#endif /* INCLUDED_org_puremvc_haxe_core_Controller */ 
