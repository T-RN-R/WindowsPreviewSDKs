// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_0_H
#define WINRT_Windows_Media_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceConnection;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    struct BitmapBounds;
    enum class BitmapPixelFormat : int32_t;
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct RandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    enum class AudioBufferAccessMode : int32_t
    {
        Read = 0,
        ReadWrite = 1,
        Write = 2,
    };
    enum class AudioProcessing : int32_t
    {
        Default = 0,
        Raw = 1,
    };
    enum class MediaPlaybackAutoRepeatMode : int32_t
    {
        None = 0,
        Track = 1,
        List = 2,
    };
    enum class MediaPlaybackStatus : int32_t
    {
        Closed = 0,
        Changing = 1,
        Stopped = 2,
        Playing = 3,
        Paused = 4,
    };
    enum class MediaPlaybackType : int32_t
    {
        Unknown = 0,
        Music = 1,
        Video = 2,
        Image = 3,
    };
    enum class MediaTimelineControllerState : int32_t
    {
        Paused = 0,
        Running = 1,
        Stalled = 2,
        Error = 3,
    };
    enum class SoundLevel : int32_t
    {
        Muted = 0,
        Low = 1,
        Full = 2,
    };
    enum class SystemMediaTransportControlsButton : int32_t
    {
        Play = 0,
        Pause = 1,
        Stop = 2,
        Record = 3,
        FastForward = 4,
        Rewind = 5,
        Next = 6,
        Previous = 7,
        ChannelUp = 8,
        ChannelDown = 9,
    };
    enum class SystemMediaTransportControlsProperty : int32_t
    {
        SoundLevel = 0,
    };
    struct IAudioBuffer;
    struct IAudioFrame;
    struct IAudioFrameFactory;
    struct IAutoRepeatModeChangeRequestedEventArgs;
    struct IImageDisplayProperties;
    struct IMediaControl;
    struct IMediaExtension;
    struct IMediaExtensionManager;
    struct IMediaExtensionManager2;
    struct IMediaFrame;
    struct IMediaMarker;
    struct IMediaMarkerTypesStatics;
    struct IMediaMarkers;
    struct IMediaProcessingTriggerDetails;
    struct IMediaTimelineController;
    struct IMediaTimelineController2;
    struct IMediaTimelineControllerFailedEventArgs;
    struct IMusicDisplayProperties;
    struct IMusicDisplayProperties2;
    struct IMusicDisplayProperties3;
    struct IPlaybackPositionChangeRequestedEventArgs;
    struct IPlaybackRateChangeRequestedEventArgs;
    struct IShuffleEnabledChangeRequestedEventArgs;
    struct ISystemMediaTransportControls;
    struct ISystemMediaTransportControls2;
    struct ISystemMediaTransportControlsButtonPressedEventArgs;
    struct ISystemMediaTransportControlsDisplayUpdater;
    struct ISystemMediaTransportControlsPropertyChangedEventArgs;
    struct ISystemMediaTransportControlsStatics;
    struct ISystemMediaTransportControlsTimelineProperties;
    struct IVideoDisplayProperties;
    struct IVideoDisplayProperties2;
    struct IVideoEffectsStatics;
    struct IVideoFrame;
    struct IVideoFrame2;
    struct IVideoFrameFactory;
    struct IVideoFrameStatics;
    struct AudioBuffer;
    struct AudioFrame;
    struct AutoRepeatModeChangeRequestedEventArgs;
    struct ImageDisplayProperties;
    struct MediaControl;
    struct MediaExtensionManager;
    struct MediaMarkerTypes;
    struct MediaProcessingTriggerDetails;
    struct MediaTimelineController;
    struct MediaTimelineControllerFailedEventArgs;
    struct MusicDisplayProperties;
    struct PlaybackPositionChangeRequestedEventArgs;
    struct PlaybackRateChangeRequestedEventArgs;
    struct ShuffleEnabledChangeRequestedEventArgs;
    struct SystemMediaTransportControls;
    struct SystemMediaTransportControlsButtonPressedEventArgs;
    struct SystemMediaTransportControlsDisplayUpdater;
    struct SystemMediaTransportControlsPropertyChangedEventArgs;
    struct SystemMediaTransportControlsTimelineProperties;
    struct VideoDisplayProperties;
    struct VideoEffects;
    struct VideoFrame;
    struct MediaTimeRange;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::IAudioBuffer>{ using type = interface_category; };
    template <> struct category<Windows::Media::IAudioFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::IAudioFrameFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::IImageDisplayProperties>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaControl>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaExtension>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaExtensionManager>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaExtensionManager2>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaMarker>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaMarkerTypesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaMarkers>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaProcessingTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaTimelineController>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaTimelineController2>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMediaTimelineControllerFailedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMusicDisplayProperties>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMusicDisplayProperties2>{ using type = interface_category; };
    template <> struct category<Windows::Media::IMusicDisplayProperties3>{ using type = interface_category; };
    template <> struct category<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControls>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControls2>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControlsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoDisplayProperties>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoDisplayProperties2>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoEffectsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoFrame2>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoFrameFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::IVideoFrameStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::AudioBuffer>{ using type = class_category; };
    template <> struct category<Windows::Media::AudioFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::ImageDisplayProperties>{ using type = class_category; };
    template <> struct category<Windows::Media::MediaControl>{ using type = class_category; };
    template <> struct category<Windows::Media::MediaExtensionManager>{ using type = class_category; };
    template <> struct category<Windows::Media::MediaMarkerTypes>{ using type = class_category; };
    template <> struct category<Windows::Media::MediaProcessingTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Media::MediaTimelineController>{ using type = class_category; };
    template <> struct category<Windows::Media::MediaTimelineControllerFailedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::MusicDisplayProperties>{ using type = class_category; };
    template <> struct category<Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::PlaybackRateChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControls>{ using type = class_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ using type = class_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControlsTimelineProperties>{ using type = class_category; };
    template <> struct category<Windows::Media::VideoDisplayProperties>{ using type = class_category; };
    template <> struct category<Windows::Media::VideoEffects>{ using type = class_category; };
    template <> struct category<Windows::Media::VideoFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::AudioBufferAccessMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::AudioProcessing>{ using type = enum_category; };
    template <> struct category<Windows::Media::MediaPlaybackAutoRepeatMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::MediaPlaybackStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::MediaPlaybackType>{ using type = enum_category; };
    template <> struct category<Windows::Media::MediaTimelineControllerState>{ using type = enum_category; };
    template <> struct category<Windows::Media::SoundLevel>{ using type = enum_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControlsButton>{ using type = enum_category; };
    template <> struct category<Windows::Media::SystemMediaTransportControlsProperty>{ using type = enum_category; };
    template <> struct category<Windows::Media::MediaTimeRange>{ using type = struct_category<Windows::Foundation::TimeSpan, Windows::Foundation::TimeSpan>; };
    template <> inline constexpr auto& name_v<Windows::Media::AudioBuffer> = L"Windows.Media.AudioBuffer";
    template <> inline constexpr auto& name_v<Windows::Media::AudioFrame> = L"Windows.Media.AudioFrame";
    template <> inline constexpr auto& name_v<Windows::Media::AutoRepeatModeChangeRequestedEventArgs> = L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::ImageDisplayProperties> = L"Windows.Media.ImageDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Media::MediaControl> = L"Windows.Media.MediaControl";
    template <> inline constexpr auto& name_v<Windows::Media::MediaExtensionManager> = L"Windows.Media.MediaExtensionManager";
    template <> inline constexpr auto& name_v<Windows::Media::MediaMarkerTypes> = L"Windows.Media.MediaMarkerTypes";
    template <> inline constexpr auto& name_v<Windows::Media::MediaProcessingTriggerDetails> = L"Windows.Media.MediaProcessingTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Media::MediaTimelineController> = L"Windows.Media.MediaTimelineController";
    template <> inline constexpr auto& name_v<Windows::Media::MediaTimelineControllerFailedEventArgs> = L"Windows.Media.MediaTimelineControllerFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::MusicDisplayProperties> = L"Windows.Media.MusicDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Media::PlaybackPositionChangeRequestedEventArgs> = L"Windows.Media.PlaybackPositionChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::PlaybackRateChangeRequestedEventArgs> = L"Windows.Media.PlaybackRateChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::ShuffleEnabledChangeRequestedEventArgs> = L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControls> = L"Windows.Media.SystemMediaTransportControls";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> = L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControlsDisplayUpdater> = L"Windows.Media.SystemMediaTransportControlsDisplayUpdater";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> = L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControlsTimelineProperties> = L"Windows.Media.SystemMediaTransportControlsTimelineProperties";
    template <> inline constexpr auto& name_v<Windows::Media::VideoDisplayProperties> = L"Windows.Media.VideoDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Media::VideoEffects> = L"Windows.Media.VideoEffects";
    template <> inline constexpr auto& name_v<Windows::Media::VideoFrame> = L"Windows.Media.VideoFrame";
    template <> inline constexpr auto& name_v<Windows::Media::AudioBufferAccessMode> = L"Windows.Media.AudioBufferAccessMode";
    template <> inline constexpr auto& name_v<Windows::Media::AudioProcessing> = L"Windows.Media.AudioProcessing";
    template <> inline constexpr auto& name_v<Windows::Media::MediaPlaybackAutoRepeatMode> = L"Windows.Media.MediaPlaybackAutoRepeatMode";
    template <> inline constexpr auto& name_v<Windows::Media::MediaPlaybackStatus> = L"Windows.Media.MediaPlaybackStatus";
    template <> inline constexpr auto& name_v<Windows::Media::MediaPlaybackType> = L"Windows.Media.MediaPlaybackType";
    template <> inline constexpr auto& name_v<Windows::Media::MediaTimelineControllerState> = L"Windows.Media.MediaTimelineControllerState";
    template <> inline constexpr auto& name_v<Windows::Media::SoundLevel> = L"Windows.Media.SoundLevel";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControlsButton> = L"Windows.Media.SystemMediaTransportControlsButton";
    template <> inline constexpr auto& name_v<Windows::Media::SystemMediaTransportControlsProperty> = L"Windows.Media.SystemMediaTransportControlsProperty";
    template <> inline constexpr auto& name_v<Windows::Media::MediaTimeRange> = L"Windows.Media.MediaTimeRange";
    template <> inline constexpr auto& name_v<Windows::Media::IAudioBuffer> = L"Windows.Media.IAudioBuffer";
    template <> inline constexpr auto& name_v<Windows::Media::IAudioFrame> = L"Windows.Media.IAudioFrame";
    template <> inline constexpr auto& name_v<Windows::Media::IAudioFrameFactory> = L"Windows.Media.IAudioFrameFactory";
    template <> inline constexpr auto& name_v<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> = L"Windows.Media.IAutoRepeatModeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::IImageDisplayProperties> = L"Windows.Media.IImageDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaControl> = L"Windows.Media.IMediaControl";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaExtension> = L"Windows.Media.IMediaExtension";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaExtensionManager> = L"Windows.Media.IMediaExtensionManager";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaExtensionManager2> = L"Windows.Media.IMediaExtensionManager2";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaFrame> = L"Windows.Media.IMediaFrame";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaMarker> = L"Windows.Media.IMediaMarker";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaMarkerTypesStatics> = L"Windows.Media.IMediaMarkerTypesStatics";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaMarkers> = L"Windows.Media.IMediaMarkers";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaProcessingTriggerDetails> = L"Windows.Media.IMediaProcessingTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaTimelineController> = L"Windows.Media.IMediaTimelineController";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaTimelineController2> = L"Windows.Media.IMediaTimelineController2";
    template <> inline constexpr auto& name_v<Windows::Media::IMediaTimelineControllerFailedEventArgs> = L"Windows.Media.IMediaTimelineControllerFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::IMusicDisplayProperties> = L"Windows.Media.IMusicDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Media::IMusicDisplayProperties2> = L"Windows.Media.IMusicDisplayProperties2";
    template <> inline constexpr auto& name_v<Windows::Media::IMusicDisplayProperties3> = L"Windows.Media.IMusicDisplayProperties3";
    template <> inline constexpr auto& name_v<Windows::Media::IPlaybackPositionChangeRequestedEventArgs> = L"Windows.Media.IPlaybackPositionChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::IPlaybackRateChangeRequestedEventArgs> = L"Windows.Media.IPlaybackRateChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::IShuffleEnabledChangeRequestedEventArgs> = L"Windows.Media.IShuffleEnabledChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControls> = L"Windows.Media.ISystemMediaTransportControls";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControls2> = L"Windows.Media.ISystemMediaTransportControls2";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> = L"Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControlsDisplayUpdater> = L"Windows.Media.ISystemMediaTransportControlsDisplayUpdater";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> = L"Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControlsStatics> = L"Windows.Media.ISystemMediaTransportControlsStatics";
    template <> inline constexpr auto& name_v<Windows::Media::ISystemMediaTransportControlsTimelineProperties> = L"Windows.Media.ISystemMediaTransportControlsTimelineProperties";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoDisplayProperties> = L"Windows.Media.IVideoDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoDisplayProperties2> = L"Windows.Media.IVideoDisplayProperties2";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoEffectsStatics> = L"Windows.Media.IVideoEffectsStatics";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoFrame> = L"Windows.Media.IVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoFrame2> = L"Windows.Media.IVideoFrame2";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoFrameFactory> = L"Windows.Media.IVideoFrameFactory";
    template <> inline constexpr auto& name_v<Windows::Media::IVideoFrameStatics> = L"Windows.Media.IVideoFrameStatics";
    template <> inline constexpr guid guid_v<Windows::Media::IAudioBuffer>{ 0x35175827,0x724B,0x4C6A,{ 0xB1,0x30,0xF6,0x53,0x7F,0x9A,0xE0,0xD0 } };
    template <> inline constexpr guid guid_v<Windows::Media::IAudioFrame>{ 0xE36AC304,0xAAB2,0x4277,{ 0x9E,0xD0,0x43,0xCE,0xDF,0x8E,0x29,0xC6 } };
    template <> inline constexpr guid guid_v<Windows::Media::IAudioFrameFactory>{ 0x91A90ADE,0x2422,0x40A6,{ 0xB9,0xAD,0x30,0xD0,0x24,0x04,0x31,0x7D } };
    template <> inline constexpr guid guid_v<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ 0xEA137EFA,0xD852,0x438E,{ 0x88,0x2B,0xC9,0x90,0x10,0x9A,0x78,0xF4 } };
    template <> inline constexpr guid guid_v<Windows::Media::IImageDisplayProperties>{ 0xCD0BC7EF,0x54E7,0x411F,{ 0x99,0x33,0xF0,0xE9,0x8B,0x0A,0x96,0xD2 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaControl>{ 0x98F1FBE1,0x7A8D,0x42CB,{ 0xB6,0xFE,0x8F,0xE6,0x98,0x26,0x4F,0x13 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaExtension>{ 0x07915118,0x45DF,0x442B,{ 0x8A,0x3F,0xF7,0x82,0x6A,0x63,0x70,0xAB } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaExtensionManager>{ 0x4A25EAF5,0x242D,0x4DFB,{ 0x97,0xF4,0x69,0xB7,0xC4,0x25,0x76,0xFF } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaExtensionManager2>{ 0x5BCEBF47,0x4043,0x4FED,{ 0xAC,0xAF,0x54,0xEC,0x29,0xDF,0xB1,0xF7 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaFrame>{ 0xBFB52F8C,0x5943,0x47D8,{ 0x8E,0x10,0x05,0x30,0x8A,0xA5,0xFB,0xD0 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaMarker>{ 0x1803DEF8,0xDCA5,0x4B6F,{ 0x9C,0x20,0xE3,0xD3,0xC0,0x64,0x36,0x25 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaMarkerTypesStatics>{ 0xBB198040,0x482F,0x4743,{ 0x88,0x32,0x45,0x85,0x38,0x21,0xEC,0xE0 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaMarkers>{ 0xAFEAB189,0xF8DD,0x466E,{ 0xAA,0x10,0x92,0x0B,0x52,0x35,0x3F,0xDF } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaProcessingTriggerDetails>{ 0xEB8564AC,0xA351,0x4F4E,{ 0xB4,0xF0,0x9B,0xF2,0x40,0x89,0x93,0xDB } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaTimelineController>{ 0x8ED361F3,0x0B78,0x4360,{ 0xBF,0x71,0x0C,0x84,0x19,0x99,0xEA,0x1B } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaTimelineController2>{ 0xEF74EA38,0x9E72,0x4DF9,{ 0x83,0x55,0x6E,0x90,0xC8,0x1B,0xBA,0xDD } };
    template <> inline constexpr guid guid_v<Windows::Media::IMediaTimelineControllerFailedEventArgs>{ 0x8821F81D,0x3E77,0x43FB,{ 0xBE,0x26,0x4F,0xC8,0x7A,0x04,0x48,0x34 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMusicDisplayProperties>{ 0x6BBF0C59,0xD0A0,0x4D26,{ 0x92,0xA0,0xF9,0x78,0xE1,0xD1,0x8E,0x7B } };
    template <> inline constexpr guid guid_v<Windows::Media::IMusicDisplayProperties2>{ 0x00368462,0x97D3,0x44B9,{ 0xB0,0x0F,0x00,0x8A,0xFC,0xEF,0xAF,0x18 } };
    template <> inline constexpr guid guid_v<Windows::Media::IMusicDisplayProperties3>{ 0x4DB51AC1,0x0681,0x4E8C,{ 0x94,0x01,0xB8,0x15,0x9D,0x9E,0xEF,0xC7 } };
    template <> inline constexpr guid guid_v<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ 0xB4493F88,0xEB28,0x4961,{ 0x9C,0x14,0x33,0x5E,0x44,0xF3,0xE1,0x25 } };
    template <> inline constexpr guid guid_v<Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ 0x2CE2C41F,0x3CD6,0x4F77,{ 0x9B,0xA7,0xEB,0x27,0xC2,0x6A,0x21,0x40 } };
    template <> inline constexpr guid guid_v<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ 0x49B593FE,0x4FD0,0x4666,{ 0xA3,0x14,0xC0,0xE0,0x19,0x40,0xD3,0x02 } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControls>{ 0x99FA3FF4,0x1742,0x42A6,{ 0x90,0x2E,0x08,0x7D,0x41,0xF9,0x65,0xEC } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControls2>{ 0xEA98D2F6,0x7F3C,0x4AF2,{ 0xA5,0x86,0x72,0x88,0x98,0x08,0xEF,0xB1 } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ 0xB7F47116,0xA56F,0x4DC8,{ 0x9E,0x11,0x92,0x03,0x1F,0x4A,0x87,0xC2 } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ 0x8ABBC53E,0xFA55,0x4ECF,{ 0xAD,0x8E,0xC9,0x84,0xE5,0xDD,0x15,0x50 } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ 0xD0CA0936,0x339B,0x4CB3,{ 0x8E,0xEB,0x73,0x76,0x07,0xF5,0x6E,0x08 } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControlsStatics>{ 0x43BA380A,0xECA4,0x4832,{ 0x91,0xAB,0xD4,0x15,0xFA,0xE4,0x84,0xC6 } };
    template <> inline constexpr guid guid_v<Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ 0x5125316A,0xC3A2,0x475B,{ 0x85,0x07,0x93,0x53,0x4D,0xC8,0x8F,0x15 } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoDisplayProperties>{ 0x5609FDB1,0x5D2D,0x4872,{ 0x81,0x70,0x45,0xDE,0xE5,0xBC,0x2F,0x5C } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoDisplayProperties2>{ 0xB410E1CE,0xAB52,0x41AB,{ 0xA4,0x86,0xCC,0x10,0xFA,0xB1,0x52,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoEffectsStatics>{ 0x1FCDA5E8,0xBAF1,0x4521,{ 0x98,0x0C,0x3B,0xCE,0xBB,0x44,0xCF,0x38 } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoFrame>{ 0x0CC06625,0x90FC,0x4C92,{ 0xBD,0x95,0x7D,0xED,0x21,0x81,0x9D,0x1C } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoFrame2>{ 0x3837840D,0x336C,0x4366,{ 0x8D,0x46,0x06,0x07,0x98,0x73,0x6C,0x5D } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoFrameFactory>{ 0x014B6D69,0x2228,0x4C92,{ 0x92,0xFF,0x50,0xC3,0x80,0xD3,0xE7,0x76 } };
    template <> inline constexpr guid guid_v<Windows::Media::IVideoFrameStatics>{ 0xAB2A556F,0x6111,0x4B33,{ 0x8E,0xC3,0x2B,0x20,0x9A,0x02,0xE1,0x7A } };
    template <> struct default_interface<Windows::Media::AudioBuffer>{ using type = Windows::Media::IAudioBuffer; };
    template <> struct default_interface<Windows::Media::AudioFrame>{ using type = Windows::Media::IAudioFrame; };
    template <> struct default_interface<Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ using type = Windows::Media::IAutoRepeatModeChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::ImageDisplayProperties>{ using type = Windows::Media::IImageDisplayProperties; };
    template <> struct default_interface<Windows::Media::MediaExtensionManager>{ using type = Windows::Media::IMediaExtensionManager; };
    template <> struct default_interface<Windows::Media::MediaProcessingTriggerDetails>{ using type = Windows::Media::IMediaProcessingTriggerDetails; };
    template <> struct default_interface<Windows::Media::MediaTimelineController>{ using type = Windows::Media::IMediaTimelineController; };
    template <> struct default_interface<Windows::Media::MediaTimelineControllerFailedEventArgs>{ using type = Windows::Media::IMediaTimelineControllerFailedEventArgs; };
    template <> struct default_interface<Windows::Media::MusicDisplayProperties>{ using type = Windows::Media::IMusicDisplayProperties; };
    template <> struct default_interface<Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ using type = Windows::Media::IPlaybackPositionChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::PlaybackRateChangeRequestedEventArgs>{ using type = Windows::Media::IPlaybackRateChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ using type = Windows::Media::IShuffleEnabledChangeRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::SystemMediaTransportControls>{ using type = Windows::Media::ISystemMediaTransportControls; };
    template <> struct default_interface<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ using type = Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs; };
    template <> struct default_interface<Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ using type = Windows::Media::ISystemMediaTransportControlsDisplayUpdater; };
    template <> struct default_interface<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ using type = Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs; };
    template <> struct default_interface<Windows::Media::SystemMediaTransportControlsTimelineProperties>{ using type = Windows::Media::ISystemMediaTransportControlsTimelineProperties; };
    template <> struct default_interface<Windows::Media::VideoDisplayProperties>{ using type = Windows::Media::IVideoDisplayProperties; };
    template <> struct default_interface<Windows::Media::VideoFrame>{ using type = Windows::Media::IVideoFrame; };
    template <> struct abi<Windows::Media::IAudioBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capacity(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IAudioFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LockBuffer(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IAudioFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedAutoRepeatMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IImageDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SoundLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SoundLevelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlayPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PausePressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PausePressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StopPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StopPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlayPauseTogglePressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayPauseTogglePressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecordPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecordPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NextTrackPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NextTrackPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PreviousTrackPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviousTrackPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FastForwardPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FastForwardPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RewindPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RewindPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ChannelUpPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ChannelUpPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ChannelDownPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ChannelDownPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrackName(void*) noexcept = 0;
            virtual int32_t __stdcall get_TrackName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ArtistName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ArtistName(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsPlaying(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaying(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlbumArt(void*) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArt(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetProperties(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaExtensionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterSchemeHandler(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterSchemeHandlerWithSettings(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterByteStreamHandler(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterByteStreamHandlerWithSettings(void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioDecoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioDecoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioEncoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioEncoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoDecoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoDecoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoEncoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoEncoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaExtensionManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterMediaExtensionForAppService(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RelativeTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_SystemRelativeTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsDiscontinuous(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDiscontinuous(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaMarker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Time(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaMarkerType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaMarkerTypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bookmark(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaMarkers>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Markers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaProcessingTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaTimelineController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ClockRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_ClockRate(double) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_PositionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaTimelineController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsLoopingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLoopingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_Failed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Failed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Ended(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Ended(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMediaTimelineControllerFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMusicDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArtist(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlbumArtist(void*) noexcept = 0;
            virtual int32_t __stdcall get_Artist(void**) noexcept = 0;
            virtual int32_t __stdcall put_Artist(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMusicDisplayProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlbumTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlbumTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_TrackNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrackNumber(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Genres(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IMusicDisplayProperties3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlbumTrackCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlbumTrackCount(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedPlaybackPosition(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IPlaybackRateChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedPlaybackRate(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedShuffleEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControls>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayUpdater(void**) noexcept = 0;
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPlayEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPlayEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsStopEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsStopEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPauseEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPauseEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRecordEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRecordEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsFastForwardEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFastForwardEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRewindEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRewindEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPreviousEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPreviousEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsNextEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsNextEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelUpEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsChannelUpEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelDownEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsChannelDownEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_ButtonPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ButtonPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PropertyChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertyChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControls2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoRepeatMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRepeatMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ShuffleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShuffleEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackRate(double) noexcept = 0;
            virtual int32_t __stdcall UpdateTimelineProperties(void*) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackPositionChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackPositionChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackRateChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackRateChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ShuffleEnabledChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShuffleEnabledChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AutoRepeatModeChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AutoRepeatModeChangeRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Button(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AppMediaId(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppMediaId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_MusicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageProperties(void**) noexcept = 0;
            virtual int32_t __stdcall CopyFromFileAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearAll() noexcept = 0;
            virtual int32_t __stdcall Update() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Property(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControlsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::ISystemMediaTransportControlsTimelineProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MinSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinSeekTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxSeekTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoDisplayProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Genres(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoEffectsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoStabilization(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
            virtual int32_t __stdcall CopyToAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Direct3DSurface(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CopyToWithBoundsAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAlpha(int32_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::IVideoFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsDirect3D11SurfaceBacked(int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAsDirect3D11SurfaceBackedWithDevice(int32_t, int32_t, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSoftwareBitmap(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithDirect3D11Surface(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_IAudioBuffer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Capacity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Length() const;
        WINRT_IMPL_AUTO(void) Length(uint32_t value) const;
    };
    template <> struct consume<Windows::Media::IAudioBuffer>
    {
        template <typename D> using type = consume_Windows_Media_IAudioBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IAudioFrame
    {
        WINRT_IMPL_AUTO(Windows::Media::AudioBuffer) LockBuffer(Windows::Media::AudioBufferAccessMode const& mode) const;
    };
    template <> struct consume<Windows::Media::IAudioFrame>
    {
        template <typename D> using type = consume_Windows_Media_IAudioFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IAudioFrameFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::AudioFrame) Create(uint32_t capacity) const;
    };
    template <> struct consume<Windows::Media::IAudioFrameFactory>
    {
        template <typename D> using type = consume_Windows_Media_IAudioFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaPlaybackAutoRepeatMode) RequestedAutoRepeatMode() const;
    };
    template <> struct consume<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IImageDisplayProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subtitle() const;
        WINRT_IMPL_AUTO(void) Subtitle(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Media::IImageDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_IImageDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaControl
    {
        WINRT_IMPL_AUTO(winrt::event_token) SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using SoundLevelChanged_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_SoundLevelChanged>;
        [[nodiscard]] SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SoundLevelChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlayPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PlayPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPressed>;
        [[nodiscard]] PlayPressed_revoker PlayPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PlayPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PausePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PausePressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PausePressed>;
        [[nodiscard]] PausePressed_revoker PausePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PausePressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StopPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using StopPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_StopPressed>;
        [[nodiscard]] StopPressed_revoker StopPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) StopPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PlayPauseTogglePressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPauseTogglePressed>;
        [[nodiscard]] PlayPauseTogglePressed_revoker PlayPauseTogglePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PlayPauseTogglePressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) RecordPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RecordPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_RecordPressed>;
        [[nodiscard]] RecordPressed_revoker RecordPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) RecordPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) NextTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using NextTrackPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_NextTrackPressed>;
        [[nodiscard]] NextTrackPressed_revoker NextTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) NextTrackPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using PreviousTrackPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PreviousTrackPressed>;
        [[nodiscard]] PreviousTrackPressed_revoker PreviousTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PreviousTrackPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) FastForwardPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using FastForwardPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_FastForwardPressed>;
        [[nodiscard]] FastForwardPressed_revoker FastForwardPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) FastForwardPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) RewindPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using RewindPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_RewindPressed>;
        [[nodiscard]] RewindPressed_revoker RewindPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) RewindPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ChannelUpPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ChannelUpPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelUpPressed>;
        [[nodiscard]] ChannelUpPressed_revoker ChannelUpPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ChannelUpPressed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ChannelDownPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ChannelDownPressed_revoker = impl::event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelDownPressed>;
        [[nodiscard]] ChannelDownPressed_revoker ChannelDownPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ChannelDownPressed(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SoundLevel) SoundLevel() const;
        WINRT_IMPL_AUTO(void) TrackName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TrackName() const;
        WINRT_IMPL_AUTO(void) ArtistName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ArtistName() const;
        WINRT_IMPL_AUTO(void) IsPlaying(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPlaying() const;
        WINRT_IMPL_AUTO(void) AlbumArt(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) AlbumArt() const;
    };
    template <> struct consume<Windows::Media::IMediaControl>
    {
        template <typename D> using type = consume_Windows_Media_IMediaControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaExtension
    {
        WINRT_IMPL_AUTO(void) SetProperties(Windows::Foundation::Collections::IPropertySet const& configuration) const;
    };
    template <> struct consume<Windows::Media::IMediaExtension>
    {
        template <typename D> using type = consume_Windows_Media_IMediaExtension<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaExtensionManager
    {
        WINRT_IMPL_AUTO(void) RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme) const;
        WINRT_IMPL_AUTO(void) RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        WINRT_IMPL_AUTO(void) RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType) const;
        WINRT_IMPL_AUTO(void) RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        WINRT_IMPL_AUTO(void) RegisterAudioDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        WINRT_IMPL_AUTO(void) RegisterAudioDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        WINRT_IMPL_AUTO(void) RegisterAudioEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        WINRT_IMPL_AUTO(void) RegisterAudioEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        WINRT_IMPL_AUTO(void) RegisterVideoDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        WINRT_IMPL_AUTO(void) RegisterVideoDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
        WINRT_IMPL_AUTO(void) RegisterVideoEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        WINRT_IMPL_AUTO(void) RegisterVideoEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    };
    template <> struct consume<Windows::Media::IMediaExtensionManager>
    {
        template <typename D> using type = consume_Windows_Media_IMediaExtensionManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaExtensionManager2
    {
        WINRT_IMPL_AUTO(void) RegisterMediaExtensionForAppService(Windows::Media::IMediaExtension const& extension, Windows::ApplicationModel::AppService::AppServiceConnection const& connection) const;
    };
    template <> struct consume<Windows::Media::IMediaExtensionManager2>
    {
        template <typename D> using type = consume_Windows_Media_IMediaExtensionManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReadOnly() const;
        WINRT_IMPL_AUTO(void) RelativeTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) RelativeTime() const;
        WINRT_IMPL_AUTO(void) SystemRelativeTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) SystemRelativeTime() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Duration() const;
        WINRT_IMPL_AUTO(void) IsDiscontinuous(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDiscontinuous() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) ExtendedProperties() const;
    };
    template <> struct consume<Windows::Media::IMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_IMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaMarker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Time() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MediaMarkerType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
    };
    template <> struct consume<Windows::Media::IMediaMarker>
    {
        template <typename D> using type = consume_Windows_Media_IMediaMarker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaMarkerTypesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Bookmark() const;
    };
    template <> struct consume<Windows::Media::IMediaMarkerTypesStatics>
    {
        template <typename D> using type = consume_Windows_Media_IMediaMarkerTypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaMarkers
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker>) Markers() const;
    };
    template <> struct consume<Windows::Media::IMediaMarkers>
    {
        template <typename D> using type = consume_Windows_Media_IMediaMarkers<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaProcessingTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) Arguments() const;
    };
    template <> struct consume<Windows::Media::IMediaProcessingTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Media_IMediaProcessingTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaTimelineController
    {
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Resume() const;
        WINRT_IMPL_AUTO(void) Pause() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Position() const;
        WINRT_IMPL_AUTO(void) Position(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ClockRate() const;
        WINRT_IMPL_AUTO(void) ClockRate(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaTimelineControllerState) State() const;
        WINRT_IMPL_AUTO(winrt::event_token) PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& positionChangedEventHandler) const;
        using PositionChanged_revoker = impl::event_revoker<Windows::Media::IMediaTimelineController, &impl::abi_t<Windows::Media::IMediaTimelineController>::remove_PositionChanged>;
        [[nodiscard]] PositionChanged_revoker PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& positionChangedEventHandler) const;
        WINRT_IMPL_AUTO(void) PositionChanged(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& stateChangedEventHandler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::IMediaTimelineController, &impl::abi_t<Windows::Media::IMediaTimelineController>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& stateChangedEventHandler) const;
        WINRT_IMPL_AUTO(void) StateChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Media::IMediaTimelineController>
    {
        template <typename D> using type = consume_Windows_Media_IMediaTimelineController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaTimelineController2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsLoopingEnabled() const;
        WINRT_IMPL_AUTO(void) IsLoopingEnabled(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Failed(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const;
        using Failed_revoker = impl::event_revoker<Windows::Media::IMediaTimelineController2, &impl::abi_t<Windows::Media::IMediaTimelineController2>::remove_Failed>;
        [[nodiscard]] Failed_revoker Failed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Failed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Ended(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& eventHandler) const;
        using Ended_revoker = impl::event_revoker<Windows::Media::IMediaTimelineController2, &impl::abi_t<Windows::Media::IMediaTimelineController2>::remove_Ended>;
        [[nodiscard]] Ended_revoker Ended(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Ended(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::IMediaTimelineController2>
    {
        template <typename D> using type = consume_Windows_Media_IMediaTimelineController2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaTimelineControllerFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::Media::IMediaTimelineControllerFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IMediaTimelineControllerFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMusicDisplayProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AlbumArtist() const;
        WINRT_IMPL_AUTO(void) AlbumArtist(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Artist() const;
        WINRT_IMPL_AUTO(void) Artist(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Media::IMusicDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMusicDisplayProperties2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AlbumTitle() const;
        WINRT_IMPL_AUTO(void) AlbumTitle(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) TrackNumber() const;
        WINRT_IMPL_AUTO(void) TrackNumber(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Genres() const;
    };
    template <> struct consume<Windows::Media::IMusicDisplayProperties2>
    {
        template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMusicDisplayProperties3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AlbumTrackCount() const;
        WINRT_IMPL_AUTO(void) AlbumTrackCount(uint32_t value) const;
    };
    template <> struct consume<Windows::Media::IMusicDisplayProperties3>
    {
        template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RequestedPlaybackPosition() const;
    };
    template <> struct consume<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) RequestedPlaybackRate() const;
    };
    template <> struct consume<Windows::Media::IPlaybackRateChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RequestedShuffleEnabled() const;
    };
    template <> struct consume<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControls
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaPlaybackStatus) PlaybackStatus() const;
        WINRT_IMPL_AUTO(void) PlaybackStatus(Windows::Media::MediaPlaybackStatus const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SystemMediaTransportControlsDisplayUpdater) DisplayUpdater() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SoundLevel) SoundLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPlayEnabled() const;
        WINRT_IMPL_AUTO(void) IsPlayEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStopEnabled() const;
        WINRT_IMPL_AUTO(void) IsStopEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPauseEnabled() const;
        WINRT_IMPL_AUTO(void) IsPauseEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRecordEnabled() const;
        WINRT_IMPL_AUTO(void) IsRecordEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFastForwardEnabled() const;
        WINRT_IMPL_AUTO(void) IsFastForwardEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRewindEnabled() const;
        WINRT_IMPL_AUTO(void) IsRewindEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPreviousEnabled() const;
        WINRT_IMPL_AUTO(void) IsPreviousEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsNextEnabled() const;
        WINRT_IMPL_AUTO(void) IsNextEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsChannelUpEnabled() const;
        WINRT_IMPL_AUTO(void) IsChannelUpEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsChannelDownEnabled() const;
        WINRT_IMPL_AUTO(void) IsChannelDownEnabled(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const;
        using ButtonPressed_revoker = impl::event_revoker<Windows::Media::ISystemMediaTransportControls, &impl::abi_t<Windows::Media::ISystemMediaTransportControls>::remove_ButtonPressed>;
        [[nodiscard]] ButtonPressed_revoker ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ButtonPressed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PropertyChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const;
        using PropertyChanged_revoker = impl::event_revoker<Windows::Media::ISystemMediaTransportControls, &impl::abi_t<Windows::Media::ISystemMediaTransportControls>::remove_PropertyChanged>;
        [[nodiscard]] PropertyChanged_revoker PropertyChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PropertyChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControls>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControls<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControls2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaPlaybackAutoRepeatMode) AutoRepeatMode() const;
        WINRT_IMPL_AUTO(void) AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShuffleEnabled() const;
        WINRT_IMPL_AUTO(void) ShuffleEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) PlaybackRate() const;
        WINRT_IMPL_AUTO(void) PlaybackRate(double value) const;
        WINRT_IMPL_AUTO(void) UpdateTimelineProperties(Windows::Media::SystemMediaTransportControlsTimelineProperties const& timelineProperties) const;
        WINRT_IMPL_AUTO(winrt::event_token) PlaybackPositionChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const;
        using PlaybackPositionChangeRequested_revoker = impl::event_revoker<Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_PlaybackPositionChangeRequested>;
        [[nodiscard]] PlaybackPositionChangeRequested_revoker PlaybackPositionChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PlaybackPositionChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const;
        using PlaybackRateChangeRequested_revoker = impl::event_revoker<Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_PlaybackRateChangeRequested>;
        [[nodiscard]] PlaybackRateChangeRequested_revoker PlaybackRateChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PlaybackRateChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ShuffleEnabledChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const;
        using ShuffleEnabledChangeRequested_revoker = impl::event_revoker<Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_ShuffleEnabledChangeRequested>;
        [[nodiscard]] ShuffleEnabledChangeRequested_revoker ShuffleEnabledChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ShuffleEnabledChangeRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AutoRepeatModeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const;
        using AutoRepeatModeChangeRequested_revoker = impl::event_revoker<Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_AutoRepeatModeChangeRequested>;
        [[nodiscard]] AutoRepeatModeChangeRequested_revoker AutoRepeatModeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AutoRepeatModeChangeRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControls2>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControls2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SystemMediaTransportControlsButton) Button() const;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaPlaybackType) Type() const;
        WINRT_IMPL_AUTO(void) Type(Windows::Media::MediaPlaybackType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppMediaId() const;
        WINRT_IMPL_AUTO(void) AppMediaId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::RandomAccessStreamReference) Thumbnail() const;
        WINRT_IMPL_AUTO(void) Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MusicDisplayProperties) MusicProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoDisplayProperties) VideoProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::ImageDisplayProperties) ImageProperties() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) CopyFromFileAsync(Windows::Media::MediaPlaybackType const& type, Windows::Storage::StorageFile const& source) const;
        WINRT_IMPL_AUTO(void) ClearAll() const;
        WINRT_IMPL_AUTO(void) Update() const;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SystemMediaTransportControlsProperty) Property() const;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::SystemMediaTransportControls) GetForCurrentView() const;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControlsStatics>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) StartTime() const;
        WINRT_IMPL_AUTO(void) StartTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) EndTime() const;
        WINRT_IMPL_AUTO(void) EndTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MinSeekTime() const;
        WINRT_IMPL_AUTO(void) MinSeekTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MaxSeekTime() const;
        WINRT_IMPL_AUTO(void) MaxSeekTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Position() const;
        WINRT_IMPL_AUTO(void) Position(Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<Windows::Media::ISystemMediaTransportControlsTimelineProperties>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoDisplayProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subtitle() const;
        WINRT_IMPL_AUTO(void) Subtitle(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Media::IVideoDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_IVideoDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoDisplayProperties2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Genres() const;
    };
    template <> struct consume<Windows::Media::IVideoDisplayProperties2>
    {
        template <typename D> using type = consume_Windows_Media_IVideoDisplayProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoEffectsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoStabilization() const;
    };
    template <> struct consume<Windows::Media::IVideoEffectsStatics>
    {
        template <typename D> using type = consume_Windows_Media_IVideoEffectsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::SoftwareBitmap) SoftwareBitmap() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) CopyToAsync(Windows::Media::VideoFrame const& frame) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface) Direct3DSurface() const;
    };
    template <> struct consume<Windows::Media::IVideoFrame>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrame2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) CopyToAsync(Windows::Media::VideoFrame const& frame, Windows::Foundation::IReference<Windows::Graphics::Imaging::BitmapBounds> const& sourceBounds, Windows::Foundation::IReference<Windows::Graphics::Imaging::BitmapBounds> const& destinationBounds) const;
    };
    template <> struct consume<Windows::Media::IVideoFrame2>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrameFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::VideoFrame) Create(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const;
        WINRT_IMPL_AUTO(Windows::Media::VideoFrame) CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
    };
    template <> struct consume<Windows::Media::IVideoFrameFactory>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrameStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::VideoFrame) CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height) const;
        WINRT_IMPL_AUTO(Windows::Media::VideoFrame) CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const;
        WINRT_IMPL_AUTO(Windows::Media::VideoFrame) CreateWithSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
        WINRT_IMPL_AUTO(Windows::Media::VideoFrame) CreateWithDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const;
    };
    template <> struct consume<Windows::Media::IVideoFrameStatics>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrameStatics<D>;
    };
    struct struct_Windows_Media_MediaTimeRange
    {
        int64_t Start;
        int64_t End;
    };
    template <> struct abi<Windows::Media::MediaTimeRange>
    {
        using type = struct_Windows_Media_MediaTimeRange;
    };
}
#endif
