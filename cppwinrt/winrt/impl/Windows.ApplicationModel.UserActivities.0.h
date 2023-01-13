// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserActivities_0_H
#define WINRT_Windows_ApplicationModel_UserActivities_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct WebAccount;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct IAdaptiveCard;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities
{
    enum class UserActivityState : int32_t
    {
        New = 0,
        Published = 1,
    };
    struct IUserActivity;
    struct IUserActivity2;
    struct IUserActivity3;
    struct IUserActivityAttribution;
    struct IUserActivityAttributionFactory;
    struct IUserActivityChannel;
    struct IUserActivityChannel2;
    struct IUserActivityChannelStatics;
    struct IUserActivityChannelStatics2;
    struct IUserActivityChannelStatics3;
    struct IUserActivityContentInfo;
    struct IUserActivityContentInfoStatics;
    struct IUserActivityFactory;
    struct IUserActivityRequest;
    struct IUserActivityRequestManager;
    struct IUserActivityRequestManagerStatics;
    struct IUserActivityRequestedEventArgs;
    struct IUserActivitySession;
    struct IUserActivitySessionHistoryItem;
    struct IUserActivityStatics;
    struct IUserActivityVisualElements;
    struct IUserActivityVisualElements2;
    struct UserActivity;
    struct UserActivityAttribution;
    struct UserActivityChannel;
    struct UserActivityContentInfo;
    struct UserActivityRequest;
    struct UserActivityRequestManager;
    struct UserActivityRequestedEventArgs;
    struct UserActivitySession;
    struct UserActivitySessionHistoryItem;
    struct UserActivityVisualElements;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivity>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivity2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivity3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannel2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityRequest>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivity>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityAttribution>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityChannel>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityContentInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityRequest>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityRequestManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivitySession>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityVisualElements>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserActivities::UserActivityState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivity>{ L"Windows.ApplicationModel.UserActivities.UserActivity" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityAttribution>{ L"Windows.ApplicationModel.UserActivities.UserActivityAttribution" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityChannel>{ L"Windows.ApplicationModel.UserActivities.UserActivityChannel" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityContentInfo>{ L"Windows.ApplicationModel.UserActivities.UserActivityContentInfo" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityRequest>{ L"Windows.ApplicationModel.UserActivities.UserActivityRequest" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityRequestManager>{ L"Windows.ApplicationModel.UserActivities.UserActivityRequestManager" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs>{ L"Windows.ApplicationModel.UserActivities.UserActivityRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivitySession>{ L"Windows.ApplicationModel.UserActivities.UserActivitySession" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>{ L"Windows.ApplicationModel.UserActivities.UserActivitySessionHistoryItem" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityVisualElements>{ L"Windows.ApplicationModel.UserActivities.UserActivityVisualElements" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::UserActivityState>{ L"Windows.ApplicationModel.UserActivities.UserActivityState" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivity>{ L"Windows.ApplicationModel.UserActivities.IUserActivity" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivity2>{ L"Windows.ApplicationModel.UserActivities.IUserActivity2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivity3>{ L"Windows.ApplicationModel.UserActivities.IUserActivity3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ L"Windows.ApplicationModel.UserActivities.IUserActivityAttribution" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ L"Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannel" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityChannel2>{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannel2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2>{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3>{ L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfo" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityFactory>{ L"Windows.ApplicationModel.UserActivities.IUserActivityFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityRequest>{ L"Windows.ApplicationModel.UserActivities.IUserActivityRequest" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>{ L"Windows.ApplicationModel.UserActivities.IUserActivityRequestManager" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics>{ L"Windows.ApplicationModel.UserActivities.IUserActivityRequestManagerStatics" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs>{ L"Windows.ApplicationModel.UserActivities.IUserActivityRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ L"Windows.ApplicationModel.UserActivities.IUserActivitySession" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem>{ L"Windows.ApplicationModel.UserActivities.IUserActivitySessionHistoryItem" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityStatics>{ L"Windows.ApplicationModel.UserActivities.IUserActivityStatics" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>{ L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements2" };
#endif
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivity>{ 0xFC103E9E,0x2CAB,0x4D36,{ 0xAE,0xA2,0xB4,0xBB,0x55,0x6C,0xEF,0x0F } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivity2>{ 0x9DC40C62,0x08C4,0x47AC,{ 0xAA,0x9C,0x2B,0xB2,0x22,0x1C,0x55,0xFD } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivity3>{ 0xE7697744,0xE1A2,0x5147,{ 0x8E,0x06,0x55,0xF1,0xEE,0xEF,0x27,0x1C } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>{ 0x34A5C8B5,0x86DD,0x4AEC,{ 0xA4,0x91,0x6A,0x4F,0xAE,0xA5,0xD2,0x2E } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>{ 0xE62BD252,0xC566,0x4F42,{ 0x99,0x74,0x91,0x6C,0x4D,0x76,0x37,0x7E } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityChannel>{ 0xBAC0F8B8,0xA0E4,0x483B,{ 0xB9,0x48,0x9C,0xBA,0xBD,0x06,0x07,0x0C } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityChannel2>{ 0x1698E35B,0xEB7E,0x4EA0,{ 0xBF,0x17,0xA4,0x59,0xE8,0xBE,0x70,0x6C } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>{ 0xC8C005AB,0x198D,0x4D80,{ 0xAB,0xB2,0xC9,0x77,0x5E,0xC4,0xA7,0x29 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2>{ 0x8E87DE30,0xAA4F,0x4624,{ 0x9A,0xD0,0xD4,0x0F,0x3B,0xA0,0x31,0x7C } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3>{ 0x53BC4DDB,0xBBDF,0x5984,{ 0x80,0x2A,0x53,0x05,0x87,0x4E,0x20,0x5C } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>{ 0xB399E5AD,0x137F,0x409D,{ 0x82,0x2D,0xE1,0xAF,0x27,0xCE,0x08,0xDC } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>{ 0x9988C34B,0x0386,0x4BC9,{ 0x96,0x8A,0x82,0x00,0xB0,0x04,0x14,0x4F } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityFactory>{ 0x7C385758,0x361D,0x4A67,{ 0x8A,0x3B,0x34,0xCA,0x29,0x78,0xF9,0xA3 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityRequest>{ 0xA0EF6355,0xCF35,0x4FF0,{ 0x88,0x33,0x50,0xCB,0x4B,0x72,0xE0,0x6D } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>{ 0x0C30BE4E,0x903D,0x48D6,{ 0x82,0xD4,0x40,0x43,0xED,0x57,0x79,0x1B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics>{ 0xC0392DF1,0x224A,0x432C,{ 0x81,0xE5,0x0C,0x76,0xB4,0xC4,0xCE,0xFA } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs>{ 0xA4CC7A4C,0x8229,0x4CFD,{ 0xA3,0xBC,0xC6,0x1D,0x31,0x85,0x75,0xA4 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivitySession>{ 0xAE434D78,0x24FA,0x44A3,{ 0xAD,0x48,0x6E,0xDA,0x61,0xAA,0x19,0x24 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem>{ 0xE8D59BD3,0x3E5D,0x49FD,{ 0x98,0xD7,0x6D,0xA9,0x75,0x21,0xE2,0x55 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityStatics>{ 0x8C8FD333,0x0E09,0x47F6,{ 0x9A,0xC7,0x95,0xCF,0x5C,0x39,0x36,0x7B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>{ 0x94757513,0x262F,0x49EF,{ 0xBB,0xBF,0x9B,0x75,0xD2,0xE8,0x52,0x50 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>{ 0xCAAE7FC7,0x3EEF,0x4359,{ 0x82,0x5C,0x9D,0x51,0xB9,0x22,0x0D,0xE3 } };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivity>{ using type = Windows::ApplicationModel::UserActivities::IUserActivity; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityAttribution>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityAttribution; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityChannel>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityChannel; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityContentInfo>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityContentInfo; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityRequest>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityRequest; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityRequestManager>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityRequestManager; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivitySession>{ using type = Windows::ApplicationModel::UserActivities::IUserActivitySession; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>{ using type = Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem; };
    template <> struct default_interface<Windows::ApplicationModel::UserActivities::UserActivityVisualElements>{ using type = Windows::ApplicationModel::UserActivities::IUserActivityVisualElements; };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivity>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActivityId(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisualElements(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentType(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentType(void*) noexcept = 0;
            virtual int32_t __stdcall get_FallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_FallbackUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ActivationUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ActivationUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentInfo(void*) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivity2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivity3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRoamable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRoamable(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IconUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_AlternateText(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlternateText(void*) noexcept = 0;
            virtual int32_t __stdcall get_AddImageQuery(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AddImageQuery(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOrCreateUserActivityAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteActivityAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAllActivitiesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannel2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetRecentUserActivitiesAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetSessionHistoryItemsForUserActivityAsync(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DisableAutoSessionCreation() noexcept = 0;
            virtual int32_t __stdcall TryGetForWebAccount(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromJson(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithActivityId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetUserActivity(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UserActivityRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserActivityRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivitySession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserActivity(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParseFromJson(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParseFromJsonArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ToJsonArray(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayText(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayText(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Attribution(void**) noexcept = 0;
            virtual int32_t __stdcall put_Attribution(void*) noexcept = 0;
            virtual int32_t __stdcall put_Content(void*) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AttributionDisplayText(void**) noexcept = 0;
            virtual int32_t __stdcall put_AttributionDisplayText(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivity
    {
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ActivityId() const;
        [[nodiscard]] auto VisualElements() const;
        [[nodiscard]] auto ContentUri() const;
        auto ContentUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto ContentType() const;
        auto ContentType(param::hstring const& value) const;
        [[nodiscard]] auto FallbackUri() const;
        auto FallbackUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto ActivationUri() const;
        auto ActivationUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto ContentInfo() const;
        auto ContentInfo(Windows::ApplicationModel::UserActivities::IUserActivityContentInfo const& value) const;
        auto SaveAsync() const;
        auto CreateSession() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivity>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivity2
    {
        auto ToJson() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivity2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivity2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivity3
    {
        [[nodiscard]] auto IsRoamable() const;
        auto IsRoamable(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivity3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivity3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution
    {
        [[nodiscard]] auto IconUri() const;
        auto IconUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto AlternateText() const;
        auto AlternateText(param::hstring const& value) const;
        [[nodiscard]] auto AddImageQuery() const;
        auto AddImageQuery(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityAttribution>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory
    {
        auto CreateWithUri(Windows::Foundation::Uri const& iconUri) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel
    {
        auto GetOrCreateUserActivityAsync(param::hstring const& activityId) const;
        auto DeleteActivityAsync(param::hstring const& activityId) const;
        auto DeleteAllActivitiesAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannel>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel2
    {
        auto GetRecentUserActivitiesAsync(int32_t maxUniqueActivities) const;
        auto GetSessionHistoryItemsForUserActivityAsync(param::hstring const& activityId, Windows::Foundation::DateTime const& startTime) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannel2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics2
    {
        auto DisableAutoSessionCreation() const;
        auto TryGetForWebAccount(Windows::Security::Credentials::WebAccount const& account) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics3
    {
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo
    {
        auto ToJson() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics
    {
        auto FromJson(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityFactory
    {
        auto CreateWithActivityId(param::hstring const& activityId) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityRequest
    {
        auto SetUserActivity(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager
    {
        auto UserActivityRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserActivities::UserActivityRequestManager, Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs> const& handler) const;
        using UserActivityRequested_revoker = impl::event_revoker<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager, &impl::abi_t<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>::remove_UserActivityRequested>;
        [[nodiscard]] UserActivityRequested_revoker UserActivityRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserActivities::UserActivityRequestManager, Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs> const& handler) const;
        auto UserActivityRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManagerStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivitySession
    {
        [[nodiscard]] auto ActivityId() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivitySession>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivitySession<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivitySessionHistoryItem
    {
        [[nodiscard]] auto UserActivity() const;
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto EndTime() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivitySessionHistoryItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityStatics
    {
        auto TryParseFromJson(param::hstring const& json) const;
        auto TryParseFromJsonArray(param::hstring const& json) const;
        auto ToJsonArray(param::iterable<Windows::ApplicationModel::UserActivities::UserActivity> const& activities) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements
    {
        [[nodiscard]] auto DisplayText() const;
        auto DisplayText(param::hstring const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] auto Attribution() const;
        auto Attribution(Windows::ApplicationModel::UserActivities::UserActivityAttribution const& value) const;
        auto Content(Windows::UI::Shell::IAdaptiveCard const& value) const;
        [[nodiscard]] auto Content() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements2
    {
        [[nodiscard]] auto AttributionDisplayText() const;
        auto AttributionDisplayText(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements2<D>;
    };
}
#endif
