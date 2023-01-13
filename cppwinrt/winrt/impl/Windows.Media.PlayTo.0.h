// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_PlayTo_0_H
#define WINRT_Windows_Media_PlayTo_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct IMapView;
    struct IPropertySet;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::Media::PlayTo
{
    enum class PlayToConnectionError : int32_t
    {
        None = 0,
        DeviceNotResponding = 1,
        DeviceError = 2,
        DeviceLocked = 3,
        ProtectedPlaybackFailed = 4,
    };
    enum class PlayToConnectionState : int32_t
    {
        Disconnected = 0,
        Connected = 1,
        Rendering = 2,
    };
    struct ICurrentTimeChangeRequestedEventArgs;
    struct IMuteChangeRequestedEventArgs;
    struct IPlayToConnection;
    struct IPlayToConnectionErrorEventArgs;
    struct IPlayToConnectionStateChangedEventArgs;
    struct IPlayToConnectionTransferredEventArgs;
    struct IPlayToManager;
    struct IPlayToManagerStatics;
    struct IPlayToReceiver;
    struct IPlayToSource;
    struct IPlayToSourceDeferral;
    struct IPlayToSourceRequest;
    struct IPlayToSourceRequestedEventArgs;
    struct IPlayToSourceSelectedEventArgs;
    struct IPlayToSourceWithPreferredSourceUri;
    struct IPlaybackRateChangeRequestedEventArgs;
    struct ISourceChangeRequestedEventArgs;
    struct IVolumeChangeRequestedEventArgs;
    struct CurrentTimeChangeRequestedEventArgs;
    struct MuteChangeRequestedEventArgs;
    struct PlayToConnection;
    struct PlayToConnectionErrorEventArgs;
    struct PlayToConnectionStateChangedEventArgs;
    struct PlayToConnectionTransferredEventArgs;
    struct PlayToManager;
    struct PlayToReceiver;
    struct PlayToSource;
    struct PlayToSourceDeferral;
    struct PlayToSourceRequest;
    struct PlayToSourceRequestedEventArgs;
    struct PlayToSourceSelectedEventArgs;
    struct PlaybackRateChangeRequestedEventArgs;
    struct SourceChangeRequestedEventArgs;
    struct VolumeChangeRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToConnection>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToManager>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToReceiver>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToSource>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToSourceDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToSourceRequest>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::MuteChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToConnection>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToManager>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToReceiver>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToSource>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToSourceDeferral>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToSourceRequest>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::SourceChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToConnectionError>{ using type = enum_category; };
    template <> struct category<Windows::Media::PlayTo::PlayToConnectionState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> = L"Windows.Media.PlayTo.CurrentTimeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::MuteChangeRequestedEventArgs> = L"Windows.Media.PlayTo.MuteChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToConnection> = L"Windows.Media.PlayTo.PlayToConnection";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> = L"Windows.Media.PlayTo.PlayToConnectionErrorEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> = L"Windows.Media.PlayTo.PlayToConnectionStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> = L"Windows.Media.PlayTo.PlayToConnectionTransferredEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToManager> = L"Windows.Media.PlayTo.PlayToManager";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToReceiver> = L"Windows.Media.PlayTo.PlayToReceiver";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToSource> = L"Windows.Media.PlayTo.PlayToSource";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToSourceDeferral> = L"Windows.Media.PlayTo.PlayToSourceDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToSourceRequest> = L"Windows.Media.PlayTo.PlayToSourceRequest";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> = L"Windows.Media.PlayTo.PlayToSourceRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> = L"Windows.Media.PlayTo.PlayToSourceSelectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> = L"Windows.Media.PlayTo.PlaybackRateChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::SourceChangeRequestedEventArgs> = L"Windows.Media.PlayTo.SourceChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> = L"Windows.Media.PlayTo.VolumeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToConnectionError> = L"Windows.Media.PlayTo.PlayToConnectionError";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::PlayToConnectionState> = L"Windows.Media.PlayTo.PlayToConnectionState";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs> = L"Windows.Media.PlayTo.ICurrentTimeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs> = L"Windows.Media.PlayTo.IMuteChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToConnection> = L"Windows.Media.PlayTo.IPlayToConnection";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs> = L"Windows.Media.PlayTo.IPlayToConnectionErrorEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs> = L"Windows.Media.PlayTo.IPlayToConnectionStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs> = L"Windows.Media.PlayTo.IPlayToConnectionTransferredEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToManager> = L"Windows.Media.PlayTo.IPlayToManager";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToManagerStatics> = L"Windows.Media.PlayTo.IPlayToManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToReceiver> = L"Windows.Media.PlayTo.IPlayToReceiver";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToSource> = L"Windows.Media.PlayTo.IPlayToSource";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToSourceDeferral> = L"Windows.Media.PlayTo.IPlayToSourceDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToSourceRequest> = L"Windows.Media.PlayTo.IPlayToSourceRequest";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs> = L"Windows.Media.PlayTo.IPlayToSourceRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs> = L"Windows.Media.PlayTo.IPlayToSourceSelectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri> = L"Windows.Media.PlayTo.IPlayToSourceWithPreferredSourceUri";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs> = L"Windows.Media.PlayTo.IPlaybackRateChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs> = L"Windows.Media.PlayTo.ISourceChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs> = L"Windows.Media.PlayTo.IVolumeChangeRequestedEventArgs";
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>{ 0x99711324,0xEDC7,0x4BF5,{ 0x91,0xF6,0x3C,0x86,0x27,0xDB,0x59,0xE5 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>{ 0xE4B4F5F6,0xAF1F,0x4F1E,{ 0xB4,0x37,0x7D,0xA3,0x24,0x00,0xE1,0xD4 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToConnection>{ 0x112FBFC8,0xF235,0x4FDE,{ 0x8D,0x41,0x9B,0xF2,0x7C,0x9E,0x9A,0x40 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>{ 0xBF5EADA6,0x88E6,0x445F,{ 0x9D,0x40,0xD9,0xB9,0xF8,0x93,0x98,0x96 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>{ 0x68C4B50F,0x0C20,0x4980,{ 0x86,0x02,0x58,0xC6,0x22,0x38,0xD4,0x23 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>{ 0xFAE3193A,0x0683,0x47D9,{ 0x8D,0xF0,0x18,0xCB,0xB4,0x89,0x84,0xD8 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToManager>{ 0xF56A206E,0x1B77,0x42EF,{ 0x8F,0x0D,0xB9,0x49,0xF8,0xD9,0xB2,0x60 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToManagerStatics>{ 0x64E6A887,0x3982,0x4F3B,{ 0xBA,0x20,0x61,0x55,0xE4,0x35,0x32,0x5B } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToReceiver>{ 0xAC15CF47,0xA162,0x4AA6,{ 0xAF,0x1B,0x3A,0xA3,0x5F,0x3B,0x90,0x69 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToSource>{ 0x7F138A08,0xFBB7,0x4B09,{ 0x83,0x56,0xAA,0x5F,0x4E,0x33,0x5C,0x31 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToSourceDeferral>{ 0x4100891D,0x278E,0x4F29,{ 0x85,0x9B,0xA9,0xE5,0x01,0x05,0x3E,0x7D } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToSourceRequest>{ 0xF8584665,0x64F4,0x44A0,{ 0xAC,0x0D,0x46,0x8D,0x2B,0x8F,0xDA,0x83 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>{ 0xC5CDC330,0x29DF,0x4EC6,{ 0x9D,0xA9,0x9F,0xBD,0xFC,0xFC,0x1B,0x3E } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>{ 0x0C9D8511,0x5202,0x4DCB,{ 0x8C,0x67,0xAB,0xDA,0x12,0xBB,0x3C,0x12 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>{ 0xAAB253EB,0x3301,0x4DC4,{ 0xAF,0xBA,0xB2,0xF2,0xED,0x96,0x35,0xA0 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>{ 0x0F5661AE,0x2C88,0x4CCA,{ 0x85,0x40,0xD5,0x86,0x09,0x5D,0x13,0xA5 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>{ 0xFB3F3A96,0x7AA6,0x4A8B,{ 0x86,0xE7,0x54,0xF6,0xC6,0xD3,0x4F,0x64 } };
    template <> inline constexpr guid guid_v<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>{ 0x6F026D5C,0xCF75,0x4C2B,{ 0x91,0x3E,0x6D,0x7C,0x6C,0x32,0x91,0x79 } };
    template <> struct default_interface<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::MuteChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::IMuteChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToConnection>{ using type = Windows::Media::PlayTo::IPlayToConnection; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>{ using type = Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>{ using type = Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>{ using type = Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToManager>{ using type = Windows::Media::PlayTo::IPlayToManager; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToReceiver>{ using type = Windows::Media::PlayTo::IPlayToReceiver; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToSource>{ using type = Windows::Media::PlayTo::IPlayToSource; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceDeferral>{ using type = Windows::Media::PlayTo::IPlayToSourceDeferral; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceRequest>{ using type = Windows::Media::PlayTo::IPlayToSourceRequest; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>{ using type = Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>{ using type = Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::SourceChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::ISourceChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs; };
    template <> struct abi<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Time(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mute(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Transferred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Transferred(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Error(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Error(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Code(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreviousState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreviousSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceSelected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceSelected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall put_DefaultSourceSelection(bool) noexcept = 0;
            virtual int32_t __stdcall get_DefaultSourceSelection(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall ShowPlayToUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToReceiver>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PlayRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PauseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PauseRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackRateChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackRateChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CurrentTimeChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentTimeChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MuteChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MuteChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VolumeChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VolumeChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TimeUpdateRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TimeUpdateRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StopRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StopRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyVolumeChange(double, bool) noexcept = 0;
            virtual int32_t __stdcall NotifyRateChange(double) noexcept = 0;
            virtual int32_t __stdcall NotifyLoadedMetadata() noexcept = 0;
            virtual int32_t __stdcall NotifyTimeUpdate(int64_t) noexcept = 0;
            virtual int32_t __stdcall NotifyDurationChange(int64_t) noexcept = 0;
            virtual int32_t __stdcall NotifySeeking() noexcept = 0;
            virtual int32_t __stdcall NotifySeeked() noexcept = 0;
            virtual int32_t __stdcall NotifyPaused() noexcept = 0;
            virtual int32_t __stdcall NotifyPlaying() noexcept = 0;
            virtual int32_t __stdcall NotifyEnded() noexcept = 0;
            virtual int32_t __stdcall NotifyError() noexcept = 0;
            virtual int32_t __stdcall NotifyStopped() noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall put_SupportsImage(bool) noexcept = 0;
            virtual int32_t __stdcall get_SupportsImage(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SupportsAudio(bool) noexcept = 0;
            virtual int32_t __stdcall get_SupportsAudio(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SupportsVideo(bool) noexcept = 0;
            virtual int32_t __stdcall get_SupportsVideo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
            virtual int32_t __stdcall get_Next(void**) noexcept = 0;
            virtual int32_t __stdcall put_Next(void*) noexcept = 0;
            virtual int32_t __stdcall PlayNext() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToSourceDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToSourceRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall DisplayErrorString(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceRequest(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportsImage(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportsAudio(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportsVideo(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreferredSourceUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreferredSourceUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rate(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Stream(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_Album(void**) noexcept = 0;
            virtual int32_t __stdcall get_Genre(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Date(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rating(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_ICurrentTimeChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Time() const;
    };
    template <> struct consume<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_ICurrentTimeChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IMuteChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Mute() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IMuteChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToConnection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToConnectionState) State() const;
        WINRT_IMPL_AUTO(winrt::event_token) StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToConnection, &impl::abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Transferred(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const& handler) const;
        using Transferred_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToConnection, &impl::abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_Transferred>;
        [[nodiscard]] Transferred_revoker Transferred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Transferred(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Error(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const& handler) const;
        using Error_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToConnection, &impl::abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_Error>;
        [[nodiscard]] Error_revoker Error(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Error(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToConnection>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToConnectionError) Code() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Message() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToConnectionState) PreviousState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToConnectionState) CurrentState() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToSource) PreviousSource() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToSource) CurrentSource() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) SourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const& handler) const;
        using SourceRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToManager, &impl::abi_t<Windows::Media::PlayTo::IPlayToManager>::remove_SourceRequested>;
        [[nodiscard]] SourceRequested_revoker SourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const& handler) const;
        using SourceSelected_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToManager, &impl::abi_t<Windows::Media::PlayTo::IPlayToManager>::remove_SourceSelected>;
        [[nodiscard]] SourceSelected_revoker SourceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceSelected(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) DefaultSourceSelection(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DefaultSourceSelection() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToManager>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToManager) GetForCurrentView() const;
        WINRT_IMPL_AUTO(void) ShowPlayToUI() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToReceiver
    {
        WINRT_IMPL_AUTO(winrt::event_token) PlayRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        using PlayRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PlayRequested>;
        [[nodiscard]] PlayRequested_revoker PlayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PlayRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PauseRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        using PauseRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PauseRequested>;
        [[nodiscard]] PauseRequested_revoker PauseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PauseRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const& handler) const;
        using SourceChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_SourceChangeRequested>;
        [[nodiscard]] SourceChangeRequested_revoker SourceChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const& handler) const;
        using PlaybackRateChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PlaybackRateChangeRequested>;
        [[nodiscard]] PlaybackRateChangeRequested_revoker PlaybackRateChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PlaybackRateChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CurrentTimeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const& handler) const;
        using CurrentTimeChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_CurrentTimeChangeRequested>;
        [[nodiscard]] CurrentTimeChangeRequested_revoker CurrentTimeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CurrentTimeChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MuteChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const& handler) const;
        using MuteChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_MuteChangeRequested>;
        [[nodiscard]] MuteChangeRequested_revoker MuteChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MuteChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VolumeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const& handler) const;
        using VolumeChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_VolumeChangeRequested>;
        [[nodiscard]] VolumeChangeRequested_revoker VolumeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) VolumeChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TimeUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        using TimeUpdateRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_TimeUpdateRequested>;
        [[nodiscard]] TimeUpdateRequested_revoker TimeUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) TimeUpdateRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StopRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        using StopRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_StopRequested>;
        [[nodiscard]] StopRequested_revoker StopRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) StopRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) NotifyVolumeChange(double volume, bool mute) const;
        WINRT_IMPL_AUTO(void) NotifyRateChange(double rate) const;
        WINRT_IMPL_AUTO(void) NotifyLoadedMetadata() const;
        WINRT_IMPL_AUTO(void) NotifyTimeUpdate(Windows::Foundation::TimeSpan const& currentTime) const;
        WINRT_IMPL_AUTO(void) NotifyDurationChange(Windows::Foundation::TimeSpan const& duration) const;
        WINRT_IMPL_AUTO(void) NotifySeeking() const;
        WINRT_IMPL_AUTO(void) NotifySeeked() const;
        WINRT_IMPL_AUTO(void) NotifyPaused() const;
        WINRT_IMPL_AUTO(void) NotifyPlaying() const;
        WINRT_IMPL_AUTO(void) NotifyEnded() const;
        WINRT_IMPL_AUTO(void) NotifyError() const;
        WINRT_IMPL_AUTO(void) NotifyStopped() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        WINRT_IMPL_AUTO(void) FriendlyName(param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) SupportsImage(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsImage() const;
        WINRT_IMPL_AUTO(void) SupportsAudio(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsAudio() const;
        WINRT_IMPL_AUTO(void) SupportsVideo(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsVideo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) Properties() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StopAsync() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToReceiver>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToReceiver<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToConnection) Connection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToSource) Next() const;
        WINRT_IMPL_AUTO(void) Next(Windows::Media::PlayTo::PlayToSource const& value) const;
        WINRT_IMPL_AUTO(void) PlayNext() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToSource>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToSourceDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToSourceDeferral>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToSourceRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Deadline() const;
        WINRT_IMPL_AUTO(void) DisplayErrorString(param::hstring const& errorString) const;
        WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToSourceDeferral) GetDeferral() const;
        WINRT_IMPL_AUTO(void) SetSource(Windows::Media::PlayTo::PlayToSource const& value) const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToSourceRequest>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToSourceRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::PlayTo::PlayToSourceRequest) SourceRequest() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamWithContentType) Icon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsImage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsAudio() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsVideo() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) PreferredSourceUri() const;
        WINRT_IMPL_AUTO(void) PreferredSourceUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IPlaybackRateChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Rate() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IPlaybackRateChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamWithContentType) Stream() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Author() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Album() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Genre() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Date() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Thumbnail() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) Rating() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_PlayTo_IVolumeChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Volume() const;
    };
    template <> struct consume<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_PlayTo_IVolumeChangeRequestedEventArgs<D>;
    };
}
#endif
