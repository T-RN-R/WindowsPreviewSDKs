// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_0_H
#define WINRT_Windows_UI_Shell_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    struct AppListEntry;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI::StartScreen
{
    struct SecondaryTile;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct AppWindow;
}
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    enum class SecurityAppKind : int32_t
    {
        WebProtection = 0,
    };
    enum class SecurityAppState : int32_t
    {
        Disabled = 0,
        Enabled = 1,
    };
    enum class SecurityAppSubstatus : int32_t
    {
        Undetermined = 0,
        NoActionNeeded = 1,
        ActionRecommended = 2,
        ActionNeeded = 3,
    };
    struct IAdaptiveCard;
    struct IAdaptiveCardBuilderStatics;
    struct ISecurityAppManager;
    struct ITaskbarManager;
    struct ITaskbarManager2;
    struct ITaskbarManagerStatics;
    struct IWindowTab;
    struct IWindowTabCloseRequestedEventArgs;
    struct IWindowTabCollection;
    struct IWindowTabGroup;
    struct IWindowTabIcon;
    struct IWindowTabIconStatics;
    struct IWindowTabManager;
    struct IWindowTabManagerStatics;
    struct IWindowTabSwitchRequestedEventArgs;
    struct IWindowTabThumbnailRequestedEventArgs;
    struct AdaptiveCardBuilder;
    struct SecurityAppManager;
    struct TaskbarManager;
    struct WindowTab;
    struct WindowTabCloseRequestedEventArgs;
    struct WindowTabCollection;
    struct WindowTabGroup;
    struct WindowTabIcon;
    struct WindowTabManager;
    struct WindowTabSwitchRequestedEventArgs;
    struct WindowTabThumbnailRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Shell::IAdaptiveCard>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::ISecurityAppManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::ITaskbarManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::ITaskbarManager2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::ITaskbarManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTab>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabCollection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabGroup>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabIcon>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabIconStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Shell::AdaptiveCardBuilder>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::SecurityAppManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::TaskbarManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTab>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabCloseRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabGroup>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabIcon>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Shell::SecurityAppKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Shell::SecurityAppState>{ using type = enum_category; };
    template <> struct category<Windows::UI::Shell::SecurityAppSubstatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::AdaptiveCardBuilder>{ L"Windows.UI.Shell.AdaptiveCardBuilder" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::SecurityAppManager>{ L"Windows.UI.Shell.SecurityAppManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::TaskbarManager>{ L"Windows.UI.Shell.TaskbarManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTab>{ L"Windows.UI.Shell.WindowTab" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabCloseRequestedEventArgs>{ L"Windows.UI.Shell.WindowTabCloseRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabCollection>{ L"Windows.UI.Shell.WindowTabCollection" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabGroup>{ L"Windows.UI.Shell.WindowTabGroup" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabIcon>{ L"Windows.UI.Shell.WindowTabIcon" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabManager>{ L"Windows.UI.Shell.WindowTabManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>{ L"Windows.UI.Shell.WindowTabSwitchRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>{ L"Windows.UI.Shell.WindowTabThumbnailRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::SecurityAppKind>{ L"Windows.UI.Shell.SecurityAppKind" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::SecurityAppState>{ L"Windows.UI.Shell.SecurityAppState" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::SecurityAppSubstatus>{ L"Windows.UI.Shell.SecurityAppSubstatus" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IAdaptiveCard>{ L"Windows.UI.Shell.IAdaptiveCard" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ L"Windows.UI.Shell.IAdaptiveCardBuilderStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::ISecurityAppManager>{ L"Windows.UI.Shell.ISecurityAppManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::ITaskbarManager>{ L"Windows.UI.Shell.ITaskbarManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::ITaskbarManager2>{ L"Windows.UI.Shell.ITaskbarManager2" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::ITaskbarManagerStatics>{ L"Windows.UI.Shell.ITaskbarManagerStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTab>{ L"Windows.UI.Shell.IWindowTab" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>{ L"Windows.UI.Shell.IWindowTabCloseRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabCollection>{ L"Windows.UI.Shell.IWindowTabCollection" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabGroup>{ L"Windows.UI.Shell.IWindowTabGroup" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabIcon>{ L"Windows.UI.Shell.IWindowTabIcon" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabIconStatics>{ L"Windows.UI.Shell.IWindowTabIconStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabManager>{ L"Windows.UI.Shell.IWindowTabManager" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabManagerStatics>{ L"Windows.UI.Shell.IWindowTabManagerStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>{ L"Windows.UI.Shell.IWindowTabSwitchRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>{ L"Windows.UI.Shell.IWindowTabThumbnailRequestedEventArgs" };
#endif
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IAdaptiveCard>{ 0x72D0568C,0xA274,0x41CD,{ 0x82,0xA8,0x98,0x9D,0x40,0xB9,0xB0,0x5E } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ 0x766D8F08,0xD3FE,0x4347,{ 0xA0,0xBC,0xB9,0xEA,0x9A,0x6D,0xC2,0x8E } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::ISecurityAppManager>{ 0x96AC500C,0xAED4,0x561D,{ 0xBD,0xE8,0x95,0x35,0x20,0x34,0x3A,0x2D } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::ITaskbarManager>{ 0x87490A19,0x1AD9,0x49F4,{ 0xB2,0xE8,0x86,0x73,0x8D,0xC5,0xAC,0x40 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::ITaskbarManager2>{ 0x79F0A06E,0x7B02,0x4911,{ 0x91,0x8C,0xDE,0xE0,0xBB,0xD2,0x0B,0xA4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::ITaskbarManagerStatics>{ 0xDB32AB74,0xDE52,0x4FE6,{ 0xB7,0xB6,0x95,0xFF,0x9F,0x83,0x95,0xDF } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTab>{ 0xD12283CD,0xCA89,0x5D9D,{ 0x81,0x56,0xF8,0xD4,0x8B,0x9C,0x32,0xF2 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>{ 0x477282E9,0xEEC4,0x5882,{ 0x98,0x89,0x2D,0xD6,0x4D,0x0F,0x9F,0xB6 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabCollection>{ 0xACCD0D6C,0xED07,0x519A,{ 0x8C,0x33,0x17,0xE0,0x2E,0x7E,0x9B,0x0F } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabGroup>{ 0x9E490279,0xD59B,0x574D,{ 0x8D,0xA2,0x42,0xAA,0x08,0x12,0xBB,0x3A } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabIcon>{ 0x358FE345,0xAC8D,0x5EC4,{ 0xBC,0x73,0xC7,0xE1,0xA8,0xD9,0x6D,0xC4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabIconStatics>{ 0xD32F391D,0xFAC3,0x51A5,{ 0xBD,0x6B,0xB5,0xCD,0x2A,0x8E,0x71,0xCF } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabManager>{ 0x46905D33,0x6ADF,0x5A24,{ 0xBA,0x7C,0x3C,0x76,0x68,0x70,0x96,0x20 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabManagerStatics>{ 0x2F667FC5,0x8253,0x54F9,{ 0xB9,0x18,0x88,0xEC,0x25,0x60,0xD9,0xC8 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>{ 0x7CBC421A,0x58A4,0x568B,{ 0xA3,0x51,0xF8,0xA9,0x47,0xA5,0xAA,0xD8 } };
    template <> inline constexpr guid guid_v<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>{ 0x567A78CE,0xC0AE,0x59B5,{ 0xA9,0x5C,0x7A,0x84,0x5E,0xB9,0x92,0x30 } };
    template <> struct default_interface<Windows::UI::Shell::SecurityAppManager>{ using type = Windows::UI::Shell::ISecurityAppManager; };
    template <> struct default_interface<Windows::UI::Shell::TaskbarManager>{ using type = Windows::UI::Shell::ITaskbarManager; };
    template <> struct default_interface<Windows::UI::Shell::WindowTab>{ using type = Windows::UI::Shell::IWindowTab; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabCloseRequestedEventArgs>{ using type = Windows::UI::Shell::IWindowTabCloseRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabCollection>{ using type = Windows::UI::Shell::IWindowTabCollection; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabGroup>{ using type = Windows::UI::Shell::IWindowTabGroup; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabIcon>{ using type = Windows::UI::Shell::IWindowTabIcon; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabManager>{ using type = Windows::UI::Shell::IWindowTabManager; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>{ using type = Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>{ using type = Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs; };
    template <> struct abi<Windows::UI::Shell::IAdaptiveCard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAdaptiveCardFromJson(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ISecurityAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(int32_t, void*, void*, bool, winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall Unregister(int32_t, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall UpdateState(int32_t, winrt::guid, int32_t, int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPinningAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsCurrentAppPinnedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsAppListEntryPinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinCurrentAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinAppListEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSecondaryTilePinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinSecondaryTileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUnpinSecondaryTileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTab>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsRequestingAttention(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRequestingAttention(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsUnresponsive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsUnresponsive(bool) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
            virtual int32_t __stdcall get_TreatAsAppId(void**) noexcept = 0;
            virtual int32_t __stdcall put_TreatAsAppId(void*) noexcept = 0;
            virtual int32_t __stdcall get_TreatAsSecondaryTileId(void**) noexcept = 0;
            virtual int32_t __stdcall put_TreatAsSecondaryTileId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall put_Group(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MoveTab(void*, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabIconStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromFontGlyph(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFontGlyphWithUri(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromImage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tabs(void**) noexcept = 0;
            virtual int32_t __stdcall SetActiveTab(void*) noexcept = 0;
            virtual int32_t __stdcall add_TabSwitchRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabSwitchRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabCloseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabCloseRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabThumbnailRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabThumbnailRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall GetForAppWindow(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCard
    {
        auto ToJson() const;
    };
    template <> struct consume<Windows::UI::Shell::IAdaptiveCard>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics
    {
        auto CreateAdaptiveCardFromJson(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ISecurityAppManager
    {
        auto Register(Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const;
        auto Unregister(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const;
        auto UpdateState(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, Windows::UI::Shell::SecurityAppState const& state, Windows::UI::Shell::SecurityAppSubstatus const& substatus, Windows::Foundation::Uri const& detailsUri) const;
    };
    template <> struct consume<Windows::UI::Shell::ISecurityAppManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ISecurityAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsPinningAllowed() const;
        auto IsCurrentAppPinnedAsync() const;
        auto IsAppListEntryPinnedAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
        auto RequestPinCurrentAppAsync() const;
        auto RequestPinAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager2
    {
        auto IsSecondaryTilePinnedAsync(param::hstring const& tileId) const;
        auto RequestPinSecondaryTileAsync(Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const;
        auto TryUnpinSecondaryTileAsync(param::hstring const& tileId) const;
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManager2>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTab
    {
        [[nodiscard]] auto Tag() const;
        auto Tag(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto IsRequestingAttention() const;
        auto IsRequestingAttention(bool value) const;
        [[nodiscard]] auto IsUnresponsive() const;
        auto IsUnresponsive(bool value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(Windows::UI::Shell::WindowTabIcon const& value) const;
        [[nodiscard]] auto TreatAsAppId() const;
        auto TreatAsAppId(param::hstring const& value) const;
        [[nodiscard]] auto TreatAsSecondaryTileId() const;
        auto TreatAsSecondaryTileId(param::hstring const& value) const;
        [[nodiscard]] auto Group() const;
        auto Group(Windows::UI::Shell::WindowTabGroup const& value) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTab>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTab<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabCollection
    {
        auto MoveTab(Windows::UI::Shell::WindowTab const& tab, uint32_t index) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabCollection>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabGroup
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(Windows::UI::Shell::WindowTabIcon const& value) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabGroup>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabIcon
    {
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabIcon>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabIconStatics
    {
        auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily) const;
        auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const;
        auto CreateFromImage(Windows::Storage::Streams::IRandomAccessStreamReference const& image) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabIconStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabIconStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabManager
    {
        [[nodiscard]] auto Tabs() const;
        auto SetActiveTab(Windows::UI::Shell::WindowTab const& tab) const;
        auto TabSwitchRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const;
        using TabSwitchRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabSwitchRequested>;
        [[nodiscard]] TabSwitchRequested_revoker TabSwitchRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const;
        auto TabSwitchRequested(winrt::event_token const& token) const noexcept;
        auto TabCloseRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const;
        using TabCloseRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabCloseRequested>;
        [[nodiscard]] TabCloseRequested_revoker TabCloseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const;
        auto TabCloseRequested(winrt::event_token const& token) const noexcept;
        auto TabThumbnailRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const;
        using TabThumbnailRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabThumbnailRequested>;
        [[nodiscard]] TabThumbnailRequested_revoker TabThumbnailRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const;
        auto TabThumbnailRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabManagerStatics
    {
        auto GetForCurrentView() const;
        auto GetForAppWindow(Windows::UI::WindowManagement::AppWindow const& appWindow) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
        [[nodiscard]] auto RequestedSize() const;
        [[nodiscard]] auto Image() const;
        auto Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>;
    };
}
#endif
