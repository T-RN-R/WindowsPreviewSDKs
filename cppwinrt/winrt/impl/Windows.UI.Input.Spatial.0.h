// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Spatial_0_H
#define WINRT_Windows_UI_Input_Spatial_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Haptics
{
    struct SimpleHapticsController;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct BatteryReport;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct PerceptionTimestamp;
}
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
    struct EyesPose;
    struct HandMeshObserver;
    struct HandPose;
    struct HeadPose;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial
{
    enum class SpatialGestureSettings : uint32_t
    {
        None = 0,
        Tap = 0x1,
        DoubleTap = 0x2,
        Hold = 0x4,
        ManipulationTranslate = 0x8,
        NavigationX = 0x10,
        NavigationY = 0x20,
        NavigationZ = 0x40,
        NavigationRailsX = 0x80,
        NavigationRailsY = 0x100,
        NavigationRailsZ = 0x200,
    };
    enum class SpatialInteractionPressKind : int32_t
    {
        None = 0,
        Select = 1,
        Menu = 2,
        Grasp = 3,
        Touchpad = 4,
        Thumbstick = 5,
    };
    enum class SpatialInteractionSourceHandedness : int32_t
    {
        Unspecified = 0,
        Left = 1,
        Right = 2,
    };
    enum class SpatialInteractionSourceKind : int32_t
    {
        Other = 0,
        Hand = 1,
        Voice = 2,
        Controller = 3,
    };
    enum class SpatialInteractionSourcePositionAccuracy : int32_t
    {
        High = 0,
        Approximate = 1,
    };
    struct ISpatialGestureRecognizer;
    struct ISpatialGestureRecognizerFactory;
    struct ISpatialHoldCanceledEventArgs;
    struct ISpatialHoldCompletedEventArgs;
    struct ISpatialHoldStartedEventArgs;
    struct ISpatialInteraction;
    struct ISpatialInteractionController;
    struct ISpatialInteractionController2;
    struct ISpatialInteractionController3;
    struct ISpatialInteractionControllerProperties;
    struct ISpatialInteractionDetectedEventArgs;
    struct ISpatialInteractionDetectedEventArgs2;
    struct ISpatialInteractionManager;
    struct ISpatialInteractionManagerStatics;
    struct ISpatialInteractionManagerStatics2;
    struct ISpatialInteractionSource;
    struct ISpatialInteractionSource2;
    struct ISpatialInteractionSource3;
    struct ISpatialInteractionSource4;
    struct ISpatialInteractionSourceEventArgs;
    struct ISpatialInteractionSourceEventArgs2;
    struct ISpatialInteractionSourceLocation;
    struct ISpatialInteractionSourceLocation2;
    struct ISpatialInteractionSourceLocation3;
    struct ISpatialInteractionSourceProperties;
    struct ISpatialInteractionSourceState;
    struct ISpatialInteractionSourceState2;
    struct ISpatialInteractionSourceState3;
    struct ISpatialManipulationCanceledEventArgs;
    struct ISpatialManipulationCompletedEventArgs;
    struct ISpatialManipulationDelta;
    struct ISpatialManipulationStartedEventArgs;
    struct ISpatialManipulationUpdatedEventArgs;
    struct ISpatialNavigationCanceledEventArgs;
    struct ISpatialNavigationCompletedEventArgs;
    struct ISpatialNavigationStartedEventArgs;
    struct ISpatialNavigationUpdatedEventArgs;
    struct ISpatialPointerInteractionSourcePose;
    struct ISpatialPointerInteractionSourcePose2;
    struct ISpatialPointerPose;
    struct ISpatialPointerPose2;
    struct ISpatialPointerPose3;
    struct ISpatialPointerPoseStatics;
    struct ISpatialRecognitionEndedEventArgs;
    struct ISpatialRecognitionStartedEventArgs;
    struct ISpatialTappedEventArgs;
    struct SpatialGestureRecognizer;
    struct SpatialHoldCanceledEventArgs;
    struct SpatialHoldCompletedEventArgs;
    struct SpatialHoldStartedEventArgs;
    struct SpatialInteraction;
    struct SpatialInteractionController;
    struct SpatialInteractionControllerProperties;
    struct SpatialInteractionDetectedEventArgs;
    struct SpatialInteractionManager;
    struct SpatialInteractionSource;
    struct SpatialInteractionSourceEventArgs;
    struct SpatialInteractionSourceLocation;
    struct SpatialInteractionSourceProperties;
    struct SpatialInteractionSourceState;
    struct SpatialManipulationCanceledEventArgs;
    struct SpatialManipulationCompletedEventArgs;
    struct SpatialManipulationDelta;
    struct SpatialManipulationStartedEventArgs;
    struct SpatialManipulationUpdatedEventArgs;
    struct SpatialNavigationCanceledEventArgs;
    struct SpatialNavigationCompletedEventArgs;
    struct SpatialNavigationStartedEventArgs;
    struct SpatialNavigationUpdatedEventArgs;
    struct SpatialPointerInteractionSourcePose;
    struct SpatialPointerPose;
    struct SpatialRecognitionEndedEventArgs;
    struct SpatialRecognitionStartedEventArgs;
    struct SpatialTappedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteraction>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionController>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionController2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionController3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSource2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSource3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSource4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceState>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialInteractionSourceState3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialManipulationDelta>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialPointerPose>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialPointerPose2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialPointerPose3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::ISpatialTappedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialGestureRecognizer>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteraction>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionController>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionControllerProperties>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourceState>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialManipulationDelta>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialPointerPose>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialTappedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialGestureSettings>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionPressKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialGestureRecognizer>{ L"Windows.UI.Input.Spatial.SpatialGestureRecognizer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>{ L"Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteraction>{ L"Windows.UI.Input.Spatial.SpatialInteraction" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionController>{ L"Windows.UI.Input.Spatial.SpatialInteractionController" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionControllerProperties>{ L"Windows.UI.Input.Spatial.SpatialInteractionControllerProperties" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionManager>{ L"Windows.UI.Input.Spatial.SpatialInteractionManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSource>{ L"Windows.UI.Input.Spatial.SpatialInteractionSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourceLocation" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourceProperties" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourceState>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourceState" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>{ L"Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialManipulationDelta>{ L"Windows.UI.Input.Spatial.SpatialManipulationDelta" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>{ L"Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>{ L"Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialPointerPose>{ L"Windows.UI.Input.Spatial.SpatialPointerPose" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialTappedEventArgs>{ L"Windows.UI.Input.Spatial.SpatialTappedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialGestureSettings>{ L"Windows.UI.Input.Spatial.SpatialGestureSettings" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionPressKind>{ L"Windows.UI.Input.Spatial.SpatialInteractionPressKind" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourceKind" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy>{ L"Windows.UI.Input.Spatial.SpatialInteractionSourcePositionAccuracy" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>{ L"Windows.UI.Input.Spatial.ISpatialGestureRecognizer" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>{ L"Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteraction>{ L"Windows.UI.Input.Spatial.ISpatialInteraction" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionController>{ L"Windows.UI.Input.Spatial.ISpatialInteractionController" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionController2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionController2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionController3>{ L"Windows.UI.Input.Spatial.ISpatialInteractionController3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>{ L"Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionManager>{ L"Windows.UI.Input.Spatial.ISpatialInteractionManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>{ L"Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSource>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSource2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSource2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSource3>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSource3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSource4>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSource4" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceState>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceState3>{ L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialManipulationDelta>{ L"Windows.UI.Input.Spatial.ISpatialManipulationDelta" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>{ L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2>{ L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialPointerPose>{ L"Windows.UI.Input.Spatial.ISpatialPointerPose" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialPointerPose2>{ L"Windows.UI.Input.Spatial.ISpatialPointerPose2" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialPointerPose3>{ L"Windows.UI.Input.Spatial.ISpatialPointerPose3" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>{ L"Windows.UI.Input.Spatial.ISpatialPointerPoseStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Spatial::ISpatialTappedEventArgs>{ L"Windows.UI.Input.Spatial.ISpatialTappedEventArgs" };
#endif
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>{ 0x71605BCC,0x0C35,0x4673,{ 0xAD,0xBD,0xCC,0x04,0xCA,0xA6,0xEF,0x45 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>{ 0x77214186,0x57B9,0x3150,{ 0x83,0x82,0x69,0x8B,0x24,0xE2,0x64,0xD0 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>{ 0x5DFCB667,0x4CAA,0x4093,{ 0x8C,0x35,0xB6,0x01,0xA8,0x39,0xF3,0x1B } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>{ 0x3F64470B,0x4CFD,0x43DA,{ 0x8D,0xC4,0xE6,0x45,0x52,0x17,0x39,0x71 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>{ 0x8E343D79,0xACB6,0x4144,{ 0x86,0x15,0x2C,0xFB,0xA8,0xA3,0xCB,0x3F } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteraction>{ 0xFC967639,0x88E6,0x4646,{ 0x91,0x12,0x43,0x44,0xAA,0xEC,0x9D,0xFA } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionController>{ 0x5F0E5BA3,0x0954,0x4E97,{ 0x86,0xC5,0xE7,0xF3,0x0B,0x11,0x4D,0xFD } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionController2>{ 0x35B6D924,0xC7A2,0x49B7,{ 0xB7,0x2E,0x54,0x36,0xB2,0xFB,0x8F,0x9C } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionController3>{ 0x628466A0,0x9D91,0x4A0B,{ 0x88,0x8D,0x16,0x5E,0x67,0x0A,0x8C,0xD5 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>{ 0x61056FB1,0x7BA9,0x4E35,{ 0xB9,0x3F,0x92,0x72,0xCB,0xA9,0xB2,0x8B } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>{ 0x075878E4,0x5961,0x3B41,{ 0x9D,0xFB,0xCE,0xA5,0xD8,0x9C,0xC3,0x8A } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>{ 0x7B263E93,0x5F13,0x419C,{ 0x97,0xD5,0x83,0x46,0x78,0x26,0x6A,0xA6 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionManager>{ 0x32A64EA8,0xA15A,0x3995,{ 0xB8,0xBD,0x80,0x51,0x3C,0xB5,0xAD,0xEF } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>{ 0x00E31FA6,0x8CA2,0x30BF,{ 0x91,0xFE,0xD9,0xCB,0x4A,0x00,0x89,0x90 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics2>{ 0x93F16C52,0xB88A,0x5929,{ 0x8D,0x7C,0x48,0xCB,0x94,0x8B,0x08,0x1C } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSource>{ 0xFB5433BA,0xB0B3,0x3148,{ 0x9F,0x3B,0xE9,0xF5,0xDE,0x56,0x8F,0x5D } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSource2>{ 0xE4C5B70C,0x0470,0x4028,{ 0x88,0xC0,0xA0,0xEB,0x44,0xD3,0x4E,0xFE } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSource3>{ 0x0406D9F9,0x9AFD,0x44F9,{ 0x85,0xDC,0x70,0x00,0x23,0xA9,0x62,0xE3 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSource4>{ 0x0073BC4D,0xDF66,0x5A91,{ 0xA2,0xBA,0xCE,0xA3,0xE5,0xC5,0x8A,0x19 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>{ 0x23B786CF,0xEC23,0x3979,{ 0xB2,0x7C,0xEB,0x0E,0x12,0xFE,0xB7,0xC7 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>{ 0xD8B4B467,0xE648,0x4D52,{ 0xAB,0x49,0xE0,0xD2,0x27,0x19,0x9F,0x63 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>{ 0xEA4696C4,0x7E8B,0x30CA,{ 0xBC,0xC5,0xC7,0x71,0x89,0xCE,0xA3,0x0A } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>{ 0x4C671045,0x3917,0x40FC,{ 0xA9,0xAC,0x31,0xC9,0xCF,0x5F,0xF9,0x1B } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3>{ 0x6702E65E,0xE915,0x4CFB,{ 0x9C,0x1B,0x05,0x38,0xEF,0xC8,0x66,0x87 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>{ 0x05604542,0x3EF7,0x3222,{ 0x9F,0x53,0x63,0xC9,0xCB,0x7E,0x3B,0xC7 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceState>{ 0xD5C475EF,0x4B63,0x37EC,{ 0x98,0xB9,0x9F,0xC6,0x52,0xB9,0xD2,0xF2 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>{ 0x45F6D0BD,0x1773,0x492E,{ 0x9B,0xA3,0x8A,0xC1,0xCB,0xE7,0x7C,0x08 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialInteractionSourceState3>{ 0xF2F00BC2,0xBD2B,0x4A01,{ 0xA8,0xFB,0x32,0x3E,0x01,0x58,0x52,0x7C } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>{ 0x2D40D1CB,0xE7DA,0x4220,{ 0xB0,0xBF,0x81,0x93,0x01,0x67,0x47,0x80 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>{ 0x05086802,0xF301,0x4343,{ 0x92,0x50,0x2F,0xBA,0xA5,0xF8,0x7A,0x37 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialManipulationDelta>{ 0xA7EC967A,0xD123,0x3A81,{ 0xA1,0x5B,0x99,0x29,0x23,0xDC,0xBE,0x91 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>{ 0xA1D6BBCE,0x42A5,0x377B,{ 0xAD,0xA6,0xD2,0x8E,0x3D,0x38,0x47,0x37 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>{ 0x5F230B9B,0x60C6,0x4DC6,{ 0xBD,0xC9,0x9F,0x4A,0x6F,0x15,0xFE,0x49 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>{ 0xCE503EDC,0xE8A5,0x46F0,{ 0x92,0xD4,0x3C,0x12,0x2B,0x35,0x11,0x2A } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>{ 0x012E80B7,0xAF3B,0x42C2,{ 0x9E,0x41,0xBA,0xAA,0x0E,0x72,0x1F,0x3A } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>{ 0x754A348A,0xFB64,0x4656,{ 0x8E,0xBD,0x9D,0xEE,0xCA,0xAF,0xE4,0x75 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>{ 0x9B713FD7,0x839D,0x4A74,{ 0x87,0x32,0x45,0x46,0x6F,0xC0,0x44,0xB5 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>{ 0xA7104307,0x2C2B,0x4D3A,{ 0x92,0xA7,0x80,0xCE,0xD7,0xC4,0xA0,0xD0 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2>{ 0xECCD86B8,0x52DB,0x469F,{ 0x9E,0x3F,0x80,0xC4,0x7F,0x74,0xBC,0xE9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialPointerPose>{ 0x6953A42E,0xC17E,0x357D,{ 0x97,0xA1,0x72,0x69,0xD0,0xED,0x2D,0x10 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialPointerPose2>{ 0x9D202B17,0x954E,0x4E0C,{ 0x96,0xD1,0xB6,0x79,0x0B,0x6F,0xC2,0xFD } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialPointerPose3>{ 0x6342F3F0,0xEC49,0x5B4B,{ 0xB8,0xD1,0xD1,0x6C,0xBB,0x16,0xBE,0x84 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>{ 0xA25591A9,0xACA1,0x3EE0,{ 0x98,0x16,0x78,0x5C,0xFB,0x2E,0x3F,0xB8 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>{ 0x0E35F5CB,0x3F75,0x43F3,{ 0xAC,0x81,0xD1,0xDC,0x2D,0xF9,0xB1,0xFB } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>{ 0x24DA128F,0x0008,0x4A6D,{ 0xAA,0x50,0x2A,0x76,0xF9,0xCF,0xB2,0x64 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Spatial::ISpatialTappedEventArgs>{ 0x296D83DE,0xF444,0x4AA1,{ 0xB2,0xBF,0x9D,0xC8,0x8D,0x56,0x7D,0xA6 } };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialGestureRecognizer>{ using type = Windows::UI::Input::Spatial::ISpatialGestureRecognizer; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteraction>{ using type = Windows::UI::Input::Spatial::ISpatialInteraction; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionController>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionController; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionControllerProperties>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionManager>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionManager; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionSource>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionSource; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialInteractionSourceState>{ using type = Windows::UI::Input::Spatial::ISpatialInteractionSourceState; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialManipulationDelta>{ using type = Windows::UI::Input::Spatial::ISpatialManipulationDelta; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>{ using type = Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialPointerPose>{ using type = Windows::UI::Input::Spatial::ISpatialPointerPose; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs; };
    template <> struct default_interface<Windows::UI::Input::Spatial::SpatialTappedEventArgs>{ using type = Windows::UI::Input::Spatial::ISpatialTappedEventArgs; };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_RecognitionStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecognitionStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecognitionEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecognitionEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Tapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Tapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HoldStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HoldStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HoldCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HoldCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HoldCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HoldCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ManipulationCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ManipulationCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NavigationStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NavigationStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NavigationUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NavigationUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NavigationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NavigationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NavigationCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NavigationCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CaptureInteraction(void*) noexcept = 0;
            virtual int32_t __stdcall CancelPendingGestures() noexcept = 0;
            virtual int32_t __stdcall TrySetGestureSettings(uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall get_GestureSettings(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteraction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceState(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasTouchpad(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasThumbstick(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SimpleHapticsController(void**) noexcept = 0;
            virtual int32_t __stdcall get_VendorId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProductId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Version(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetRenderableModelAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionController3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetBatteryReport(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTouchpadTouched(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTouchpadPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsThumbstickPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ThumbstickX(double*) noexcept = 0;
            virtual int32_t __stdcall get_ThumbstickY(double*) noexcept = 0;
            virtual int32_t __stdcall get_TouchpadX(double*) noexcept = 0;
            virtual int32_t __stdcall get_TouchpadY(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Interaction(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceDetected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourcePressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourcePressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_InteractionDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InteractionDetected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetDetectedSourcesAtTimestamp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSourceKindSupported(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPointingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMenuSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGraspSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Controller(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetStateAtTimestamp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handedness(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSource4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateHandMeshObserver(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateHandMeshObserverAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PressKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(void**) noexcept = 0;
            virtual int32_t __stdcall get_Velocity(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Orientation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PositionAccuracy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AngularVelocity(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourcePointerPose(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetSourceLossMitigationDirection(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceLossRisk(double*) noexcept = 0;
            virtual int32_t __stdcall TryGetLocation(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelectPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMenuPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGrasped(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SelectPressedValue(double*) noexcept = 0;
            virtual int32_t __stdcall get_ControllerProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialInteractionSourceState3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetHandPose(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetCumulativeDelta(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialManipulationDelta>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Translation(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetCumulativeDelta(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedOffset(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_IsNavigatingX(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsNavigatingY(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsNavigatingZ(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedOffset(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_ForwardDirection(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_UpDirection(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall get_PositionAccuracy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialPointerPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_Head(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialPointerPose2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetInteractionSourcePose(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialPointerPose3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Eyes(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsHeadCapturedBySystem(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetAtTimestamp(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsGesturePossible(uint32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Spatial::ISpatialTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetPointerPose(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_TapCount(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer
    {
        auto RecognitionStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const& handler) const;
        using RecognitionStarted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_RecognitionStarted>;
        [[nodiscard]] RecognitionStarted_revoker RecognitionStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const& handler) const;
        auto RecognitionStarted(winrt::event_token const& token) const noexcept;
        auto RecognitionEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const& handler) const;
        using RecognitionEnded_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_RecognitionEnded>;
        [[nodiscard]] RecognitionEnded_revoker RecognitionEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const& handler) const;
        auto RecognitionEnded(winrt::event_token const& token) const noexcept;
        auto Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const& handler) const;
        using Tapped_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_Tapped>;
        [[nodiscard]] Tapped_revoker Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const& handler) const;
        auto Tapped(winrt::event_token const& token) const noexcept;
        auto HoldStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const& handler) const;
        using HoldStarted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldStarted>;
        [[nodiscard]] HoldStarted_revoker HoldStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const& handler) const;
        auto HoldStarted(winrt::event_token const& token) const noexcept;
        auto HoldCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const& handler) const;
        using HoldCompleted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldCompleted>;
        [[nodiscard]] HoldCompleted_revoker HoldCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const& handler) const;
        auto HoldCompleted(winrt::event_token const& token) const noexcept;
        auto HoldCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const& handler) const;
        using HoldCanceled_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldCanceled>;
        [[nodiscard]] HoldCanceled_revoker HoldCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const& handler) const;
        auto HoldCanceled(winrt::event_token const& token) const noexcept;
        auto ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const& handler) const;
        using ManipulationStarted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationStarted>;
        [[nodiscard]] ManipulationStarted_revoker ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const& handler) const;
        auto ManipulationStarted(winrt::event_token const& token) const noexcept;
        auto ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const& handler) const;
        using ManipulationUpdated_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationUpdated>;
        [[nodiscard]] ManipulationUpdated_revoker ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const& handler) const;
        auto ManipulationUpdated(winrt::event_token const& token) const noexcept;
        auto ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const& handler) const;
        using ManipulationCompleted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationCompleted>;
        [[nodiscard]] ManipulationCompleted_revoker ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const& handler) const;
        auto ManipulationCompleted(winrt::event_token const& token) const noexcept;
        auto ManipulationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const& handler) const;
        using ManipulationCanceled_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationCanceled>;
        [[nodiscard]] ManipulationCanceled_revoker ManipulationCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const& handler) const;
        auto ManipulationCanceled(winrt::event_token const& token) const noexcept;
        auto NavigationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const& handler) const;
        using NavigationStarted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationStarted>;
        [[nodiscard]] NavigationStarted_revoker NavigationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const& handler) const;
        auto NavigationStarted(winrt::event_token const& token) const noexcept;
        auto NavigationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const& handler) const;
        using NavigationUpdated_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationUpdated>;
        [[nodiscard]] NavigationUpdated_revoker NavigationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const& handler) const;
        auto NavigationUpdated(winrt::event_token const& token) const noexcept;
        auto NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const& handler) const;
        using NavigationCompleted_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationCompleted>;
        [[nodiscard]] NavigationCompleted_revoker NavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const& handler) const;
        auto NavigationCompleted(winrt::event_token const& token) const noexcept;
        auto NavigationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const& handler) const;
        using NavigationCanceled_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationCanceled>;
        [[nodiscard]] NavigationCanceled_revoker NavigationCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const& handler) const;
        auto NavigationCanceled(winrt::event_token const& token) const noexcept;
        auto CaptureInteraction(Windows::UI::Input::Spatial::SpatialInteraction const& interaction) const;
        auto CancelPendingGestures() const;
        auto TrySetGestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) const;
        [[nodiscard]] auto GestureSettings() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory
    {
        auto Create(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteraction
    {
        [[nodiscard]] auto SourceState() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteraction>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteraction<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionController
    {
        [[nodiscard]] auto HasTouchpad() const;
        [[nodiscard]] auto HasThumbstick() const;
        [[nodiscard]] auto SimpleHapticsController() const;
        [[nodiscard]] auto VendorId() const;
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto Version() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionController>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionController2
    {
        auto TryGetRenderableModelAsync() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionController2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionController2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionController3
    {
        auto TryGetBatteryReport() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionController3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionController3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties
    {
        [[nodiscard]] auto IsTouchpadTouched() const;
        [[nodiscard]] auto IsTouchpadPressed() const;
        [[nodiscard]] auto IsThumbstickPressed() const;
        [[nodiscard]] auto ThumbstickX() const;
        [[nodiscard]] auto ThumbstickY() const;
        [[nodiscard]] auto TouchpadX() const;
        [[nodiscard]] auto TouchpadY() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto Interaction() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2
    {
        [[nodiscard]] auto InteractionSource() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionManager
    {
        auto SourceDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        using SourceDetected_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceDetected>;
        [[nodiscard]] SourceDetected_revoker SourceDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        auto SourceDetected(winrt::event_token const& token) const noexcept;
        auto SourceLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        using SourceLost_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceLost>;
        [[nodiscard]] SourceLost_revoker SourceLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        auto SourceLost(winrt::event_token const& token) const noexcept;
        auto SourceUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        using SourceUpdated_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceUpdated>;
        [[nodiscard]] SourceUpdated_revoker SourceUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        auto SourceUpdated(winrt::event_token const& token) const noexcept;
        auto SourcePressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        using SourcePressed_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourcePressed>;
        [[nodiscard]] SourcePressed_revoker SourcePressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        auto SourcePressed(winrt::event_token const& token) const noexcept;
        auto SourceReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        using SourceReleased_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceReleased>;
        [[nodiscard]] SourceReleased_revoker SourceReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const;
        auto SourceReleased(winrt::event_token const& token) const noexcept;
        auto InteractionDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const& handler) const;
        using InteractionDetected_revoker = impl::event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager, &impl::abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_InteractionDetected>;
        [[nodiscard]] InteractionDetected_revoker InteractionDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const& handler) const;
        auto InteractionDetected(winrt::event_token const& token) const noexcept;
        auto GetDetectedSourcesAtTimestamp(Windows::Perception::PerceptionTimestamp const& timeStamp) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionManager>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics2
    {
        auto IsSourceKindSupported(Windows::UI::Input::Spatial::SpatialInteractionSourceKind const& kind) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSource
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSource>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2
    {
        [[nodiscard]] auto IsPointingSupported() const;
        [[nodiscard]] auto IsMenuSupported() const;
        [[nodiscard]] auto IsGraspSupported() const;
        [[nodiscard]] auto Controller() const;
        auto TryGetStateAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSource2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSource3
    {
        [[nodiscard]] auto Handedness() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSource3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSource3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSource4
    {
        auto TryCreateHandMeshObserver() const;
        auto TryCreateHandMeshObserverAsync() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSource4>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSource4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs
    {
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2
    {
        [[nodiscard]] auto PressKind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Velocity() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2
    {
        [[nodiscard]] auto Orientation() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3
    {
        [[nodiscard]] auto PositionAccuracy() const;
        [[nodiscard]] auto AngularVelocity() const;
        [[nodiscard]] auto SourcePointerPose() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties
    {
        auto TryGetSourceLossMitigationDirection(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto SourceLossRisk() const;
        auto TryGetLocation(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState
    {
        [[nodiscard]] auto Source() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto IsPressed() const;
        [[nodiscard]] auto Timestamp() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2
    {
        [[nodiscard]] auto IsSelectPressed() const;
        [[nodiscard]] auto IsMenuPressed() const;
        [[nodiscard]] auto IsGrasped() const;
        [[nodiscard]] auto SelectPressedValue() const;
        [[nodiscard]] auto ControllerProperties() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState3
    {
        auto TryGetHandPose() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialInteractionSourceState3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetCumulativeDelta(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialManipulationDelta
    {
        [[nodiscard]] auto Translation() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialManipulationDelta>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialManipulationDelta<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetCumulativeDelta(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        [[nodiscard]] auto NormalizedOffset() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto IsNavigatingX() const;
        [[nodiscard]] auto IsNavigatingY() const;
        [[nodiscard]] auto IsNavigatingZ() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        [[nodiscard]] auto NormalizedOffset() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto ForwardDirection() const;
        [[nodiscard]] auto UpDirection() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2
    {
        [[nodiscard]] auto Orientation() const;
        [[nodiscard]] auto PositionAccuracy() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialPointerPose
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto Head() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialPointerPose>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialPointerPose<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialPointerPose2
    {
        auto TryGetInteractionSourcePose(Windows::UI::Input::Spatial::SpatialInteractionSource const& source) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialPointerPose2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialPointerPose2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialPointerPose3
    {
        [[nodiscard]] auto Eyes() const;
        [[nodiscard]] auto IsHeadCapturedBySystem() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialPointerPose3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialPointerPose3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics
    {
        auto TryGetAtTimestamp(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::PerceptionTimestamp const& timestamp) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        auto IsGesturePossible(Windows::UI::Input::Spatial::SpatialGestureSettings const& gesture) const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs
    {
        [[nodiscard]] auto InteractionSourceKind() const;
        auto TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto TapCount() const;
    };
    template <> struct consume<Windows::UI::Input::Spatial::ISpatialTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>;
    };
}
#endif
