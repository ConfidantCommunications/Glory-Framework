#ifndef INCLUDED_ca_confidant_glory_controller_RemovePageCommand
#define INCLUDED_ca_confidant_glory_controller_RemovePageCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
HX_DECLARE_CLASS4(ca,confidant,glory,controller,RemovePageCommand)
HX_DECLARE_CLASS4(ca,confidant,glory,model,ControlsRegistryProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,model,PagesConfigProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,view,ApplicationMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IMediator)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,command,SimpleCommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,mediator,Mediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,proxy,Proxy)
namespace ca{
namespace confidant{
namespace glory{
namespace controller{


class RemovePageCommand_obj : public ::org::puremvc::haxe::patterns::command::SimpleCommand_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::command::SimpleCommand_obj super;
		typedef RemovePageCommand_obj OBJ_;
		RemovePageCommand_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RemovePageCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RemovePageCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RemovePageCommand"); }

		virtual Void execute( ::org::puremvc::haxe::interfaces::INotification note);

		::ca::confidant::glory::model::ControlsRegistryProxy crp; /* REM */ 
		::ca::confidant::glory::view::ApplicationMediator appMediator; /* REM */ 
		::ca::confidant::glory::model::PagesConfigProxy pcp; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller

#endif /* INCLUDED_ca_confidant_glory_controller_RemovePageCommand */ 
