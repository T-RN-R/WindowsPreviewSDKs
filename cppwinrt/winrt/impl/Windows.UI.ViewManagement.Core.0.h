// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_ViewManagement_Core_0_H
#define WINRT_Windows_UI_ViewManagement_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct UIContext;
}
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core
{
    enum class CoreInputViewKind : int32_t
    {
        Default = 0,
        Keyboard = 1,
        Handwriting = 2,
        Emoji = 3,
        Symbols = 4,
        Clipboard = 5,
    };
    enum class CoreInputViewOcclusionKind : int32_t
    {
        Docked = 0,
        Floating = 1,
        Overlay = 2,
    };
    enum class CoreInputViewXYFocusTransferDirection : int32_t
    {
        Up = 0,
        Right = 1,
        Down = 2,
        Left = 3,
    };
    struct ICoreInputView;
    struct ICoreInputView2;
    struct ICoreInputView3;
    struct ICoreInputView4;
    struct ICoreInputViewHidingEventArgs;
    struct ICoreInputViewOcclusion;
    struct ICoreInputViewOcclusionsChangedEventArgs;
    struct ICoreInputViewShowingEventArgs;
    struct ICoreInputViewStatics;
    struct ICoreInputViewStatics2;
    struct ICoreInputViewTransferringXYFocusEventArgs;
    struct IUISettingsController;
    struct IUISettingsControllerStatics;
    struct CoreInputView;
    struct CoreInputViewHidingEventArgs;
    struct CoreInputViewOcclusion;
    struct CoreInputViewOcclusionsChangedEventArgs;
    struct CoreInputViewShowingEventArgs;
    struct CoreInputViewTransferringXYFocusEventArgs;
    struct UISettingsController;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView2>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView3>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView4>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::IUISettingsController>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputView>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::UISettingsController>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputView>{ L"Windows.UI.ViewManagement.Core.CoreInputView" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>{ L"Windows.UI.ViewManagement.Core.CoreInputViewHidingEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>{ L"Windows.UI.ViewManagement.Core.CoreInputViewShowingEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ L"Windows.UI.ViewManagement.Core.CoreInputViewTransferringXYFocusEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::UISettingsController>{ L"Windows.UI.ViewManagement.Core.UISettingsController" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewKind>{ L"Windows.UI.ViewManagement.Core.CoreInputViewKind" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>{ L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionKind" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>{ L"Windows.UI.ViewManagement.Core.CoreInputViewXYFocusTransferDirection" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView>{ L"Windows.UI.ViewManagement.Core.ICoreInputView" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView2>{ L"Windows.UI.ViewManagement.Core.ICoreInputView2" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView3>{ L"Windows.UI.ViewManagement.Core.ICoreInputView3" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView4>{ L"Windows.UI.ViewManagement.Core.ICoreInputView4" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewHidingEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewShowingEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics2" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ L"Windows.UI.ViewManagement.Core.ICoreInputViewTransferringXYFocusEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::IUISettingsController>{ L"Windows.UI.ViewManagement.Core.IUISettingsController" };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>{ L"Windows.UI.ViewManagement.Core.IUISettingsControllerStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView>{ 0xC770CD7A,0x7001,0x4C32,{ 0xBF,0x94,0x25,0xC1,0xF5,0x54,0xCB,0xF1 } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView2>{ 0x0ED726C1,0xE09A,0x4AE8,{ 0xAE,0xDF,0xDF,0xA4,0x85,0x7D,0x1A,0x01 } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView3>{ 0xBC941653,0x3AB9,0x4849,{ 0x8F,0x58,0x46,0xE7,0xF0,0x35,0x3C,0xFC } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView4>{ 0x002863D6,0xD9EF,0x57EB,{ 0x8C,0xEF,0x77,0xF6,0xCE,0x1B,0x7E,0xE7 } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>{ 0xEADA47BD,0xBAC5,0x5336,{ 0x84,0x8D,0x41,0x08,0x35,0x84,0xDA,0xAD } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ 0xCC36CE06,0x3865,0x4177,{ 0xB5,0xF5,0x8B,0x65,0xE0,0xB9,0xCE,0x84 } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ 0xBE1027E8,0xB3EE,0x4DF7,{ 0x95,0x54,0x89,0xCD,0xC6,0x60,0x82,0xC2 } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>{ 0xCA52261B,0xFB9E,0x5DAF,{ 0xA9,0x8C,0x26,0x2B,0x8B,0x76,0xAF,0x50 } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ 0x7D9B97CD,0xEDBE,0x49CF,{ 0xA5,0x4F,0x33,0x7D,0xE0,0x52,0x90,0x7F } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ 0x7EBC0862,0xD049,0x4E52,{ 0x87,0xB0,0x1E,0x90,0xE9,0x8C,0x49,0xED } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ 0x04DE169F,0xBA02,0x4850,{ 0x8B,0x55,0xD8,0x2D,0x03,0xBA,0x6D,0x7F } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::IUISettingsController>{ 0x78A51AC4,0x15C0,0x5A1B,{ 0xA7,0x5B,0xAC,0xBF,0x9C,0xB8,0xBB,0x9E } };
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>{ 0xEB3C68CC,0xC220,0x578C,{ 0x81,0x19,0x7D,0xB3,0x24,0xED,0x26,0xA6 } };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputView>{ using type = Windows::UI::ViewManagement::Core::ICoreInputView; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::UISettingsController>{ using type = Windows::UI::ViewManagement::Core::IUISettingsController; };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OcclusionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OcclusionsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetCoreInputViewOcclusions(void**) noexcept = 0;
            virtual int32_t __stdcall TryShowPrimaryView(bool*) noexcept = 0;
            virtual int32_t __stdcall TryHidePrimaryView(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_XYFocusTransferringFromPrimaryView(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XYFocusTransferringFromPrimaryView(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_XYFocusTransferredToPrimaryView(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XYFocusTransferredToPrimaryView(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect, int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryShow(bool*) noexcept = 0;
            virtual int32_t __stdcall TryShowWithKind(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall TryHide(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrimaryViewShowing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrimaryViewShowing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PrimaryViewHiding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrimaryViewHiding(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCancel(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OccludingRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OcclusionKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Occlusions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCancel(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Origin(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TransferHandled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransferHandled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeepPrimaryViewVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeepPrimaryViewVisible(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::IUISettingsController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAdvancedEffectsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall SetAnimationsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall SetAutoHideScrollBars(bool) noexcept = 0;
            virtual int32_t __stdcall SetMessageDuration(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetTextScaleFactor(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView
    {
        auto OcclusionsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
        using OcclusionsChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView>::remove_OcclusionsChanged>;
        [[nodiscard]] OcclusionsChanged_revoker OcclusionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
        auto OcclusionsChanged(winrt::event_token const& token) const noexcept;
        auto GetCoreInputViewOcclusions() const;
        auto TryShowPrimaryView() const;
        auto TryHidePrimaryView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView2
    {
        auto XYFocusTransferringFromPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
        using XYFocusTransferringFromPrimaryView_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferringFromPrimaryView>;
        [[nodiscard]] XYFocusTransferringFromPrimaryView_revoker XYFocusTransferringFromPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
        auto XYFocusTransferringFromPrimaryView(winrt::event_token const& token) const noexcept;
        auto XYFocusTransferredToPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const;
        using XYFocusTransferredToPrimaryView_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferredToPrimaryView>;
        [[nodiscard]] XYFocusTransferredToPrimaryView_revoker XYFocusTransferredToPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const;
        auto XYFocusTransferredToPrimaryView(winrt::event_token const& token) const noexcept;
        auto TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect const& origin, Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection const& direction) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView3
    {
        auto TryShow() const;
        auto TryShow(Windows::UI::ViewManagement::Core::CoreInputViewKind const& type) const;
        auto TryHide() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView4
    {
        auto PrimaryViewShowing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs> const& handler) const;
        using PrimaryViewShowing_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView4, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView4>::remove_PrimaryViewShowing>;
        [[nodiscard]] PrimaryViewShowing_revoker PrimaryViewShowing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs> const& handler) const;
        auto PrimaryViewShowing(winrt::event_token const& token) const noexcept;
        auto PrimaryViewHiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs> const& handler) const;
        using PrimaryViewHiding_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView4, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView4>::remove_PrimaryViewHiding>;
        [[nodiscard]] PrimaryViewHiding_revoker PrimaryViewHiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs> const& handler) const;
        auto PrimaryViewHiding(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView4>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewHidingEventArgs
    {
        auto TryCancel() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewHidingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion
    {
        [[nodiscard]] auto OccludingRect() const;
        [[nodiscard]] auto OcclusionKind() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs
    {
        [[nodiscard]] auto Occlusions() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewShowingEventArgs
    {
        auto TryCancel() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewShowingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2
    {
        auto GetForUIContext(Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs
    {
        [[nodiscard]] auto Origin() const;
        [[nodiscard]] auto Direction() const;
        auto TransferHandled(bool value) const;
        [[nodiscard]] auto TransferHandled() const;
        auto KeepPrimaryViewVisible(bool value) const;
        [[nodiscard]] auto KeepPrimaryViewVisible() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_IUISettingsController
    {
        auto SetAdvancedEffectsEnabled(bool value) const;
        auto SetAnimationsEnabled(bool value) const;
        auto SetAutoHideScrollBars(bool value) const;
        auto SetMessageDuration(uint32_t value) const;
        auto SetTextScaleFactor(double value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::IUISettingsController>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_IUISettingsController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_IUISettingsControllerStatics
    {
        auto RequestDefaultAsync() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_IUISettingsControllerStatics<D>;
    };
}
#endif
