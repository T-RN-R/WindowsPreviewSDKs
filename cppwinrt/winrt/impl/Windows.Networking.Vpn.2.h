// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_Vpn_2_H
#define WINRT_Windows_Networking_Vpn_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.Vpn.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Vpn
{
    struct __declspec(empty_bases) VpnAppId : Windows::Networking::Vpn::IVpnAppId
    {
        VpnAppId(std::nullptr_t) noexcept {}
        VpnAppId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnAppId(ptr, take_ownership_from_abi) {}
        VpnAppId(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value);
    };
    struct __declspec(empty_bases) VpnChannel : Windows::Networking::Vpn::IVpnChannel,
        impl::require<VpnChannel, Windows::Networking::Vpn::IVpnChannel2, Windows::Networking::Vpn::IVpnChannel4>
    {
        VpnChannel(std::nullptr_t) noexcept {}
        VpnChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnChannel(ptr, take_ownership_from_abi) {}
        using impl::consume_t<VpnChannel, Windows::Networking::Vpn::IVpnChannel2>::StartWithTrafficFilter;
        using impl::consume_t<VpnChannel, Windows::Networking::Vpn::IVpnChannel4>::StartWithTrafficFilter;
        static auto ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event);
    };
    struct __declspec(empty_bases) VpnChannelActivityEventArgs : Windows::Networking::Vpn::IVpnChannelActivityEventArgs
    {
        VpnChannelActivityEventArgs(std::nullptr_t) noexcept {}
        VpnChannelActivityEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnChannelActivityEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnChannelActivityStateChangedArgs : Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs
    {
        VpnChannelActivityStateChangedArgs(std::nullptr_t) noexcept {}
        VpnChannelActivityStateChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnChannelConfiguration : Windows::Networking::Vpn::IVpnChannelConfiguration,
        impl::require<VpnChannelConfiguration, Windows::Networking::Vpn::IVpnChannelConfiguration2>
    {
        VpnChannelConfiguration(std::nullptr_t) noexcept {}
        VpnChannelConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnChannelConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnCredential : Windows::Networking::Vpn::IVpnCredential
    {
        VpnCredential(std::nullptr_t) noexcept {}
        VpnCredential(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCredential(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnCustomCheckBox : Windows::Networking::Vpn::IVpnCustomCheckBox
    {
        VpnCustomCheckBox(std::nullptr_t) noexcept {}
        VpnCustomCheckBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomCheckBox(ptr, take_ownership_from_abi) {}
        VpnCustomCheckBox();
    };
    struct __declspec(empty_bases) VpnCustomComboBox : Windows::Networking::Vpn::IVpnCustomComboBox
    {
        VpnCustomComboBox(std::nullptr_t) noexcept {}
        VpnCustomComboBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomComboBox(ptr, take_ownership_from_abi) {}
        VpnCustomComboBox();
    };
    struct __declspec(empty_bases) VpnCustomEditBox : Windows::Networking::Vpn::IVpnCustomEditBox
    {
        VpnCustomEditBox(std::nullptr_t) noexcept {}
        VpnCustomEditBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomEditBox(ptr, take_ownership_from_abi) {}
        VpnCustomEditBox();
    };
    struct __declspec(empty_bases) VpnCustomErrorBox : Windows::Networking::Vpn::IVpnCustomErrorBox
    {
        VpnCustomErrorBox(std::nullptr_t) noexcept {}
        VpnCustomErrorBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomErrorBox(ptr, take_ownership_from_abi) {}
        VpnCustomErrorBox();
    };
    struct __declspec(empty_bases) VpnCustomPromptBooleanInput : Windows::Networking::Vpn::IVpnCustomPromptBooleanInput
    {
        VpnCustomPromptBooleanInput(std::nullptr_t) noexcept {}
        VpnCustomPromptBooleanInput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomPromptBooleanInput(ptr, take_ownership_from_abi) {}
        VpnCustomPromptBooleanInput();
    };
    struct __declspec(empty_bases) VpnCustomPromptOptionSelector : Windows::Networking::Vpn::IVpnCustomPromptOptionSelector
    {
        VpnCustomPromptOptionSelector(std::nullptr_t) noexcept {}
        VpnCustomPromptOptionSelector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomPromptOptionSelector(ptr, take_ownership_from_abi) {}
        VpnCustomPromptOptionSelector();
    };
    struct __declspec(empty_bases) VpnCustomPromptText : Windows::Networking::Vpn::IVpnCustomPromptText
    {
        VpnCustomPromptText(std::nullptr_t) noexcept {}
        VpnCustomPromptText(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomPromptText(ptr, take_ownership_from_abi) {}
        VpnCustomPromptText();
    };
    struct __declspec(empty_bases) VpnCustomPromptTextInput : Windows::Networking::Vpn::IVpnCustomPromptTextInput
    {
        VpnCustomPromptTextInput(std::nullptr_t) noexcept {}
        VpnCustomPromptTextInput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomPromptTextInput(ptr, take_ownership_from_abi) {}
        VpnCustomPromptTextInput();
    };
    struct __declspec(empty_bases) VpnCustomTextBox : Windows::Networking::Vpn::IVpnCustomTextBox
    {
        VpnCustomTextBox(std::nullptr_t) noexcept {}
        VpnCustomTextBox(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnCustomTextBox(ptr, take_ownership_from_abi) {}
        VpnCustomTextBox();
    };
    struct __declspec(empty_bases) VpnDomainNameAssignment : Windows::Networking::Vpn::IVpnDomainNameAssignment
    {
        VpnDomainNameAssignment(std::nullptr_t) noexcept {}
        VpnDomainNameAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnDomainNameAssignment(ptr, take_ownership_from_abi) {}
        VpnDomainNameAssignment();
    };
    struct __declspec(empty_bases) VpnDomainNameInfo : Windows::Networking::Vpn::IVpnDomainNameInfo,
        impl::require<VpnDomainNameInfo, Windows::Networking::Vpn::IVpnDomainNameInfo2>
    {
        VpnDomainNameInfo(std::nullptr_t) noexcept {}
        VpnDomainNameInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnDomainNameInfo(ptr, take_ownership_from_abi) {}
        VpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList);
    };
    struct __declspec(empty_bases) VpnInterfaceId : Windows::Networking::Vpn::IVpnInterfaceId
    {
        VpnInterfaceId(std::nullptr_t) noexcept {}
        VpnInterfaceId(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnInterfaceId(ptr, take_ownership_from_abi) {}
        VpnInterfaceId(array_view<uint8_t const> address);
    };
    struct __declspec(empty_bases) VpnManagementAgent : Windows::Networking::Vpn::IVpnManagementAgent
    {
        VpnManagementAgent(std::nullptr_t) noexcept {}
        VpnManagementAgent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnManagementAgent(ptr, take_ownership_from_abi) {}
        VpnManagementAgent();
    };
    struct __declspec(empty_bases) VpnNamespaceAssignment : Windows::Networking::Vpn::IVpnNamespaceAssignment
    {
        VpnNamespaceAssignment(std::nullptr_t) noexcept {}
        VpnNamespaceAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnNamespaceAssignment(ptr, take_ownership_from_abi) {}
        VpnNamespaceAssignment();
    };
    struct __declspec(empty_bases) VpnNamespaceInfo : Windows::Networking::Vpn::IVpnNamespaceInfo
    {
        VpnNamespaceInfo(std::nullptr_t) noexcept {}
        VpnNamespaceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnNamespaceInfo(ptr, take_ownership_from_abi) {}
        VpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList);
    };
    struct __declspec(empty_bases) VpnNativeProfile : Windows::Networking::Vpn::IVpnNativeProfile,
        impl::require<VpnNativeProfile, Windows::Networking::Vpn::IVpnNativeProfile2>
    {
        VpnNativeProfile(std::nullptr_t) noexcept {}
        VpnNativeProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnNativeProfile(ptr, take_ownership_from_abi) {}
        VpnNativeProfile();
    };
    struct __declspec(empty_bases) VpnPacketBuffer : Windows::Networking::Vpn::IVpnPacketBuffer,
        impl::require<VpnPacketBuffer, Windows::Networking::Vpn::IVpnPacketBuffer2, Windows::Networking::Vpn::IVpnPacketBuffer3>
    {
        VpnPacketBuffer(std::nullptr_t) noexcept {}
        VpnPacketBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnPacketBuffer(ptr, take_ownership_from_abi) {}
        VpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length);
    };
    struct __declspec(empty_bases) VpnPacketBufferList : Windows::Networking::Vpn::IVpnPacketBufferList
    {
        VpnPacketBufferList(std::nullptr_t) noexcept {}
        VpnPacketBufferList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnPacketBufferList(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnPickedCredential : Windows::Networking::Vpn::IVpnPickedCredential
    {
        VpnPickedCredential(std::nullptr_t) noexcept {}
        VpnPickedCredential(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnPickedCredential(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnPlugInProfile : Windows::Networking::Vpn::IVpnPlugInProfile,
        impl::require<VpnPlugInProfile, Windows::Networking::Vpn::IVpnPlugInProfile2>
    {
        VpnPlugInProfile(std::nullptr_t) noexcept {}
        VpnPlugInProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnPlugInProfile(ptr, take_ownership_from_abi) {}
        VpnPlugInProfile();
    };
    struct __declspec(empty_bases) VpnRoute : Windows::Networking::Vpn::IVpnRoute
    {
        VpnRoute(std::nullptr_t) noexcept {}
        VpnRoute(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnRoute(ptr, take_ownership_from_abi) {}
        VpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize);
    };
    struct __declspec(empty_bases) VpnRouteAssignment : Windows::Networking::Vpn::IVpnRouteAssignment
    {
        VpnRouteAssignment(std::nullptr_t) noexcept {}
        VpnRouteAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnRouteAssignment(ptr, take_ownership_from_abi) {}
        VpnRouteAssignment();
    };
    struct __declspec(empty_bases) VpnSystemHealth : Windows::Networking::Vpn::IVpnSystemHealth
    {
        VpnSystemHealth(std::nullptr_t) noexcept {}
        VpnSystemHealth(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnSystemHealth(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VpnTrafficFilter : Windows::Networking::Vpn::IVpnTrafficFilter
    {
        VpnTrafficFilter(std::nullptr_t) noexcept {}
        VpnTrafficFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnTrafficFilter(ptr, take_ownership_from_abi) {}
        VpnTrafficFilter(Windows::Networking::Vpn::VpnAppId const& appId);
    };
    struct __declspec(empty_bases) VpnTrafficFilterAssignment : Windows::Networking::Vpn::IVpnTrafficFilterAssignment
    {
        VpnTrafficFilterAssignment(std::nullptr_t) noexcept {}
        VpnTrafficFilterAssignment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Vpn::IVpnTrafficFilterAssignment(ptr, take_ownership_from_abi) {}
        VpnTrafficFilterAssignment();
    };
}
#endif
