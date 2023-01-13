// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFiDirect_Services_2_H
#define WINRT_Windows_Devices_WiFiDirect_Services_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.Services.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services
{
    struct __declspec(empty_bases) WiFiDirectService : Windows::Devices::WiFiDirect::Services::IWiFiDirectService
    {
        WiFiDirectService(std::nullptr_t) noexcept {}
        WiFiDirectService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectService(ptr, take_ownership_from_abi) {}
        static auto GetSelector(param::hstring const& serviceName);
        static auto GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) WiFiDirectServiceAdvertiser : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser
    {
        WiFiDirectServiceAdvertiser(std::nullptr_t) noexcept {}
        WiFiDirectServiceAdvertiser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser(ptr, take_ownership_from_abi) {}
        explicit WiFiDirectServiceAdvertiser(param::hstring const& serviceName);
    };
    struct __declspec(empty_bases) WiFiDirectServiceAutoAcceptSessionConnectedEventArgs : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
    {
        WiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectServiceAutoAcceptSessionConnectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectServiceProvisioningInfo : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo
    {
        WiFiDirectServiceProvisioningInfo(std::nullptr_t) noexcept {}
        WiFiDirectServiceProvisioningInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectServiceRemotePortAddedEventArgs : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs
    {
        WiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectServiceRemotePortAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectServiceSession : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession
    {
        WiFiDirectServiceSession(std::nullptr_t) noexcept {}
        WiFiDirectServiceSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectServiceSessionDeferredEventArgs : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs
    {
        WiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectServiceSessionDeferredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectServiceSessionRequest : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest
    {
        WiFiDirectServiceSessionRequest(std::nullptr_t) noexcept {}
        WiFiDirectServiceSessionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WiFiDirectServiceSessionRequestedEventArgs : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs
    {
        WiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectServiceSessionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
