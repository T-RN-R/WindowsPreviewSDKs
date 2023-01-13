// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFiDirect_Services_1_H
#define WINRT_Windows_Devices_WiFiDirect_Services_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.Services.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services
{
    struct __declspec(empty_bases) IWiFiDirectService :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectService>
    {
        IWiFiDirectService(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceAdvertiser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceAdvertiser>
    {
        IWiFiDirectServiceAdvertiser(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceAdvertiser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceAdvertiserFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceAdvertiserFactory>
    {
        IWiFiDirectServiceAdvertiserFactory(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceAdvertiserFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceProvisioningInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceProvisioningInfo>
    {
        IWiFiDirectServiceProvisioningInfo(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceProvisioningInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceRemotePortAddedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        IWiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceRemotePortAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSession>,
        impl::require<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession, Windows::Foundation::IClosable>
    {
        IWiFiDirectServiceSession(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSessionDeferredEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSessionDeferredEventArgs>
    {
        IWiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSessionDeferredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSessionRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSessionRequest>,
        impl::require<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest, Windows::Foundation::IClosable>
    {
        IWiFiDirectServiceSessionRequest(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSessionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSessionRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSessionRequestedEventArgs>
    {
        IWiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSessionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWiFiDirectServiceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceStatics>
    {
        IWiFiDirectServiceStatics(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
