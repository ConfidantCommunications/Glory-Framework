#ifndef INCLUDED_ca_confidant_glory_controller_BuildPageCommand
#define INCLUDED_ca_confidant_glory_controller_BuildPageCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
HX_DECLARE_CLASS4(ca,confidant,glory,controller,BuildPageCommand)
HX_DECLARE_CLASS4(ca,confidant,glory,model,LoaderProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,model,PagesConfigProxy)
HX_DECLARE_CLASS4(ca,confidant,glory,view,ApplicationMediator)
HX_DECLARE_CLASS5(ca,confidant,glory,view,components,ActorComponent)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
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


class BuildPageCommand_obj : public ::org::puremvc::haxe::patterns::command::SimpleCommand_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::command::SimpleCommand_obj super;
		typedef BuildPageCommand_obj OBJ_;
		BuildPageCommand_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BuildPageCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BuildPageCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BuildPageCommand"); }

		virtual ::ca::confidant::glory::view::components::ActorComponent makeActor( ::haxe::xml::Fast actor);
		Dynamic makeActor_dyn();

		virtual Void execute( ::org::puremvc::haxe::interfaces::INotification note);

		::ca::confidant::glory::model::LoaderProxy lp; /* REM */ 
		::ca::confidant::glory::view::ApplicationMediator appMediator; /* REM */ 
		::ca::confidant::glory::model::PagesConfigProxy pcp; /* REM */ 
};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller

#endif /* INCLUDED_ca_confidant_glory_controller_BuildPageCommand */ 
