#include <hxcpp.h>

#include <sys/io/Process.h>
#include <sys/io/_Process/Stdout.h>
#include <sys/io/_Process/Stdin.h>
#include <sys/io/FileSeek.h>
#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <sys/_FileSystem/FileKind.h>
#include <pages/Psvg.h>
#include <org/puremvc/haxe/patterns/observer/Observer.h>
#include <org/puremvc/haxe/patterns/observer/Notification.h>
#include <org/puremvc/haxe/interfaces/IObserver.h>
#include <org/puremvc/haxe/interfaces/INotification.h>
#include <org/puremvc/haxe/core/View.h>
#include <org/puremvc/haxe/interfaces/IView.h>
#include <org/puremvc/haxe/core/Model.h>
#include <org/puremvc/haxe/interfaces/IModel.h>
#include <org/puremvc/haxe/core/Controller.h>
#include <org/puremvc/haxe/interfaces/IController.h>
#include <nme/installer/Assets.h>
#include <nme/Lib.h>
#include <neash/utils/WeakRef.h>
#include <neash/utils/Endian.h>
#include <neash/utils/ByteArray.h>
#include <neash/utils/IDataInput.h>
#include <neash/text/FontType.h>
#include <neash/text/FontStyle.h>
#include <neash/text/Font.h>
#include <neash/net/URLVariables.h>
#include <neash/net/URLRequestMethod.h>
#include <neash/net/URLRequestHeader.h>
#include <neash/net/URLRequest.h>
#include <neash/net/URLLoaderDataFormat.h>
#include <neash/net/URLLoader.h>
#include <neash/media/SoundTransform.h>
#include <neash/media/SoundLoaderContext.h>
#include <neash/media/SoundChannel.h>
#include <neash/media/Sound.h>
#include <neash/media/ID3Info.h>
#include <neash/geom/Transform.h>
#include <neash/geom/Rectangle.h>
#include <neash/geom/Point.h>
#include <neash/geom/Matrix.h>
#include <neash/geom/ColorTransform.h>
#include <neash/filters/BitmapFilter.h>
#include <neash/events/SampleDataEvent.h>
#include <neash/events/ProgressEvent.h>
#include <neash/events/KeyboardEvent.h>
#include <neash/events/JoystickEvent.h>
#include <neash/events/IOErrorEvent.h>
#include <neash/events/HTTPStatusEvent.h>
#include <neash/events/FocusEvent.h>
#include <neash/events/EventPhase.h>
#include <neash/events/Listener.h>
#include <neash/events/ErrorEvent.h>
#include <neash/events/TextEvent.h>
#include <neash/errors/RangeError.h>
#include <neash/errors/EOFError.h>
#include <neash/errors/ArgumentError.h>
#include <neash/errors/Error.h>
#include <neash/display/TriangleCulling.h>
#include <neash/display/Tilesheet.h>
#include <neash/display/StageScaleMode.h>
#include <neash/display/StageQuality.h>
#include <neash/display/StageDisplayState.h>
#include <neash/display/StageAlign.h>
#include <neash/display/TouchInfo.h>
#include <neash/display/Shape.h>
#include <neash/display/PixelSnapping.h>
#include <neash/display/MovieClip.h>
#include <neash/display/ManagedStage.h>
#include <neash/display/Stage.h>
#include <neash/events/TouchEvent.h>
#include <neash/events/MouseEvent.h>
#include <neash/events/Event.h>
#include <neash/display/IGraphicsData.h>
#include <neash/display/GraphicsPathWinding.h>
#include <neash/display/Graphics.h>
#include <neash/display/GradientType.h>
#include <neash/display/BlendMode.h>
#include <neash/display/BitmapDataChannel.h>
#include <neash/display/OptimizedPerlin.h>
#include <neash/display/BitmapData.h>
#include <neash/display/Bitmap.h>
#include <neash/Lib.h>
#include <haxe/xml/Fast.h>
#include <haxe/xml/_Fast/NodeListAccess.h>
#include <haxe/xml/_Fast/HasNodeAccess.h>
#include <haxe/xml/_Fast/HasAttribAccess.h>
#include <haxe/xml/_Fast/AttribAccess.h>
#include <haxe/xml/_Fast/NodeAccess.h>
#include <haxe/io/Output.h>
#include <haxe/io/Input.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Bytes.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <haxe/BaseCode.h>
#include <format/svg/Text.h>
#include <format/svg/SVGRenderer.h>
#include <format/svg/SVGData.h>
#include <format/svg/RenderContext.h>
#include <format/svg/ArcSegment.h>
#include <format/svg/CubicSegment.h>
#include <format/svg/QuadraticSegment.h>
#include <format/svg/DrawSegment.h>
#include <format/svg/MoveSegment.h>
#include <format/svg/PathSegment.h>
#include <format/svg/PathParser.h>
#include <format/svg/Path.h>
#include <format/svg/DisplayElement.h>
#include <format/svg/Group.h>
#include <format/svg/Grad.h>
#include <format/svg/FillType.h>
#include <format/gfx/LineStyle.h>
#include <format/gfx/Gradient.h>
#include <format/gfx/GfxTextFinder.h>
#include <format/gfx/GfxGraphics.h>
#include <format/gfx/GfxExtent.h>
#include <format/gfx/GfxBytes.h>
#include <neash/display/SpreadMethod.h>
#include <neash/display/LineScaleMode.h>
#include <neash/display/JointStyle.h>
#include <neash/display/InterpolationMethod.h>
#include <neash/display/CapsStyle.h>
#include <format/gfx/Gfx2Haxe.h>
#include <format/gfx/Gfx.h>
#include <format/SVG.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <ca/confidant/glory/view/constants/ControlConstants.h>
#include <ca/confidant/glory/view/components/PageComponent.h>
#include <ca/confidant/glory/view/components/ControlComponent.h>
#include <ca/confidant/glory/view/components/ActorComponent.h>
#include <ca/confidant/glory/view/PageMediator.h>
#include <ca/confidant/glory/view/ControlComponentMediator.h>
#include <ca/confidant/glory/view/ApplicationMediator.h>
#include <ca/confidant/glory/view/ActorComponentMediator.h>
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
#include <org/puremvc/haxe/interfaces/IMediator.h>
#include <ca/confidant/glory/model/TickerProxy.h>
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#include <ca/confidant/glory/model/LoaderProxy.h>
#include <ca/confidant/glory/model/ControlsRegistryProxy.h>
#include <ca/confidant/glory/model/ActorComponentConfigProxy.h>
#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
#include <org/puremvc/haxe/interfaces/IProxy.h>
#include <ca/confidant/glory/controller/TimerEnableCommand.h>
#include <ca/confidant/glory/controller/TimerDisableCommand.h>
#include <ca/confidant/glory/controller/StartupCommand.h>
#include <org/puremvc/haxe/patterns/command/MacroCommand.h>
#include <ca/confidant/glory/controller/Startup2_Proxies_Command.h>
#include <ca/confidant/glory/controller/Startup1_App_Command.h>
#include <ca/confidant/glory/controller/Startup0_RegCommands_Command.h>
#include <ca/confidant/glory/controller/RemovePageCommand.h>
#include <ca/confidant/glory/controller/HandleAssetsLoadedCommand.h>
#include <ca/confidant/glory/controller/GotoIntroCommand.h>
#include <ca/confidant/glory/controller/ChangePageCommand.h>
#include <ca/confidant/glory/controller/BuildPageCommand.h>
#include <ca/confidant/glory/controller/BuildControlsCommand.h>
#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
#include <org/puremvc/haxe/interfaces/ICommand.h>
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#include <org/puremvc/haxe/interfaces/INotifier.h>
#include <ca/confidant/glory/Tracer.h>
#include <ca/confidant/glory/ApplicationFacade.h>
#include <org/puremvc/haxe/patterns/facade/Facade.h>
#include <org/puremvc/haxe/interfaces/IFacade.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <Sys.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <Main.h>
#include <ca/confidant/glory/GloryFrameworkApp.h>
#include <neash/display/Sprite.h>
#include <neash/display/DisplayObjectContainer.h>
#include <neash/display/InteractiveObject.h>
#include <neash/display/DisplayObject.h>
#include <neash/Loader.h>
#include <neash/display/IBitmapDrawable.h>
#include <neash/events/EventDispatcher.h>
#include <neash/events/IEventDispatcher.h>
#include <List.h>
#include <IntIter.h>
#include <IntHash.h>
#include <Hash.h>
#include <EReg.h>
#include <cpp/Lib.h>
#include <Date.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::sys::io::Process_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::sys::io::FileSeek_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::sys::_FileSystem::FileKind_obj::__register();
::pages::Psvg_obj::__register();
::org::puremvc::haxe::patterns::observer::Observer_obj::__register();
::org::puremvc::haxe::patterns::observer::Notification_obj::__register();
::org::puremvc::haxe::interfaces::IObserver_obj::__register();
::org::puremvc::haxe::interfaces::INotification_obj::__register();
::org::puremvc::haxe::core::View_obj::__register();
::org::puremvc::haxe::interfaces::IView_obj::__register();
::org::puremvc::haxe::core::Model_obj::__register();
::org::puremvc::haxe::interfaces::IModel_obj::__register();
::org::puremvc::haxe::core::Controller_obj::__register();
::org::puremvc::haxe::interfaces::IController_obj::__register();
::nme::installer::Assets_obj::__register();
::nme::Lib_obj::__register();
::neash::utils::WeakRef_obj::__register();
::neash::utils::Endian_obj::__register();
::neash::utils::ByteArray_obj::__register();
::neash::utils::IDataInput_obj::__register();
::neash::text::FontType_obj::__register();
::neash::text::FontStyle_obj::__register();
::neash::text::Font_obj::__register();
::neash::net::URLVariables_obj::__register();
::neash::net::URLRequestMethod_obj::__register();
::neash::net::URLRequestHeader_obj::__register();
::neash::net::URLRequest_obj::__register();
::neash::net::URLLoaderDataFormat_obj::__register();
::neash::net::URLLoader_obj::__register();
::neash::media::SoundTransform_obj::__register();
::neash::media::SoundLoaderContext_obj::__register();
::neash::media::SoundChannel_obj::__register();
::neash::media::Sound_obj::__register();
::neash::media::ID3Info_obj::__register();
::neash::geom::Transform_obj::__register();
::neash::geom::Rectangle_obj::__register();
::neash::geom::Point_obj::__register();
::neash::geom::Matrix_obj::__register();
::neash::geom::ColorTransform_obj::__register();
::neash::filters::BitmapFilter_obj::__register();
::neash::events::SampleDataEvent_obj::__register();
::neash::events::ProgressEvent_obj::__register();
::neash::events::KeyboardEvent_obj::__register();
::neash::events::JoystickEvent_obj::__register();
::neash::events::IOErrorEvent_obj::__register();
::neash::events::HTTPStatusEvent_obj::__register();
::neash::events::FocusEvent_obj::__register();
::neash::events::EventPhase_obj::__register();
::neash::events::Listener_obj::__register();
::neash::events::ErrorEvent_obj::__register();
::neash::events::TextEvent_obj::__register();
::neash::errors::RangeError_obj::__register();
::neash::errors::EOFError_obj::__register();
::neash::errors::ArgumentError_obj::__register();
::neash::errors::Error_obj::__register();
::neash::display::TriangleCulling_obj::__register();
::neash::display::Tilesheet_obj::__register();
::neash::display::StageScaleMode_obj::__register();
::neash::display::StageQuality_obj::__register();
::neash::display::StageDisplayState_obj::__register();
::neash::display::StageAlign_obj::__register();
::neash::display::TouchInfo_obj::__register();
::neash::display::Shape_obj::__register();
::neash::display::PixelSnapping_obj::__register();
::neash::display::MovieClip_obj::__register();
::neash::display::ManagedStage_obj::__register();
::neash::display::Stage_obj::__register();
::neash::events::TouchEvent_obj::__register();
::neash::events::MouseEvent_obj::__register();
::neash::events::Event_obj::__register();
::neash::display::IGraphicsData_obj::__register();
::neash::display::GraphicsPathWinding_obj::__register();
::neash::display::Graphics_obj::__register();
::neash::display::GradientType_obj::__register();
::neash::display::BlendMode_obj::__register();
::neash::display::BitmapDataChannel_obj::__register();
::neash::display::OptimizedPerlin_obj::__register();
::neash::display::BitmapData_obj::__register();
::neash::display::Bitmap_obj::__register();
::neash::Lib_obj::__register();
::haxe::xml::Fast_obj::__register();
::haxe::xml::_Fast::NodeListAccess_obj::__register();
::haxe::xml::_Fast::HasNodeAccess_obj::__register();
::haxe::xml::_Fast::HasAttribAccess_obj::__register();
::haxe::xml::_Fast::AttribAccess_obj::__register();
::haxe::xml::_Fast::NodeAccess_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::haxe::BaseCode_obj::__register();
::format::svg::Text_obj::__register();
::format::svg::SVGRenderer_obj::__register();
::format::svg::SVGData_obj::__register();
::format::svg::RenderContext_obj::__register();
::format::svg::ArcSegment_obj::__register();
::format::svg::CubicSegment_obj::__register();
::format::svg::QuadraticSegment_obj::__register();
::format::svg::DrawSegment_obj::__register();
::format::svg::MoveSegment_obj::__register();
::format::svg::PathSegment_obj::__register();
::format::svg::PathParser_obj::__register();
::format::svg::Path_obj::__register();
::format::svg::DisplayElement_obj::__register();
::format::svg::Group_obj::__register();
::format::svg::Grad_obj::__register();
::format::svg::FillType_obj::__register();
::format::gfx::LineStyle_obj::__register();
::format::gfx::Gradient_obj::__register();
::format::gfx::GfxTextFinder_obj::__register();
::format::gfx::GfxGraphics_obj::__register();
::format::gfx::GfxExtent_obj::__register();
::format::gfx::GfxBytes_obj::__register();
::neash::display::SpreadMethod_obj::__register();
::neash::display::LineScaleMode_obj::__register();
::neash::display::JointStyle_obj::__register();
::neash::display::InterpolationMethod_obj::__register();
::neash::display::CapsStyle_obj::__register();
::format::gfx::Gfx2Haxe_obj::__register();
::format::gfx::Gfx_obj::__register();
::format::SVG_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::ca::confidant::glory::view::constants::ControlConstants_obj::__register();
::ca::confidant::glory::view::components::PageComponent_obj::__register();
::ca::confidant::glory::view::components::ControlComponent_obj::__register();
::ca::confidant::glory::view::components::ActorComponent_obj::__register();
::ca::confidant::glory::view::PageMediator_obj::__register();
::ca::confidant::glory::view::ControlComponentMediator_obj::__register();
::ca::confidant::glory::view::ApplicationMediator_obj::__register();
::ca::confidant::glory::view::ActorComponentMediator_obj::__register();
::org::puremvc::haxe::patterns::mediator::Mediator_obj::__register();
::org::puremvc::haxe::interfaces::IMediator_obj::__register();
::ca::confidant::glory::model::TickerProxy_obj::__register();
::ca::confidant::glory::model::PagesConfigProxy_obj::__register();
::ca::confidant::glory::model::LoaderProxy_obj::__register();
::ca::confidant::glory::model::ControlsRegistryProxy_obj::__register();
::ca::confidant::glory::model::ActorComponentConfigProxy_obj::__register();
::org::puremvc::haxe::patterns::proxy::Proxy_obj::__register();
::org::puremvc::haxe::interfaces::IProxy_obj::__register();
::ca::confidant::glory::controller::TimerEnableCommand_obj::__register();
::ca::confidant::glory::controller::TimerDisableCommand_obj::__register();
::ca::confidant::glory::controller::StartupCommand_obj::__register();
::org::puremvc::haxe::patterns::command::MacroCommand_obj::__register();
::ca::confidant::glory::controller::Startup2_Proxies_Command_obj::__register();
::ca::confidant::glory::controller::Startup1_App_Command_obj::__register();
::ca::confidant::glory::controller::Startup0_RegCommands_Command_obj::__register();
::ca::confidant::glory::controller::RemovePageCommand_obj::__register();
::ca::confidant::glory::controller::HandleAssetsLoadedCommand_obj::__register();
::ca::confidant::glory::controller::GotoIntroCommand_obj::__register();
::ca::confidant::glory::controller::ChangePageCommand_obj::__register();
::ca::confidant::glory::controller::BuildPageCommand_obj::__register();
::ca::confidant::glory::controller::BuildControlsCommand_obj::__register();
::org::puremvc::haxe::patterns::command::SimpleCommand_obj::__register();
::org::puremvc::haxe::interfaces::ICommand_obj::__register();
::org::puremvc::haxe::patterns::observer::Notifier_obj::__register();
::org::puremvc::haxe::interfaces::INotifier_obj::__register();
::ca::confidant::glory::Tracer_obj::__register();
::ca::confidant::glory::ApplicationFacade_obj::__register();
::org::puremvc::haxe::patterns::facade::Facade_obj::__register();
::org::puremvc::haxe::interfaces::IFacade_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::Main_obj::__register();
::ca::confidant::glory::GloryFrameworkApp_obj::__register();
::neash::display::Sprite_obj::__register();
::neash::display::DisplayObjectContainer_obj::__register();
::neash::display::InteractiveObject_obj::__register();
::neash::display::DisplayObject_obj::__register();
::neash::Loader_obj::__register();
::neash::display::IBitmapDrawable_obj::__register();
::neash::events::EventDispatcher_obj::__register();
::neash::events::IEventDispatcher_obj::__register();
::List_obj::__register();
::IntIter_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::Date_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::neash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::Date_obj::__boot();
::Hash_obj::__boot();
::IntHash_obj::__boot();
::IntIter_obj::__boot();
::List_obj::__boot();
::neash::events::IEventDispatcher_obj::__boot();
::neash::events::EventDispatcher_obj::__boot();
::neash::display::IBitmapDrawable_obj::__boot();
::neash::Loader_obj::__boot();
::neash::display::DisplayObject_obj::__boot();
::neash::display::InteractiveObject_obj::__boot();
::neash::display::DisplayObjectContainer_obj::__boot();
::neash::display::Sprite_obj::__boot();
::ca::confidant::glory::GloryFrameworkApp_obj::__boot();
::Main_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::org::puremvc::haxe::interfaces::IFacade_obj::__boot();
::org::puremvc::haxe::patterns::facade::Facade_obj::__boot();
::ca::confidant::glory::ApplicationFacade_obj::__boot();
::ca::confidant::glory::Tracer_obj::__boot();
::org::puremvc::haxe::interfaces::INotifier_obj::__boot();
::org::puremvc::haxe::patterns::observer::Notifier_obj::__boot();
::org::puremvc::haxe::interfaces::ICommand_obj::__boot();
::org::puremvc::haxe::patterns::command::SimpleCommand_obj::__boot();
::ca::confidant::glory::controller::BuildControlsCommand_obj::__boot();
::ca::confidant::glory::controller::BuildPageCommand_obj::__boot();
::ca::confidant::glory::controller::ChangePageCommand_obj::__boot();
::ca::confidant::glory::controller::GotoIntroCommand_obj::__boot();
::ca::confidant::glory::controller::HandleAssetsLoadedCommand_obj::__boot();
::ca::confidant::glory::controller::RemovePageCommand_obj::__boot();
::ca::confidant::glory::controller::Startup0_RegCommands_Command_obj::__boot();
::ca::confidant::glory::controller::Startup1_App_Command_obj::__boot();
::ca::confidant::glory::controller::Startup2_Proxies_Command_obj::__boot();
::org::puremvc::haxe::patterns::command::MacroCommand_obj::__boot();
::ca::confidant::glory::controller::StartupCommand_obj::__boot();
::ca::confidant::glory::controller::TimerDisableCommand_obj::__boot();
::ca::confidant::glory::controller::TimerEnableCommand_obj::__boot();
::org::puremvc::haxe::interfaces::IProxy_obj::__boot();
::org::puremvc::haxe::patterns::proxy::Proxy_obj::__boot();
::ca::confidant::glory::model::ActorComponentConfigProxy_obj::__boot();
::ca::confidant::glory::model::ControlsRegistryProxy_obj::__boot();
::ca::confidant::glory::model::LoaderProxy_obj::__boot();
::ca::confidant::glory::model::PagesConfigProxy_obj::__boot();
::ca::confidant::glory::model::TickerProxy_obj::__boot();
::org::puremvc::haxe::interfaces::IMediator_obj::__boot();
::org::puremvc::haxe::patterns::mediator::Mediator_obj::__boot();
::ca::confidant::glory::view::ActorComponentMediator_obj::__boot();
::ca::confidant::glory::view::ApplicationMediator_obj::__boot();
::ca::confidant::glory::view::ControlComponentMediator_obj::__boot();
::ca::confidant::glory::view::PageMediator_obj::__boot();
::ca::confidant::glory::view::components::ActorComponent_obj::__boot();
::ca::confidant::glory::view::components::ControlComponent_obj::__boot();
::ca::confidant::glory::view::components::PageComponent_obj::__boot();
::ca::confidant::glory::view::constants::ControlConstants_obj::__boot();
::format::SVG_obj::__boot();
::format::gfx::Gfx_obj::__boot();
::format::gfx::Gfx2Haxe_obj::__boot();
::neash::display::CapsStyle_obj::__boot();
::neash::display::InterpolationMethod_obj::__boot();
::neash::display::JointStyle_obj::__boot();
::neash::display::LineScaleMode_obj::__boot();
::neash::display::SpreadMethod_obj::__boot();
::format::gfx::GfxBytes_obj::__boot();
::format::gfx::GfxExtent_obj::__boot();
::format::gfx::GfxGraphics_obj::__boot();
::format::gfx::GfxTextFinder_obj::__boot();
::format::gfx::Gradient_obj::__boot();
::format::gfx::LineStyle_obj::__boot();
::format::svg::FillType_obj::__boot();
::format::svg::Grad_obj::__boot();
::format::svg::Group_obj::__boot();
::format::svg::DisplayElement_obj::__boot();
::format::svg::Path_obj::__boot();
::format::svg::PathParser_obj::__boot();
::format::svg::PathSegment_obj::__boot();
::format::svg::MoveSegment_obj::__boot();
::format::svg::DrawSegment_obj::__boot();
::format::svg::QuadraticSegment_obj::__boot();
::format::svg::CubicSegment_obj::__boot();
::format::svg::ArcSegment_obj::__boot();
::format::svg::RenderContext_obj::__boot();
::format::svg::SVGData_obj::__boot();
::format::svg::SVGRenderer_obj::__boot();
::format::svg::Text_obj::__boot();
::haxe::BaseCode_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::io::Output_obj::__boot();
::haxe::xml::_Fast::NodeAccess_obj::__boot();
::haxe::xml::_Fast::AttribAccess_obj::__boot();
::haxe::xml::_Fast::HasAttribAccess_obj::__boot();
::haxe::xml::_Fast::HasNodeAccess_obj::__boot();
::haxe::xml::_Fast::NodeListAccess_obj::__boot();
::haxe::xml::Fast_obj::__boot();
::neash::Lib_obj::__boot();
::neash::display::Bitmap_obj::__boot();
::neash::display::BitmapData_obj::__boot();
::neash::display::OptimizedPerlin_obj::__boot();
::neash::display::BitmapDataChannel_obj::__boot();
::neash::display::BlendMode_obj::__boot();
::neash::display::GradientType_obj::__boot();
::neash::display::Graphics_obj::__boot();
::neash::display::GraphicsPathWinding_obj::__boot();
::neash::display::IGraphicsData_obj::__boot();
::neash::events::Event_obj::__boot();
::neash::events::MouseEvent_obj::__boot();
::neash::events::TouchEvent_obj::__boot();
::neash::display::Stage_obj::__boot();
::neash::display::ManagedStage_obj::__boot();
::neash::display::MovieClip_obj::__boot();
::neash::display::PixelSnapping_obj::__boot();
::neash::display::Shape_obj::__boot();
::neash::display::TouchInfo_obj::__boot();
::neash::display::StageAlign_obj::__boot();
::neash::display::StageDisplayState_obj::__boot();
::neash::display::StageQuality_obj::__boot();
::neash::display::StageScaleMode_obj::__boot();
::neash::display::Tilesheet_obj::__boot();
::neash::display::TriangleCulling_obj::__boot();
::neash::errors::Error_obj::__boot();
::neash::errors::ArgumentError_obj::__boot();
::neash::errors::EOFError_obj::__boot();
::neash::errors::RangeError_obj::__boot();
::neash::events::TextEvent_obj::__boot();
::neash::events::ErrorEvent_obj::__boot();
::neash::events::Listener_obj::__boot();
::neash::events::EventPhase_obj::__boot();
::neash::events::FocusEvent_obj::__boot();
::neash::events::HTTPStatusEvent_obj::__boot();
::neash::events::IOErrorEvent_obj::__boot();
::neash::events::JoystickEvent_obj::__boot();
::neash::events::KeyboardEvent_obj::__boot();
::neash::events::ProgressEvent_obj::__boot();
::neash::events::SampleDataEvent_obj::__boot();
::neash::filters::BitmapFilter_obj::__boot();
::neash::geom::ColorTransform_obj::__boot();
::neash::geom::Matrix_obj::__boot();
::neash::geom::Point_obj::__boot();
::neash::geom::Rectangle_obj::__boot();
::neash::geom::Transform_obj::__boot();
::neash::media::ID3Info_obj::__boot();
::neash::media::Sound_obj::__boot();
::neash::media::SoundChannel_obj::__boot();
::neash::media::SoundLoaderContext_obj::__boot();
::neash::media::SoundTransform_obj::__boot();
::neash::net::URLLoader_obj::__boot();
::neash::net::URLLoaderDataFormat_obj::__boot();
::neash::net::URLRequest_obj::__boot();
::neash::net::URLRequestHeader_obj::__boot();
::neash::net::URLRequestMethod_obj::__boot();
::neash::net::URLVariables_obj::__boot();
::neash::text::Font_obj::__boot();
::neash::text::FontStyle_obj::__boot();
::neash::text::FontType_obj::__boot();
::neash::utils::IDataInput_obj::__boot();
::neash::utils::ByteArray_obj::__boot();
::neash::utils::Endian_obj::__boot();
::neash::utils::WeakRef_obj::__boot();
::nme::Lib_obj::__boot();
::nme::installer::Assets_obj::__boot();
::org::puremvc::haxe::interfaces::IController_obj::__boot();
::org::puremvc::haxe::core::Controller_obj::__boot();
::org::puremvc::haxe::interfaces::IModel_obj::__boot();
::org::puremvc::haxe::core::Model_obj::__boot();
::org::puremvc::haxe::interfaces::IView_obj::__boot();
::org::puremvc::haxe::core::View_obj::__boot();
::org::puremvc::haxe::interfaces::INotification_obj::__boot();
::org::puremvc::haxe::interfaces::IObserver_obj::__boot();
::org::puremvc::haxe::patterns::observer::Notification_obj::__boot();
::org::puremvc::haxe::patterns::observer::Observer_obj::__boot();
::pages::Psvg_obj::__boot();
::sys::_FileSystem::FileKind_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::sys::io::FileSeek_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::sys::io::Process_obj::__boot();
}

