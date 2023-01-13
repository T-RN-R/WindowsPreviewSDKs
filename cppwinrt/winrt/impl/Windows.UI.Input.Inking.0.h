// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_0_H
#define WINRT_Windows_UI_Input_Inking_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    enum class CoreInputDeviceTypes : uint32_t;
    struct PointerEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input
{
    struct PointerPoint;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking
{
    enum class HandwritingLineHeight : int32_t
    {
        Small = 0,
        Medium = 1,
        Large = 2,
    };
    enum class InkDrawingAttributesKind : int32_t
    {
        Default = 0,
        Pencil = 1,
    };
    enum class InkHighContrastAdjustment : int32_t
    {
        UseSystemColorsWhenNecessary = 0,
        UseSystemColors = 1,
        UseOriginalColors = 2,
    };
    enum class InkInputProcessingMode : int32_t
    {
        None = 0,
        Inking = 1,
        Erasing = 2,
    };
    enum class InkInputRightDragAction : int32_t
    {
        LeaveUnprocessed = 0,
        AllowProcessing = 1,
    };
    enum class InkManipulationMode : int32_t
    {
        Inking = 0,
        Erasing = 1,
        Selecting = 2,
    };
    enum class InkPersistenceFormat : int32_t
    {
        GifWithEmbeddedIsf = 0,
        Isf = 1,
    };
    enum class InkPresenterPredefinedConfiguration : int32_t
    {
        SimpleSinglePointer = 0,
        SimpleMultiplePointer = 1,
    };
    enum class InkPresenterStencilKind : int32_t
    {
        Other = 0,
        Ruler = 1,
        Protractor = 2,
    };
    enum class InkRecognitionTarget : int32_t
    {
        All = 0,
        Selected = 1,
        Recent = 2,
    };
    enum class PenHandedness : int32_t
    {
        Right = 0,
        Left = 1,
    };
    enum class PenTipShape : int32_t
    {
        Circle = 0,
        Rectangle = 1,
    };
    struct IInkDrawingAttributes;
    struct IInkDrawingAttributes2;
    struct IInkDrawingAttributes3;
    struct IInkDrawingAttributes4;
    struct IInkDrawingAttributes5;
    struct IInkDrawingAttributesPencilProperties;
    struct IInkDrawingAttributesStatics;
    struct IInkInputConfiguration;
    struct IInkInputProcessingConfiguration;
    struct IInkManager;
    struct IInkModelerAttributes;
    struct IInkModelerAttributes2;
    struct IInkPoint;
    struct IInkPoint2;
    struct IInkPointFactory;
    struct IInkPointFactory2;
    struct IInkPresenter;
    struct IInkPresenter2;
    struct IInkPresenter3;
    struct IInkPresenterProtractor;
    struct IInkPresenterProtractorFactory;
    struct IInkPresenterRuler;
    struct IInkPresenterRuler2;
    struct IInkPresenterRulerFactory;
    struct IInkPresenterStencil;
    struct IInkRecognitionResult;
    struct IInkRecognizer;
    struct IInkRecognizerContainer;
    struct IInkStroke;
    struct IInkStroke2;
    struct IInkStroke3;
    struct IInkStrokeBuilder;
    struct IInkStrokeBuilder2;
    struct IInkStrokeBuilder3;
    struct IInkStrokeContainer;
    struct IInkStrokeContainer2;
    struct IInkStrokeContainer3;
    struct IInkStrokeInput;
    struct IInkStrokeRenderingSegment;
    struct IInkStrokesCollectedEventArgs;
    struct IInkStrokesErasedEventArgs;
    struct IInkSynchronizer;
    struct IInkUnprocessedInput;
    struct IPenAndInkSettings;
    struct IPenAndInkSettingsStatics;
    struct InkDrawingAttributes;
    struct InkDrawingAttributesPencilProperties;
    struct InkInputConfiguration;
    struct InkInputProcessingConfiguration;
    struct InkManager;
    struct InkModelerAttributes;
    struct InkPoint;
    struct InkPresenter;
    struct InkPresenterProtractor;
    struct InkPresenterRuler;
    struct InkRecognitionResult;
    struct InkRecognizer;
    struct InkRecognizerContainer;
    struct InkStroke;
    struct InkStrokeBuilder;
    struct InkStrokeContainer;
    struct InkStrokeInput;
    struct InkStrokeRenderingSegment;
    struct InkStrokesCollectedEventArgs;
    struct InkStrokesErasedEventArgs;
    struct InkSynchronizer;
    struct InkUnprocessedInput;
    struct PenAndInkSettings;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkInputConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkModelerAttributes>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkModelerAttributes2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPoint>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPoint2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPointFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPointFactory2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenter>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenter2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenter3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenterProtractor>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenterRuler>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenterRuler2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkPresenterStencil>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkRecognitionResult>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkRecognizer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkRecognizerContainer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStroke>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStroke2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStroke3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeBuilder>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeContainer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeContainer2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeContainer3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeInput>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkSynchronizer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IInkUnprocessedInput>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IPenAndInkSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::IPenAndInkSettingsStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::InkDrawingAttributes>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkInputConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkModelerAttributes>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPoint>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPresenter>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPresenterProtractor>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPresenterRuler>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkRecognitionResult>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkRecognizer>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkRecognizerContainer>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStroke>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStrokeBuilder>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStrokeContainer>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStrokeInput>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkSynchronizer>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::InkUnprocessedInput>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::PenAndInkSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Inking::HandwritingLineHeight>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkDrawingAttributesKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkHighContrastAdjustment>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkInputProcessingMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkInputRightDragAction>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkManipulationMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPersistenceFormat>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkPresenterStencilKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::InkRecognitionTarget>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::PenHandedness>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Inking::PenTipShape>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkDrawingAttributes>{ L"Windows.UI.Input.Inking.InkDrawingAttributes" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ L"Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkInputConfiguration>{ L"Windows.UI.Input.Inking.InkInputConfiguration" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ L"Windows.UI.Input.Inking.InkInputProcessingConfiguration" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkManager>{ L"Windows.UI.Input.Inking.InkManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkModelerAttributes>{ L"Windows.UI.Input.Inking.InkModelerAttributes" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPoint>{ L"Windows.UI.Input.Inking.InkPoint" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPresenter>{ L"Windows.UI.Input.Inking.InkPresenter" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPresenterProtractor>{ L"Windows.UI.Input.Inking.InkPresenterProtractor" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPresenterRuler>{ L"Windows.UI.Input.Inking.InkPresenterRuler" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkRecognitionResult>{ L"Windows.UI.Input.Inking.InkRecognitionResult" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkRecognizer>{ L"Windows.UI.Input.Inking.InkRecognizer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkRecognizerContainer>{ L"Windows.UI.Input.Inking.InkRecognizerContainer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStroke>{ L"Windows.UI.Input.Inking.InkStroke" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStrokeBuilder>{ L"Windows.UI.Input.Inking.InkStrokeBuilder" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStrokeContainer>{ L"Windows.UI.Input.Inking.InkStrokeContainer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStrokeInput>{ L"Windows.UI.Input.Inking.InkStrokeInput" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ L"Windows.UI.Input.Inking.InkStrokeRenderingSegment" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ L"Windows.UI.Input.Inking.InkStrokesCollectedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ L"Windows.UI.Input.Inking.InkStrokesErasedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkSynchronizer>{ L"Windows.UI.Input.Inking.InkSynchronizer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkUnprocessedInput>{ L"Windows.UI.Input.Inking.InkUnprocessedInput" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::PenAndInkSettings>{ L"Windows.UI.Input.Inking.PenAndInkSettings" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::HandwritingLineHeight>{ L"Windows.UI.Input.Inking.HandwritingLineHeight" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkDrawingAttributesKind>{ L"Windows.UI.Input.Inking.InkDrawingAttributesKind" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkHighContrastAdjustment>{ L"Windows.UI.Input.Inking.InkHighContrastAdjustment" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkInputProcessingMode>{ L"Windows.UI.Input.Inking.InkInputProcessingMode" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkInputRightDragAction>{ L"Windows.UI.Input.Inking.InkInputRightDragAction" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkManipulationMode>{ L"Windows.UI.Input.Inking.InkManipulationMode" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPersistenceFormat>{ L"Windows.UI.Input.Inking.InkPersistenceFormat" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration>{ L"Windows.UI.Input.Inking.InkPresenterPredefinedConfiguration" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkPresenterStencilKind>{ L"Windows.UI.Input.Inking.InkPresenterStencilKind" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::InkRecognitionTarget>{ L"Windows.UI.Input.Inking.InkRecognitionTarget" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::PenHandedness>{ L"Windows.UI.Input.Inking.PenHandedness" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::PenTipShape>{ L"Windows.UI.Input.Inking.PenTipShape" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributes>{ L"Windows.UI.Input.Inking.IInkDrawingAttributes" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ L"Windows.UI.Input.Inking.IInkDrawingAttributes2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ L"Windows.UI.Input.Inking.IInkDrawingAttributes3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ L"Windows.UI.Input.Inking.IInkDrawingAttributes4" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributes5>{ L"Windows.UI.Input.Inking.IInkDrawingAttributes5" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ L"Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ L"Windows.UI.Input.Inking.IInkDrawingAttributesStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkInputConfiguration>{ L"Windows.UI.Input.Inking.IInkInputConfiguration" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ L"Windows.UI.Input.Inking.IInkInputProcessingConfiguration" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkManager>{ L"Windows.UI.Input.Inking.IInkManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkModelerAttributes>{ L"Windows.UI.Input.Inking.IInkModelerAttributes" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkModelerAttributes2>{ L"Windows.UI.Input.Inking.IInkModelerAttributes2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPoint>{ L"Windows.UI.Input.Inking.IInkPoint" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPoint2>{ L"Windows.UI.Input.Inking.IInkPoint2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPointFactory>{ L"Windows.UI.Input.Inking.IInkPointFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPointFactory2>{ L"Windows.UI.Input.Inking.IInkPointFactory2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenter>{ L"Windows.UI.Input.Inking.IInkPresenter" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenter2>{ L"Windows.UI.Input.Inking.IInkPresenter2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenter3>{ L"Windows.UI.Input.Inking.IInkPresenter3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenterProtractor>{ L"Windows.UI.Input.Inking.IInkPresenterProtractor" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ L"Windows.UI.Input.Inking.IInkPresenterProtractorFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenterRuler>{ L"Windows.UI.Input.Inking.IInkPresenterRuler" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenterRuler2>{ L"Windows.UI.Input.Inking.IInkPresenterRuler2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ L"Windows.UI.Input.Inking.IInkPresenterRulerFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkPresenterStencil>{ L"Windows.UI.Input.Inking.IInkPresenterStencil" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkRecognitionResult>{ L"Windows.UI.Input.Inking.IInkRecognitionResult" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkRecognizer>{ L"Windows.UI.Input.Inking.IInkRecognizer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkRecognizerContainer>{ L"Windows.UI.Input.Inking.IInkRecognizerContainer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStroke>{ L"Windows.UI.Input.Inking.IInkStroke" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStroke2>{ L"Windows.UI.Input.Inking.IInkStroke2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStroke3>{ L"Windows.UI.Input.Inking.IInkStroke3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeBuilder>{ L"Windows.UI.Input.Inking.IInkStrokeBuilder" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ L"Windows.UI.Input.Inking.IInkStrokeBuilder2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ L"Windows.UI.Input.Inking.IInkStrokeBuilder3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeContainer>{ L"Windows.UI.Input.Inking.IInkStrokeContainer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeContainer2>{ L"Windows.UI.Input.Inking.IInkStrokeContainer2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeContainer3>{ L"Windows.UI.Input.Inking.IInkStrokeContainer3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeInput>{ L"Windows.UI.Input.Inking.IInkStrokeInput" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ L"Windows.UI.Input.Inking.IInkStrokeRenderingSegment" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ L"Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ L"Windows.UI.Input.Inking.IInkStrokesErasedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkSynchronizer>{ L"Windows.UI.Input.Inking.IInkSynchronizer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IInkUnprocessedInput>{ L"Windows.UI.Input.Inking.IInkUnprocessedInput" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IPenAndInkSettings>{ L"Windows.UI.Input.Inking.IPenAndInkSettings" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::IPenAndInkSettingsStatics>{ L"Windows.UI.Input.Inking.IPenAndInkSettingsStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributes>{ 0x97A2176C,0x6774,0x48AD,{ 0x84,0xF0,0x48,0xF5,0xA9,0xBE,0x74,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ 0x7CAB6508,0x8EC4,0x42FD,{ 0xA5,0xA5,0xE4,0xB7,0xD1,0xD5,0x31,0x6D } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ 0x72020002,0x7D5B,0x4690,{ 0x8A,0xF4,0xE6,0x64,0xCB,0xE2,0xB7,0x4F } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ 0xEF65DC25,0x9F19,0x456D,{ 0x91,0xA3,0xBC,0x3A,0x3D,0x91,0xC5,0xFB } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributes5>{ 0xD11AA0BB,0x0775,0x4852,{ 0xAE,0x64,0x41,0x14,0x3A,0x7A,0xE6,0xC9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ 0x4F2534CB,0x2D86,0x41BB,{ 0xB0,0xE8,0xE4,0xC2,0xA0,0x25,0x3C,0x52 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ 0xF731E03F,0x1A65,0x4862,{ 0x96,0xCB,0x6E,0x16,0x65,0xE1,0x7F,0x6D } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkInputConfiguration>{ 0x93A68DC4,0x0B7B,0x49D7,{ 0xB3,0x4F,0x99,0x01,0xE5,0x24,0xDC,0xF2 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ 0x2778D85E,0x33CA,0x4B06,{ 0xA6,0xD3,0xAC,0x39,0x45,0x11,0x6D,0x37 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkManager>{ 0x4744737D,0x671B,0x4163,{ 0x9C,0x95,0x4E,0x8D,0x7A,0x03,0x5F,0xE1 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkModelerAttributes>{ 0xBAD31F27,0x0CD9,0x4BFD,{ 0xB6,0xF3,0x9E,0x03,0xBA,0x8D,0x74,0x54 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkModelerAttributes2>{ 0x86D1D09A,0x4EF8,0x5E25,{ 0xB7,0xBC,0xB6,0x54,0x24,0xF1,0x6B,0xB3 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPoint>{ 0x9F87272B,0x858C,0x46A5,{ 0x9B,0x41,0xD1,0x95,0x97,0x04,0x59,0xFD } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPoint2>{ 0xFBA9C3F7,0xAE56,0x4D5C,{ 0xBD,0x2F,0x0A,0xC4,0x5F,0x5E,0x4A,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPointFactory>{ 0x29E5D51C,0xC98F,0x405D,{ 0x9F,0x3B,0xE5,0x3E,0x31,0x06,0x8D,0x4D } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPointFactory2>{ 0xE0145E85,0xDAFF,0x45F2,{ 0xAD,0x69,0x05,0x0D,0x82,0x56,0xA2,0x09 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenter>{ 0xA69B70E2,0x887B,0x458F,{ 0xB1,0x73,0x4F,0xE4,0x43,0x89,0x30,0xA3 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenter2>{ 0xCF53E612,0x9A34,0x11E6,{ 0x9F,0x33,0xA2,0x4F,0xC0,0xD9,0x64,0x9C } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenter3>{ 0x51E1CE89,0xD37D,0x4A90,{ 0x83,0xFC,0x7F,0x5E,0x9D,0xFB,0xF2,0x17 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenterProtractor>{ 0x7DE3F2AA,0xEF6C,0x4E91,{ 0xA7,0x3B,0x5B,0x70,0xD5,0x6F,0xBD,0x17 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ 0x320103C9,0x68FA,0x47E9,{ 0x81,0x27,0x83,0x70,0x71,0x1F,0xC4,0x6C } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenterRuler>{ 0x6CDA7D5A,0xDEC7,0x4DD7,{ 0x87,0x7A,0x21,0x33,0xF1,0x83,0xD4,0x8A } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenterRuler2>{ 0x45130DC1,0xBC61,0x44D4,{ 0xA4,0x23,0x54,0x71,0x2A,0xE6,0x71,0xC4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ 0x34361BEB,0x9001,0x4A4B,{ 0xA6,0x90,0x69,0xDB,0xAF,0x63,0xE5,0x01 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkPresenterStencil>{ 0x30D12D6D,0x3E06,0x4D02,{ 0xB1,0x16,0x27,0x7F,0xB5,0xD8,0xAD,0xDC } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkRecognitionResult>{ 0x36461A94,0x5068,0x40EF,{ 0x8A,0x05,0x2C,0x2F,0xB6,0x09,0x08,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkRecognizer>{ 0x077CCEA3,0x904D,0x442A,{ 0xB1,0x51,0xAA,0xCA,0x36,0x31,0xC4,0x3B } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkRecognizerContainer>{ 0xA74D9A31,0x8047,0x4698,{ 0xA9,0x12,0xF8,0x2A,0x50,0x85,0x01,0x2F } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStroke>{ 0x15144D60,0xCCE3,0x4FCF,{ 0x9D,0x52,0x11,0x51,0x8A,0xB6,0xAF,0xD4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStroke2>{ 0x5DB9E4F4,0xBAFA,0x4DE1,{ 0x89,0xD3,0x20,0x1B,0x1E,0xD7,0xD8,0x9B } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStroke3>{ 0x4A807374,0x9499,0x411D,{ 0xA1,0xC4,0x68,0x85,0x5D,0x03,0xD6,0x5F } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeBuilder>{ 0x82BBD1DC,0x1C63,0x41DC,{ 0x9E,0x07,0x4B,0x4A,0x70,0xCE,0xD8,0x01 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ 0xBD82BC27,0x731F,0x4CBC,{ 0xBB,0xBF,0x6D,0x46,0x80,0x44,0xF1,0xE5 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ 0xB2C71FCD,0x5472,0x46B1,{ 0xA8,0x1D,0xC3,0x7A,0x3D,0x16,0x94,0x41 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeContainer>{ 0x22ACCBC6,0xFAA9,0x4F14,{ 0xB6,0x8C,0xF6,0xCE,0xE6,0x70,0xAE,0x16 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeContainer2>{ 0x8901D364,0xDA36,0x4BCF,{ 0x9E,0x5C,0xD1,0x95,0x82,0x59,0x95,0xB4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeContainer3>{ 0x3D07BEA5,0xBAEA,0x4C82,{ 0xA7,0x19,0x7B,0x83,0xDA,0x10,0x67,0xD2 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeInput>{ 0xCF2FFE7B,0x5E10,0x43C6,{ 0xA0,0x80,0x88,0xF2,0x6E,0x1D,0xC6,0x7D } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ 0x68510F1F,0x88E3,0x477A,{ 0xA2,0xFA,0x56,0x9F,0x5F,0x1F,0x9B,0xD5 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ 0xC4F3F229,0x1938,0x495C,{ 0xB4,0xD9,0x6D,0xE4,0xB0,0x8D,0x48,0x11 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ 0xA4216A22,0x1503,0x4EBF,{ 0x8F,0xF5,0x2D,0xE8,0x45,0x84,0xA8,0xAA } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkSynchronizer>{ 0x9B9EA160,0xAE9B,0x45F9,{ 0x84,0x07,0x4B,0x49,0x3B,0x16,0x36,0x61 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IInkUnprocessedInput>{ 0xDB4445E0,0x8398,0x4921,{ 0xAC,0x3B,0xAB,0x97,0x8C,0x5B,0xA2,0x56 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IPenAndInkSettings>{ 0xBC2CEB8F,0x0066,0x44A8,{ 0xBB,0x7A,0xB8,0x39,0xB3,0xDE,0xB8,0xF5 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::IPenAndInkSettingsStatics>{ 0xED6DD036,0x5708,0x5C3C,{ 0x96,0xDB,0xF2,0xF5,0x52,0xEA,0xB6,0x41 } };
    template <> struct default_interface<Windows::UI::Input::Inking::InkDrawingAttributes>{ using type = Windows::UI::Input::Inking::IInkDrawingAttributes; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ using type = Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkInputConfiguration>{ using type = Windows::UI::Input::Inking::IInkInputConfiguration; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ using type = Windows::UI::Input::Inking::IInkInputProcessingConfiguration; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkManager>{ using type = Windows::UI::Input::Inking::IInkManager; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkModelerAttributes>{ using type = Windows::UI::Input::Inking::IInkModelerAttributes; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkPoint>{ using type = Windows::UI::Input::Inking::IInkPoint; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkPresenter>{ using type = Windows::UI::Input::Inking::IInkPresenter; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkPresenterProtractor>{ using type = Windows::UI::Input::Inking::IInkPresenterProtractor; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkPresenterRuler>{ using type = Windows::UI::Input::Inking::IInkPresenterRuler; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkRecognitionResult>{ using type = Windows::UI::Input::Inking::IInkRecognitionResult; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkRecognizer>{ using type = Windows::UI::Input::Inking::IInkRecognizer; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkRecognizerContainer>{ using type = Windows::UI::Input::Inking::IInkRecognizerContainer; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStroke>{ using type = Windows::UI::Input::Inking::IInkStroke; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeBuilder>{ using type = Windows::UI::Input::Inking::IInkStrokeBuilder; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeContainer>{ using type = Windows::UI::Input::Inking::IInkStrokeContainer; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeInput>{ using type = Windows::UI::Input::Inking::IInkStrokeInput; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ using type = Windows::UI::Input::Inking::IInkStrokeRenderingSegment; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ using type = Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ using type = Windows::UI::Input::Inking::IInkStrokesErasedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkSynchronizer>{ using type = Windows::UI::Input::Inking::IInkSynchronizer; };
    template <> struct default_interface<Windows::UI::Input::Inking::InkUnprocessedInput>{ using type = Windows::UI::Input::Inking::IInkUnprocessedInput; };
    template <> struct default_interface<Windows::UI::Input::Inking::PenAndInkSettings>{ using type = Windows::UI::Input::Inking::IPenAndInkSettings; };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_PenTip(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PenTip(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_IgnorePressure(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnorePressure(bool) noexcept = 0;
            virtual int32_t __stdcall get_FitToCurve(bool*) noexcept = 0;
            virtual int32_t __stdcall put_FitToCurve(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PenTipTransform(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_PenTipTransform(Windows::Foundation::Numerics::float3x2) noexcept = 0;
            virtual int32_t __stdcall get_DrawAsHighlighter(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DrawAsHighlighter(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PencilProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IgnoreTilt(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnoreTilt(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ModelerAttributes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForPencil(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkInputConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPrimaryBarrelButtonInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrimaryBarrelButtonInputEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEraserInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEraserInputEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RightDragAction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RightDragAction(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall ProcessPointerDown(void*) noexcept = 0;
            virtual int32_t __stdcall ProcessPointerUpdate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProcessPointerUp(void*, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall SetDefaultDrawingAttributes(void*) noexcept = 0;
            virtual int32_t __stdcall RecognizeAsync2(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkModelerAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PredictionTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_PredictionTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ScalingFactor(float*) noexcept = 0;
            virtual int32_t __stdcall put_ScalingFactor(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkModelerAttributes2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UseVelocityBasedPressure(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseVelocityBasedPressure(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPoint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPoint2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TiltX(float*) noexcept = 0;
            virtual int32_t __stdcall get_TiltY(float*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPointFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInkPoint(Windows::Foundation::Point, float, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPointFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInkPointWithTiltAndTimestamp(Windows::Foundation::Point, float, float, float, uint64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInputEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_InputDeviceTypes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InputDeviceTypes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_UnprocessedInput(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeInput(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputProcessingConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeContainer(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeContainer(void*) noexcept = 0;
            virtual int32_t __stdcall CopyDefaultDrawingAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateDefaultDrawingAttributes(void*) noexcept = 0;
            virtual int32_t __stdcall ActivateCustomDrying(void**) noexcept = 0;
            virtual int32_t __stdcall SetPredefinedConfiguration(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_StrokesCollected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokesCollected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokesErased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokesErased(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighContrastAdjustment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighContrastAdjustment(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenterProtractor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreTickMarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreTickMarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_AreRaysVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreRaysVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCenterMarkerVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCenterMarkerVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAngleReadoutVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAngleReadoutVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsResizable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsResizable(bool) noexcept = 0;
            virtual int32_t __stdcall get_Radius(double*) noexcept = 0;
            virtual int32_t __stdcall put_Radius(double) noexcept = 0;
            virtual int32_t __stdcall get_AccentColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_AccentColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenterRuler>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Length(double*) noexcept = 0;
            virtual int32_t __stdcall put_Length(double) noexcept = 0;
            virtual int32_t __stdcall get_Width(double*) noexcept = 0;
            virtual int32_t __stdcall put_Width(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenterRuler2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreTickMarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreTickMarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCompassVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCompassVisible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenterRulerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkPresenterStencil>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Transform(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_Transform(Windows::Foundation::Numerics::float3x2) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkRecognitionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoundingRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetTextCandidates(void**) noexcept = 0;
            virtual int32_t __stdcall GetStrokes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkRecognizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkRecognizerContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDefaultRecognizer(void*) noexcept = 0;
            virtual int32_t __stdcall RecognizeAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetRecognizers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStroke>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DrawingAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall put_DrawingAttributes(void*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Selected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Selected(bool) noexcept = 0;
            virtual int32_t __stdcall get_Recognized(bool*) noexcept = 0;
            virtual int32_t __stdcall GetRenderingSegments(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStroke2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointTransform(Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_PointTransform(Windows::Foundation::Numerics::float3x2) noexcept = 0;
            virtual int32_t __stdcall GetInkPoints(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStroke3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeStartedTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeStartedTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDuration(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDuration(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeBuilder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BeginStroke(void*) noexcept = 0;
            virtual int32_t __stdcall AppendToStroke(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EndStroke(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStroke(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetDefaultDrawingAttributes(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeBuilder2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateStrokeFromInkPoints(void*, Windows::Foundation::Numerics::float3x2, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeBuilder3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateStrokeFromInkPoints(void*, Windows::Foundation::Numerics::float3x2, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoundingRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall AddStroke(void*) noexcept = 0;
            virtual int32_t __stdcall DeleteSelected(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall MoveSelected(Windows::Foundation::Point, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall SelectWithPolyLine(void*, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall SelectWithLine(Windows::Foundation::Point, Windows::Foundation::Point, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall CopySelectedToClipboard() noexcept = 0;
            virtual int32_t __stdcall PasteFromClipboard(Windows::Foundation::Point, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall CanPasteFromClipboard(bool*) noexcept = 0;
            virtual int32_t __stdcall LoadAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateRecognitionResults(void*) noexcept = 0;
            virtual int32_t __stdcall GetStrokes(void**) noexcept = 0;
            virtual int32_t __stdcall GetRecognitionResults(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeContainer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddStrokes(void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeContainer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SaveWithFormatAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetStrokeById(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StrokeStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokeContinued(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeContinued(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokeEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokeCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BezierControlPoint1(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BezierControlPoint2(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(float*) noexcept = 0;
            virtual int32_t __stdcall get_TiltX(float*) noexcept = 0;
            virtual int32_t __stdcall get_TiltY(float*) noexcept = 0;
            virtual int32_t __stdcall get_Twist(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Strokes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Strokes(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkSynchronizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BeginDry(void**) noexcept = 0;
            virtual int32_t __stdcall EndDry() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IInkUnprocessedInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerHovered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerHovered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerMoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IPenAndInkSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsHandwritingDirectlyIntoTextFieldEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PenHandedness(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HandwritingLineHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserConsentsToHandwritingTelemetryCollection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTouchHandwritingEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::IPenAndInkSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes
    {
        [[nodiscard]] auto Color() const;
        auto Color(Windows::UI::Color const& value) const;
        [[nodiscard]] auto PenTip() const;
        auto PenTip(Windows::UI::Input::Inking::PenTipShape const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(Windows::Foundation::Size const& value) const;
        [[nodiscard]] auto IgnorePressure() const;
        auto IgnorePressure(bool value) const;
        [[nodiscard]] auto FitToCurve() const;
        auto FitToCurve(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes2
    {
        [[nodiscard]] auto PenTipTransform() const;
        auto PenTipTransform(Windows::Foundation::Numerics::float3x2 const& value) const;
        [[nodiscard]] auto DrawAsHighlighter() const;
        auto DrawAsHighlighter(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes3
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto PencilProperties() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes4
    {
        [[nodiscard]] auto IgnoreTilt() const;
        auto IgnoreTilt(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes4>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes5
    {
        [[nodiscard]] auto ModelerAttributes() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes5>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties
    {
        [[nodiscard]] auto Opacity() const;
        auto Opacity(double value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics
    {
        auto CreateForPencil() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkInputConfiguration
    {
        [[nodiscard]] auto IsPrimaryBarrelButtonInputEnabled() const;
        auto IsPrimaryBarrelButtonInputEnabled(bool value) const;
        [[nodiscard]] auto IsEraserInputEnabled() const;
        auto IsEraserInputEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkInputConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkInputConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::UI::Input::Inking::InkInputProcessingMode const& value) const;
        [[nodiscard]] auto RightDragAction() const;
        auto RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkManager
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(Windows::UI::Input::Inking::InkManipulationMode const& value) const;
        auto ProcessPointerDown(Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto ProcessPointerUpdate(Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto ProcessPointerUp(Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto SetDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const;
        auto RecognizeAsync(Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkManager>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkModelerAttributes
    {
        [[nodiscard]] auto PredictionTime() const;
        auto PredictionTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ScalingFactor() const;
        auto ScalingFactor(float value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkModelerAttributes>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkModelerAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkModelerAttributes2
    {
        [[nodiscard]] auto UseVelocityBasedPressure() const;
        auto UseVelocityBasedPressure(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkModelerAttributes2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkModelerAttributes2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPoint
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Pressure() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPoint>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPoint<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPoint2
    {
        [[nodiscard]] auto TiltX() const;
        [[nodiscard]] auto TiltY() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPoint2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPoint2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPointFactory
    {
        auto CreateInkPoint(Windows::Foundation::Point const& position, float pressure) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPointFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPointFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPointFactory2
    {
        auto CreateInkPointWithTiltAndTimestamp(Windows::Foundation::Point const& position, float pressure, float tiltX, float tiltY, uint64_t timestamp) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPointFactory2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPointFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenter
    {
        [[nodiscard]] auto IsInputEnabled() const;
        auto IsInputEnabled(bool value) const;
        [[nodiscard]] auto InputDeviceTypes() const;
        auto InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes const& value) const;
        [[nodiscard]] auto UnprocessedInput() const;
        [[nodiscard]] auto StrokeInput() const;
        [[nodiscard]] auto InputProcessingConfiguration() const;
        [[nodiscard]] auto StrokeContainer() const;
        auto StrokeContainer(Windows::UI::Input::Inking::InkStrokeContainer const& value) const;
        auto CopyDefaultDrawingAttributes() const;
        auto UpdateDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& value) const;
        auto ActivateCustomDrying() const;
        auto SetPredefinedConfiguration(Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration const& value) const;
        auto StrokesCollected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const;
        using StrokesCollected_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkPresenter, &impl::abi_t<Windows::UI::Input::Inking::IInkPresenter>::remove_StrokesCollected>;
        [[nodiscard]] StrokesCollected_revoker StrokesCollected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const;
        auto StrokesCollected(winrt::event_token const& cookie) const noexcept;
        auto StrokesErased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const;
        using StrokesErased_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkPresenter, &impl::abi_t<Windows::UI::Input::Inking::IInkPresenter>::remove_StrokesErased>;
        [[nodiscard]] StrokesErased_revoker StrokesErased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const;
        auto StrokesErased(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenter2
    {
        [[nodiscard]] auto HighContrastAdjustment() const;
        auto HighContrastAdjustment(Windows::UI::Input::Inking::InkHighContrastAdjustment const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenter2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenter3
    {
        [[nodiscard]] auto InputConfiguration() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenter3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterProtractor
    {
        [[nodiscard]] auto AreTickMarksVisible() const;
        auto AreTickMarksVisible(bool value) const;
        [[nodiscard]] auto AreRaysVisible() const;
        auto AreRaysVisible(bool value) const;
        [[nodiscard]] auto IsCenterMarkerVisible() const;
        auto IsCenterMarkerVisible(bool value) const;
        [[nodiscard]] auto IsAngleReadoutVisible() const;
        auto IsAngleReadoutVisible(bool value) const;
        [[nodiscard]] auto IsResizable() const;
        auto IsResizable(bool value) const;
        [[nodiscard]] auto Radius() const;
        auto Radius(double value) const;
        [[nodiscard]] auto AccentColor() const;
        auto AccentColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenterProtractor>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory
    {
        auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterRuler
    {
        [[nodiscard]] auto Length() const;
        auto Length(double value) const;
        [[nodiscard]] auto Width() const;
        auto Width(double value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenterRuler>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterRuler2
    {
        [[nodiscard]] auto AreTickMarksVisible() const;
        auto AreTickMarksVisible(bool value) const;
        [[nodiscard]] auto IsCompassVisible() const;
        auto IsCompassVisible(bool value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenterRuler2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory
    {
        auto Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenterRulerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterStencil
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto IsVisible() const;
        auto IsVisible(bool value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto ForegroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Transform() const;
        auto Transform(Windows::Foundation::Numerics::float3x2 const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkPresenterStencil>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkRecognitionResult
    {
        [[nodiscard]] auto BoundingRect() const;
        auto GetTextCandidates() const;
        auto GetStrokes() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkRecognitionResult>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognitionResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkRecognizer
    {
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkRecognizer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognizer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkRecognizerContainer
    {
        auto SetDefaultRecognizer(Windows::UI::Input::Inking::InkRecognizer const& recognizer) const;
        auto RecognizeAsync(Windows::UI::Input::Inking::InkStrokeContainer const& strokeCollection, Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const;
        auto GetRecognizers() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkRecognizerContainer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognizerContainer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke
    {
        [[nodiscard]] auto DrawingAttributes() const;
        auto DrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& value) const;
        [[nodiscard]] auto BoundingRect() const;
        [[nodiscard]] auto Selected() const;
        auto Selected(bool value) const;
        [[nodiscard]] auto Recognized() const;
        auto GetRenderingSegments() const;
        auto Clone() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStroke>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke2
    {
        [[nodiscard]] auto PointTransform() const;
        auto PointTransform(Windows::Foundation::Numerics::float3x2 const& value) const;
        auto GetInkPoints() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStroke2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke3
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto StrokeStartedTime() const;
        auto StrokeStartedTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto StrokeDuration() const;
        auto StrokeDuration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStroke3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder
    {
        auto BeginStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto AppendToStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto EndStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto CreateStroke(param::iterable<Windows::Foundation::Point> const& points) const;
        auto SetDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeBuilder>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder2
    {
        auto CreateStrokeFromInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints, Windows::Foundation::Numerics::float3x2 const& transform) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeBuilder2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder3
    {
        auto CreateStrokeFromInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::IReference<Windows::Foundation::DateTime> const& strokeStartedTime, Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& strokeDuration) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeBuilder3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeContainer
    {
        [[nodiscard]] auto BoundingRect() const;
        auto AddStroke(Windows::UI::Input::Inking::InkStroke const& stroke) const;
        auto DeleteSelected() const;
        auto MoveSelected(Windows::Foundation::Point const& translation) const;
        auto SelectWithPolyLine(param::iterable<Windows::Foundation::Point> const& polyline) const;
        auto SelectWithLine(Windows::Foundation::Point const& from, Windows::Foundation::Point const& to) const;
        auto CopySelectedToClipboard() const;
        auto PasteFromClipboard(Windows::Foundation::Point const& position) const;
        auto CanPasteFromClipboard() const;
        auto LoadAsync(Windows::Storage::Streams::IInputStream const& inputStream) const;
        auto SaveAsync(Windows::Storage::Streams::IOutputStream const& outputStream) const;
        auto UpdateRecognitionResults(param::vector_view<Windows::UI::Input::Inking::InkRecognitionResult> const& recognitionResults) const;
        auto GetStrokes() const;
        auto GetRecognitionResults() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeContainer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeContainer2
    {
        auto AddStrokes(param::iterable<Windows::UI::Input::Inking::InkStroke> const& strokes) const;
        auto Clear() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeContainer2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeContainer3
    {
        auto SaveAsync(Windows::Storage::Streams::IOutputStream const& outputStream, Windows::UI::Input::Inking::InkPersistenceFormat const& inkPersistenceFormat) const;
        auto GetStrokeById(uint32_t id) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeContainer3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeInput
    {
        auto StrokeStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeStarted_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeStarted>;
        [[nodiscard]] StrokeStarted_revoker StrokeStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeStarted(winrt::event_token const& cookie) const noexcept;
        auto StrokeContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeContinued_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeContinued>;
        [[nodiscard]] StrokeContinued_revoker StrokeContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeContinued(winrt::event_token const& cookie) const noexcept;
        auto StrokeEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeEnded_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeEnded>;
        [[nodiscard]] StrokeEnded_revoker StrokeEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeEnded(winrt::event_token const& cookie) const noexcept;
        auto StrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeCanceled_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeCanceled>;
        [[nodiscard]] StrokeCanceled_revoker StrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeCanceled(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto InkPresenter() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeInput>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeInput<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto BezierControlPoint1() const;
        [[nodiscard]] auto BezierControlPoint2() const;
        [[nodiscard]] auto Pressure() const;
        [[nodiscard]] auto TiltX() const;
        [[nodiscard]] auto TiltY() const;
        [[nodiscard]] auto Twist() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs
    {
        [[nodiscard]] auto Strokes() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs
    {
        [[nodiscard]] auto Strokes() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkSynchronizer
    {
        auto BeginDry() const;
        auto EndDry() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkSynchronizer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkSynchronizer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkUnprocessedInput
    {
        auto PointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerEntered_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerEntered>;
        [[nodiscard]] PointerEntered_revoker PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerEntered(winrt::event_token const& cookie) const noexcept;
        auto PointerHovered(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerHovered_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerHovered>;
        [[nodiscard]] PointerHovered_revoker PointerHovered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerHovered(winrt::event_token const& cookie) const noexcept;
        auto PointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerExited_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerExited>;
        [[nodiscard]] PointerExited_revoker PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerExited(winrt::event_token const& cookie) const noexcept;
        auto PointerPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerPressed_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerPressed>;
        [[nodiscard]] PointerPressed_revoker PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerPressed(winrt::event_token const& cookie) const noexcept;
        auto PointerMoved(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerMoved_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerMoved>;
        [[nodiscard]] PointerMoved_revoker PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerMoved(winrt::event_token const& cookie) const noexcept;
        auto PointerReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerReleased_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerReleased>;
        [[nodiscard]] PointerReleased_revoker PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerReleased(winrt::event_token const& cookie) const noexcept;
        auto PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerLost_revoker = impl::event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerLost>;
        [[nodiscard]] PointerLost_revoker PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerLost(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto InkPresenter() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IInkUnprocessedInput>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IPenAndInkSettings
    {
        [[nodiscard]] auto IsHandwritingDirectlyIntoTextFieldEnabled() const;
        [[nodiscard]] auto PenHandedness() const;
        [[nodiscard]] auto HandwritingLineHeight() const;
        [[nodiscard]] auto FontFamilyName() const;
        [[nodiscard]] auto UserConsentsToHandwritingTelemetryCollection() const;
        [[nodiscard]] auto IsTouchHandwritingEnabled() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IPenAndInkSettings>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IPenAndInkSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IPenAndInkSettingsStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::UI::Input::Inking::IPenAndInkSettingsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IPenAndInkSettingsStatics<D>;
    };
}
#endif
