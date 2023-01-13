// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Calls_2_H
#define WINRT_Windows_ApplicationModel_Calls_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls
{
    struct __declspec(empty_bases) CallAnswerEventArgs : Windows::ApplicationModel::Calls::ICallAnswerEventArgs
    {
        CallAnswerEventArgs(std::nullptr_t) noexcept {}
        CallAnswerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::ICallAnswerEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CallRejectEventArgs : Windows::ApplicationModel::Calls::ICallRejectEventArgs
    {
        CallRejectEventArgs(std::nullptr_t) noexcept {}
        CallRejectEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::ICallRejectEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CallStateChangeEventArgs : Windows::ApplicationModel::Calls::ICallStateChangeEventArgs
    {
        CallStateChangeEventArgs(std::nullptr_t) noexcept {}
        CallStateChangeEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::ICallStateChangeEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenCallEndCallDeferral : Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral
    {
        LockScreenCallEndCallDeferral(std::nullptr_t) noexcept {}
        LockScreenCallEndCallDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenCallEndRequestedEventArgs : Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs
    {
        LockScreenCallEndRequestedEventArgs(std::nullptr_t) noexcept {}
        LockScreenCallEndRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockScreenCallUI : Windows::ApplicationModel::Calls::ILockScreenCallUI
    {
        LockScreenCallUI(std::nullptr_t) noexcept {}
        LockScreenCallUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::ILockScreenCallUI(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MuteChangeEventArgs : Windows::ApplicationModel::Calls::IMuteChangeEventArgs
    {
        MuteChangeEventArgs(std::nullptr_t) noexcept {}
        MuteChangeEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IMuteChangeEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct PhoneCallBlocking
    {
        PhoneCallBlocking() = delete;
        [[nodiscard]] static auto BlockUnknownNumbers();
        static auto BlockUnknownNumbers(bool value);
        [[nodiscard]] static auto BlockPrivateNumbers();
        static auto BlockPrivateNumbers(bool value);
        static auto SetCallBlockingListAsync(param::async_iterable<hstring> const& phoneNumberList);
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntry : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry
    {
        PhoneCallHistoryEntry(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntry();
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntryAddress : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress
    {
        PhoneCallHistoryEntryAddress(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntryAddress(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntryAddress();
        PhoneCallHistoryEntryAddress(param::hstring const& rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& rawAddressKind);
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntryQueryOptions : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions
    {
        PhoneCallHistoryEntryQueryOptions(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntryQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntryQueryOptions();
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntryReader : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader
    {
        PhoneCallHistoryEntryReader(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntryReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader(ptr, take_ownership_from_abi) {}
    };
    struct PhoneCallHistoryManager
    {
        PhoneCallHistoryManager() = delete;
        static auto RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType);
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) PhoneCallHistoryManagerForUser : Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser
    {
        PhoneCallHistoryManagerForUser(std::nullptr_t) noexcept {}
        PhoneCallHistoryManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneCallHistoryStore : Windows::ApplicationModel::Calls::IPhoneCallHistoryStore
    {
        PhoneCallHistoryStore(std::nullptr_t) noexcept {}
        PhoneCallHistoryStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallHistoryStore(ptr, take_ownership_from_abi) {}
    };
    struct PhoneCallManager
    {
        PhoneCallManager() = delete;
        static auto ShowPhoneCallUI(param::hstring const& phoneNumber, param::hstring const& displayName);
        static auto CallStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using CallStateChanged_revoker = impl::factory_event_revoker<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>::remove_CallStateChanged>;
        [[nodiscard]] static CallStateChanged_revoker CallStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto CallStateChanged(winrt::event_token const& token);
        [[nodiscard]] static auto IsCallActive();
        [[nodiscard]] static auto IsCallIncoming();
        static auto ShowPhoneCallSettingsUI();
        static auto RequestStoreAsync();
    };
    struct __declspec(empty_bases) PhoneCallStore : Windows::ApplicationModel::Calls::IPhoneCallStore
    {
        PhoneCallStore(std::nullptr_t) noexcept {}
        PhoneCallStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallStore(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneCallVideoCapabilities : Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities
    {
        PhoneCallVideoCapabilities(std::nullptr_t) noexcept {}
        PhoneCallVideoCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct PhoneCallVideoCapabilitiesManager
    {
        PhoneCallVideoCapabilitiesManager() = delete;
        static auto GetCapabilitiesAsync(param::hstring const& phoneNumber);
    };
    struct __declspec(empty_bases) PhoneDialOptions : Windows::ApplicationModel::Calls::IPhoneDialOptions
    {
        PhoneDialOptions(std::nullptr_t) noexcept {}
        PhoneDialOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneDialOptions(ptr, take_ownership_from_abi) {}
        PhoneDialOptions();
    };
    struct __declspec(empty_bases) PhoneLine : Windows::ApplicationModel::Calls::IPhoneLine,
        impl::require<PhoneLine, Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        PhoneLine(std::nullptr_t) noexcept {}
        PhoneLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneLine(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(winrt::guid const& lineId);
    };
    struct __declspec(empty_bases) PhoneLineCellularDetails : Windows::ApplicationModel::Calls::IPhoneLineCellularDetails
    {
        PhoneLineCellularDetails(std::nullptr_t) noexcept {}
        PhoneLineCellularDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneLineCellularDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneLineConfiguration : Windows::ApplicationModel::Calls::IPhoneLineConfiguration
    {
        PhoneLineConfiguration(std::nullptr_t) noexcept {}
        PhoneLineConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneLineConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneLineTransportDevice : Windows::ApplicationModel::Calls::IPhoneLineTransportDevice
    {
        PhoneLineTransportDevice(std::nullptr_t) noexcept {}
        PhoneLineTransportDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneLineTransportDevice(ptr, take_ownership_from_abi) {}
        static auto FromId(param::hstring const& id);
        static auto GetDeviceSelector();
        static auto GetDeviceSelector(Windows::ApplicationModel::Calls::PhoneLineTransport const& transport);
    };
    struct __declspec(empty_bases) PhoneLineWatcher : Windows::ApplicationModel::Calls::IPhoneLineWatcher
    {
        PhoneLineWatcher(std::nullptr_t) noexcept {}
        PhoneLineWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneLineWatcher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneLineWatcherEventArgs : Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs
    {
        PhoneLineWatcherEventArgs(std::nullptr_t) noexcept {}
        PhoneLineWatcherEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhoneVoicemail : Windows::ApplicationModel::Calls::IPhoneVoicemail
    {
        PhoneVoicemail(std::nullptr_t) noexcept {}
        PhoneVoicemail(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IPhoneVoicemail(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VoipCallCoordinator : Windows::ApplicationModel::Calls::IVoipCallCoordinator,
        impl::require<VoipCallCoordinator, Windows::ApplicationModel::Calls::IVoipCallCoordinator2, Windows::ApplicationModel::Calls::IVoipCallCoordinator3, Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        VoipCallCoordinator(std::nullptr_t) noexcept {}
        VoipCallCoordinator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IVoipCallCoordinator(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Calls::IVoipCallCoordinator::RequestNewIncomingCall;
        using impl::consume_t<VoipCallCoordinator, Windows::ApplicationModel::Calls::IVoipCallCoordinator3>::RequestNewIncomingCall;
        using Windows::ApplicationModel::Calls::IVoipCallCoordinator::ReserveCallResourcesAsync;
        using impl::consume_t<VoipCallCoordinator, Windows::ApplicationModel::Calls::IVoipCallCoordinator4>::ReserveCallResourcesAsync;
        static auto GetDefault();
    };
    struct __declspec(empty_bases) VoipPhoneCall : Windows::ApplicationModel::Calls::IVoipPhoneCall,
        impl::require<VoipPhoneCall, Windows::ApplicationModel::Calls::IVoipPhoneCall2, Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        VoipPhoneCall(std::nullptr_t) noexcept {}
        VoipPhoneCall(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::IVoipPhoneCall(ptr, take_ownership_from_abi) {}
    };
}
#endif
