// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Diagnostics_DevicePortal_2_H
#define WINRT_Windows_System_Diagnostics_DevicePortal_2_H
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.System.Diagnostics.DevicePortal.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::DevicePortal
{
    struct __declspec(empty_bases) DevicePortalConnection : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection,
        impl::require<DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection>
    {
        DevicePortalConnection(std::nullptr_t) noexcept {}
        DevicePortalConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection(ptr, take_ownership_from_abi) {}
        static auto GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection);
    };
    struct __declspec(empty_bases) DevicePortalConnectionClosedEventArgs : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs
    {
        DevicePortalConnectionClosedEventArgs(std::nullptr_t) noexcept {}
        DevicePortalConnectionClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DevicePortalConnectionRequestReceivedEventArgs : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs,
        impl::require<DevicePortalConnectionRequestReceivedEventArgs, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs>
    {
        DevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t) noexcept {}
        DevicePortalConnectionRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
