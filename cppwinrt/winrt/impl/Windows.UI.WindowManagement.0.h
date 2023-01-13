// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WindowManagement_0_H
#define WINRT_Windows_UI_WindowManagement_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct DispatcherQueue;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
    struct UIContentRoot;
    struct UIContext;
    struct WindowReference;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct IVisualElement;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    enum class AppWindowClosedReason : int32_t
    {
        Other = 0,
        AppInitiated = 1,
        UserInitiated = 2,
    };
    enum class AppWindowFrameStyle : int32_t
    {
        Default = 0,
        NoFrame = 1,
    };
    enum class AppWindowPresentationKind : int32_t
    {
        Default = 0,
        CompactOverlay = 1,
        FullScreen = 2,
        Spanning = 3,
    };
    enum class AppWindowShowOptions : uint32_t
    {
        Default = 0,
        ShowNoActivate = 0x1,
    };
    enum class AppWindowTitleBarVisibility : int32_t
    {
        Default = 0,
        AlwaysHidden = 1,
    };
    enum class VisibilityDetails : int32_t
    {
        Unknown = 0,
        Visible = 1,
        HiddenBySystem = 2,
        HiddenByApp = 3,
        MinimizedBySystem = 4,
        MinimizedByApp = 5,
    };
    enum class WindowVisibilityState : int32_t
    {
        Unknown = 0,
        Visible = 1,
        Hidden = 2,
    };
    enum class WindowingEnvironmentKind : int32_t
    {
        Unknown = 0,
        Overlapped = 1,
        Tiled = 2,
    };
    struct IAppWindow;
    struct IAppWindow2;
    struct IAppWindowChangedEventArgs;
    struct IAppWindowChangedEventArgs2;
    struct IAppWindowCloseRequestedEventArgs;
    struct IAppWindowClosedEventArgs;
    struct IAppWindowFrame;
    struct IAppWindowFrameStyle;
    struct IAppWindowPlacement;
    struct IAppWindowPresentationConfiguration;
    struct IAppWindowPresentationConfigurationFactory;
    struct IAppWindowPresenter;
    struct IAppWindowStatics;
    struct IAppWindowTitleBar;
    struct IAppWindowTitleBarOcclusion;
    struct IAppWindowTitleBarVisibility;
    struct ICompactOverlayPresentationConfiguration;
    struct IDefaultPresentationConfiguration;
    struct IDisplayRegion;
    struct IFullScreenPresentationConfiguration;
    struct ISpanningPresentationConfiguration;
    struct IWindowInformation;
    struct IWindowInformationStatics;
    struct IWindowingEnvironment;
    struct IWindowingEnvironmentAddedEventArgs;
    struct IWindowingEnvironmentChangedEventArgs;
    struct IWindowingEnvironmentRemovedEventArgs;
    struct IWindowingEnvironmentStatics;
    struct AppWindow;
    struct AppWindowChangedEventArgs;
    struct AppWindowCloseRequestedEventArgs;
    struct AppWindowClosedEventArgs;
    struct AppWindowFrame;
    struct AppWindowPlacement;
    struct AppWindowPresentationConfiguration;
    struct AppWindowPresenter;
    struct AppWindowTitleBar;
    struct AppWindowTitleBarOcclusion;
    struct CompactOverlayPresentationConfiguration;
    struct DefaultPresentationConfiguration;
    struct DisplayRegion;
    struct FullScreenPresentationConfiguration;
    struct SpanningPresentationConfiguration;
    struct WindowInformation;
    struct WindowingEnvironment;
    struct WindowingEnvironmentAddedEventArgs;
    struct WindowingEnvironmentChangedEventArgs;
    struct WindowingEnvironmentRemovedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::WindowManagement::IAppWindow>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindow2>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowFrame>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowFrameStyle>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPlacement>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowPresenter>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowTitleBar>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IDisplayRegion>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::ISpanningPresentationConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowInformation>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowInformationStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironment>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindow>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowClosedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowFrame>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPlacement>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPresentationConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPresenter>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowTitleBar>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::CompactOverlayPresentationConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::DefaultPresentationConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::DisplayRegion>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::FullScreenPresentationConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::SpanningPresentationConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowInformation>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironment>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentAddedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentRemovedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowClosedReason>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowFrameStyle>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowPresentationKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowShowOptions>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::AppWindowTitleBarVisibility>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::VisibilityDetails>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowVisibilityState>{ using type = enum_category; };
    template <> struct category<Windows::UI::WindowManagement::WindowingEnvironmentKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindow> = L"Windows.UI.WindowManagement.AppWindow";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowChangedEventArgs> = L"Windows.UI.WindowManagement.AppWindowChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs> = L"Windows.UI.WindowManagement.AppWindowCloseRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowClosedEventArgs> = L"Windows.UI.WindowManagement.AppWindowClosedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowFrame> = L"Windows.UI.WindowManagement.AppWindowFrame";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowPlacement> = L"Windows.UI.WindowManagement.AppWindowPlacement";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowPresentationConfiguration> = L"Windows.UI.WindowManagement.AppWindowPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowPresenter> = L"Windows.UI.WindowManagement.AppWindowPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowTitleBar> = L"Windows.UI.WindowManagement.AppWindowTitleBar";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion> = L"Windows.UI.WindowManagement.AppWindowTitleBarOcclusion";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::CompactOverlayPresentationConfiguration> = L"Windows.UI.WindowManagement.CompactOverlayPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::DefaultPresentationConfiguration> = L"Windows.UI.WindowManagement.DefaultPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::DisplayRegion> = L"Windows.UI.WindowManagement.DisplayRegion";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::FullScreenPresentationConfiguration> = L"Windows.UI.WindowManagement.FullScreenPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::SpanningPresentationConfiguration> = L"Windows.UI.WindowManagement.SpanningPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowInformation> = L"Windows.UI.WindowManagement.WindowInformation";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowingEnvironment> = L"Windows.UI.WindowManagement.WindowingEnvironment";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowingEnvironmentAddedEventArgs> = L"Windows.UI.WindowManagement.WindowingEnvironmentAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs> = L"Windows.UI.WindowManagement.WindowingEnvironmentChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowingEnvironmentRemovedEventArgs> = L"Windows.UI.WindowManagement.WindowingEnvironmentRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowClosedReason> = L"Windows.UI.WindowManagement.AppWindowClosedReason";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowFrameStyle> = L"Windows.UI.WindowManagement.AppWindowFrameStyle";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowPresentationKind> = L"Windows.UI.WindowManagement.AppWindowPresentationKind";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowShowOptions> = L"Windows.UI.WindowManagement.AppWindowShowOptions";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::AppWindowTitleBarVisibility> = L"Windows.UI.WindowManagement.AppWindowTitleBarVisibility";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::VisibilityDetails> = L"Windows.UI.WindowManagement.VisibilityDetails";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowVisibilityState> = L"Windows.UI.WindowManagement.WindowVisibilityState";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::WindowingEnvironmentKind> = L"Windows.UI.WindowManagement.WindowingEnvironmentKind";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindow> = L"Windows.UI.WindowManagement.IAppWindow";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindow2> = L"Windows.UI.WindowManagement.IAppWindow2";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowChangedEventArgs> = L"Windows.UI.WindowManagement.IAppWindowChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowChangedEventArgs2> = L"Windows.UI.WindowManagement.IAppWindowChangedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs> = L"Windows.UI.WindowManagement.IAppWindowCloseRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowClosedEventArgs> = L"Windows.UI.WindowManagement.IAppWindowClosedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowFrame> = L"Windows.UI.WindowManagement.IAppWindowFrame";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowFrameStyle> = L"Windows.UI.WindowManagement.IAppWindowFrameStyle";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowPlacement> = L"Windows.UI.WindowManagement.IAppWindowPlacement";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration> = L"Windows.UI.WindowManagement.IAppWindowPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory> = L"Windows.UI.WindowManagement.IAppWindowPresentationConfigurationFactory";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowPresenter> = L"Windows.UI.WindowManagement.IAppWindowPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowStatics> = L"Windows.UI.WindowManagement.IAppWindowStatics";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowTitleBar> = L"Windows.UI.WindowManagement.IAppWindowTitleBar";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion> = L"Windows.UI.WindowManagement.IAppWindowTitleBarOcclusion";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility> = L"Windows.UI.WindowManagement.IAppWindowTitleBarVisibility";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration> = L"Windows.UI.WindowManagement.ICompactOverlayPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IDefaultPresentationConfiguration> = L"Windows.UI.WindowManagement.IDefaultPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IDisplayRegion> = L"Windows.UI.WindowManagement.IDisplayRegion";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration> = L"Windows.UI.WindowManagement.IFullScreenPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::ISpanningPresentationConfiguration> = L"Windows.UI.WindowManagement.ISpanningPresentationConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowInformation> = L"Windows.UI.WindowManagement.IWindowInformation";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowInformationStatics> = L"Windows.UI.WindowManagement.IWindowInformationStatics";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowingEnvironment> = L"Windows.UI.WindowManagement.IWindowingEnvironment";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs> = L"Windows.UI.WindowManagement.IWindowingEnvironmentAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs> = L"Windows.UI.WindowManagement.IWindowingEnvironmentChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs> = L"Windows.UI.WindowManagement.IWindowingEnvironmentRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::IWindowingEnvironmentStatics> = L"Windows.UI.WindowManagement.IWindowingEnvironmentStatics";
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindow>{ 0x663014A6,0xB75E,0x5DBD,{ 0x99,0x5C,0xF0,0x11,0x7F,0xA3,0xFB,0x61 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindow2>{ 0x27245398,0x5E04,0x5269,{ 0x9E,0x33,0x5B,0x1E,0x96,0x59,0x3C,0x45 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>{ 0x1DE1F3BE,0xA655,0x55AD,{ 0xB2,0xB6,0xEB,0x24,0x0F,0x88,0x03,0x56 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowChangedEventArgs2>{ 0x77071B54,0x3E18,0x520B,{ 0xA9,0x5D,0x55,0xD7,0xB5,0xCB,0x97,0x40 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>{ 0xE9FF01DA,0xE7A2,0x57A8,{ 0x8B,0x5E,0x39,0xC4,0x00,0x3A,0xFD,0xBB } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>{ 0xCC7DF816,0x9520,0x5A06,{ 0x82,0x1E,0x45,0x6A,0xD8,0xB3,0x58,0xAA } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowFrame>{ 0x9EE22601,0x7E5D,0x52AF,{ 0x84,0x6B,0x01,0xDC,0x6C,0x29,0x65,0x67 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowFrameStyle>{ 0xAC412946,0xE1AC,0x5230,{ 0x94,0x4A,0xC6,0x08,0x73,0xDC,0xF4,0xA9 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowPlacement>{ 0x03DC815E,0xE7A9,0x5857,{ 0x9C,0x03,0x7D,0x67,0x05,0x94,0x41,0x0E } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>{ 0xB5A43EE3,0xDF33,0x5E67,{ 0xBD,0x31,0x10,0x72,0x45,0x73,0x00,0xDF } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>{ 0xFD3606A6,0x7875,0x5DE8,{ 0x84,0xFF,0x63,0x51,0xEE,0x13,0xDD,0x0D } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowPresenter>{ 0x5AE9ED73,0xE1FD,0x5317,{ 0xAD,0x78,0x5A,0x3E,0xD2,0x71,0xBB,0xDE } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowStatics>{ 0xFF1F3EA3,0xB769,0x50EF,{ 0x98,0x73,0x10,0x8C,0xD0,0xE8,0x97,0x46 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowTitleBar>{ 0x6E932C84,0xF644,0x541D,{ 0xA2,0xD7,0x0C,0x26,0x24,0x37,0x84,0x2D } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>{ 0xFEA3CFFD,0x2CCF,0x5FC3,{ 0xAE,0xAE,0xF8,0x43,0x87,0x6B,0xF3,0x7E } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>{ 0xA215A4E3,0x6E7E,0x5651,{ 0x8C,0x3B,0x62,0x48,0x19,0x52,0x81,0x54 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>{ 0xA7E5750F,0x5730,0x56C6,{ 0x8E,0x1F,0xD6,0x3F,0xF4,0xD7,0x98,0x0D } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>{ 0xD8C2B53B,0x2168,0x5703,{ 0xA8,0x53,0xD5,0x25,0x58,0x9F,0xE2,0xB9 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IDisplayRegion>{ 0xDB50C3A2,0x4094,0x5F47,{ 0x8C,0xB1,0xEA,0x01,0xDD,0xAF,0xAA,0x94 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>{ 0x43D3DCD8,0xD2A8,0x503D,{ 0xA6,0x26,0x15,0x53,0x3D,0x6D,0x5F,0x62 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::ISpanningPresentationConfiguration>{ 0x7751D2BC,0xB99B,0x58D0,{ 0xB1,0x54,0xEF,0xFB,0xE1,0x7F,0x54,0xC3 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowInformation>{ 0x91439554,0xFFEE,0x5DEE,{ 0xB1,0x0E,0xF6,0x65,0x24,0x2D,0xD5,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowInformationStatics>{ 0x458D3935,0x7563,0x5313,{ 0x98,0xBC,0xE4,0x12,0x32,0x98,0xF1,0x75 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowingEnvironment>{ 0x264363C0,0x2A49,0x5417,{ 0xB3,0xAE,0x48,0xA7,0x1C,0x63,0xA3,0xBD } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>{ 0xFF2A5B7F,0xF183,0x5C66,{ 0x99,0xB2,0x42,0x90,0x82,0x06,0x92,0x99 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>{ 0x4160CFC6,0x023D,0x5E9A,{ 0xB4,0x31,0x35,0x0E,0x67,0xDC,0x97,0x8A } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>{ 0x2E5B5473,0xBEFF,0x5E53,{ 0x93,0x16,0x7E,0x77,0x5F,0xE5,0x68,0xB3 } };
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>{ 0x874E9FB7,0xC642,0x55AB,{ 0x8A,0xA2,0x16,0x2F,0x73,0x4A,0x9A,0x72 } };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindow>{ using type = Windows::UI::WindowManagement::IAppWindow; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowChangedEventArgs>{ using type = Windows::UI::WindowManagement::IAppWindowChangedEventArgs; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs>{ using type = Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowClosedEventArgs>{ using type = Windows::UI::WindowManagement::IAppWindowClosedEventArgs; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowFrame>{ using type = Windows::UI::WindowManagement::IAppWindowFrame; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowPlacement>{ using type = Windows::UI::WindowManagement::IAppWindowPlacement; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowPresentationConfiguration>{ using type = Windows::UI::WindowManagement::IAppWindowPresentationConfiguration; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowPresenter>{ using type = Windows::UI::WindowManagement::IAppWindowPresenter; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowTitleBar>{ using type = Windows::UI::WindowManagement::IAppWindowTitleBar; };
    template <> struct default_interface<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion>{ using type = Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion; };
    template <> struct default_interface<Windows::UI::WindowManagement::CompactOverlayPresentationConfiguration>{ using type = Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration; };
    template <> struct default_interface<Windows::UI::WindowManagement::DefaultPresentationConfiguration>{ using type = Windows::UI::WindowManagement::IDefaultPresentationConfiguration; };
    template <> struct default_interface<Windows::UI::WindowManagement::DisplayRegion>{ using type = Windows::UI::WindowManagement::IDisplayRegion; };
    template <> struct default_interface<Windows::UI::WindowManagement::FullScreenPresentationConfiguration>{ using type = Windows::UI::WindowManagement::IFullScreenPresentationConfiguration; };
    template <> struct default_interface<Windows::UI::WindowManagement::SpanningPresentationConfiguration>{ using type = Windows::UI::WindowManagement::ISpanningPresentationConfiguration; };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowInformation>{ using type = Windows::UI::WindowManagement::IWindowInformation; };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironment>{ using type = Windows::UI::WindowManagement::IWindowingEnvironment; };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironmentAddedEventArgs>{ using type = Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs; };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs>{ using type = Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs; };
    template <> struct default_interface<Windows::UI::WindowManagement::WindowingEnvironmentRemovedEventArgs>{ using type = Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs; };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PersistedStateId(void**) noexcept = 0;
            virtual int32_t __stdcall put_PersistedStateId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Presenter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_TitleBar(void**) noexcept = 0;
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall CloseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPlacement(void**) noexcept = 0;
            virtual int32_t __stdcall GetDisplayRegions(void**) noexcept = 0;
            virtual int32_t __stdcall RequestMoveToDisplayRegion(void*) noexcept = 0;
            virtual int32_t __stdcall RequestMoveAdjacentToCurrentView() noexcept = 0;
            virtual int32_t __stdcall RequestMoveAdjacentToWindow(void*) noexcept = 0;
            virtual int32_t __stdcall RequestMoveRelativeToWindowContent(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall RequestMoveRelativeToCurrentViewContent(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall RequestMoveRelativeToDisplayRegion(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall RequestSize(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall TryShowAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CloseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CloseRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowReference(void**) noexcept = 0;
            virtual int32_t __stdcall TryShowAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryShowAsync2(uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DidAvailableWindowPresentationsChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidDisplayRegionsChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidFrameChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidSizeChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidTitleBarChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidVisibilityChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidWindowingEnvironmentChange(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DidWindowPresentationChange(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DidOffsetChange(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DragRegionVisuals(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFrameStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetFrameStyle(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayRegion(void**) noexcept = 0;
            virtual int32_t __stdcall get_Offset(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall IsPresentationSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall RequestPresentation(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall RequestPresentationByKind(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ClearAllPersistedState() noexcept = 0;
            virtual int32_t __stdcall ClearPersistedState(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonHoverBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonHoverBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonHoverForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonHoverForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonInactiveBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonInactiveBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonInactiveForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonInactiveForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonPressedBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonPressedBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ButtonPressedForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ButtonPressedForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendsContentIntoTitleBar(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExtendsContentIntoTitleBar(bool) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_InactiveBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_InactiveBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_InactiveForegroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_InactiveForegroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall GetTitleBarOcclusions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OccludingRect(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPreferredVisibility(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetPreferredVisibility(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IDisplayRegion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayMonitorDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_WorkAreaOffset(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WorkAreaSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsExclusive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsExclusive(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::ISpanningPresentationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSpanningRects(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Visibility(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromWindowReference(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDisplayRegions(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowingEnvironment(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAll(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllWithKind(int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindow
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::UIContentRoot) Content() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) DispatcherQueue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowFrame) Frame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsVisible() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PersistedStateId() const;
        WINRT_IMPL_AUTO(void) PersistedStateId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowPresenter) Presenter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowTitleBar) TitleBar() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::UIContext) UIContext() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowingEnvironment) WindowingEnvironment() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) CloseAsync() const;
        WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowPlacement) GetPlacement() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::WindowManagement::DisplayRegion>) GetDisplayRegions() const;
        WINRT_IMPL_AUTO(void) RequestMoveToDisplayRegion(Windows::UI::WindowManagement::DisplayRegion const& displayRegion) const;
        WINRT_IMPL_AUTO(void) RequestMoveAdjacentToCurrentView() const;
        WINRT_IMPL_AUTO(void) RequestMoveAdjacentToWindow(Windows::UI::WindowManagement::AppWindow const& anchorWindow) const;
        WINRT_IMPL_AUTO(void) RequestMoveRelativeToWindowContent(Windows::UI::WindowManagement::AppWindow const& anchorWindow, Windows::Foundation::Point const& contentOffset) const;
        WINRT_IMPL_AUTO(void) RequestMoveRelativeToCurrentViewContent(Windows::Foundation::Point const& contentOffset) const;
        WINRT_IMPL_AUTO(void) RequestMoveRelativeToDisplayRegion(Windows::UI::WindowManagement::DisplayRegion const& displayRegion, Windows::Foundation::Point const& displayRegionOffset) const;
        WINRT_IMPL_AUTO(void) RequestSize(Windows::Foundation::Size const& frameSize) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryShowAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) Changed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowChangedEventArgs> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IAppWindow, &impl::abi_t<Windows::UI::WindowManagement::IAppWindow>::remove_Changed>;
        [[nodiscard]] Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Changed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IAppWindow, &impl::abi_t<Windows::UI::WindowManagement::IAppWindow>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowClosedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CloseRequested(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs> const& handler) const;
        using CloseRequested_revoker = impl::event_revoker<Windows::UI::WindowManagement::IAppWindow, &impl::abi_t<Windows::UI::WindowManagement::IAppWindow>::remove_CloseRequested>;
        [[nodiscard]] CloseRequested_revoker CloseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::AppWindow, Windows::UI::WindowManagement::AppWindowCloseRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CloseRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindow>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindow2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowReference) WindowReference() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryShowAsync(Windows::UI::WindowManagement::AppWindowShowOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryShowAsync(Windows::UI::WindowManagement::AppWindowShowOptions const& options, Windows::UI::WindowReference const& anchorWindow) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindow2>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindow2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidAvailableWindowPresentationsChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidDisplayRegionsChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidFrameChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidSizeChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidTitleBarChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidVisibilityChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidWindowingEnvironmentChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidWindowPresentationChange() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowChangedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DidOffsetChange() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowCloseRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Cancel() const;
        WINRT_IMPL_AUTO(void) Cancel(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowCloseRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowClosedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowClosedReason) Reason() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Composition::IVisualElement>) DragRegionVisuals() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowFrame>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowFrameStyle
    {
        WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowFrameStyle) GetFrameStyle() const;
        WINRT_IMPL_AUTO(void) SetFrameStyle(Windows::UI::WindowManagement::AppWindowFrameStyle const& frameStyle) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowFrameStyle<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPlacement
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::DisplayRegion) DisplayRegion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Offset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) Size() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPlacement>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPlacement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPresentationConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowPresentationKind) Kind() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPresentationConfigurationFactory
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPresentationConfigurationFactory>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPresentationConfigurationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowPresenter
    {
        WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowPresentationConfiguration) GetConfiguration() const;
        WINRT_IMPL_AUTO(bool) IsPresentationSupported(Windows::UI::WindowManagement::AppWindowPresentationKind const& presentationKind) const;
        WINRT_IMPL_AUTO(bool) RequestPresentation(Windows::UI::WindowManagement::AppWindowPresentationConfiguration const& configuration) const;
        WINRT_IMPL_AUTO(bool) RequestPresentation(Windows::UI::WindowManagement::AppWindowPresentationKind const& presentationKind) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowPresenter>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::WindowManagement::AppWindow>) TryCreateAsync() const;
        WINRT_IMPL_AUTO(void) ClearAllPersistedState() const;
        WINRT_IMPL_AUTO(void) ClearPersistedState(param::hstring const& key) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowStatics>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowTitleBar
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) BackgroundColor() const;
        WINRT_IMPL_AUTO(void) BackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonBackgroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonForegroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonHoverBackgroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonHoverBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonHoverForegroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonHoverForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonInactiveBackgroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonInactiveBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonInactiveForegroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonInactiveForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonPressedBackgroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonPressedBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ButtonPressedForegroundColor() const;
        WINRT_IMPL_AUTO(void) ButtonPressedForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ExtendsContentIntoTitleBar() const;
        WINRT_IMPL_AUTO(void) ExtendsContentIntoTitleBar(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) ForegroundColor() const;
        WINRT_IMPL_AUTO(void) ForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) InactiveBackgroundColor() const;
        WINRT_IMPL_AUTO(void) InactiveBackgroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) InactiveForegroundColor() const;
        WINRT_IMPL_AUTO(void) InactiveForegroundColor(Windows::Foundation::IReference<Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsVisible() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::WindowManagement::AppWindowTitleBarOcclusion>) GetTitleBarOcclusions() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowTitleBar>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowTitleBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowTitleBarOcclusion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) OccludingRect() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowTitleBarOcclusion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IAppWindowTitleBarVisibility
    {
        WINRT_IMPL_AUTO(Windows::UI::WindowManagement::AppWindowTitleBarVisibility) GetPreferredVisibility() const;
        WINRT_IMPL_AUTO(void) SetPreferredVisibility(Windows::UI::WindowManagement::AppWindowTitleBarVisibility const& visibilityMode) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IAppWindowTitleBarVisibility<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_ICompactOverlayPresentationConfiguration
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_ICompactOverlayPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IDefaultPresentationConfiguration
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::IDefaultPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IDefaultPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IDisplayRegion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayMonitorDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsVisible() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) WorkAreaOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) WorkAreaSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowingEnvironment) WindowingEnvironment() const;
        WINRT_IMPL_AUTO(winrt::event_token) Changed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::DisplayRegion, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IDisplayRegion, &impl::abi_t<Windows::UI::WindowManagement::IDisplayRegion>::remove_Changed>;
        [[nodiscard]] Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::DisplayRegion, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WindowManagement::IDisplayRegion>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IDisplayRegion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IFullScreenPresentationConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsExclusive() const;
        WINRT_IMPL_AUTO(void) IsExclusive(bool value) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IFullScreenPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IFullScreenPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_ISpanningPresentationConfiguration
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Rect>) GetSpanningRects() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::ISpanningPresentationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_ISpanningPresentationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowVisibilityState) Visibility() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowInformation>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowInformation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowInformationStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowInformation) FromWindowReference(Windows::UI::WindowReference const& value) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowInformationStatics>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowingEnvironmentKind) Kind() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::WindowManagement::DisplayRegion>) GetDisplayRegions() const;
        WINRT_IMPL_AUTO(winrt::event_token) Changed(Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::WindowingEnvironment, Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::UI::WindowManagement::IWindowingEnvironment, &impl::abi_t<Windows::UI::WindowManagement::IWindowingEnvironment>::remove_Changed>;
        [[nodiscard]] Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WindowManagement::WindowingEnvironment, Windows::UI::WindowManagement::WindowingEnvironmentChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironment>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentAddedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowingEnvironment) WindowingEnvironment() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::WindowManagement::WindowingEnvironment) WindowingEnvironment() const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::WindowManagement::WindowingEnvironment>) FindAll() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::WindowManagement::WindowingEnvironment>) FindAll(Windows::UI::WindowManagement::WindowingEnvironmentKind const& kind) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::IWindowingEnvironmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics<D>;
    };
}
#endif
