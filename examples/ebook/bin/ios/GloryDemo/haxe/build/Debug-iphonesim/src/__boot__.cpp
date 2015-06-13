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
#include <nme/VectorHelper.h>
#include <nme/Lib.h>
#include <native/utils/WeakRef.h>
#include <native/utils/Float32Array.h>
#include <native/utils/Endian.h>
#include <native/utils/CompressionAlgorithm.h>
#include <native/utils/ByteArray.h>
#include <native/utils/IDataInput.h>
#include <native/utils/ArrayBufferView.h>
#include <native/utils/IMemoryRange.h>
#include <native/text/FontType.h>
#include <native/text/FontStyle.h>
#include <native/text/Font.h>
#include <native/net/URLVariables.h>
#include <native/net/URLRequestMethod.h>
#include <native/net/URLRequestHeader.h>
#include <native/net/URLRequest.h>
#include <native/net/URLLoaderDataFormat.h>
#include <native/net/URLLoader.h>
#include <native/media/SoundTransform.h>
#include <native/media/SoundLoaderContext.h>
#include <native/media/SoundChannel.h>
#include <native/media/Sound.h>
#include <native/media/ID3Info.h>
#include <native/gl/Texture.h>
#include <native/gl/Shader.h>
#include <native/gl/Renderbuffer.h>
#include <native/gl/Program.h>
#include <native/gl/Framebuffer.h>
#include <native/gl/Buffer.h>
#include <native/gl/Object.h>
#include <native/gl/GL.h>
#include <native/geom/Vector3D.h>
#include <native/geom/Transform.h>
#include <native/geom/Rectangle.h>
#include <native/geom/Point.h>
#include <native/geom/Matrix3D.h>
#include <native/geom/Matrix.h>
#include <native/geom/ColorTransform.h>
#include <native/filters/BitmapFilter.h>
#include <native/events/SampleDataEvent.h>
#include <native/events/ProgressEvent.h>
#include <native/events/KeyboardEvent.h>
#include <native/events/JoystickEvent.h>
#include <native/events/IOErrorEvent.h>
#include <native/events/HTTPStatusEvent.h>
#include <native/events/FocusEvent.h>
#include <native/events/EventPhase.h>
#include <native/events/Listener.h>
#include <native/events/ErrorEvent.h>
#include <native/events/TextEvent.h>
#include <native/errors/RangeError.h>
#include <native/errors/EOFError.h>
#include <native/errors/ArgumentError.h>
#include <native/errors/Error.h>
#include <native/display3D/textures/Texture.h>
#include <native/display3D/textures/CubeTexture.h>
#include <native/display3D/textures/TextureBase.h>
#include <native/display3D/VertexBuffer3D.h>
#include <native/display3D/Program3D.h>
#include <native/display3D/IndexBuffer3D.h>
#include <native/display3D/Context3DVertexBufferFormat.h>
#include <native/display3D/Context3DTriangleFace.h>
#include <native/display3D/Context3DTextureFormat.h>
#include <native/display3D/Context3DStencilAction.h>
#include <native/display3D/Context3DProgramType.h>
#include <native/display3D/Context3DCompareMode.h>
#include <native/display3D/Context3DClearMask.h>
#include <native/display3D/Context3D.h>
#include <native/display/TriangleCulling.h>
#include <native/display/Tilesheet.h>
#include <native/display/StageScaleMode.h>
#include <native/display/StageQuality.h>
#include <native/display/StageDisplayState.h>
#include <native/display/StageAlign.h>
#include <native/display/Stage3D.h>
#include <native/display/TouchInfo.h>
#include <native/display/Shape.h>
#include <native/display/PixelSnapping.h>
#include <native/display/OpenGLView.h>
#include <native/display/MovieClip.h>
#include <native/display/ManagedStage.h>
#include <native/display/Stage.h>
#include <native/events/TouchEvent.h>
#include <native/events/MouseEvent.h>
#include <native/events/Event.h>
#include <native/display/IGraphicsData.h>
#include <native/display/GraphicsPathWinding.h>
#include <native/display/Graphics.h>
#include <native/display/GradientType.h>
#include <native/display/DirectRenderer.h>
#include <native/display/BlendMode.h>
#include <native/display/BitmapDataChannel.h>
#include <native/display/OptimizedPerlin.h>
#include <native/display/BitmapData.h>
#include <native/display/Bitmap.h>
#include <native/Lib.h>
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
#include <native/display/SpreadMethod.h>
#include <native/display/LineScaleMode.h>
#include <native/display/JointStyle.h>
#include <native/display/InterpolationMethod.h>
#include <native/display/CapsStyle.h>
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
#include <ca/confidant/glory/view/SoundMediator.h>
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
#include <ca/confidant/glory/controller/InitPageSoundsCommand.h>
#include <ca/confidant/glory/controller/HandleAssetsLoadedCommand.h>
#include <ca/confidant/glory/controller/GotoIntroCommand.h>
#include <ca/confidant/glory/controller/DestroyPageSoundsCommand.h>
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
#include <native/display/Sprite.h>
#include <native/display/DisplayObjectContainer.h>
#include <native/display/InteractiveObject.h>
#include <native/display/DisplayObject.h>
#include <native/Loader.h>
#include <native/display/IBitmapDrawable.h>
#include <native/events/EventDispatcher.h>
#include <native/events/IEventDispatcher.h>
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
::nme::VectorHelper_obj::__register();
::nme::Lib_obj::__register();
::native::utils::WeakRef_obj::__register();
::native::utils::Float32Array_obj::__register();
::native::utils::Endian_obj::__register();
::native::utils::CompressionAlgorithm_obj::__register();
::native::utils::ByteArray_obj::__register();
::native::utils::IDataInput_obj::__register();
::native::utils::ArrayBufferView_obj::__register();
::native::utils::IMemoryRange_obj::__register();
::native::text::FontType_obj::__register();
::native::text::FontStyle_obj::__register();
::native::text::Font_obj::__register();
::native::net::URLVariables_obj::__register();
::native::net::URLRequestMethod_obj::__register();
::native::net::URLRequestHeader_obj::__register();
::native::net::URLRequest_obj::__register();
::native::net::URLLoaderDataFormat_obj::__register();
::native::net::URLLoader_obj::__register();
::native::media::SoundTransform_obj::__register();
::native::media::SoundLoaderContext_obj::__register();
::native::media::SoundChannel_obj::__register();
::native::media::Sound_obj::__register();
::native::media::ID3Info_obj::__register();
::native::gl::Texture_obj::__register();
::native::gl::Shader_obj::__register();
::native::gl::Renderbuffer_obj::__register();
::native::gl::Program_obj::__register();
::native::gl::Framebuffer_obj::__register();
::native::gl::Buffer_obj::__register();
::native::gl::Object_obj::__register();
::native::gl::GL_obj::__register();
::native::geom::Vector3D_obj::__register();
::native::geom::Transform_obj::__register();
::native::geom::Rectangle_obj::__register();
::native::geom::Point_obj::__register();
::native::geom::Matrix3D_obj::__register();
::native::geom::Matrix_obj::__register();
::native::geom::ColorTransform_obj::__register();
::native::filters::BitmapFilter_obj::__register();
::native::events::SampleDataEvent_obj::__register();
::native::events::ProgressEvent_obj::__register();
::native::events::KeyboardEvent_obj::__register();
::native::events::JoystickEvent_obj::__register();
::native::events::IOErrorEvent_obj::__register();
::native::events::HTTPStatusEvent_obj::__register();
::native::events::FocusEvent_obj::__register();
::native::events::EventPhase_obj::__register();
::native::events::Listener_obj::__register();
::native::events::ErrorEvent_obj::__register();
::native::events::TextEvent_obj::__register();
::native::errors::RangeError_obj::__register();
::native::errors::EOFError_obj::__register();
::native::errors::ArgumentError_obj::__register();
::native::errors::Error_obj::__register();
::native::display3D::textures::Texture_obj::__register();
::native::display3D::textures::CubeTexture_obj::__register();
::native::display3D::textures::TextureBase_obj::__register();
::native::display3D::VertexBuffer3D_obj::__register();
::native::display3D::Program3D_obj::__register();
::native::display3D::IndexBuffer3D_obj::__register();
::native::display3D::Context3DVertexBufferFormat_obj::__register();
::native::display3D::Context3DTriangleFace_obj::__register();
::native::display3D::Context3DTextureFormat_obj::__register();
::native::display3D::Context3DStencilAction_obj::__register();
::native::display3D::Context3DProgramType_obj::__register();
::native::display3D::Context3DCompareMode_obj::__register();
::native::display3D::Context3DClearMask_obj::__register();
::native::display3D::Context3D_obj::__register();
::native::display::TriangleCulling_obj::__register();
::native::display::Tilesheet_obj::__register();
::native::display::StageScaleMode_obj::__register();
::native::display::StageQuality_obj::__register();
::native::display::StageDisplayState_obj::__register();
::native::display::StageAlign_obj::__register();
::native::display::Stage3D_obj::__register();
::native::display::TouchInfo_obj::__register();
::native::display::Shape_obj::__register();
::native::display::PixelSnapping_obj::__register();
::native::display::OpenGLView_obj::__register();
::native::display::MovieClip_obj::__register();
::native::display::ManagedStage_obj::__register();
::native::display::Stage_obj::__register();
::native::events::TouchEvent_obj::__register();
::native::events::MouseEvent_obj::__register();
::native::events::Event_obj::__register();
::native::display::IGraphicsData_obj::__register();
::native::display::GraphicsPathWinding_obj::__register();
::native::display::Graphics_obj::__register();
::native::display::GradientType_obj::__register();
::native::display::DirectRenderer_obj::__register();
::native::display::BlendMode_obj::__register();
::native::display::BitmapDataChannel_obj::__register();
::native::display::OptimizedPerlin_obj::__register();
::native::display::BitmapData_obj::__register();
::native::display::Bitmap_obj::__register();
::native::Lib_obj::__register();
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
::native::display::SpreadMethod_obj::__register();
::native::display::LineScaleMode_obj::__register();
::native::display::JointStyle_obj::__register();
::native::display::InterpolationMethod_obj::__register();
::native::display::CapsStyle_obj::__register();
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
::ca::confidant::glory::view::SoundMediator_obj::__register();
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
::ca::confidant::glory::controller::InitPageSoundsCommand_obj::__register();
::ca::confidant::glory::controller::HandleAssetsLoadedCommand_obj::__register();
::ca::confidant::glory::controller::GotoIntroCommand_obj::__register();
::ca::confidant::glory::controller::DestroyPageSoundsCommand_obj::__register();
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
::native::display::Sprite_obj::__register();
::native::display::DisplayObjectContainer_obj::__register();
::native::display::InteractiveObject_obj::__register();
::native::display::DisplayObject_obj::__register();
::native::Loader_obj::__register();
::native::display::IBitmapDrawable_obj::__register();
::native::events::EventDispatcher_obj::__register();
::native::events::IEventDispatcher_obj::__register();
::List_obj::__register();
::IntIter_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::Date_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::native::utils::ByteArray_obj::__init__();
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
::native::events::IEventDispatcher_obj::__boot();
::native::events::EventDispatcher_obj::__boot();
::native::display::IBitmapDrawable_obj::__boot();
::native::Loader_obj::__boot();
::native::display::DisplayObject_obj::__boot();
::native::display::InteractiveObject_obj::__boot();
::native::display::DisplayObjectContainer_obj::__boot();
::native::display::Sprite_obj::__boot();
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
::ca::confidant::glory::controller::DestroyPageSoundsCommand_obj::__boot();
::ca::confidant::glory::controller::GotoIntroCommand_obj::__boot();
::ca::confidant::glory::controller::HandleAssetsLoadedCommand_obj::__boot();
::ca::confidant::glory::controller::InitPageSoundsCommand_obj::__boot();
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
::ca::confidant::glory::view::SoundMediator_obj::__boot();
::ca::confidant::glory::view::components::ActorComponent_obj::__boot();
::ca::confidant::glory::view::components::ControlComponent_obj::__boot();
::ca::confidant::glory::view::components::PageComponent_obj::__boot();
::ca::confidant::glory::view::constants::ControlConstants_obj::__boot();
::format::SVG_obj::__boot();
::format::gfx::Gfx_obj::__boot();
::format::gfx::Gfx2Haxe_obj::__boot();
::native::display::CapsStyle_obj::__boot();
::native::display::InterpolationMethod_obj::__boot();
::native::display::JointStyle_obj::__boot();
::native::display::LineScaleMode_obj::__boot();
::native::display::SpreadMethod_obj::__boot();
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
::native::Lib_obj::__boot();
::native::display::Bitmap_obj::__boot();
::native::display::BitmapData_obj::__boot();
::native::display::OptimizedPerlin_obj::__boot();
::native::display::BitmapDataChannel_obj::__boot();
::native::display::BlendMode_obj::__boot();
::native::display::DirectRenderer_obj::__boot();
::native::display::GradientType_obj::__boot();
::native::display::Graphics_obj::__boot();
::native::display::GraphicsPathWinding_obj::__boot();
::native::display::IGraphicsData_obj::__boot();
::native::events::Event_obj::__boot();
::native::events::MouseEvent_obj::__boot();
::native::events::TouchEvent_obj::__boot();
::native::display::Stage_obj::__boot();
::native::display::ManagedStage_obj::__boot();
::native::display::MovieClip_obj::__boot();
::native::display::OpenGLView_obj::__boot();
::native::display::PixelSnapping_obj::__boot();
::native::display::Shape_obj::__boot();
::native::display::TouchInfo_obj::__boot();
::native::display::Stage3D_obj::__boot();
::native::display::StageAlign_obj::__boot();
::native::display::StageDisplayState_obj::__boot();
::native::display::StageQuality_obj::__boot();
::native::display::StageScaleMode_obj::__boot();
::native::display::Tilesheet_obj::__boot();
::native::display::TriangleCulling_obj::__boot();
::native::display3D::Context3D_obj::__boot();
::native::display3D::Context3DClearMask_obj::__boot();
::native::display3D::Context3DCompareMode_obj::__boot();
::native::display3D::Context3DProgramType_obj::__boot();
::native::display3D::Context3DStencilAction_obj::__boot();
::native::display3D::Context3DTextureFormat_obj::__boot();
::native::display3D::Context3DTriangleFace_obj::__boot();
::native::display3D::Context3DVertexBufferFormat_obj::__boot();
::native::display3D::IndexBuffer3D_obj::__boot();
::native::display3D::Program3D_obj::__boot();
::native::display3D::VertexBuffer3D_obj::__boot();
::native::display3D::textures::TextureBase_obj::__boot();
::native::display3D::textures::CubeTexture_obj::__boot();
::native::display3D::textures::Texture_obj::__boot();
::native::errors::Error_obj::__boot();
::native::errors::ArgumentError_obj::__boot();
::native::errors::EOFError_obj::__boot();
::native::errors::RangeError_obj::__boot();
::native::events::TextEvent_obj::__boot();
::native::events::ErrorEvent_obj::__boot();
::native::events::Listener_obj::__boot();
::native::events::EventPhase_obj::__boot();
::native::events::FocusEvent_obj::__boot();
::native::events::HTTPStatusEvent_obj::__boot();
::native::events::IOErrorEvent_obj::__boot();
::native::events::JoystickEvent_obj::__boot();
::native::events::KeyboardEvent_obj::__boot();
::native::events::ProgressEvent_obj::__boot();
::native::events::SampleDataEvent_obj::__boot();
::native::filters::BitmapFilter_obj::__boot();
::native::geom::ColorTransform_obj::__boot();
::native::geom::Matrix_obj::__boot();
::native::geom::Matrix3D_obj::__boot();
::native::geom::Point_obj::__boot();
::native::geom::Rectangle_obj::__boot();
::native::geom::Transform_obj::__boot();
::native::geom::Vector3D_obj::__boot();
::native::gl::GL_obj::__boot();
::native::gl::Object_obj::__boot();
::native::gl::Buffer_obj::__boot();
::native::gl::Framebuffer_obj::__boot();
::native::gl::Program_obj::__boot();
::native::gl::Renderbuffer_obj::__boot();
::native::gl::Shader_obj::__boot();
::native::gl::Texture_obj::__boot();
::native::media::ID3Info_obj::__boot();
::native::media::Sound_obj::__boot();
::native::media::SoundChannel_obj::__boot();
::native::media::SoundLoaderContext_obj::__boot();
::native::media::SoundTransform_obj::__boot();
::native::net::URLLoader_obj::__boot();
::native::net::URLLoaderDataFormat_obj::__boot();
::native::net::URLRequest_obj::__boot();
::native::net::URLRequestHeader_obj::__boot();
::native::net::URLRequestMethod_obj::__boot();
::native::net::URLVariables_obj::__boot();
::native::text::Font_obj::__boot();
::native::text::FontStyle_obj::__boot();
::native::text::FontType_obj::__boot();
::native::utils::IMemoryRange_obj::__boot();
::native::utils::ArrayBufferView_obj::__boot();
::native::utils::IDataInput_obj::__boot();
::native::utils::ByteArray_obj::__boot();
::native::utils::CompressionAlgorithm_obj::__boot();
::native::utils::Endian_obj::__boot();
::native::utils::Float32Array_obj::__boot();
::native::utils::WeakRef_obj::__boot();
::nme::Lib_obj::__boot();
::nme::VectorHelper_obj::__boot();
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

