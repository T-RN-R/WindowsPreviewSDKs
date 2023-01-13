// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Implementation_FileExplorer_0_H
#define WINRT_Windows_System_Implementation_FileExplorer_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http
{
    struct HttpRequestMessage;
    struct HttpResponseMessage;
}
WINRT_EXPORT namespace winrt::Windows::System::Implementation::FileExplorer
{
    struct ISysStorageProviderEventReceivedEventArgs;
    struct ISysStorageProviderEventReceivedEventArgsFactory;
    struct ISysStorageProviderEventSource;
    struct ISysStorageProviderHandlerFactory;
    struct ISysStorageProviderHttpRequestProvider;
    struct SysStorageProviderEventReceivedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource>{ using type = interface_category; };
    template <> struct category<Windows::System::Implementation::FileExplorer::ISysStorageProviderHandlerFactory>{ using type = interface_category; };
    template <> struct category<Windows::System::Implementation::FileExplorer::ISysStorageProviderHttpRequestProvider>{ using type = interface_category; };
    template <> struct category<Windows::System::Implementation::FileExplorer::SysStorageProviderEventReceivedEventArgs>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::System::Implementation::FileExplorer::SysStorageProviderEventReceivedEventArgs> = L"Windows.System.Implementation.FileExplorer.SysStorageProviderEventReceivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgs> = L"Windows.System.Implementation.FileExplorer.ISysStorageProviderEventReceivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgsFactory> = L"Windows.System.Implementation.FileExplorer.ISysStorageProviderEventReceivedEventArgsFactory";
    template <> inline constexpr auto& name_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource> = L"Windows.System.Implementation.FileExplorer.ISysStorageProviderEventSource";
    template <> inline constexpr auto& name_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderHandlerFactory> = L"Windows.System.Implementation.FileExplorer.ISysStorageProviderHandlerFactory";
    template <> inline constexpr auto& name_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderHttpRequestProvider> = L"Windows.System.Implementation.FileExplorer.ISysStorageProviderHttpRequestProvider";
    template <> inline constexpr guid guid_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgs>{ 0xE132D1B9,0x7B9D,0x5820,{ 0x97,0x28,0x42,0x62,0xB5,0x28,0x91,0x42 } };
    template <> inline constexpr guid guid_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgsFactory>{ 0xDE1A780E,0xE975,0x5F68,{ 0xBC,0xC6,0xFB,0x46,0x28,0x1C,0x6A,0x61 } };
    template <> inline constexpr guid guid_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource>{ 0x1F36C476,0x9546,0x536A,{ 0x83,0x81,0x2F,0x9A,0x2C,0x08,0xCE,0xDD } };
    template <> inline constexpr guid guid_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderHandlerFactory>{ 0xEE798431,0x8213,0x5E89,{ 0xA6,0x23,0x14,0xD8,0xC7,0x2B,0x8A,0x61 } };
    template <> inline constexpr guid guid_v<Windows::System::Implementation::FileExplorer::ISysStorageProviderHttpRequestProvider>{ 0xCB6FEFB6,0xE76A,0x5C25,{ 0xA3,0x3E,0x3E,0x78,0xA6,0xE0,0xE0,0xCE } };
    template <> struct default_interface<Windows::System::Implementation::FileExplorer::SysStorageProviderEventReceivedEventArgs>{ using type = Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgs; };
    template <> struct abi<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Json(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_EventReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EventReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Implementation::FileExplorer::ISysStorageProviderHandlerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetHttpRequestProvider(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetEventSource(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Implementation::FileExplorer::ISysStorageProviderHttpRequestProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendRequestAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderEventReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Json() const;
    };
    template <> struct consume<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderEventReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderEventReceivedEventArgsFactory
    {
        WINRT_IMPL_AUTO(Windows::System::Implementation::FileExplorer::SysStorageProviderEventReceivedEventArgs) CreateInstance(param::hstring const& json) const;
    };
    template <> struct consume<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventReceivedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderEventReceivedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderEventSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) EventReceived(Windows::Foundation::TypedEventHandler<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource, Windows::System::Implementation::FileExplorer::SysStorageProviderEventReceivedEventArgs> const& handler) const;
        using EventReceived_revoker = impl::event_revoker<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource, &impl::abi_t<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource>::remove_EventReceived>;
        [[nodiscard]] EventReceived_revoker EventReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource, Windows::System::Implementation::FileExplorer::SysStorageProviderEventReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) EventReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource>
    {
        template <typename D> using type = consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderEventSource<D>;
    };
    template <typename D>
    struct consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderHandlerFactory
    {
        WINRT_IMPL_AUTO(Windows::System::Implementation::FileExplorer::ISysStorageProviderHttpRequestProvider) GetHttpRequestProvider(param::hstring const& syncRootId) const;
        WINRT_IMPL_AUTO(Windows::System::Implementation::FileExplorer::ISysStorageProviderEventSource) GetEventSource(param::hstring const& syncRootId, param::hstring const& eventName) const;
    };
    template <> struct consume<Windows::System::Implementation::FileExplorer::ISysStorageProviderHandlerFactory>
    {
        template <typename D> using type = consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderHandlerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderHttpRequestProvider
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Web::Http::HttpResponseMessage>) SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const;
    };
    template <> struct consume<Windows::System::Implementation::FileExplorer::ISysStorageProviderHttpRequestProvider>
    {
        template <typename D> using type = consume_Windows_System_Implementation_FileExplorer_ISysStorageProviderHttpRequestProvider<D>;
    };
}
#endif
