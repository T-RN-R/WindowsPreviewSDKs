// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_DialProtocol_0_H
#define WINRT_Windows_Media_DialProtocol_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
    struct DevicePickerAppearance;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IKeyValuePair;
    template <typename K, typename V> struct IMap;
    template <typename T> struct IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::DialProtocol
{
    enum class DialAppLaunchResult : int32_t
    {
        Launched = 0,
        FailedToLaunch = 1,
        NotFound = 2,
        NetworkFailure = 3,
    };
    enum class DialAppState : int32_t
    {
        Unknown = 0,
        Stopped = 1,
        Running = 2,
        NetworkFailure = 3,
    };
    enum class DialAppStopResult : int32_t
    {
        Stopped = 0,
        StopFailed = 1,
        OperationNotSupported = 2,
        NetworkFailure = 3,
    };
    enum class DialDeviceDisplayStatus : int32_t
    {
        None = 0,
        Connecting = 1,
        Connected = 2,
        Disconnecting = 3,
        Disconnected = 4,
        Error = 5,
    };
    struct IDialApp;
    struct IDialAppStateDetails;
    struct IDialDevice;
    struct IDialDevice2;
    struct IDialDevicePicker;
    struct IDialDevicePickerFilter;
    struct IDialDeviceSelectedEventArgs;
    struct IDialDeviceStatics;
    struct IDialDisconnectButtonClickedEventArgs;
    struct IDialReceiverApp;
    struct IDialReceiverApp2;
    struct IDialReceiverAppStatics;
    struct DialApp;
    struct DialAppStateDetails;
    struct DialDevice;
    struct DialDevicePicker;
    struct DialDevicePickerFilter;
    struct DialDeviceSelectedEventArgs;
    struct DialDisconnectButtonClickedEventArgs;
    struct DialReceiverApp;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::DialProtocol::IDialApp>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialAppStateDetails>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDevice>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDevice2>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDevicePicker>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDevicePickerFilter>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDeviceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialReceiverApp>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialReceiverApp2>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::IDialReceiverAppStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::DialProtocol::DialApp>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialAppStateDetails>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialDevice>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialDevicePicker>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialDevicePickerFilter>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialReceiverApp>{ using type = class_category; };
    template <> struct category<Windows::Media::DialProtocol::DialAppLaunchResult>{ using type = enum_category; };
    template <> struct category<Windows::Media::DialProtocol::DialAppState>{ using type = enum_category; };
    template <> struct category<Windows::Media::DialProtocol::DialAppStopResult>{ using type = enum_category; };
    template <> struct category<Windows::Media::DialProtocol::DialDeviceDisplayStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialApp> = L"Windows.Media.DialProtocol.DialApp";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialAppStateDetails> = L"Windows.Media.DialProtocol.DialAppStateDetails";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialDevice> = L"Windows.Media.DialProtocol.DialDevice";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialDevicePicker> = L"Windows.Media.DialProtocol.DialDevicePicker";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialDevicePickerFilter> = L"Windows.Media.DialProtocol.DialDevicePickerFilter";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> = L"Windows.Media.DialProtocol.DialDeviceSelectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> = L"Windows.Media.DialProtocol.DialDisconnectButtonClickedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialReceiverApp> = L"Windows.Media.DialProtocol.DialReceiverApp";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialAppLaunchResult> = L"Windows.Media.DialProtocol.DialAppLaunchResult";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialAppState> = L"Windows.Media.DialProtocol.DialAppState";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialAppStopResult> = L"Windows.Media.DialProtocol.DialAppStopResult";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::DialDeviceDisplayStatus> = L"Windows.Media.DialProtocol.DialDeviceDisplayStatus";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialApp> = L"Windows.Media.DialProtocol.IDialApp";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialAppStateDetails> = L"Windows.Media.DialProtocol.IDialAppStateDetails";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDevice> = L"Windows.Media.DialProtocol.IDialDevice";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDevice2> = L"Windows.Media.DialProtocol.IDialDevice2";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDevicePicker> = L"Windows.Media.DialProtocol.IDialDevicePicker";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDevicePickerFilter> = L"Windows.Media.DialProtocol.IDialDevicePickerFilter";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs> = L"Windows.Media.DialProtocol.IDialDeviceSelectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDeviceStatics> = L"Windows.Media.DialProtocol.IDialDeviceStatics";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs> = L"Windows.Media.DialProtocol.IDialDisconnectButtonClickedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialReceiverApp> = L"Windows.Media.DialProtocol.IDialReceiverApp";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialReceiverApp2> = L"Windows.Media.DialProtocol.IDialReceiverApp2";
    template <> inline constexpr auto& name_v<Windows::Media::DialProtocol::IDialReceiverAppStatics> = L"Windows.Media.DialProtocol.IDialReceiverAppStatics";
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialApp>{ 0x555FFBD3,0x45B7,0x49F3,{ 0xBB,0xD7,0x30,0x2D,0xB6,0x08,0x46,0x46 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialAppStateDetails>{ 0xDDC4A4A1,0xF5DE,0x400D,{ 0xBE,0xA4,0x8C,0x84,0x66,0xBB,0x29,0x61 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDevice>{ 0xFFF0EDAF,0x759F,0x41D2,{ 0xA2,0x0A,0x7F,0x29,0xCE,0x0B,0x37,0x84 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDevice2>{ 0xBAB7F3D5,0x5BFB,0x4EBA,{ 0x8B,0x32,0xB5,0x7C,0x5C,0x5E,0xE5,0xC9 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDevicePicker>{ 0xBA7E520A,0xFF59,0x4F4B,{ 0xBD,0xAC,0xD8,0x9F,0x49,0x5A,0xD6,0xE1 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDevicePickerFilter>{ 0xC17C93BA,0x86C0,0x485D,{ 0xB8,0xD6,0x0F,0x9A,0x8F,0x64,0x15,0x90 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>{ 0x480B92AD,0xAC76,0x47EB,{ 0x9C,0x06,0xA1,0x93,0x04,0xDA,0x02,0x47 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDeviceStatics>{ 0xAA69CC95,0x01F8,0x4758,{ 0x84,0x61,0x2B,0xBD,0x1C,0xDC,0x3C,0xF3 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>{ 0x52765152,0x9C81,0x4E55,{ 0xAD,0xC2,0x0E,0xBE,0x99,0xCD,0xE3,0xB6 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialReceiverApp>{ 0xFD3E7C57,0x5045,0x470E,{ 0xB3,0x04,0x4D,0xD9,0xB1,0x3E,0x7D,0x11 } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialReceiverApp2>{ 0x530C5805,0x9130,0x42AC,{ 0xA5,0x04,0x19,0x77,0xDC,0xB2,0xEA,0x8A } };
    template <> inline constexpr guid guid_v<Windows::Media::DialProtocol::IDialReceiverAppStatics>{ 0x53183A3C,0x4C36,0x4D02,{ 0xB2,0x8A,0xF2,0xA9,0xDA,0x38,0xEC,0x52 } };
    template <> struct default_interface<Windows::Media::DialProtocol::DialApp>{ using type = Windows::Media::DialProtocol::IDialApp; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialAppStateDetails>{ using type = Windows::Media::DialProtocol::IDialAppStateDetails; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDevice>{ using type = Windows::Media::DialProtocol::IDialDevice; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDevicePicker>{ using type = Windows::Media::DialProtocol::IDialDevicePicker; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDevicePickerFilter>{ using type = Windows::Media::DialProtocol::IDialDevicePickerFilter; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>{ using type = Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>{ using type = Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs; };
    template <> struct default_interface<Windows::Media::DialProtocol::DialReceiverApp>{ using type = Windows::Media::DialProtocol::IDialReceiverApp; };
    template <> struct abi<Windows::Media::DialProtocol::IDialApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppName(void**) noexcept = 0;
            virtual int32_t __stdcall RequestLaunchAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAppStateAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FullXml(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall GetDialApp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Filter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Appearance(void**) noexcept = 0;
            virtual int32_t __stdcall add_DialDeviceSelected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DialDeviceSelected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisconnectButtonClicked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisconnectButtonClicked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DialDevicePickerDismissed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DialDevicePickerDismissed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Show(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall ShowWithPlacement(Windows::Foundation::Rect, int32_t) noexcept = 0;
            virtual int32_t __stdcall PickSingleDialDeviceAsync(Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleDialDeviceAsyncWithPlacement(Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Hide() noexcept = 0;
            virtual int32_t __stdcall SetDisplayStatus(void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedAppNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedDialDevice(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeviceInfoSupportsDialAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAdditionalDataAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetAdditionalDataAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUniqueDeviceNameAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialApp
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppName() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppLaunchResult>) RequestLaunchAsync(param::hstring const& appArgument) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStopResult>) StopAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStateDetails>) GetAppStateAsync() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialApp>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialApp<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialAppStateDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::DialProtocol::DialAppState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FullXml() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialAppStateDetails>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialAppStateDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevice
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        WINRT_IMPL_AUTO(Windows::Media::DialProtocol::DialApp) GetDialApp(param::hstring const& appName) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevice>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevice2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Thumbnail() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevice2>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevicePicker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::DialProtocol::DialDevicePickerFilter) Filter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePickerAppearance) Appearance() const;
        WINRT_IMPL_AUTO(winrt::event_token) DialDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const;
        using DialDeviceSelected_revoker = impl::event_revoker<Windows::Media::DialProtocol::IDialDevicePicker, &impl::abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DialDeviceSelected>;
        [[nodiscard]] DialDeviceSelected_revoker DialDeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DialDeviceSelected(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const;
        using DisconnectButtonClicked_revoker = impl::event_revoker<Windows::Media::DialProtocol::IDialDevicePicker, &impl::abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DisconnectButtonClicked>;
        [[nodiscard]] DisconnectButtonClicked_revoker DisconnectButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DisconnectButtonClicked(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DialDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const;
        using DialDevicePickerDismissed_revoker = impl::event_revoker<Windows::Media::DialProtocol::IDialDevicePicker, &impl::abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DialDevicePickerDismissed>;
        [[nodiscard]] DialDevicePickerDismissed_revoker DialDevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) DialDevicePickerDismissed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Show(Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(void) Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice>) PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice>) PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
        WINRT_IMPL_AUTO(void) Hide() const;
        WINRT_IMPL_AUTO(void) SetDisplayStatus(Windows::Media::DialProtocol::DialDevice const& device, Windows::Media::DialProtocol::DialDeviceDisplayStatus const& status) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevicePicker>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevicePicker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDevicePickerFilter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) SupportedAppNames() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDevicePickerFilter>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDevicePickerFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::DialProtocol::DialDevice) SelectedDialDevice() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDeviceStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(param::hstring const& appName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice>) FromIdAsync(param::hstring const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::DialProtocol::DialDevice) Device() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialReceiverApp
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, hstring>>) GetAdditionalDataAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetAdditionalDataAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& additionalData) const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialReceiverApp>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialReceiverApp<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialReceiverApp2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetUniqueDeviceNameAsync() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialReceiverApp2>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialReceiverApp2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_DialProtocol_IDialReceiverAppStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::DialProtocol::DialReceiverApp) Current() const;
    };
    template <> struct consume<Windows::Media::DialProtocol::IDialReceiverAppStatics>
    {
        template <typename D> using type = consume_Windows_Media_DialProtocol_IDialReceiverAppStatics<D>;
    };
}
#endif
