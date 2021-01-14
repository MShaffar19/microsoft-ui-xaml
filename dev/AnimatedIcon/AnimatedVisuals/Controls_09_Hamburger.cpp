﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.57+g2cc4f0c931
//       
//       Command:
//           LottieGen -Language Cppwinrt -InputFile Controls_09_Hamburger.json
//       
//       Input file:
//           Controls_09_Hamburger.json (2410 bytes created 10:15-08:00 Nov 2 2020)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// ____________________________________
// |       Object stats       | Count |
// |__________________________|_______|
// | All CompositionObjects   |    36 |
// |--------------------------+-------|
// | Expression animators     |     2 |
// | KeyFrame animators       |     2 |
// | Reference parameters     |     2 |
// | Expression operations    |     0 |
// |--------------------------+-------|
// | Animated brushes         |     - |
// | Animated gradient stops  |     - |
// | ExpressionAnimations     |     1 |
// | PathKeyFrameAnimations   |     - |
// |--------------------------+-------|
// | ContainerVisuals         |     1 |
// | ShapeVisuals             |     1 |
// |--------------------------+-------|
// | ContainerShapes          |     1 |
// | CompositionSpriteShapes  |     1 |
// |--------------------------+-------|
// | Brushes                  |     1 |
// | Gradient stops           |     - |
// | CompositionVisualSurface |     - |
// ------------------------------------
#include "pch.h"
#include "Controls_09_Hamburger.h"
#include <winrt/Windows.Foundation.Metadata.h>
#include <winrt/Windows.UI.Composition.h>
#include "d2d1.h"
#include <d2d1_1.h>
#include <d2d1helper.h>
#include <Windows.Graphics.Interop.h>
#include <winrt/Windows.Graphics.Effects.h>

using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Numerics;
using namespace winrt::Windows::Graphics;
using namespace winrt::Windows::UI;
using namespace winrt::Windows::UI::Composition;
using TimeSpan = winrt::Windows::Foundation::TimeSpan;

namespace winrt::Microsoft::UI::Xaml::Controls::AnimatedVisuals
{
    CppWinRTActivatableClassWithBasicFactory(Controls_09_Hamburger)
}
#include "AnimatedVisuals\Controls_09_Hamburger.g.cpp"

class CanvasGeometry : public winrt::implements<CanvasGeometry,
    IGeometrySource2D,
    Windows::Graphics::IGeometrySource2DInterop>
{
    winrt::com_ptr<ID2D1Geometry> _geometry{ nullptr };

public:
    CanvasGeometry(winrt::com_ptr<ID2D1Geometry> geometry)
        : _geometry{ geometry }
    { }

    // IGeometrySource2D.
    winrt::com_ptr<ID2D1Geometry> Geometry() { return _geometry; }

    // IGeometrySource2DInterop.
    IFACEMETHODIMP GetGeometry(ID2D1Geometry** value) override
    {
        _geometry.copy_to(value);
        return S_OK;
    }

    // IGeometrySource2DInterop.
    IFACEMETHODIMP TryGetGeometryUsingFactory(ID2D1Factory*, ID2D1Geometry**) override
    {
        return E_NOTIMPL;
    }
};

class Controls_09_Hamburger_AnimatedVisual : public winrt::implements<Controls_09_Hamburger_AnimatedVisual,
        winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual,
        IClosable>
{
    winrt::com_ptr<ID2D1Factory> _d2dFactory{ nullptr };
    static constexpr int64_t c_durationTicks{ 10000000L };
    Compositor const _c{ nullptr };
    ExpressionAnimation const _reusableExpressionAnimation{ nullptr };
    ContainerVisual _root{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_0{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_1{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_2{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_3{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_4{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_5{ nullptr };
    ExpressionAnimation _rootProgress{ nullptr };
    StepEasingFunction _holdThenStepEasingFunction{ nullptr };

    static void StartProgressBoundAnimation(
        CompositionObject target,
        winrt::hstring animatedPropertyName,
        CompositionAnimation animation,
        ExpressionAnimation controllerProgressExpression)
    {
        target.StartAnimation(animatedPropertyName, animation);
        const auto controller = target.TryGetAnimationController(animatedPropertyName);
        controller.Pause();
        controller.StartAnimation(L"Progress", controllerProgressExpression);
    }

    ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation(float initialProgress, float initialValue, CompositionEasingFunction initialEasingFunction)
    {
        const auto result = _c.CreateScalarKeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
        return result;
    }

    CompositionSpriteShape CreateSpriteShape(CompositionGeometry geometry, winrt::float3x2 transformMatrix, CompositionBrush fillBrush)
    {
        const auto result = _c.CreateSpriteShape(geometry);
        result.TransformMatrix(transformMatrix);
        result.FillBrush(fillBrush);
        return result;
    }

    // - - - - Shape tree root for layer: Layer 1
    // - - ShapeGroup: Group 1 Scale:0.95827,0.95827
    // - Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_0()
    {
        winrt::com_ptr<ID2D1Geometry> geometries[3]
        {
            Geometry_1().get()->Geometry(),
            Geometry_2().get()->Geometry(),
            Geometry_3().get()->Geometry(),
        };
        winrt::com_ptr<ID2D1GeometryGroup> group{ nullptr };
        winrt::check_hresult(_d2dFactory->CreateGeometryGroup(
            D2D1_FILL_MODE_WINDING,
            (ID2D1Geometry**)(&geometries),
            3,
            group.put()));
        auto result = winrt::make_self<CanvasGeometry>(group);
        return result;
    }

    // - - - - - Shape tree root for layer: Layer 1
    // - - - ShapeGroup: Group 1 Scale:0.95827,0.95827
    // - - Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_1()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ 32.5F, -24.2779999F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddLine({ -32.5F, -24.2779999F });
        sink->AddLine({ -32.5F, -31.5F });
        sink->AddLine({ 32.5F, -31.5F });
        sink->AddLine({ 32.5F, -24.2779999F });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - - - - - Shape tree root for layer: Layer 1
    // - - - ShapeGroup: Group 1 Scale:0.95827,0.95827
    // - - Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_2()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ 32.5F, 33.5F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddLine({ -32.5F, 33.5F });
        sink->AddLine({ -32.5F, 26.2779999F });
        sink->AddLine({ 32.5F, 26.2779999F });
        sink->AddLine({ 32.5F, 33.5F });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - - - - - Shape tree root for layer: Layer 1
    // - - - ShapeGroup: Group 1 Scale:0.95827,0.95827
    // - - Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_3()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ 32.5F, 4.55499983F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddLine({ -32.5F, 4.55499983F });
        sink->AddLine({ -32.5F, -2.61100006F });
        sink->AddLine({ 32.5F, -2.61100006F });
        sink->AddLine({ 32.5F, 4.55499983F });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - - Shape tree root for layer: Layer 1
    // ShapeGroup: Group 1 Scale:0.95827,0.95827
    CompositionColorBrush ColorBrush_Black()
    {
        return _c.CreateColorBrush({ 0xFF, 0x00, 0x00, 0x00 });
    }

    // Shape tree root for layer: Layer 1
    CompositionContainerShape ContainerShape()
    {
        const auto result = _c.CreateContainerShape();
        result.Offset({ 35.0F, 35.0F });
        // ShapeGroup: Group 1 Scale:0.95827,0.95827
        result.Shapes().Append(SpriteShape());
        StartProgressBoundAnimation(result, L"Scale.X", ScaleXScalarAnimation_1_to_1(), RootProgress());
        StartProgressBoundAnimation(result, L"Scale.Y", ScaleYScalarAnimation_1_to_1(), _rootProgress);
        return result;
    }

    // - - Shape tree root for layer: Layer 1
    // ShapeGroup: Group 1 Scale:0.95827,0.95827
    // Path 3+Path 2+Path 1.PathGeometry
    CompositionPathGeometry PathGeometry()
    {
        return _c.CreatePathGeometry(CompositionPath(CanvasGeometryToIGeometrySource2D(Geometry_0())));
    }

    // - Shape tree root for layer: Layer 1
    // Path 3+Path 2+Path 1
    CompositionSpriteShape SpriteShape()
    {
        // Rotation:-0.007912857021786821 degrees, Scale:<0.95827, 0.95827>
        const auto result = CreateSpriteShape(PathGeometry(), { 0.958270013F, 0.0F, 0.0F, 0.958270013F, 0.0F, 0.0F }, ColorBrush_Black());
        return result;
    }

    // The root of the composition.
    ContainerVisual Root()
    {
        const auto result = _root = _c.CreateContainerVisual();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Progress", 0.0F);
        // Shape tree root for layer: Layer 1
        result.Children().InsertAtTop(ShapeVisual_0());
        return result;
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_0()
    {
        return _cubicBezierEasingFunction_0 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_1()
    {
        return _cubicBezierEasingFunction_1 = _c.CreateCubicBezierEasingFunction({ 0.0F, 0.0F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_2()
    {
        return _cubicBezierEasingFunction_2 = _c.CreateCubicBezierEasingFunction({ 0.850000024F, 0.0F }, { 0.75F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_3()
    {
        return _cubicBezierEasingFunction_3 = _c.CreateCubicBezierEasingFunction({ 0.349999994F, 0.0F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_4()
    {
        return _cubicBezierEasingFunction_4 = _c.CreateCubicBezierEasingFunction({ 0.850000024F, 0.0F }, { 0.833000004F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_5()
    {
        return _cubicBezierEasingFunction_5 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.0F }, { 0.0F, 1.0F });
    }

    ExpressionAnimation RootProgress()
    {
        const auto result = _rootProgress = _c.CreateExpressionAnimation(L"_.Progress");
        result.SetReferenceParameter(L"_", _root);
        return result;
    }

    // - Shape tree root for layer: Layer 1
    // Scale
    ScalarKeyFrameAnimation ScaleXScalarAnimation_1_to_1()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 1.0F, HoldThenStepEasingFunction());
        result.InsertKeyFrame(0.25F, 1.10000002F, CubicBezierEasingFunction_0());
        result.InsertKeyFrame(0.333333343F, 1.10000002F, CubicBezierEasingFunction_1());
        result.InsertKeyFrame(0.5F, 0.649999976F, CubicBezierEasingFunction_2());
        result.InsertKeyFrame(0.75F, 0.699999988F, CubicBezierEasingFunction_3());
        result.InsertKeyFrame(0.833333313F, 0.699999988F, CubicBezierEasingFunction_4());
        result.InsertKeyFrame(0.983333349F, 1.0F, _cubicBezierEasingFunction_0);
        return result;
    }

    // - Shape tree root for layer: Layer 1
    // Scale
    ScalarKeyFrameAnimation ScaleYScalarAnimation_1_to_1()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 1.0F, _holdThenStepEasingFunction);
        result.InsertKeyFrame(0.25F, 1.0F, CubicBezierEasingFunction_5());
        result.InsertKeyFrame(0.333333343F, 1.0F, _cubicBezierEasingFunction_1);
        result.InsertKeyFrame(0.5F, 1.0F, _cubicBezierEasingFunction_2);
        result.InsertKeyFrame(0.75F, 1.0F, _cubicBezierEasingFunction_3);
        result.InsertKeyFrame(0.833333313F, 1.0F, _cubicBezierEasingFunction_4);
        result.InsertKeyFrame(0.983333349F, 1.0F, _cubicBezierEasingFunction_5);
        return result;
    }

    // Shape tree root for layer: Layer 1
    ShapeVisual ShapeVisual_0()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 70.0F, 70.0F });
        result.Shapes().Append(ContainerShape());
        return result;
    }

    StepEasingFunction HoldThenStepEasingFunction()
    {
        const auto result = _holdThenStepEasingFunction = _c.CreateStepEasingFunction();
        result.IsFinalStepSingleFrame(true);
        return result;
    }

    static IGeometrySource2D CanvasGeometryToIGeometrySource2D(winrt::com_ptr<CanvasGeometry> geo)
    {
        return geo.as<IGeometrySource2D>();
    }

public:
    Controls_09_Hamburger_AnimatedVisual(Compositor compositor)
        : _c{compositor}
        , _reusableExpressionAnimation(compositor.CreateExpressionAnimation())
    {
        winrt::check_hresult(D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, _d2dFactory.put()));
        const auto _ = Root();
    }

    void Close()
    {
        if (_root)
        {
            _root.Close();
        }
    }

    TimeSpan Duration() const
    {
        return TimeSpan{ c_durationTicks };
    }

    Visual RootVisual() const
    {
        return _root;
    }

    winrt::float2 Size() const
    {
        return { 70.0F, 70.0F };
    }

    static bool IsRuntimeCompatible()
    {
        return winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 7);
    }
};

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual Controls_09_Hamburger::TryCreateAnimatedVisual(
    Compositor const& compositor,
    IInspectable& diagnostics)
{
    diagnostics = nullptr;

    if (Controls_09_Hamburger_AnimatedVisual::IsRuntimeCompatible())
    {
        return winrt::make<Controls_09_Hamburger_AnimatedVisual>(compositor);
    }

    return nullptr;
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual Controls_09_Hamburger::TryCreateAnimatedIconVisual(
    Compositor const& compositor)
{
    IInspectable diagnostics;
    return TryCreateAnimatedVisual(compositor, diagnostics);
}

double Controls_09_Hamburger::FrameToProgress(double frameNumber)
{
    return frameNumber / 60.0;
}

winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, double> Controls_09_Hamburger::Markers()
{
    return winrt::single_threaded_map<winrt::hstring, double>(
        std::map<winrt::hstring, double>
        {
            { L"NormalToHover_Start", 0.0 },
            { L"NormalToHover_End", 0.303},
            { L"NormalToPressed_Start", 0.0},
            { L"NormalToPressed_End", 0.810},
            { L"HoverToNormal_Start", 0.303},
            { L"HoverToNormal_End", 0.0},
            { L"HoverToPressed_Start", 0.303 },
            { L"HoverToPressed_End", 0.810 },
            { L"PressedToNormal_Start", 0.810 },
            { L"PressedToNormal_End", 1.0 },
            { L"PressedToHover_Start", 0.810},
            { L"PressedToHover_End", 0.303},
        }
    ).GetView();
}

void Controls_09_Hamburger::SetColorProperty(winrt::hstring const&, Color)
{
}

void Controls_09_Hamburger::SetScalarProperty(winrt::hstring const&, double)
{
}
