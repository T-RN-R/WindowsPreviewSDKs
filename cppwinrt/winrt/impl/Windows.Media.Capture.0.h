// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_0_H
#define WINRT_Windows_Media_Capture_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    enum class Panel : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    struct IPropertySet;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    enum class BitmapPixelFormat : int32_t;
    struct BitmapPropertySet;
    struct BitmapSize;
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    enum class AudioProcessing : int32_t;
    struct IMediaExtension;
    struct VideoFrame;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core
{
    struct VariablePhotoSequenceCapture;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames
{
    struct MediaFrameReader;
    struct MediaFrameSource;
    struct MediaFrameSourceGroup;
    struct MediaFrameSourceInfo;
    struct MultiSourceMediaFrameReader;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    struct IMediaSource;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices
{
    enum class AdvancedPhotoMode : int32_t;
    struct AudioDeviceController;
    enum class CameraStreamState : int32_t;
    enum class CaptureSceneMode : int32_t;
    enum class MediaCaptureFocusState : int32_t;
    enum class MediaCapturePauseBehavior : int32_t;
    struct VideoDeviceController;
}
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    struct IAudioEffectDefinition;
    struct IVideoEffectDefinition;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct IMediaEncodingProperties;
    struct ImageEncodingProperties;
    struct MediaEncodingProfile;
    struct MediaPropertySet;
    struct MediaRatio;
    struct VideoEncodingProperties;
}
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web
{
    struct WebAuthenticationResult;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
    struct StorageFolder;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStream;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
    enum class VirtualKey : int32_t;
    enum class VirtualKeyModifiers : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct DisplayRegion;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    enum class AppBroadcastCameraCaptureState : int32_t
    {
        Stopped = 0,
        Started = 1,
        Failed = 2,
    };
    enum class AppBroadcastCameraOverlayLocation : int32_t
    {
        TopLeft = 0,
        TopCenter = 1,
        TopRight = 2,
        MiddleLeft = 3,
        MiddleCenter = 4,
        MiddleRight = 5,
        BottomLeft = 6,
        BottomCenter = 7,
        BottomRight = 8,
    };
    enum class AppBroadcastCameraOverlaySize : int32_t
    {
        Small = 0,
        Medium = 1,
        Large = 2,
    };
    enum class AppBroadcastCaptureTargetType : int32_t
    {
        AppView = 0,
        EntireDisplay = 1,
    };
    enum class AppBroadcastExitBroadcastModeReason : int32_t
    {
        NormalExit = 0,
        UserCanceled = 1,
        AuthorizationFail = 2,
        ForegroundAppActivated = 3,
    };
    enum class AppBroadcastMicrophoneCaptureState : int32_t
    {
        Stopped = 0,
        Started = 1,
        Failed = 2,
    };
    enum class AppBroadcastPlugInState : int32_t
    {
        Unknown = 0,
        Initialized = 1,
        MicrosoftSignInRequired = 2,
        OAuthSignInRequired = 3,
        ProviderSignInRequired = 4,
        InBandwidthTest = 5,
        ReadyToBroadcast = 6,
    };
    enum class AppBroadcastPreviewState : int32_t
    {
        Started = 0,
        Stopped = 1,
        Failed = 2,
    };
    enum class AppBroadcastSignInResult : int32_t
    {
        Success = 0,
        AuthenticationFailed = 1,
        Unauthorized = 2,
        ServiceUnavailable = 3,
        Unknown = 4,
    };
    enum class AppBroadcastSignInState : int32_t
    {
        NotSignedIn = 0,
        MicrosoftSignInInProgress = 1,
        MicrosoftSignInComplete = 2,
        OAuthSignInInProgress = 3,
        OAuthSignInComplete = 4,
    };
    enum class AppBroadcastStreamState : int32_t
    {
        Initializing = 0,
        StreamReady = 1,
        Started = 2,
        Paused = 3,
        Terminated = 4,
    };
    enum class AppBroadcastTerminationReason : int32_t
    {
        NormalTermination = 0,
        LostConnectionToService = 1,
        NoNetworkConnectivity = 2,
        ServiceAbort = 3,
        ServiceError = 4,
        ServiceUnavailable = 5,
        InternalError = 6,
        UnsupportedFormat = 7,
        BackgroundTaskTerminated = 8,
        BackgroundTaskUnresponsive = 9,
    };
    enum class AppBroadcastVideoEncodingBitrateMode : int32_t
    {
        Custom = 0,
        Auto = 1,
    };
    enum class AppBroadcastVideoEncodingResolutionMode : int32_t
    {
        Custom = 0,
        Auto = 1,
    };
    enum class AppCaptureHistoricalBufferLengthUnit : int32_t
    {
        Megabytes = 0,
        Seconds = 1,
    };
    enum class AppCaptureMetadataPriority : int32_t
    {
        Informational = 0,
        Important = 1,
    };
    enum class AppCaptureMicrophoneCaptureState : int32_t
    {
        Stopped = 0,
        Started = 1,
        Failed = 2,
    };
    enum class AppCaptureRecordingState : int32_t
    {
        InProgress = 0,
        Completed = 1,
        Failed = 2,
    };
    enum class AppCaptureVideoEncodingBitrateMode : int32_t
    {
        Custom = 0,
        High = 1,
        Standard = 2,
    };
    enum class AppCaptureVideoEncodingFrameRateMode : int32_t
    {
        Standard = 0,
        High = 1,
    };
    enum class AppCaptureVideoEncodingResolutionMode : int32_t
    {
        Custom = 0,
        High = 1,
        Standard = 2,
    };
    enum class CameraCaptureUIMaxPhotoResolution : int32_t
    {
        HighestAvailable = 0,
        VerySmallQvga = 1,
        SmallVga = 2,
        MediumXga = 3,
        Large3M = 4,
        VeryLarge5M = 5,
    };
    enum class CameraCaptureUIMaxVideoResolution : int32_t
    {
        HighestAvailable = 0,
        LowDefinition = 1,
        StandardDefinition = 2,
        HighDefinition = 3,
    };
    enum class CameraCaptureUIMode : int32_t
    {
        PhotoOrVideo = 0,
        Photo = 1,
        Video = 2,
    };
    enum class CameraCaptureUIPhotoFormat : int32_t
    {
        Jpeg = 0,
        Png = 1,
        JpegXR = 2,
    };
    enum class CameraCaptureUIVideoFormat : int32_t
    {
        Mp4 = 0,
        Wmv = 1,
    };
    enum class ForegroundActivationArgument : int32_t
    {
        SignInRequired = 0,
        MoreSettings = 1,
    };
    enum class GameBarCommand : int32_t
    {
        OpenGameBar = 0,
        RecordHistoricalBuffer = 1,
        ToggleStartStopRecord = 2,
        StartRecord = 3,
        StopRecord = 4,
        TakeScreenshot = 5,
        StartBroadcast = 6,
        StopBroadcast = 7,
        PauseBroadcast = 8,
        ResumeBroadcast = 9,
        ToggleStartStopBroadcast = 10,
        ToggleMicrophoneCapture = 11,
        ToggleCameraCapture = 12,
        ToggleRecordingIndicator = 13,
    };
    enum class GameBarCommandOrigin : int32_t
    {
        ShortcutKey = 0,
        Cortana = 1,
        AppCommand = 2,
    };
    enum class GameBarServicesDisplayMode : int32_t
    {
        Windowed = 0,
        FullScreenExclusive = 1,
    };
    enum class GameBarTargetCapturePolicy : int32_t
    {
        EnabledBySystem = 0,
        EnabledByUser = 1,
        NotEnabled = 2,
        ProhibitedBySystem = 3,
        ProhibitedByPublisher = 4,
    };
    enum class KnownVideoProfile : int32_t
    {
        VideoRecording = 0,
        HighQualityPhoto = 1,
        BalancedVideoAndPhoto = 2,
        VideoConferencing = 3,
        PhotoSequence = 4,
        HighFrameRate = 5,
        VariablePhotoSequence = 6,
        HdrWithWcgVideo = 7,
        HdrWithWcgPhoto = 8,
        VideoHdr8 = 9,
        CompressedCamera = 10,
    };
    enum class MediaCaptureDeviceExclusiveControlStatus : int32_t
    {
        ExclusiveControlAvailable = 0,
        SharedReadOnlyAvailable = 1,
    };
    enum class MediaCaptureMemoryPreference : int32_t
    {
        Auto = 0,
        Cpu = 1,
    };
    enum class MediaCaptureSharingMode : int32_t
    {
        ExclusiveControl = 0,
        SharedReadOnly = 1,
    };
    enum class MediaCaptureThermalStatus : int32_t
    {
        Normal = 0,
        Overheated = 1,
    };
    enum class MediaCategory : int32_t
    {
        Other = 0,
        Communications = 1,
        Media = 2,
        GameChat = 3,
        Speech = 4,
        FarFieldSpeech = 5,
        UniformSpeech = 6,
    };
    enum class MediaStreamType : int32_t
    {
        VideoPreview = 0,
        VideoRecord = 1,
        Audio = 2,
        Photo = 3,
    };
    enum class PhotoCaptureSource : int32_t
    {
        Auto = 0,
        VideoPreview = 1,
        Photo = 2,
    };
    enum class PowerlineFrequency : int32_t
    {
        Disabled = 0,
        FiftyHertz = 1,
        SixtyHertz = 2,
        Auto = 3,
    };
    enum class StreamingCaptureMode : int32_t
    {
        AudioAndVideo = 0,
        Audio = 1,
        Video = 2,
    };
    enum class VideoDeviceCharacteristic : int32_t
    {
        AllStreamsIndependent = 0,
        PreviewRecordStreamsIdentical = 1,
        PreviewPhotoStreamsIdentical = 2,
        RecordPhotoStreamsIdentical = 3,
        AllStreamsIdentical = 4,
    };
    enum class VideoRotation : int32_t
    {
        None = 0,
        Clockwise90Degrees = 1,
        Clockwise180Degrees = 2,
        Clockwise270Degrees = 3,
    };
    struct IAdvancedCapturedPhoto;
    struct IAdvancedCapturedPhoto2;
    struct IAdvancedPhotoCapture;
    struct IAppBroadcastBackgroundService;
    struct IAppBroadcastBackgroundService2;
    struct IAppBroadcastBackgroundServiceSignInInfo;
    struct IAppBroadcastBackgroundServiceSignInInfo2;
    struct IAppBroadcastBackgroundServiceStreamInfo;
    struct IAppBroadcastBackgroundServiceStreamInfo2;
    struct IAppBroadcastCameraCaptureStateChangedEventArgs;
    struct IAppBroadcastGlobalSettings;
    struct IAppBroadcastHeartbeatRequestedEventArgs;
    struct IAppBroadcastManagerStatics;
    struct IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
    struct IAppBroadcastPlugIn;
    struct IAppBroadcastPlugInManager;
    struct IAppBroadcastPlugInManagerStatics;
    struct IAppBroadcastPlugInStateChangedEventArgs;
    struct IAppBroadcastPreview;
    struct IAppBroadcastPreviewStateChangedEventArgs;
    struct IAppBroadcastPreviewStreamReader;
    struct IAppBroadcastPreviewStreamVideoFrame;
    struct IAppBroadcastPreviewStreamVideoHeader;
    struct IAppBroadcastProviderSettings;
    struct IAppBroadcastServices;
    struct IAppBroadcastSignInStateChangedEventArgs;
    struct IAppBroadcastState;
    struct IAppBroadcastStreamAudioFrame;
    struct IAppBroadcastStreamAudioHeader;
    struct IAppBroadcastStreamReader;
    struct IAppBroadcastStreamStateChangedEventArgs;
    struct IAppBroadcastStreamVideoFrame;
    struct IAppBroadcastStreamVideoHeader;
    struct IAppBroadcastTriggerDetails;
    struct IAppBroadcastViewerCountChangedEventArgs;
    struct IAppCapture;
    struct IAppCaptureAlternateShortcutKeys;
    struct IAppCaptureAlternateShortcutKeys2;
    struct IAppCaptureAlternateShortcutKeys3;
    struct IAppCaptureDurationGeneratedEventArgs;
    struct IAppCaptureFileGeneratedEventArgs;
    struct IAppCaptureManagerStatics;
    struct IAppCaptureMetadataWriter;
    struct IAppCaptureMicrophoneCaptureStateChangedEventArgs;
    struct IAppCaptureRecordOperation;
    struct IAppCaptureRecordingStateChangedEventArgs;
    struct IAppCaptureServices;
    struct IAppCaptureSettings;
    struct IAppCaptureSettings2;
    struct IAppCaptureSettings3;
    struct IAppCaptureSettings4;
    struct IAppCaptureSettings5;
    struct IAppCaptureState;
    struct IAppCaptureStatics;
    struct IAppCaptureStatics2;
    struct ICameraCaptureUI;
    struct ICameraCaptureUIPhotoCaptureSettings;
    struct ICameraCaptureUIVideoCaptureSettings;
    struct ICameraOptionsUIStatics;
    struct ICapturedFrame;
    struct ICapturedFrame2;
    struct ICapturedFrameControlValues;
    struct ICapturedFrameControlValues2;
    struct ICapturedFrameWithSoftwareBitmap;
    struct ICapturedPhoto;
    struct IGameBarServices;
    struct IGameBarServicesCommandEventArgs;
    struct IGameBarServicesManager;
    struct IGameBarServicesManagerGameBarServicesCreatedEventArgs;
    struct IGameBarServicesManagerStatics;
    struct IGameBarServicesTargetInfo;
    struct ILowLagMediaRecording;
    struct ILowLagMediaRecording2;
    struct ILowLagMediaRecording3;
    struct ILowLagPhotoCapture;
    struct ILowLagPhotoSequenceCapture;
    struct IMediaCapture;
    struct IMediaCapture2;
    struct IMediaCapture3;
    struct IMediaCapture4;
    struct IMediaCapture5;
    struct IMediaCapture6;
    struct IMediaCapture7;
    struct IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    struct IMediaCaptureFailedEventArgs;
    struct IMediaCaptureFocusChangedEventArgs;
    struct IMediaCaptureInitializationSettings;
    struct IMediaCaptureInitializationSettings2;
    struct IMediaCaptureInitializationSettings3;
    struct IMediaCaptureInitializationSettings4;
    struct IMediaCaptureInitializationSettings5;
    struct IMediaCaptureInitializationSettings6;
    struct IMediaCaptureInitializationSettings7;
    struct IMediaCapturePauseResult;
    struct IMediaCaptureRelativePanelWatcher;
    struct IMediaCaptureSettings;
    struct IMediaCaptureSettings2;
    struct IMediaCaptureSettings3;
    struct IMediaCaptureStatics;
    struct IMediaCaptureStopResult;
    struct IMediaCaptureVideoPreview;
    struct IMediaCaptureVideoProfile;
    struct IMediaCaptureVideoProfile2;
    struct IMediaCaptureVideoProfileMediaDescription;
    struct IMediaCaptureVideoProfileMediaDescription2;
    struct IOptionalReferencePhotoCapturedEventArgs;
    struct IPhotoCapturedEventArgs;
    struct IPhotoConfirmationCapturedEventArgs;
    struct IVideoStreamConfiguration;
    struct AdvancedCapturedPhoto;
    struct AdvancedPhotoCapture;
    struct AppBroadcastBackgroundService;
    struct AppBroadcastBackgroundServiceSignInInfo;
    struct AppBroadcastBackgroundServiceStreamInfo;
    struct AppBroadcastCameraCaptureStateChangedEventArgs;
    struct AppBroadcastGlobalSettings;
    struct AppBroadcastHeartbeatRequestedEventArgs;
    struct AppBroadcastManager;
    struct AppBroadcastMicrophoneCaptureStateChangedEventArgs;
    struct AppBroadcastPlugIn;
    struct AppBroadcastPlugInManager;
    struct AppBroadcastPlugInStateChangedEventArgs;
    struct AppBroadcastPreview;
    struct AppBroadcastPreviewStateChangedEventArgs;
    struct AppBroadcastPreviewStreamReader;
    struct AppBroadcastPreviewStreamVideoFrame;
    struct AppBroadcastPreviewStreamVideoHeader;
    struct AppBroadcastProviderSettings;
    struct AppBroadcastServices;
    struct AppBroadcastSignInStateChangedEventArgs;
    struct AppBroadcastState;
    struct AppBroadcastStreamAudioFrame;
    struct AppBroadcastStreamAudioHeader;
    struct AppBroadcastStreamReader;
    struct AppBroadcastStreamStateChangedEventArgs;
    struct AppBroadcastStreamVideoFrame;
    struct AppBroadcastStreamVideoHeader;
    struct AppBroadcastTriggerDetails;
    struct AppBroadcastViewerCountChangedEventArgs;
    struct AppCapture;
    struct AppCaptureAlternateShortcutKeys;
    struct AppCaptureDurationGeneratedEventArgs;
    struct AppCaptureFileGeneratedEventArgs;
    struct AppCaptureManager;
    struct AppCaptureMetadataWriter;
    struct AppCaptureMicrophoneCaptureStateChangedEventArgs;
    struct AppCaptureRecordOperation;
    struct AppCaptureRecordingStateChangedEventArgs;
    struct AppCaptureServices;
    struct AppCaptureSettings;
    struct AppCaptureState;
    struct CameraCaptureUI;
    struct CameraCaptureUIPhotoCaptureSettings;
    struct CameraCaptureUIVideoCaptureSettings;
    struct CameraOptionsUI;
    struct CapturedFrame;
    struct CapturedFrameControlValues;
    struct CapturedPhoto;
    struct GameBarServices;
    struct GameBarServicesCommandEventArgs;
    struct GameBarServicesManager;
    struct GameBarServicesManagerGameBarServicesCreatedEventArgs;
    struct GameBarServicesTargetInfo;
    struct LowLagMediaRecording;
    struct LowLagPhotoCapture;
    struct LowLagPhotoSequenceCapture;
    struct MediaCapture;
    struct MediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    struct MediaCaptureFailedEventArgs;
    struct MediaCaptureFocusChangedEventArgs;
    struct MediaCaptureInitializationSettings;
    struct MediaCapturePauseResult;
    struct MediaCaptureRelativePanelWatcher;
    struct MediaCaptureSettings;
    struct MediaCaptureStopResult;
    struct MediaCaptureVideoProfile;
    struct MediaCaptureVideoProfileMediaDescription;
    struct OptionalReferencePhotoCapturedEventArgs;
    struct PhotoCapturedEventArgs;
    struct PhotoConfirmationCapturedEventArgs;
    struct VideoStreamConfiguration;
    struct WhiteBalanceGain;
    struct MediaCaptureFailedEventHandler;
    struct RecordLimitationExceededEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAdvancedPhotoCapture>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundService>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundService2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastGlobalSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugIn>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInManager>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreview>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastProviderSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastServices>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastState>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamReader>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCapture>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureMetadataWriter>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureRecordOperation>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureServices>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings4>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureSettings5>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureState>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IAppCaptureStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICameraCaptureUI>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICameraOptionsUIStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICapturedFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICapturedFrame2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ICapturedPhoto>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IGameBarServices>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IGameBarServicesCommandEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IGameBarServicesManager>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IGameBarServicesManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IGameBarServicesTargetInfo>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ILowLagMediaRecording>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ILowLagMediaRecording2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ILowLagMediaRecording3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ILowLagPhotoCapture>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture4>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture5>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture6>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapture7>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings7>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCapturePauseResult>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureSettings>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureSettings2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureSettings3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureStopResult>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoPreview>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfile>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfile2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IPhotoCapturedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::IVideoStreamConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Media::Capture::AdvancedCapturedPhoto>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AdvancedPhotoCapture>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundService>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastGlobalSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugIn>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugInManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreview>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamReader>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastProviderSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastServices>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastState>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamAudioFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamAudioHeader>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamReader>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamVideoFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamVideoHeader>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCapture>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureMetadataWriter>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureRecordOperation>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureServices>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureState>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUI>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CameraOptionsUI>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CapturedFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CapturedFrameControlValues>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::CapturedPhoto>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::GameBarServices>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::GameBarServicesCommandEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::GameBarServicesManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::GameBarServicesTargetInfo>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::LowLagMediaRecording>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::LowLagPhotoCapture>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCapture>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureInitializationSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCapturePauseResult>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureRelativePanelWatcher>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureSettings>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureStopResult>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfile>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::PhotoCapturedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::VideoStreamConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraCaptureState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastCameraOverlaySize>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastCaptureTargetType>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPlugInState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastPreviewState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastSignInResult>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastSignInState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastStreamState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastTerminationReason>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureMetadataPriority>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureRecordingState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoFormat>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoFormat>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::ForegroundActivationArgument>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::GameBarCommand>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::GameBarCommandOrigin>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::GameBarServicesDisplayMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::GameBarTargetCapturePolicy>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::KnownVideoProfile>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureMemoryPreference>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureSharingMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::MediaCaptureThermalStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::MediaCategory>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::MediaStreamType>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::PhotoCaptureSource>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::PowerlineFrequency>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::StreamingCaptureMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::VideoDeviceCharacteristic>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::VideoRotation>{ using type = enum_category; };
    template <> struct category<Windows::Media::Capture::WhiteBalanceGain>{ using type = struct_category<double, double, double>; };
    template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AdvancedCapturedPhoto> = L"Windows.Media.Capture.AdvancedCapturedPhoto";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AdvancedPhotoCapture> = L"Windows.Media.Capture.AdvancedPhotoCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastBackgroundService> = L"Windows.Media.Capture.AppBroadcastBackgroundService";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo> = L"Windows.Media.Capture.AppBroadcastBackgroundServiceSignInInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo> = L"Windows.Media.Capture.AppBroadcastBackgroundServiceStreamInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastCameraCaptureStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastGlobalSettings> = L"Windows.Media.Capture.AppBroadcastGlobalSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> = L"Windows.Media.Capture.AppBroadcastHeartbeatRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastManager> = L"Windows.Media.Capture.AppBroadcastManager";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPlugIn> = L"Windows.Media.Capture.AppBroadcastPlugIn";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPlugInManager> = L"Windows.Media.Capture.AppBroadcastPlugInManager";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastPlugInStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPreview> = L"Windows.Media.Capture.AppBroadcastPreview";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastPreviewStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPreviewStreamReader> = L"Windows.Media.Capture.AppBroadcastPreviewStreamReader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame> = L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader> = L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoHeader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastProviderSettings> = L"Windows.Media.Capture.AppBroadcastProviderSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastServices> = L"Windows.Media.Capture.AppBroadcastServices";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastSignInStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastState> = L"Windows.Media.Capture.AppBroadcastState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamAudioFrame> = L"Windows.Media.Capture.AppBroadcastStreamAudioFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamAudioHeader> = L"Windows.Media.Capture.AppBroadcastStreamAudioHeader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamReader> = L"Windows.Media.Capture.AppBroadcastStreamReader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastStreamStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamVideoFrame> = L"Windows.Media.Capture.AppBroadcastStreamVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamVideoHeader> = L"Windows.Media.Capture.AppBroadcastStreamVideoHeader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastTriggerDetails> = L"Windows.Media.Capture.AppBroadcastTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> = L"Windows.Media.Capture.AppBroadcastViewerCountChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCapture> = L"Windows.Media.Capture.AppCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureAlternateShortcutKeys> = L"Windows.Media.Capture.AppCaptureAlternateShortcutKeys";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> = L"Windows.Media.Capture.AppCaptureDurationGeneratedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> = L"Windows.Media.Capture.AppCaptureFileGeneratedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureManager> = L"Windows.Media.Capture.AppCaptureManager";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureMetadataWriter> = L"Windows.Media.Capture.AppCaptureMetadataWriter";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> = L"Windows.Media.Capture.AppCaptureMicrophoneCaptureStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureRecordOperation> = L"Windows.Media.Capture.AppCaptureRecordOperation";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> = L"Windows.Media.Capture.AppCaptureRecordingStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureServices> = L"Windows.Media.Capture.AppCaptureServices";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureSettings> = L"Windows.Media.Capture.AppCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureState> = L"Windows.Media.Capture.AppCaptureState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUI> = L"Windows.Media.Capture.CameraCaptureUI";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings> = L"Windows.Media.Capture.CameraCaptureUIPhotoCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings> = L"Windows.Media.Capture.CameraCaptureUIVideoCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraOptionsUI> = L"Windows.Media.Capture.CameraOptionsUI";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CapturedFrame> = L"Windows.Media.Capture.CapturedFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CapturedFrameControlValues> = L"Windows.Media.Capture.CapturedFrameControlValues";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CapturedPhoto> = L"Windows.Media.Capture.CapturedPhoto";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarServices> = L"Windows.Media.Capture.GameBarServices";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarServicesCommandEventArgs> = L"Windows.Media.Capture.GameBarServicesCommandEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarServicesManager> = L"Windows.Media.Capture.GameBarServicesManager";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> = L"Windows.Media.Capture.GameBarServicesManagerGameBarServicesCreatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarServicesTargetInfo> = L"Windows.Media.Capture.GameBarServicesTargetInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::LowLagMediaRecording> = L"Windows.Media.Capture.LowLagMediaRecording";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::LowLagPhotoCapture> = L"Windows.Media.Capture.LowLagPhotoCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::LowLagPhotoSequenceCapture> = L"Windows.Media.Capture.LowLagPhotoSequenceCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCapture> = L"Windows.Media.Capture.MediaCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> = L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureFailedEventArgs> = L"Windows.Media.Capture.MediaCaptureFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> = L"Windows.Media.Capture.MediaCaptureFocusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureInitializationSettings> = L"Windows.Media.Capture.MediaCaptureInitializationSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCapturePauseResult> = L"Windows.Media.Capture.MediaCapturePauseResult";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureRelativePanelWatcher> = L"Windows.Media.Capture.MediaCaptureRelativePanelWatcher";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureSettings> = L"Windows.Media.Capture.MediaCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureStopResult> = L"Windows.Media.Capture.MediaCaptureStopResult";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureVideoProfile> = L"Windows.Media.Capture.MediaCaptureVideoProfile";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> = L"Windows.Media.Capture.MediaCaptureVideoProfileMediaDescription";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> = L"Windows.Media.Capture.OptionalReferencePhotoCapturedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::PhotoCapturedEventArgs> = L"Windows.Media.Capture.PhotoCapturedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> = L"Windows.Media.Capture.PhotoConfirmationCapturedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::VideoStreamConfiguration> = L"Windows.Media.Capture.VideoStreamConfiguration";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastCameraCaptureState> = L"Windows.Media.Capture.AppBroadcastCameraCaptureState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastCameraOverlayLocation> = L"Windows.Media.Capture.AppBroadcastCameraOverlayLocation";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastCameraOverlaySize> = L"Windows.Media.Capture.AppBroadcastCameraOverlaySize";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastCaptureTargetType> = L"Windows.Media.Capture.AppBroadcastCaptureTargetType";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason> = L"Windows.Media.Capture.AppBroadcastExitBroadcastModeReason";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState> = L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPlugInState> = L"Windows.Media.Capture.AppBroadcastPlugInState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastPreviewState> = L"Windows.Media.Capture.AppBroadcastPreviewState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastSignInResult> = L"Windows.Media.Capture.AppBroadcastSignInResult";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastSignInState> = L"Windows.Media.Capture.AppBroadcastSignInState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastStreamState> = L"Windows.Media.Capture.AppBroadcastStreamState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastTerminationReason> = L"Windows.Media.Capture.AppBroadcastTerminationReason";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode> = L"Windows.Media.Capture.AppBroadcastVideoEncodingBitrateMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode> = L"Windows.Media.Capture.AppBroadcastVideoEncodingResolutionMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit> = L"Windows.Media.Capture.AppCaptureHistoricalBufferLengthUnit";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureMetadataPriority> = L"Windows.Media.Capture.AppCaptureMetadataPriority";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureMicrophoneCaptureState> = L"Windows.Media.Capture.AppCaptureMicrophoneCaptureState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureRecordingState> = L"Windows.Media.Capture.AppCaptureRecordingState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode> = L"Windows.Media.Capture.AppCaptureVideoEncodingBitrateMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode> = L"Windows.Media.Capture.AppCaptureVideoEncodingFrameRateMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode> = L"Windows.Media.Capture.AppCaptureVideoEncodingResolutionMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution> = L"Windows.Media.Capture.CameraCaptureUIMaxPhotoResolution";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution> = L"Windows.Media.Capture.CameraCaptureUIMaxVideoResolution";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIMode> = L"Windows.Media.Capture.CameraCaptureUIMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIPhotoFormat> = L"Windows.Media.Capture.CameraCaptureUIPhotoFormat";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::CameraCaptureUIVideoFormat> = L"Windows.Media.Capture.CameraCaptureUIVideoFormat";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ForegroundActivationArgument> = L"Windows.Media.Capture.ForegroundActivationArgument";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarCommand> = L"Windows.Media.Capture.GameBarCommand";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarCommandOrigin> = L"Windows.Media.Capture.GameBarCommandOrigin";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarServicesDisplayMode> = L"Windows.Media.Capture.GameBarServicesDisplayMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::GameBarTargetCapturePolicy> = L"Windows.Media.Capture.GameBarTargetCapturePolicy";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::KnownVideoProfile> = L"Windows.Media.Capture.KnownVideoProfile";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus> = L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatus";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureMemoryPreference> = L"Windows.Media.Capture.MediaCaptureMemoryPreference";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureSharingMode> = L"Windows.Media.Capture.MediaCaptureSharingMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureThermalStatus> = L"Windows.Media.Capture.MediaCaptureThermalStatus";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCategory> = L"Windows.Media.Capture.MediaCategory";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaStreamType> = L"Windows.Media.Capture.MediaStreamType";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::PhotoCaptureSource> = L"Windows.Media.Capture.PhotoCaptureSource";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::PowerlineFrequency> = L"Windows.Media.Capture.PowerlineFrequency";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::StreamingCaptureMode> = L"Windows.Media.Capture.StreamingCaptureMode";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::VideoDeviceCharacteristic> = L"Windows.Media.Capture.VideoDeviceCharacteristic";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::VideoRotation> = L"Windows.Media.Capture.VideoRotation";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::WhiteBalanceGain> = L"Windows.Media.Capture.WhiteBalanceGain";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAdvancedCapturedPhoto> = L"Windows.Media.Capture.IAdvancedCapturedPhoto";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAdvancedCapturedPhoto2> = L"Windows.Media.Capture.IAdvancedCapturedPhoto2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAdvancedPhotoCapture> = L"Windows.Media.Capture.IAdvancedPhotoCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastBackgroundService> = L"Windows.Media.Capture.IAppBroadcastBackgroundService";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastBackgroundService2> = L"Windows.Media.Capture.IAppBroadcastBackgroundService2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2> = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2> = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastCameraCaptureStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastGlobalSettings> = L"Windows.Media.Capture.IAppBroadcastGlobalSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs> = L"Windows.Media.Capture.IAppBroadcastHeartbeatRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastManagerStatics> = L"Windows.Media.Capture.IAppBroadcastManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastMicrophoneCaptureStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPlugIn> = L"Windows.Media.Capture.IAppBroadcastPlugIn";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPlugInManager> = L"Windows.Media.Capture.IAppBroadcastPlugInManager";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics> = L"Windows.Media.Capture.IAppBroadcastPlugInManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastPlugInStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPreview> = L"Windows.Media.Capture.IAppBroadcastPreview";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastPreviewStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPreviewStreamReader> = L"Windows.Media.Capture.IAppBroadcastPreviewStreamReader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> = L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> = L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoHeader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastProviderSettings> = L"Windows.Media.Capture.IAppBroadcastProviderSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastServices> = L"Windows.Media.Capture.IAppBroadcastServices";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastSignInStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastState> = L"Windows.Media.Capture.IAppBroadcastState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastStreamAudioFrame> = L"Windows.Media.Capture.IAppBroadcastStreamAudioFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastStreamAudioHeader> = L"Windows.Media.Capture.IAppBroadcastStreamAudioHeader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastStreamReader> = L"Windows.Media.Capture.IAppBroadcastStreamReader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastStreamStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastStreamVideoFrame> = L"Windows.Media.Capture.IAppBroadcastStreamVideoFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastStreamVideoHeader> = L"Windows.Media.Capture.IAppBroadcastStreamVideoHeader";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastTriggerDetails> = L"Windows.Media.Capture.IAppBroadcastTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs> = L"Windows.Media.Capture.IAppBroadcastViewerCountChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCapture> = L"Windows.Media.Capture.IAppCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> = L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2> = L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3> = L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys3";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs> = L"Windows.Media.Capture.IAppCaptureDurationGeneratedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs> = L"Windows.Media.Capture.IAppCaptureFileGeneratedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureManagerStatics> = L"Windows.Media.Capture.IAppCaptureManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureMetadataWriter> = L"Windows.Media.Capture.IAppCaptureMetadataWriter";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs> = L"Windows.Media.Capture.IAppCaptureMicrophoneCaptureStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureRecordOperation> = L"Windows.Media.Capture.IAppCaptureRecordOperation";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs> = L"Windows.Media.Capture.IAppCaptureRecordingStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureServices> = L"Windows.Media.Capture.IAppCaptureServices";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureSettings> = L"Windows.Media.Capture.IAppCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureSettings2> = L"Windows.Media.Capture.IAppCaptureSettings2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureSettings3> = L"Windows.Media.Capture.IAppCaptureSettings3";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureSettings4> = L"Windows.Media.Capture.IAppCaptureSettings4";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureSettings5> = L"Windows.Media.Capture.IAppCaptureSettings5";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureState> = L"Windows.Media.Capture.IAppCaptureState";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureStatics> = L"Windows.Media.Capture.IAppCaptureStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IAppCaptureStatics2> = L"Windows.Media.Capture.IAppCaptureStatics2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICameraCaptureUI> = L"Windows.Media.Capture.ICameraCaptureUI";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> = L"Windows.Media.Capture.ICameraCaptureUIPhotoCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> = L"Windows.Media.Capture.ICameraCaptureUIVideoCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICameraOptionsUIStatics> = L"Windows.Media.Capture.ICameraOptionsUIStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICapturedFrame> = L"Windows.Media.Capture.ICapturedFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICapturedFrame2> = L"Windows.Media.Capture.ICapturedFrame2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICapturedFrameControlValues> = L"Windows.Media.Capture.ICapturedFrameControlValues";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICapturedFrameControlValues2> = L"Windows.Media.Capture.ICapturedFrameControlValues2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> = L"Windows.Media.Capture.ICapturedFrameWithSoftwareBitmap";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ICapturedPhoto> = L"Windows.Media.Capture.ICapturedPhoto";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IGameBarServices> = L"Windows.Media.Capture.IGameBarServices";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IGameBarServicesCommandEventArgs> = L"Windows.Media.Capture.IGameBarServicesCommandEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IGameBarServicesManager> = L"Windows.Media.Capture.IGameBarServicesManager";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs> = L"Windows.Media.Capture.IGameBarServicesManagerGameBarServicesCreatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IGameBarServicesManagerStatics> = L"Windows.Media.Capture.IGameBarServicesManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IGameBarServicesTargetInfo> = L"Windows.Media.Capture.IGameBarServicesTargetInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ILowLagMediaRecording> = L"Windows.Media.Capture.ILowLagMediaRecording";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ILowLagMediaRecording2> = L"Windows.Media.Capture.ILowLagMediaRecording2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ILowLagMediaRecording3> = L"Windows.Media.Capture.ILowLagMediaRecording3";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ILowLagPhotoCapture> = L"Windows.Media.Capture.ILowLagPhotoCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::ILowLagPhotoSequenceCapture> = L"Windows.Media.Capture.ILowLagPhotoSequenceCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture> = L"Windows.Media.Capture.IMediaCapture";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture2> = L"Windows.Media.Capture.IMediaCapture2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture3> = L"Windows.Media.Capture.IMediaCapture3";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture4> = L"Windows.Media.Capture.IMediaCapture4";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture5> = L"Windows.Media.Capture.IMediaCapture5";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture6> = L"Windows.Media.Capture.IMediaCapture6";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapture7> = L"Windows.Media.Capture.IMediaCapture7";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> = L"Windows.Media.Capture.IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureFailedEventArgs> = L"Windows.Media.Capture.IMediaCaptureFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> = L"Windows.Media.Capture.IMediaCaptureFocusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings2> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings3> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings3";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings4> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings4";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings5> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings5";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings6> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings6";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureInitializationSettings7> = L"Windows.Media.Capture.IMediaCaptureInitializationSettings7";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCapturePauseResult> = L"Windows.Media.Capture.IMediaCapturePauseResult";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher> = L"Windows.Media.Capture.IMediaCaptureRelativePanelWatcher";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureSettings> = L"Windows.Media.Capture.IMediaCaptureSettings";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureSettings2> = L"Windows.Media.Capture.IMediaCaptureSettings2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureSettings3> = L"Windows.Media.Capture.IMediaCaptureSettings3";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureStatics> = L"Windows.Media.Capture.IMediaCaptureStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureStopResult> = L"Windows.Media.Capture.IMediaCaptureStopResult";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureVideoPreview> = L"Windows.Media.Capture.IMediaCaptureVideoPreview";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureVideoProfile> = L"Windows.Media.Capture.IMediaCaptureVideoProfile";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureVideoProfile2> = L"Windows.Media.Capture.IMediaCaptureVideoProfile2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> = L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2> = L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription2";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> = L"Windows.Media.Capture.IOptionalReferencePhotoCapturedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IPhotoCapturedEventArgs> = L"Windows.Media.Capture.IPhotoCapturedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> = L"Windows.Media.Capture.IPhotoConfirmationCapturedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::IVideoStreamConfiguration> = L"Windows.Media.Capture.IVideoStreamConfiguration";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::MediaCaptureFailedEventHandler> = L"Windows.Media.Capture.MediaCaptureFailedEventHandler";
    template <> inline constexpr auto& name_v<Windows::Media::Capture::RecordLimitationExceededEventHandler> = L"Windows.Media.Capture.RecordLimitationExceededEventHandler";
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAdvancedCapturedPhoto>{ 0xF072728B,0xB292,0x4491,{ 0x9D,0x41,0x99,0x80,0x7A,0x55,0x0B,0xBF } }; // F072728B-B292-4491-9D41-99807A550BBF
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ 0x18CF6CD8,0xCFFE,0x42D8,{ 0x81,0x04,0x01,0x7B,0xB3,0x18,0xF4,0xA1 } }; // 18CF6CD8-CFFE-42D8-8104-017BB318F4A1
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAdvancedPhotoCapture>{ 0x83FFAAFA,0x6667,0x44DC,{ 0x97,0x3C,0xA6,0xBC,0xE5,0x96,0xAA,0x0F } }; // 83FFAAFA-6667-44DC-973C-A6BCE596AA0F
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastBackgroundService>{ 0xBAD1E72A,0xFA94,0x46F9,{ 0x95,0xFC,0xD7,0x15,0x11,0xCD,0xA7,0x0B } }; // BAD1E72A-FA94-46F9-95FC-D71511CDA70B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastBackgroundService2>{ 0xFC8CCBBF,0x5549,0x4B87,{ 0x95,0x9F,0x23,0xCA,0x40,0x1F,0xD4,0x73 } }; // FC8CCBBF-5549-4B87-959F-23CA401FD473
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>{ 0x5E735275,0x88C8,0x4ECA,{ 0x89,0xBA,0x48,0x25,0x98,0x5D,0xB8,0x80 } }; // 5E735275-88C8-4ECA-89BA-4825985DB880
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>{ 0x9104285C,0x62CF,0x4A3C,{ 0xA7,0xEE,0xAE,0xB5,0x07,0x40,0x46,0x45 } }; // 9104285C-62CF-4A3C-A7EE-AEB507404645
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>{ 0x31DC02BC,0x990A,0x4904,{ 0xAA,0x96,0xFE,0x36,0x43,0x81,0xF1,0x36 } }; // 31DC02BC-990A-4904-AA96-FE364381F136
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>{ 0xBD1E9F6D,0x94DC,0x4FCE,{ 0x95,0x41,0xA9,0xF1,0x29,0x59,0x63,0x34 } }; // BD1E9F6D-94DC-4FCE-9541-A9F129596334
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>{ 0x1E334CD0,0xB882,0x4B88,{ 0x86,0x92,0x05,0x99,0x9A,0xCE,0xB7,0x0F } }; // 1E334CD0-B882-4B88-8692-05999ACEB70F
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastGlobalSettings>{ 0xB2CB27A5,0x70FC,0x4E17,{ 0x80,0xBD,0x6B,0xA0,0xFD,0x3F,0xF3,0xA0 } }; // B2CB27A5-70FC-4E17-80BD-6BA0FD3FF3A0
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>{ 0xCEA54283,0xEE51,0x4DBF,{ 0x94,0x72,0x79,0xA9,0xED,0x4E,0x21,0x65 } }; // CEA54283-EE51-4DBF-9472-79A9ED4E2165
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastManagerStatics>{ 0x364E018B,0x1E4E,0x411F,{ 0xAB,0x3E,0x92,0x95,0x98,0x44,0xC1,0x56 } }; // 364E018B-1E4E-411F-AB3E-92959844C156
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>{ 0xA86AD5E9,0x9440,0x4908,{ 0x9D,0x09,0x65,0xB7,0xE3,0x15,0xD7,0x95 } }; // A86AD5E9-9440-4908-9D09-65B7E315D795
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPlugIn>{ 0x520C1E66,0x6513,0x4574,{ 0xAC,0x54,0x23,0xB7,0x97,0x29,0x61,0x5B } }; // 520C1E66-6513-4574-AC54-23B79729615B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPlugInManager>{ 0xE550D979,0x27A1,0x49A7,{ 0xBB,0xF4,0xD7,0xA9,0xE9,0xD0,0x76,0x68 } }; // E550D979-27A1-49A7-BBF4-D7A9E9D07668
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>{ 0xF2645C20,0x5C76,0x4CDC,{ 0x93,0x64,0x82,0xFE,0x9E,0xB6,0x53,0x4D } }; // F2645C20-5C76-4CDC-9364-82FE9EB6534D
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>{ 0x4881D0F2,0xABC5,0x4FC6,{ 0x84,0xB0,0x89,0x37,0x0B,0xB4,0x72,0x12 } }; // 4881D0F2-ABC5-4FC6-84B0-89370BB47212
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPreview>{ 0x14B60F5A,0x6E4A,0x4B80,{ 0xA1,0x4F,0x67,0xEE,0x77,0xD1,0x53,0xE7 } }; // 14B60F5A-6E4A-4B80-A14F-67EE77D153E7
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>{ 0x5A57F2DE,0x8DEA,0x4E86,{ 0x90,0xAD,0x03,0xFC,0x26,0xB9,0x65,0x3C } }; // 5A57F2DE-8DEA-4E86-90AD-03FC26B9653C
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>{ 0x92228D50,0xDB3F,0x40A8,{ 0x8C,0xD4,0xF4,0xE3,0x71,0xDD,0xAB,0x37 } }; // 92228D50-DB3F-40A8-8CD4-F4E371DDAB37
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>{ 0x010FBEA1,0x94FE,0x4499,{ 0xB8,0xC0,0x8D,0x24,0x42,0x79,0xFB,0x12 } }; // 010FBEA1-94FE-4499-B8C0-8D244279FB12
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>{ 0x8BEF6113,0xDA84,0x4499,{ 0xA7,0xAB,0x87,0x11,0x8C,0xB4,0xA1,0x57 } }; // 8BEF6113-DA84-4499-A7AB-87118CB4A157
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastProviderSettings>{ 0xC30BDF62,0x9948,0x458F,{ 0xAD,0x50,0xAA,0x06,0xEC,0x03,0xDA,0x08 } }; // C30BDF62-9948-458F-AD50-AA06EC03DA08
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastServices>{ 0x8660B4D6,0x969B,0x4E3C,{ 0xAC,0x3A,0x8B,0x04,0x2E,0xE4,0xEE,0x63 } }; // 8660B4D6-969B-4E3C-AC3A-8B042EE4EE63
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>{ 0x02B692A4,0x5919,0x4A9E,{ 0x8D,0x5E,0xC9,0xBB,0x0D,0xD3,0x37,0x7A } }; // 02B692A4-5919-4A9E-8D5E-C9BB0DD3377A
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastState>{ 0xEE08056D,0x8099,0x4DDD,{ 0x92,0x2E,0xC5,0x6D,0xAC,0x58,0xAB,0xFB } }; // EE08056D-8099-4DDD-922E-C56DAC58ABFB
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>{ 0xEFAB4AC8,0x21BA,0x453F,{ 0x8B,0xB7,0x5E,0x93,0x8A,0x2E,0x9A,0x74 } }; // EFAB4AC8-21BA-453F-8BB7-5E938A2E9A74
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>{ 0xBF21A570,0x6B78,0x4216,{ 0x9F,0x07,0x5A,0xFF,0x52,0x56,0xF1,0xB7 } }; // BF21A570-6B78-4216-9F07-5AFF5256F1B7
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastStreamReader>{ 0xB338BCF9,0x3364,0x4460,{ 0xB5,0xF1,0x3C,0xC2,0x79,0x6A,0x8A,0xA2 } }; // B338BCF9-3364-4460-B5F1-3CC2796A8AA2
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>{ 0x5108A733,0xD008,0x4A89,{ 0x93,0xBE,0x58,0xAE,0xD9,0x61,0x37,0x4E } }; // 5108A733-D008-4A89-93BE-58AED961374E
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>{ 0x0F97CF2B,0xC9E4,0x4E88,{ 0x81,0x94,0xD8,0x14,0xCB,0xD5,0x85,0xD8 } }; // 0F97CF2B-C9E4-4E88-8194-D814CBD585D8
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>{ 0x0B9EBECE,0x7E32,0x432D,{ 0x8C,0xA2,0x36,0xBF,0x10,0xB9,0xF4,0x62 } }; // 0B9EBECE-7E32-432D-8CA2-36BF10B9F462
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastTriggerDetails>{ 0xDEEBAB35,0xEC5E,0x4D8F,{ 0xB1,0xC0,0x5D,0xA6,0xE8,0xC7,0x56,0x38 } }; // DEEBAB35-EC5E-4D8F-B1C0-5DA6E8C75638
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>{ 0xE6E11825,0x5401,0x4ADE,{ 0x8B,0xD2,0xC1,0x4E,0xCE,0xE6,0x80,0x7D } }; // E6E11825-5401-4ADE-8BD2-C14ECEE6807D
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCapture>{ 0x9749D453,0xA29A,0x45ED,{ 0x8F,0x29,0x22,0xD0,0x99,0x42,0xCF,0xF7 } }; // 9749D453-A29A-45ED-8F29-22D09942CFF7
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>{ 0x19E8E0EF,0x236C,0x40F9,{ 0xB3,0x8F,0x9B,0x7D,0xD6,0x5D,0x1C,0xCC } }; // 19E8E0EF-236C-40F9-B38F-9B7DD65D1CCC
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>{ 0xC3669090,0xDD17,0x47F0,{ 0x95,0xE5,0xCE,0x42,0x28,0x6C,0xF3,0x38 } }; // C3669090-DD17-47F0-95E5-CE42286CF338
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>{ 0x7B81448C,0x418E,0x469C,{ 0xA4,0x9A,0x45,0xB5,0x97,0xC8,0x26,0xB6 } }; // 7B81448C-418E-469C-A49A-45B597C826B6
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>{ 0xC1F5563B,0xFFA1,0x44C9,{ 0x97,0x5F,0x27,0xFB,0xEB,0x55,0x3B,0x35 } }; // C1F5563B-FFA1-44C9-975F-27FBEB553B35
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>{ 0x4189FBF4,0x465E,0x45BF,{ 0x90,0x7F,0x16,0x5B,0x3F,0xB2,0x37,0x58 } }; // 4189FBF4-465E-45BF-907F-165B3FB23758
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureManagerStatics>{ 0x7D9E3EA7,0x6282,0x4735,{ 0x8D,0x4E,0xAA,0x45,0xF9,0x0F,0x67,0x23 } }; // 7D9E3EA7-6282-4735-8D4E-AA45F90F6723
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureMetadataWriter>{ 0xE0CE4877,0x9AAF,0x46B4,{ 0xAD,0x31,0x6A,0x60,0xB4,0x41,0xC7,0x80 } }; // E0CE4877-9AAF-46B4-AD31-6A60B441C780
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>{ 0x324D249E,0x45BC,0x4C35,{ 0xBC,0x35,0xE4,0x69,0xFC,0x7A,0x69,0xE0 } }; // 324D249E-45BC-4C35-BC35-E469FC7A69E0
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureRecordOperation>{ 0xC66020A9,0x1538,0x495C,{ 0x9B,0xBB,0x2B,0xA8,0x70,0xEC,0x58,0x61 } }; // C66020A9-1538-495C-9BBB-2BA870EC5861
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>{ 0x24FC8712,0xE305,0x490D,{ 0xB4,0x15,0x6B,0x1C,0x90,0x49,0x73,0x6B } }; // 24FC8712-E305-490D-B415-6B1C9049736B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureServices>{ 0x44FEC0B5,0x34F5,0x4F18,{ 0xAE,0x8C,0xB9,0x12,0x3A,0xBB,0xFC,0x0D } }; // 44FEC0B5-34F5-4F18-AE8C-B9123ABBFC0D
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureSettings>{ 0x14683A86,0x8807,0x48D3,{ 0x88,0x3A,0x97,0x0E,0xE4,0x53,0x2A,0x39 } }; // 14683A86-8807-48D3-883A-970EE4532A39
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureSettings2>{ 0xFCB8CEE7,0xE26B,0x476F,{ 0x9B,0x1A,0xEC,0x34,0x2D,0x2A,0x8F,0xDE } }; // FCB8CEE7-E26B-476F-9B1A-EC342D2A8FDE
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureSettings3>{ 0xA93502FE,0x88C2,0x42D6,{ 0xAA,0xAA,0x40,0xFE,0xFF,0xD7,0x5A,0xEC } }; // A93502FE-88C2-42D6-AAAA-40FEFFD75AEC
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureSettings4>{ 0x07C2774C,0x1A81,0x482F,{ 0xA2,0x44,0x04,0x9D,0x95,0xF2,0x5B,0x0B } }; // 07C2774C-1A81-482F-A244-049D95F25B0B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureSettings5>{ 0x18894522,0xB0E8,0x4BA0,{ 0x8F,0x13,0x3E,0xAA,0x5F,0xA4,0x01,0x3B } }; // 18894522-B0E8-4BA0-8F13-3EAA5FA4013B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureState>{ 0x73134372,0xD4EB,0x44CE,{ 0x95,0x38,0x46,0x5F,0x50,0x6A,0xC4,0xEA } }; // 73134372-D4EB-44CE-9538-465F506AC4EA
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureStatics>{ 0xF922DD6C,0x0A7E,0x4E74,{ 0x8B,0x20,0x9C,0x1F,0x90,0x2D,0x08,0xA1 } }; // F922DD6C-0A7E-4E74-8B20-9C1F902D08A1
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IAppCaptureStatics2>{ 0xB2D881D4,0x836C,0x4DA4,{ 0xAF,0xD7,0xFA,0xCC,0x04,0x1E,0x1C,0xF3 } }; // B2D881D4-836C-4DA4-AFD7-FACC041E1CF3
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICameraCaptureUI>{ 0x48587540,0x6F93,0x4BB4,{ 0xB8,0xF3,0xE8,0x9E,0x48,0x94,0x8C,0x91 } }; // 48587540-6F93-4BB4-B8F3-E89E48948C91
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ 0xB9F5BE97,0x3472,0x46A8,{ 0x8A,0x9E,0x04,0xCE,0x42,0xCC,0xC9,0x7D } }; // B9F5BE97-3472-46A8-8A9E-04CE42CCC97D
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ 0x64E92D1F,0xA28D,0x425A,{ 0xB8,0x4F,0xE5,0x68,0x33,0x5F,0xF2,0x4E } }; // 64E92D1F-A28D-425A-B84F-E568335FF24E
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICameraOptionsUIStatics>{ 0x3B0D5E34,0x3906,0x4B7D,{ 0x94,0x6C,0x7B,0xDE,0x84,0x44,0x99,0xAE } }; // 3B0D5E34-3906-4B7D-946C-7BDE844499AE
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICapturedFrame>{ 0x1DD2DE1F,0x571B,0x44D8,{ 0x8E,0x80,0xA0,0x8A,0x15,0x78,0x76,0x6E } }; // 1DD2DE1F-571B-44D8-8E80-A08A1578766E
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICapturedFrame2>{ 0x543FA6D1,0xBD78,0x4866,{ 0xAD,0xDA,0x24,0x31,0x4B,0xC6,0x5D,0xEA } }; // 543FA6D1-BD78-4866-ADDA-24314BC65DEA
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICapturedFrameControlValues>{ 0x90C65B7F,0x4E0D,0x4CA4,{ 0x88,0x2D,0x7A,0x14,0x4F,0xED,0x0A,0x90 } }; // 90C65B7F-4E0D-4CA4-882D-7A144FED0A90
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICapturedFrameControlValues2>{ 0x500B2B88,0x06D2,0x4AA7,{ 0xA7,0xDB,0xD3,0x7A,0xF7,0x33,0x21,0xD8 } }; // 500B2B88-06D2-4AA7-A7DB-D37AF73321D8
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ 0xB58E8B6E,0x8503,0x49B5,{ 0x9E,0x86,0x89,0x7D,0x26,0xA3,0xFF,0x3D } }; // B58E8B6E-8503-49B5-9E86-897D26A3FF3D
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ICapturedPhoto>{ 0xB0CE7E5A,0xCFCC,0x4D6C,{ 0x8A,0xD1,0x08,0x69,0x20,0x8A,0xCA,0x16 } }; // B0CE7E5A-CFCC-4D6C-8AD1-0869208ACA16
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IGameBarServices>{ 0x2DBEAD57,0x50A6,0x499E,{ 0x8C,0x6C,0xD3,0x30,0xA7,0x31,0x17,0x96 } }; // 2DBEAD57-50A6-499E-8C6C-D330A7311796
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IGameBarServicesCommandEventArgs>{ 0xA74226B2,0xF176,0x4FCF,{ 0x8F,0xBB,0xCF,0x69,0x8B,0x2E,0xB8,0xE0 } }; // A74226B2-F176-4FCF-8FBB-CF698B2EB8E0
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IGameBarServicesManager>{ 0x3A4B9CFA,0x7F8B,0x4C60,{ 0x9D,0xBB,0x0B,0xCD,0x26,0x2D,0xFF,0xC6 } }; // 3A4B9CFA-7F8B-4C60-9DBB-0BCD262DFFC6
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>{ 0xEDEDBD9C,0x143E,0x49A3,{ 0xA5,0xEA,0x0B,0x19,0x95,0xC8,0xD4,0x6E } }; // EDEDBD9C-143E-49A3-A5EA-0B1995C8D46E
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IGameBarServicesManagerStatics>{ 0x34C1B616,0xFF25,0x4792,{ 0x98,0xF2,0xD3,0x75,0x3F,0x15,0xAC,0x13 } }; // 34C1B616-FF25-4792-98F2-D3753F15AC13
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IGameBarServicesTargetInfo>{ 0xB4202F92,0x1611,0x4E05,{ 0xB6,0xEF,0xDF,0xD7,0x37,0xAE,0x33,0xB0 } }; // B4202F92-1611-4E05-B6EF-DFD737AE33B0
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ILowLagMediaRecording>{ 0x41C8BAF7,0xFF3F,0x49F0,{ 0xA4,0x77,0xF1,0x95,0xE3,0xCE,0x51,0x08 } }; // 41C8BAF7-FF3F-49F0-A477-F195E3CE5108
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ILowLagMediaRecording2>{ 0x6369C758,0x5644,0x41E2,{ 0x97,0xAF,0x8E,0xF5,0x6A,0x25,0xE2,0x25 } }; // 6369C758-5644-41E2-97AF-8EF56A25E225
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ILowLagMediaRecording3>{ 0x5C33AB12,0x48F7,0x47DA,{ 0xB4,0x1E,0x90,0x88,0x0A,0x5F,0xE0,0xEC } }; // 5C33AB12-48F7-47DA-B41E-90880A5FE0EC
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ILowLagPhotoCapture>{ 0xA37251B7,0x6B44,0x473D,{ 0x8F,0x24,0xF7,0x03,0xD6,0xC0,0xEC,0x44 } }; // A37251B7-6B44-473D-8F24-F703D6C0EC44
    template <> inline constexpr guid guid_v<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ 0x7CC346BB,0xB9A9,0x4C91,{ 0x8F,0xFA,0x28,0x7E,0x9C,0x66,0x86,0x69 } }; // 7CC346BB-B9A9-4C91-8FFA-287E9C668669
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture>{ 0xC61AFBB4,0xFB10,0x4A34,{ 0xAC,0x18,0xCA,0x80,0xD9,0xC8,0xE7,0xEE } }; // C61AFBB4-FB10-4A34-AC18-CA80D9C8E7EE
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture2>{ 0x9CC68260,0x7DA1,0x4043,{ 0xB6,0x52,0x21,0xB8,0x87,0x8D,0xAF,0xF9 } }; // 9CC68260-7DA1-4043-B652-21B8878DAFF9
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture3>{ 0xD4136F30,0x1564,0x466E,{ 0xBC,0x0A,0xAF,0x94,0xE0,0x2A,0xB0,0x16 } }; // D4136F30-1564-466E-BC0A-AF94E02AB016
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture4>{ 0xBACD6FD6,0xFB08,0x4947,{ 0xAE,0xA2,0xCE,0x14,0xEF,0xF0,0xCE,0x13 } }; // BACD6FD6-FB08-4947-AEA2-CE14EFF0CE13
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture5>{ 0xDA787C22,0x3A9B,0x4720,{ 0xA7,0x1E,0x97,0x90,0x0A,0x31,0x6E,0x5A } }; // DA787C22-3A9B-4720-A71E-97900A316E5A
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture6>{ 0x228948BD,0x4B20,0x4BB1,{ 0x9F,0xD6,0xA5,0x83,0x21,0x2A,0x10,0x12 } }; // 228948BD-4B20-4BB1-9FD6-A583212A1012
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapture7>{ 0x9169F102,0x8888,0x541A,{ 0x95,0xBC,0x24,0xE4,0xD4,0x62,0x54,0x2A } }; // 9169F102-8888-541A-95BC-24E4D462542A
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ 0x9D2F920D,0xA588,0x43C6,{ 0x89,0xD6,0x5A,0xD3,0x22,0xAF,0x00,0x6A } }; // 9D2F920D-A588-43C6-89D6-5AD322AF006A
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ 0x80FDE3F4,0x54C4,0x42C0,{ 0x8D,0x19,0xCE,0xA1,0xA8,0x7C,0xA1,0x8B } }; // 80FDE3F4-54C4-42C0-8D19-CEA1A87CA18B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ 0x81E1BC7F,0x2277,0x493E,{ 0xAB,0xEE,0xD3,0xF4,0x4F,0xF9,0x8C,0x04 } }; // 81E1BC7F-2277-493E-ABEE-D3F44FF98C04
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ 0x9782BA70,0xEA65,0x4900,{ 0x93,0x56,0x8C,0xA8,0x87,0x72,0x68,0x84 } }; // 9782BA70-EA65-4900-9356-8CA887726884
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ 0x404E0626,0xC9DC,0x43E9,{ 0xAE,0xE4,0xE6,0xBF,0x1B,0x57,0xB4,0x4C } }; // 404E0626-C9DC-43E9-AEE4-E6BF1B57B44C
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ 0x4160519D,0xBE48,0x4730,{ 0x81,0x04,0x0C,0xF6,0xE9,0xE9,0x79,0x48 } }; // 4160519D-BE48-4730-8104-0CF6E9E97948
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ 0xF502A537,0x4CB7,0x4D28,{ 0x95,0xED,0x4F,0x9F,0x01,0x2E,0x05,0x18 } }; // F502A537-4CB7-4D28-95ED-4F9F012E0518
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ 0xD5A2E3B8,0x2626,0x4E94,{ 0xB7,0xB3,0x53,0x08,0xA0,0xF6,0x4B,0x1A } }; // D5A2E3B8-2626-4E94-B7B3-5308A0F64B1A
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ 0xB2E26B47,0x3DB1,0x4D33,{ 0xAB,0x63,0x0F,0xFA,0x09,0x05,0x65,0x85 } }; // B2E26B47-3DB1-4D33-AB63-0FFA09056585
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureInitializationSettings7>{ 0x41546967,0xF58A,0x5D82,{ 0x9E,0xF4,0xED,0x57,0x2F,0xB5,0xE3,0x4E } }; // 41546967-F58A-5D82-9EF4-ED572FB5E34E
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCapturePauseResult>{ 0xAEC47CA3,0x4477,0x4B04,{ 0xA0,0x6F,0x2C,0x1C,0x51,0x82,0xFE,0x9D } }; // AEC47CA3-4477-4B04-A06F-2C1C5182FE9D
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>{ 0x7D896566,0x04BE,0x5B89,{ 0xB3,0x0E,0xBD,0x34,0xA9,0xF1,0x2D,0xB0 } }; // 7D896566-04BE-5B89-B30E-BD34A9F12DB0
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureSettings>{ 0x1D83AAFE,0x6D45,0x4477,{ 0x8D,0xC4,0xAC,0x5B,0xC0,0x1C,0x40,0x91 } }; // 1D83AAFE-6D45-4477-8DC4-AC5BC01C4091
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureSettings2>{ 0x6F9E7CFB,0xFA9F,0x4B13,{ 0x9C,0xBE,0x5A,0xB9,0x4F,0x1F,0x34,0x93 } }; // 6F9E7CFB-FA9F-4B13-9CBE-5AB94F1F3493
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureSettings3>{ 0x303C67C2,0x8058,0x4B1B,{ 0xB8,0x77,0x8C,0x2E,0xF3,0x52,0x84,0x40 } }; // 303C67C2-8058-4B1B-B877-8C2EF3528440
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureStatics>{ 0xACEF81FF,0x99ED,0x4645,{ 0x96,0x5E,0x19,0x25,0xCF,0xC6,0x38,0x34 } }; // ACEF81FF-99ED-4645-965E-1925CFC63834
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureStopResult>{ 0xF9DB6A2A,0xA092,0x4AD1,{ 0x97,0xD4,0xF2,0x01,0xF9,0xD0,0x82,0xDB } }; // F9DB6A2A-A092-4AD1-97D4-F201F9D082DB
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureVideoPreview>{ 0x27727073,0x549E,0x447F,{ 0xA2,0x0A,0x4F,0x03,0xC4,0x79,0xD8,0xC0 } }; // 27727073-549E-447F-A20A-4F03C479D8C0
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureVideoProfile>{ 0x21A073BF,0xA3EE,0x4ECF,{ 0x9E,0xF6,0x50,0xB0,0xBC,0x4E,0x13,0x05 } }; // 21A073BF-A3EE-4ECF-9EF6-50B0BC4E1305
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureVideoProfile2>{ 0x97DDC95F,0x94CE,0x468F,{ 0x93,0x16,0xFC,0x5B,0xC2,0x63,0x8F,0x6B } }; // 97DDC95F-94CE-468F-9316-FC5BC2638F6B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ 0x8012AFEF,0xB691,0x49FF,{ 0x83,0xF2,0xC1,0xE7,0x6E,0xAA,0xEA,0x1B } }; // 8012AFEF-B691-49FF-83F2-C1E76EAAEA1B
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>{ 0xC6A6EF13,0x322D,0x413A,{ 0xB8,0x5A,0x68,0xA8,0x8E,0x02,0xF4,0xE9 } }; // C6A6EF13-322D-413A-B85A-68A88E02F4E9
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ 0x470F88B3,0x1E6D,0x4051,{ 0x9C,0x8B,0xF1,0xD8,0x5A,0xF0,0x47,0xB7 } }; // 470F88B3-1E6D-4051-9C8B-F1D85AF047B7
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IPhotoCapturedEventArgs>{ 0x373BFBC1,0x984E,0x4FF0,{ 0xBF,0x85,0x1C,0x00,0xAA,0xBC,0x5A,0x45 } }; // 373BFBC1-984E-4FF0-BF85-1C00AABC5A45
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ 0xAB473672,0xC28A,0x4827,{ 0x8F,0x8D,0x36,0x36,0xD3,0xBE,0xB5,0x1E } }; // AB473672-C28A-4827-8F8D-3636D3BEB51E
    template <> inline constexpr guid guid_v<Windows::Media::Capture::IVideoStreamConfiguration>{ 0xD8770A6F,0x4390,0x4B5E,{ 0xAD,0x3E,0x0F,0x8A,0xF0,0x96,0x34,0x90 } }; // D8770A6F-4390-4B5E-AD3E-0F8AF0963490
    template <> inline constexpr guid guid_v<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ 0x2014EFFB,0x5CD8,0x4F08,{ 0xA3,0x14,0x0D,0x36,0x0D,0xA5,0x9F,0x14 } }; // 2014EFFB-5CD8-4F08-A314-0D360DA59F14
    template <> inline constexpr guid guid_v<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ 0x3FAE8F2E,0x4FE1,0x4FFD,{ 0xAA,0xBA,0xE1,0xF1,0x33,0x7D,0x4E,0x53 } }; // 3FAE8F2E-4FE1-4FFD-AABA-E1F1337D4E53
    template <> struct default_interface<Windows::Media::Capture::AdvancedCapturedPhoto>{ using type = Windows::Media::Capture::IAdvancedCapturedPhoto; };
    template <> struct default_interface<Windows::Media::Capture::AdvancedPhotoCapture>{ using type = Windows::Media::Capture::IAdvancedPhotoCapture; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundService>{ using type = Windows::Media::Capture::IAppBroadcastBackgroundService; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>{ using type = Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>{ using type = Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastGlobalSettings>{ using type = Windows::Media::Capture::IAppBroadcastGlobalSettings; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugIn>{ using type = Windows::Media::Capture::IAppBroadcastPlugIn; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugInManager>{ using type = Windows::Media::Capture::IAppBroadcastPlugInManager; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreview>{ using type = Windows::Media::Capture::IAppBroadcastPreview; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamReader>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStreamReader; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastProviderSettings>{ using type = Windows::Media::Capture::IAppBroadcastProviderSettings; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastServices>{ using type = Windows::Media::Capture::IAppBroadcastServices; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastState>{ using type = Windows::Media::Capture::IAppBroadcastState; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamAudioFrame>{ using type = Windows::Media::Capture::IAppBroadcastStreamAudioFrame; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamAudioHeader>{ using type = Windows::Media::Capture::IAppBroadcastStreamAudioHeader; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamReader>{ using type = Windows::Media::Capture::IAppBroadcastStreamReader; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamVideoFrame>{ using type = Windows::Media::Capture::IAppBroadcastStreamVideoFrame; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamVideoHeader>{ using type = Windows::Media::Capture::IAppBroadcastStreamVideoHeader; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastTriggerDetails>{ using type = Windows::Media::Capture::IAppBroadcastTriggerDetails; };
    template <> struct default_interface<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppCapture>{ using type = Windows::Media::Capture::IAppCapture; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>{ using type = Windows::Media::Capture::IAppCaptureAlternateShortcutKeys; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureMetadataWriter>{ using type = Windows::Media::Capture::IAppCaptureMetadataWriter; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureRecordOperation>{ using type = Windows::Media::Capture::IAppCaptureRecordOperation; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureServices>{ using type = Windows::Media::Capture::IAppCaptureServices; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureSettings>{ using type = Windows::Media::Capture::IAppCaptureSettings; };
    template <> struct default_interface<Windows::Media::Capture::AppCaptureState>{ using type = Windows::Media::Capture::IAppCaptureState; };
    template <> struct default_interface<Windows::Media::Capture::CameraCaptureUI>{ using type = Windows::Media::Capture::ICameraCaptureUI; };
    template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ using type = Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings; };
    template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ using type = Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings; };
    template <> struct default_interface<Windows::Media::Capture::CapturedFrame>{ using type = Windows::Media::Capture::ICapturedFrame; };
    template <> struct default_interface<Windows::Media::Capture::CapturedFrameControlValues>{ using type = Windows::Media::Capture::ICapturedFrameControlValues; };
    template <> struct default_interface<Windows::Media::Capture::CapturedPhoto>{ using type = Windows::Media::Capture::ICapturedPhoto; };
    template <> struct default_interface<Windows::Media::Capture::GameBarServices>{ using type = Windows::Media::Capture::IGameBarServices; };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesCommandEventArgs>{ using type = Windows::Media::Capture::IGameBarServicesCommandEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesManager>{ using type = Windows::Media::Capture::IGameBarServicesManager; };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>{ using type = Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::GameBarServicesTargetInfo>{ using type = Windows::Media::Capture::IGameBarServicesTargetInfo; };
    template <> struct default_interface<Windows::Media::Capture::LowLagMediaRecording>{ using type = Windows::Media::Capture::ILowLagMediaRecording; };
    template <> struct default_interface<Windows::Media::Capture::LowLagPhotoCapture>{ using type = Windows::Media::Capture::ILowLagPhotoCapture; };
    template <> struct default_interface<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ using type = Windows::Media::Capture::ILowLagPhotoSequenceCapture; };
    template <> struct default_interface<Windows::Media::Capture::MediaCapture>{ using type = Windows::Media::Capture::IMediaCapture; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureFailedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureInitializationSettings>{ using type = Windows::Media::Capture::IMediaCaptureInitializationSettings; };
    template <> struct default_interface<Windows::Media::Capture::MediaCapturePauseResult>{ using type = Windows::Media::Capture::IMediaCapturePauseResult; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureRelativePanelWatcher>{ using type = Windows::Media::Capture::IMediaCaptureRelativePanelWatcher; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureSettings>{ using type = Windows::Media::Capture::IMediaCaptureSettings; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureStopResult>{ using type = Windows::Media::Capture::IMediaCaptureStopResult; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfile>{ using type = Windows::Media::Capture::IMediaCaptureVideoProfile; };
    template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ using type = Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription; };
    template <> struct default_interface<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ using type = Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::PhotoCapturedEventArgs>{ using type = Windows::Media::Capture::IPhotoCapturedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ using type = Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs; };
    template <> struct default_interface<Windows::Media::Capture::VideoStreamConfiguration>{ using type = Windows::Media::Capture::IVideoStreamConfiguration; };
    template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameBoundsRelativeToReferencePhoto(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CaptureAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CaptureWithContextAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_OptionalReferencePhotoCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OptionalReferencePhotoCaptured(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AllPhotosCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AllPhotosCaptured(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlugInState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PlugInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SignInInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_SignInInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_StreamInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_StreamInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_ViewerCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ViewerCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TerminateBroadcast(int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_HeartbeatRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HeartbeatRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_TitleId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_BroadcastTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastLanguage(void*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastChannel(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastChannel(void*) noexcept = 0;
            virtual int32_t __stdcall add_BroadcastTitleChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BroadcastTitleChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BroadcastLanguageChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BroadcastLanguageChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BroadcastChannelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BroadcastChannelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OAuthRequestUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthRequestUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_OAuthCallbackUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationResult(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserName(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall add_SignInStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SignInStateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UserNameChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserNameChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredVideoEncodingBitrate(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredVideoEncodingBitrate(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_BandwidthTestBitrate(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_BandwidthTestBitrate(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioCodec(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudioCodec(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastStreamReader(void**) noexcept = 0;
            virtual int32_t __stdcall add_StreamStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StreamStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoEncodingResolutionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoEncodingResolutionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoEncodingBitrateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoEncodingBitrateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportProblemWithStream() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBroadcastEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledByPolicy(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasHardwareEncoder(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAudioCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAudioCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEchoCancellationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEchoCancellationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SystemAudioGain(double) noexcept = 0;
            virtual int32_t __stdcall get_SystemAudioGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_MicrophoneGain(double) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_IsCameraCaptureEnabledByDefault(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCameraCaptureEnabledByDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedCameraId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedCameraId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CameraOverlayLocation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CameraOverlayLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CameraOverlaySize(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CameraOverlaySize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsCursorImageCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCursorImageCaptureEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetGlobalSettings(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyGlobalSettings(void*) noexcept = 0;
            virtual int32_t __stdcall GetProviderSettings(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyProviderSettings(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBroadcastProviderAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PlugInList(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultPlugIn(void**) noexcept = 0;
            virtual int32_t __stdcall put_DefaultPlugIn(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlugInState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StopPreview() noexcept = 0;
            virtual int32_t __stdcall get_PreviewState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(void**) noexcept = 0;
            virtual int32_t __stdcall add_PreviewStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviewStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_PreviewStreamReader(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreviewState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoStride(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoBitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoBitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetNextVideoFrame(void**) noexcept = 0;
            virtual int32_t __stdcall add_VideoFrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoFrameArrived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DefaultBroadcastTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_DefaultBroadcastTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_AudioEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingBitrateMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingBitrateMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingResolutionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingResolutionMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CaptureTargetType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CaptureTargetType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall put_BroadcastLanguage(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanCapture(bool*) noexcept = 0;
            virtual int32_t __stdcall EnterBroadcastModeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ExitBroadcastMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall StartBroadcast() noexcept = 0;
            virtual int32_t __stdcall PauseBroadcast() noexcept = 0;
            virtual int32_t __stdcall ResumeBroadcast() noexcept = 0;
            virtual int32_t __stdcall StartPreview(Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Result(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCaptureTargetRunning(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ViewerCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldCaptureMicrophone(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldCaptureMicrophone(bool) noexcept = 0;
            virtual int32_t __stdcall RestartMicrophoneCapture() noexcept = 0;
            virtual int32_t __stdcall get_ShouldCaptureCamera(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldCaptureCamera(bool) noexcept = 0;
            virtual int32_t __stdcall RestartCameraCapture() noexcept = 0;
            virtual int32_t __stdcall get_EncodedVideoSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CameraCaptureState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CameraCaptureError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StreamState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PlugInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OAuthRequestUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_OAuthCallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationResult(void**) noexcept = 0;
            virtual int32_t __stdcall put_AuthenticationResult(void*) noexcept = 0;
            virtual int32_t __stdcall put_SignInState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SignInState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TerminationReason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TerminationReasonPlugInSpecific(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ViewerCountChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ViewerCountChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MicrophoneCaptureStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MicrophoneCaptureStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraCaptureStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraCaptureStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlugInStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlugInStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StreamStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StreamStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CaptureTargetClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CaptureTargetClosed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_HasDiscontinuity(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioChannels(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioSampleRate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioAacSequence(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetNextAudioFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetNextVideoFrame(void**) noexcept = 0;
            virtual int32_t __stdcall add_AudioFrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioFrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoFrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoFrameArrived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsKeyFrame(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasDiscontinuity(bool*) noexcept = 0;
            virtual int32_t __stdcall get_FrameId(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundService(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewerCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCapturingAudio(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCapturingVideo(bool*) noexcept = 0;
            virtual int32_t __stdcall add_CapturingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CapturingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ToggleGameBarKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleGameBarKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleGameBarKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleGameBarKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SaveHistoricalVideoKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SaveHistoricalVideoKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SaveHistoricalVideoKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SaveHistoricalVideoKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TakeScreenshotKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TakeScreenshotKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TakeScreenshotKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TakeScreenshotKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingIndicatorKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingIndicatorKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleRecordingIndicatorKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleRecordingIndicatorKeyModifiers(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ToggleMicrophoneCaptureKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleMicrophoneCaptureKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleMicrophoneCaptureKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleMicrophoneCaptureKeyModifiers(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ToggleCameraCaptureKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleCameraCaptureKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleCameraCaptureKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleCameraCaptureKeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleBroadcastKey(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleBroadcastKey(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ToggleBroadcastKeyModifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ToggleBroadcastKeyModifiers(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSettings(void**) noexcept = 0;
            virtual int32_t __stdcall ApplySettings(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddStringEvent(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32Event(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDoubleEvent(void*, double, int32_t) noexcept = 0;
            virtual int32_t __stdcall StartStringState(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall StartInt32State(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall StartDoubleState(void*, double, int32_t) noexcept = 0;
            virtual int32_t __stdcall StopState(void*) noexcept = 0;
            virtual int32_t __stdcall StopAllStates() noexcept = 0;
            virtual int32_t __stdcall get_RemainingStorageBytesAvailable(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall add_MetadataPurged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MetadataPurged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StopRecording() noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFileTruncated(void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DurationGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DurationGenerated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FileGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileGenerated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Record(void**) noexcept = 0;
            virtual int32_t __stdcall RecordTimeSpan(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_CanCapture(bool*) noexcept = 0;
            virtual int32_t __stdcall get_State(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AppCaptureDestinationFolder(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppCaptureDestinationFolder(void**) noexcept = 0;
            virtual int32_t __stdcall put_AudioEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsAudioCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAudioCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CustomVideoEncodingWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CustomVideoEncodingWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HistoricalBufferLength(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalBufferLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HistoricalBufferLengthUnit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HistoricalBufferLengthUnit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsHistoricalCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHistoricalCaptureOnBatteryAllowed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureOnBatteryAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHistoricalCaptureOnWirelessDisplayAllowed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureOnWirelessDisplayAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MaximumRecordLength(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MaximumRecordLength(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScreenshotDestinationFolder(void*) noexcept = 0;
            virtual int32_t __stdcall get_ScreenshotDestinationFolder(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingBitrateMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingBitrateMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingResolutionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingResolutionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IsAppCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAppCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDisabledByPolicy(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMemoryConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasHardwareEncoder(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsGpuConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AlternateShortcutKeys(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsMicrophoneCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMicrophoneCaptureEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SystemAudioGain(double) noexcept = 0;
            virtual int32_t __stdcall get_SystemAudioGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_MicrophoneGain(double) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneGain(double*) noexcept = 0;
            virtual int32_t __stdcall put_VideoEncodingFrameRateMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoEncodingFrameRateMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureSettings5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsEchoCancellationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEchoCancellationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCursorImageCaptureEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCursorImageCaptureEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTargetRunning(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHistoricalCaptureEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldCaptureMicrophone(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldCaptureMicrophone(bool) noexcept = 0;
            virtual int32_t __stdcall RestartMicrophoneCapture() noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MicrophoneCaptureError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_MicrophoneCaptureStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MicrophoneCaptureStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CaptureTargetClosed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CaptureTargetClosed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IAppCaptureStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAllowedAsync(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraCaptureUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PhotoSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoSettings(void**) noexcept = 0;
            virtual int32_t __stdcall CaptureFileAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxResolution(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxResolution(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CroppedSizeInPixels(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_CroppedSizeInPixels(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_CroppedAspectRatio(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_CroppedAspectRatio(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_AllowCropping(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCropping(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxResolution(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxResolution(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxDurationInSeconds(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxDurationInSeconds(float) noexcept = 0;
            virtual int32_t __stdcall get_AllowTrimming(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowTrimming(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Show(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ControlValues(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exposure(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensation(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoSpeed(void**) noexcept = 0;
            virtual int32_t __stdcall get_Focus(void**) noexcept = 0;
            virtual int32_t __stdcall get_SceneMode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Flashed(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlashPowerPercent(void**) noexcept = 0;
            virtual int32_t __stdcall get_WhiteBalance(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomFactor(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusState(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoDigitalGain(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsoAnalogGain(void**) noexcept = 0;
            virtual int32_t __stdcall get_SensorFrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_WhiteBalanceGain(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ICapturedPhoto>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetCapturePolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall EnableCapture() noexcept = 0;
            virtual int32_t __stdcall DisableCapture() noexcept = 0;
            virtual int32_t __stdcall get_TargetInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppBroadcastServices(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppCaptureServices(void**) noexcept = 0;
            virtual int32_t __stdcall add_CommandReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Command(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Origin(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_GameBarServicesCreated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameBarServicesCreated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GameBarServices(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TitleId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PauseAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ResumeAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PauseWithResultAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StopWithResultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CaptureAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_PhotoCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PhotoCaptured(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InitializeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall InitializeWithSettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToStorageFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToCustomSinkAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartRecordToCustomSinkIdAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StopRecordAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CapturePhotoToStorageFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CapturePhotoToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddEffectAsync(int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearEffectsAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetEncoderProperty(int32_t, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall GetEncoderProperty(int32_t, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall add_Failed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Failed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecordLimitationExceeded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecordLimitationExceeded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MediaCaptureSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioDeviceController(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceController(void**) noexcept = 0;
            virtual int32_t __stdcall SetPreviewMirroring(bool) noexcept = 0;
            virtual int32_t __stdcall GetPreviewMirroring(bool*) noexcept = 0;
            virtual int32_t __stdcall SetPreviewRotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetPreviewRotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetRecordRotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetRecordRotation(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PrepareLowLagRecordToStorageFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagRecordToStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagRecordToCustomSinkAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagRecordToCustomSinkIdAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagPhotoCaptureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PrepareLowLagPhotoSequenceCaptureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetEncodingPropertiesAsync(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PrepareVariablePhotoSequenceCaptureAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_FocusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FocusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PhotoConfirmationCaptured(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PhotoConfirmationCaptured(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAudioEffectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddVideoEffectAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall PauseRecordAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ResumeRecordAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_CameraStreamStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraStreamStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CameraStreamState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPreviewFrameAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPreviewFrameCopyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ThermalStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ThermalStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_ThermalStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PrepareAdvancedPhotoCaptureAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RemoveEffectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PauseRecordWithResultAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StopRecordWithResultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameSources(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithSubtypeAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrameReaderWithSubtypeAndSizeAsync(void*, void*, struct struct_Windows_Graphics_Imaging_BitmapSize, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CaptureDeviceExclusiveControlStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateMultiSourceFrameReaderAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapture7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRelativePanelWatcher(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Code(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AudioDeviceId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudioDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoDeviceId(void*) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall put_StreamingCaptureMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StreamingCaptureMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PhotoCaptureSource(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PhotoCaptureSource(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MediaCategory(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MediaCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioProcessing(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioProcessing(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AudioSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_AudioSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_VideoSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoProfile(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoProfile(void*) noexcept = 0;
            virtual int32_t __stdcall get_PreviewMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreviewMediaDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_RecordMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_RecordMediaDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_PhotoMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_PhotoMediaDescription(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceGroup(void*) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MemoryPreference(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MemoryPreference(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlwaysPlaySystemShutterSound(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysPlaySystemShutterSound(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceUriPasswordCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeviceUriPasswordCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeviceUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LastFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecordDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativePanel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_StreamingCaptureMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhotoCaptureSource(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceCharacteristic(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConcurrentRecordAndPhotoSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CameraSoundRequiredForRegion(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Horizontal35mmEquivalentFocalLength(void**) noexcept = 0;
            virtual int32_t __stdcall get_PitchOffsetDegrees(void**) noexcept = 0;
            virtual int32_t __stdcall get_Vertical35mmEquivalentFocalLength(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioProcessing(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direct3D11Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsVideoProfileSupported(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall FindAllVideoProfiles(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindConcurrentProfiles(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindKnownVideoProfiles(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LastFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecordDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartPreviewAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartPreviewToCustomSinkAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartPreviewToCustomSinkIdAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StopPreviewAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPreviewMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedRecordMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPhotoMediaDescription(void**) noexcept = 0;
            virtual int32_t __stdcall GetConcurrency(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSourceInfos(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameRate(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsVariablePhotoSequenceSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHdrVideoSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subtype(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall get_CaptureTimeOffset(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
            virtual int32_t __stdcall get_CaptureTimeOffset(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::MediaCaptureFailedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Capture::RecordLimitationExceededEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Frame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::AdvancedPhotoMode) Mode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Context() const;
    };
    template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Rect>) FrameBoundsRelativeToReferencePhoto() const;
    };
    template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAdvancedPhotoCapture
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>) CaptureAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>) CaptureAsync(Windows::Foundation::IInspectable const& context) const;
        WINRT_IMPL_AUTO(winrt::event_token) OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
        using OptionalReferencePhotoCaptured_revoker = impl::event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture, &impl::abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_OptionalReferencePhotoCaptured>;
        [[nodiscard]] OptionalReferencePhotoCaptured_revoker OptionalReferencePhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) OptionalReferencePhotoCaptured(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
        using AllPhotosCaptured_revoker = impl::event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture, &impl::abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_AllPhotosCaptured>;
        [[nodiscard]] AllPhotosCaptured_revoker AllPhotosCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AllPhotosCaptured(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) FinishAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::IAdvancedPhotoCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundService
    {
        WINRT_IMPL_AUTO(void) PlugInState(Windows::Media::Capture::AppBroadcastPlugInState const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPlugInState) PlugInState() const;
        WINRT_IMPL_AUTO(void) SignInInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo) SignInInfo() const;
        WINRT_IMPL_AUTO(void) StreamInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo) StreamInfo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BroadcastTitle() const;
        WINRT_IMPL_AUTO(void) ViewerCount(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ViewerCount() const;
        WINRT_IMPL_AUTO(void) TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason const& reason, uint32_t providerSpecificReason) const;
        WINRT_IMPL_AUTO(winrt::event_token) HeartbeatRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const;
        using HeartbeatRequested_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService>::remove_HeartbeatRequested>;
        [[nodiscard]] HeartbeatRequested_revoker HeartbeatRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) HeartbeatRequested(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TitleId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundService>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundService2
    {
        WINRT_IMPL_AUTO(void) BroadcastTitle(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BroadcastLanguage() const;
        WINRT_IMPL_AUTO(void) BroadcastLanguage(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BroadcastChannel() const;
        WINRT_IMPL_AUTO(void) BroadcastChannel(param::hstring const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) BroadcastTitleChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        using BroadcastTitleChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastTitleChanged>;
        [[nodiscard]] BroadcastTitleChanged_revoker BroadcastTitleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) BroadcastTitleChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BroadcastLanguageChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        using BroadcastLanguageChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastLanguageChanged>;
        [[nodiscard]] BroadcastLanguageChanged_revoker BroadcastLanguageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) BroadcastLanguageChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BroadcastChannelChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        using BroadcastChannelChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastChannelChanged>;
        [[nodiscard]] BroadcastChannelChanged_revoker BroadcastChannelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) BroadcastChannelChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundService2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastSignInState) SignInState() const;
        WINRT_IMPL_AUTO(void) OAuthRequestUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) OAuthRequestUri() const;
        WINRT_IMPL_AUTO(void) OAuthCallbackUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) OAuthCallbackUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Authentication::Web::WebAuthenticationResult) AuthenticationResult() const;
        WINRT_IMPL_AUTO(void) UserName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserName() const;
        WINRT_IMPL_AUTO(winrt::event_token) SignInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const;
        using SignInStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>::remove_SignInStateChanged>;
        [[nodiscard]] SignInStateChanged_revoker SignInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SignInStateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2
    {
        WINRT_IMPL_AUTO(winrt::event_token) UserNameChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const& handler) const;
        using UserNameChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>::remove_UserNameChanged>;
        [[nodiscard]] UserNameChanged_revoker UserNameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) UserNameChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamState) StreamState() const;
        WINRT_IMPL_AUTO(void) DesiredVideoEncodingBitrate(uint64_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) DesiredVideoEncodingBitrate() const;
        WINRT_IMPL_AUTO(void) BandwidthTestBitrate(uint64_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) BandwidthTestBitrate() const;
        WINRT_IMPL_AUTO(void) AudioCodec(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioCodec() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamReader) BroadcastStreamReader() const;
        WINRT_IMPL_AUTO(winrt::event_token) StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        using StreamStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_StreamStateChanged>;
        [[nodiscard]] StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StreamStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoEncodingResolutionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        using VideoEncodingResolutionChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_VideoEncodingResolutionChanged>;
        [[nodiscard]] VideoEncodingResolutionChanged_revoker VideoEncodingResolutionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VideoEncodingResolutionChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoEncodingBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        using VideoEncodingBitrateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo, &impl::abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_VideoEncodingBitrateChanged>;
        [[nodiscard]] VideoEncodingBitrateChanged_revoker VideoEncodingBitrateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VideoEncodingBitrateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo2
    {
        WINRT_IMPL_AUTO(void) ReportProblemWithStream() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastCameraCaptureState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastGlobalSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBroadcastEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDisabledByPolicy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGpuConstrained() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasHardwareEncoder() const;
        WINRT_IMPL_AUTO(void) IsAudioCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAudioCaptureEnabled() const;
        WINRT_IMPL_AUTO(void) IsMicrophoneCaptureEnabledByDefault(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMicrophoneCaptureEnabledByDefault() const;
        WINRT_IMPL_AUTO(void) IsEchoCancellationEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEchoCancellationEnabled() const;
        WINRT_IMPL_AUTO(void) SystemAudioGain(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SystemAudioGain() const;
        WINRT_IMPL_AUTO(void) MicrophoneGain(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MicrophoneGain() const;
        WINRT_IMPL_AUTO(void) IsCameraCaptureEnabledByDefault(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCameraCaptureEnabledByDefault() const;
        WINRT_IMPL_AUTO(void) SelectedCameraId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SelectedCameraId() const;
        WINRT_IMPL_AUTO(void) CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastCameraOverlayLocation) CameraOverlayLocation() const;
        WINRT_IMPL_AUTO(void) CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastCameraOverlaySize) CameraOverlaySize() const;
        WINRT_IMPL_AUTO(void) IsCursorImageCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCursorImageCaptureEnabled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastGlobalSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs
    {
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastGlobalSettings) GetGlobalSettings() const;
        WINRT_IMPL_AUTO(void) ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value) const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastProviderSettings) GetProviderSettings() const;
        WINRT_IMPL_AUTO(void) ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastMicrophoneCaptureState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugIn
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastProviderSettings) ProviderSettings() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Logo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugIn>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugInManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBroadcastProviderAvailable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn>) PlugInList() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPlugIn) DefaultPlugIn() const;
        WINRT_IMPL_AUTO(void) DefaultPlugIn(Windows::Media::Capture::AppBroadcastPlugIn const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInManager>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPlugInManager) GetDefault() const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPlugInManager) GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPlugInState) PlugInState() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreview
    {
        WINRT_IMPL_AUTO(void) StopPreview() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPreviewState) PreviewState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) ErrorCode() const;
        WINRT_IMPL_AUTO(winrt::event_token) PreviewStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const;
        using PreviewStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastPreview, &impl::abi_t<Windows::Media::Capture::IAppBroadcastPreview>::remove_PreviewStateChanged>;
        [[nodiscard]] PreviewStateChanged_revoker PreviewStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) PreviewStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPreviewStreamReader) PreviewStreamReader() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreview>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreview<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPreviewState) PreviewState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VideoWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VideoHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VideoStride() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapPixelFormat) VideoBitmapPixelFormat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapAlphaMode) VideoBitmapAlphaMode() const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame) TryGetNextVideoFrame() const;
        WINRT_IMPL_AUTO(winrt::event_token) VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const;
        using VideoFrameArrived_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastPreviewStreamReader, &impl::abi_t<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>::remove_VideoFrameArrived>;
        [[nodiscard]] VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) VideoFrameArrived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader) VideoHeader() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) VideoBuffer() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) AbsoluteTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RelativeTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) FrameId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastProviderSettings
    {
        WINRT_IMPL_AUTO(void) DefaultBroadcastTitle(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DefaultBroadcastTitle() const;
        WINRT_IMPL_AUTO(void) AudioEncodingBitrate(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AudioEncodingBitrate() const;
        WINRT_IMPL_AUTO(void) CustomVideoEncodingBitrate(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CustomVideoEncodingBitrate() const;
        WINRT_IMPL_AUTO(void) CustomVideoEncodingHeight(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CustomVideoEncodingHeight() const;
        WINRT_IMPL_AUTO(void) CustomVideoEncodingWidth(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CustomVideoEncodingWidth() const;
        WINRT_IMPL_AUTO(void) VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode) VideoEncodingBitrateMode() const;
        WINRT_IMPL_AUTO(void) VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode) VideoEncodingResolutionMode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastProviderSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastServices
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastCaptureTargetType) CaptureTargetType() const;
        WINRT_IMPL_AUTO(void) CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BroadcastTitle() const;
        WINRT_IMPL_AUTO(void) BroadcastTitle(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BroadcastLanguage() const;
        WINRT_IMPL_AUTO(void) BroadcastLanguage(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanCapture() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<uint32_t>) EnterBroadcastModeAsync(Windows::Media::Capture::AppBroadcastPlugIn const& plugIn) const;
        WINRT_IMPL_AUTO(void) ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason const& reason) const;
        WINRT_IMPL_AUTO(void) StartBroadcast() const;
        WINRT_IMPL_AUTO(void) PauseBroadcast() const;
        WINRT_IMPL_AUTO(void) ResumeBroadcast() const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPreview) StartPreview(Windows::Foundation::Size const& desiredSize) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastState) State() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastServices>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastServices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastSignInState) SignInState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastSignInResult) Result() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastState
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCaptureTargetRunning() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ViewerCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldCaptureMicrophone() const;
        WINRT_IMPL_AUTO(void) ShouldCaptureMicrophone(bool value) const;
        WINRT_IMPL_AUTO(void) RestartMicrophoneCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldCaptureCamera() const;
        WINRT_IMPL_AUTO(void) ShouldCaptureCamera(bool value) const;
        WINRT_IMPL_AUTO(void) RestartCameraCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) EncodedVideoSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastMicrophoneCaptureState) MicrophoneCaptureState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MicrophoneCaptureError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastCameraCaptureState) CameraCaptureState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CameraCaptureError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamState) StreamState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastPlugInState) PlugInState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) OAuthRequestUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) OAuthCallbackUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Authentication::Web::WebAuthenticationResult) AuthenticationResult() const;
        WINRT_IMPL_AUTO(void) AuthenticationResult(Windows::Security::Authentication::Web::WebAuthenticationResult const& value) const;
        WINRT_IMPL_AUTO(void) SignInState(Windows::Media::Capture::AppBroadcastSignInState const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastSignInState) SignInState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastTerminationReason) TerminationReason() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) TerminationReasonPlugInSpecific() const;
        WINRT_IMPL_AUTO(winrt::event_token) ViewerCountChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const;
        using ViewerCountChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_ViewerCountChanged>;
        [[nodiscard]] ViewerCountChanged_revoker ViewerCountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) ViewerCountChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const;
        using MicrophoneCaptureStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_MicrophoneCaptureStateChanged>;
        [[nodiscard]] MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MicrophoneCaptureStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CameraCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const;
        using CameraCaptureStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_CameraCaptureStateChanged>;
        [[nodiscard]] CameraCaptureStateChanged_revoker CameraCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) CameraCaptureStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlugInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const;
        using PlugInStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_PlugInStateChanged>;
        [[nodiscard]] PlugInStateChanged_revoker PlugInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PlugInStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        using StreamStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_StreamStateChanged>;
        [[nodiscard]] StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StreamStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const;
        using CaptureTargetClosed_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastState, &impl::abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_CaptureTargetClosed>;
        [[nodiscard]] CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) CaptureTargetClosed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastState>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastState<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamAudioHeader) AudioHeader() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) AudioBuffer() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) AbsoluteTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RelativeTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasDiscontinuity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) FrameId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamReader
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AudioChannels() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AudioSampleRate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) AudioAacSequence() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AudioBitrate() const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamAudioFrame) TryGetNextAudioFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VideoWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VideoHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VideoBitrate() const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamVideoFrame) TryGetNextVideoFrame() const;
        WINRT_IMPL_AUTO(winrt::event_token) AudioFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        using AudioFrameArrived_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader, &impl::abi_t<Windows::Media::Capture::IAppBroadcastStreamReader>::remove_AudioFrameArrived>;
        [[nodiscard]] AudioFrameArrived_revoker AudioFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) AudioFrameArrived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        using VideoFrameArrived_revoker = impl::event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader, &impl::abi_t<Windows::Media::Capture::IAppBroadcastStreamReader>::remove_VideoFrameArrived>;
        [[nodiscard]] VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) VideoFrameArrived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamReader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamState) StreamState() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastStreamVideoHeader) VideoHeader() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) VideoBuffer() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) AbsoluteTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RelativeTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsKeyFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasDiscontinuity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) FrameId() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastBackgroundService) BackgroundService() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ViewerCount() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCapture
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCapturingAudio() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCapturingVideo() const;
        WINRT_IMPL_AUTO(winrt::event_token) CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
        using CapturingChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCapture, &impl::abi_t<Windows::Media::Capture::IAppCapture>::remove_CapturingChanged>;
        [[nodiscard]] CapturingChanged_revoker CapturingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CapturingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys
    {
        WINRT_IMPL_AUTO(void) ToggleGameBarKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) ToggleGameBarKey() const;
        WINRT_IMPL_AUTO(void) ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) ToggleGameBarKeyModifiers() const;
        WINRT_IMPL_AUTO(void) SaveHistoricalVideoKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) SaveHistoricalVideoKey() const;
        WINRT_IMPL_AUTO(void) SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) SaveHistoricalVideoKeyModifiers() const;
        WINRT_IMPL_AUTO(void) ToggleRecordingKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) ToggleRecordingKey() const;
        WINRT_IMPL_AUTO(void) ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) ToggleRecordingKeyModifiers() const;
        WINRT_IMPL_AUTO(void) TakeScreenshotKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) TakeScreenshotKey() const;
        WINRT_IMPL_AUTO(void) TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) TakeScreenshotKeyModifiers() const;
        WINRT_IMPL_AUTO(void) ToggleRecordingIndicatorKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) ToggleRecordingIndicatorKey() const;
        WINRT_IMPL_AUTO(void) ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) ToggleRecordingIndicatorKeyModifiers() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2
    {
        WINRT_IMPL_AUTO(void) ToggleMicrophoneCaptureKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) ToggleMicrophoneCaptureKey() const;
        WINRT_IMPL_AUTO(void) ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) ToggleMicrophoneCaptureKeyModifiers() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3
    {
        WINRT_IMPL_AUTO(void) ToggleCameraCaptureKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) ToggleCameraCaptureKey() const;
        WINRT_IMPL_AUTO(void) ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) ToggleCameraCaptureKeyModifiers() const;
        WINRT_IMPL_AUTO(void) ToggleBroadcastKey(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) ToggleBroadcastKey() const;
        WINRT_IMPL_AUTO(void) ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) ToggleBroadcastKeyModifiers() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFile) File() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureSettings) GetCurrentSettings() const;
        WINRT_IMPL_AUTO(void) ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureMetadataWriter
    {
        WINRT_IMPL_AUTO(void) AddStringEvent(param::hstring const& name, param::hstring const& value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        WINRT_IMPL_AUTO(void) AddInt32Event(param::hstring const& name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        WINRT_IMPL_AUTO(void) AddDoubleEvent(param::hstring const& name, double value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        WINRT_IMPL_AUTO(void) StartStringState(param::hstring const& name, param::hstring const& value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        WINRT_IMPL_AUTO(void) StartInt32State(param::hstring const& name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        WINRT_IMPL_AUTO(void) StartDoubleState(param::hstring const& name, double value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const;
        WINRT_IMPL_AUTO(void) StopState(param::hstring const& name) const;
        WINRT_IMPL_AUTO(void) StopAllStates() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) RemainingStorageBytesAvailable() const;
        WINRT_IMPL_AUTO(winrt::event_token) MetadataPurged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const& handler) const;
        using MetadataPurged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureMetadataWriter, &impl::abi_t<Windows::Media::Capture::IAppCaptureMetadataWriter>::remove_MetadataPurged>;
        [[nodiscard]] MetadataPurged_revoker MetadataPurged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) MetadataPurged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureMetadataWriter>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureMicrophoneCaptureState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureRecordOperation
    {
        WINRT_IMPL_AUTO(void) StopRecording() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureRecordingState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) ErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFile) File() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<bool>) IsFileTruncated() const;
        WINRT_IMPL_AUTO(winrt::event_token) StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation, &impl::abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) StateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DurationGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const;
        using DurationGenerated_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation, &impl::abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_DurationGenerated>;
        [[nodiscard]] DurationGenerated_revoker DurationGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) DurationGenerated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) FileGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const;
        using FileGenerated_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation, &impl::abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_FileGenerated>;
        [[nodiscard]] FileGenerated_revoker FileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) FileGenerated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureRecordOperation>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureRecordingState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ErrorCode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureServices
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureRecordOperation) Record() const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureRecordOperation) RecordTimeSpan(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureState) State() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureServices>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureServices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings
    {
        WINRT_IMPL_AUTO(void) AppCaptureDestinationFolder(Windows::Storage::StorageFolder const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) AppCaptureDestinationFolder() const;
        WINRT_IMPL_AUTO(void) AudioEncodingBitrate(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AudioEncodingBitrate() const;
        WINRT_IMPL_AUTO(void) IsAudioCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAudioCaptureEnabled() const;
        WINRT_IMPL_AUTO(void) CustomVideoEncodingBitrate(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CustomVideoEncodingBitrate() const;
        WINRT_IMPL_AUTO(void) CustomVideoEncodingHeight(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CustomVideoEncodingHeight() const;
        WINRT_IMPL_AUTO(void) CustomVideoEncodingWidth(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CustomVideoEncodingWidth() const;
        WINRT_IMPL_AUTO(void) HistoricalBufferLength(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) HistoricalBufferLength() const;
        WINRT_IMPL_AUTO(void) HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit) HistoricalBufferLengthUnit() const;
        WINRT_IMPL_AUTO(void) IsHistoricalCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHistoricalCaptureEnabled() const;
        WINRT_IMPL_AUTO(void) IsHistoricalCaptureOnBatteryAllowed(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHistoricalCaptureOnBatteryAllowed() const;
        WINRT_IMPL_AUTO(void) IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHistoricalCaptureOnWirelessDisplayAllowed() const;
        WINRT_IMPL_AUTO(void) MaximumRecordLength(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MaximumRecordLength() const;
        WINRT_IMPL_AUTO(void) ScreenshotDestinationFolder(Windows::Storage::StorageFolder const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) ScreenshotDestinationFolder() const;
        WINRT_IMPL_AUTO(void) VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode) VideoEncodingBitrateMode() const;
        WINRT_IMPL_AUTO(void) VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode) VideoEncodingResolutionMode() const;
        WINRT_IMPL_AUTO(void) IsAppCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAppCaptureEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCpuConstrained() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDisabledByPolicy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMemoryConstrained() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasHardwareEncoder() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGpuConstrained() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureAlternateShortcutKeys) AlternateShortcutKeys() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings3
    {
        WINRT_IMPL_AUTO(void) IsMicrophoneCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMicrophoneCaptureEnabled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings4
    {
        WINRT_IMPL_AUTO(void) IsMicrophoneCaptureEnabledByDefault(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMicrophoneCaptureEnabledByDefault() const;
        WINRT_IMPL_AUTO(void) SystemAudioGain(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SystemAudioGain() const;
        WINRT_IMPL_AUTO(void) MicrophoneGain(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MicrophoneGain() const;
        WINRT_IMPL_AUTO(void) VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode) VideoEncodingFrameRateMode() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureSettings5
    {
        WINRT_IMPL_AUTO(void) IsEchoCancellationEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEchoCancellationEnabled() const;
        WINRT_IMPL_AUTO(void) IsCursorImageCaptureEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCursorImageCaptureEnabled() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureSettings5>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureState
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTargetRunning() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHistoricalCaptureEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldCaptureMicrophone() const;
        WINRT_IMPL_AUTO(void) ShouldCaptureMicrophone(bool value) const;
        WINRT_IMPL_AUTO(void) RestartMicrophoneCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureMicrophoneCaptureState) MicrophoneCaptureState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MicrophoneCaptureError() const;
        WINRT_IMPL_AUTO(winrt::event_token) MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const;
        using MicrophoneCaptureStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureState, &impl::abi_t<Windows::Media::Capture::IAppCaptureState>::remove_MicrophoneCaptureStateChanged>;
        [[nodiscard]] MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MicrophoneCaptureStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const;
        using CaptureTargetClosed_revoker = impl::event_revoker<Windows::Media::Capture::IAppCaptureState, &impl::abi_t<Windows::Media::Capture::IAppCaptureState>::remove_CaptureTargetClosed>;
        [[nodiscard]] CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) CaptureTargetClosed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureState>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureState<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::AppCapture) GetForCurrentView() const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IAppCaptureStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetAllowedAsync(bool allowed) const;
    };
    template <> struct consume<Windows::Media::Capture::IAppCaptureStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraCaptureUI
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings) PhotoSettings() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings) VideoSettings() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode const& mode) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraCaptureUI>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUI<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CameraCaptureUIPhotoFormat) Format() const;
        WINRT_IMPL_AUTO(void) Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution) MaxResolution() const;
        WINRT_IMPL_AUTO(void) MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) CroppedSizeInPixels() const;
        WINRT_IMPL_AUTO(void) CroppedSizeInPixels(Windows::Foundation::Size const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) CroppedAspectRatio() const;
        WINRT_IMPL_AUTO(void) CroppedAspectRatio(Windows::Foundation::Size const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowCropping() const;
        WINRT_IMPL_AUTO(void) AllowCropping(bool value) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CameraCaptureUIVideoFormat) Format() const;
        WINRT_IMPL_AUTO(void) Format(Windows::Media::Capture::CameraCaptureUIVideoFormat const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution) MaxResolution() const;
        WINRT_IMPL_AUTO(void) MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MaxDurationInSeconds() const;
        WINRT_IMPL_AUTO(void) MaxDurationInSeconds(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowTrimming() const;
        WINRT_IMPL_AUTO(void) AllowTrimming(bool value) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICameraOptionsUIStatics
    {
        WINRT_IMPL_AUTO(void) Show(Windows::Media::Capture::MediaCapture const& mediaCapture) const;
    };
    template <> struct consume<Windows::Media::Capture::ICameraOptionsUIStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICameraOptionsUIStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Height() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrame2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrameControlValues) ControlValues() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapPropertySet) BitmapProperties() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrame2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrameControlValues
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Exposure() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<float>) ExposureCompensation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) IsoSpeed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) Focus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode>) SceneMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<bool>) Flashed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<float>) FlashPowerPercent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) WhiteBalance() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<float>) ZoomFactor() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrameControlValues2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState>) FocusState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) IsoDigitalGain() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) IsoAnalogGain() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::MediaRatio) SensorFrameRate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain>) WhiteBalanceGain() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::SoftwareBitmap) SoftwareBitmap() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ICapturedPhoto
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Frame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Thumbnail() const;
    };
    template <> struct consume<Windows::Media::Capture::ICapturedPhoto>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ICapturedPhoto<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServices
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarTargetCapturePolicy) TargetCapturePolicy() const;
        WINRT_IMPL_AUTO(void) EnableCapture() const;
        WINRT_IMPL_AUTO(void) DisableCapture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarServicesTargetInfo) TargetInfo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SessionId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppBroadcastServices) AppBroadcastServices() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::AppCaptureServices) AppCaptureServices() const;
        WINRT_IMPL_AUTO(winrt::event_token) CommandReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const;
        using CommandReceived_revoker = impl::event_revoker<Windows::Media::Capture::IGameBarServices, &impl::abi_t<Windows::Media::Capture::IGameBarServices>::remove_CommandReceived>;
        [[nodiscard]] CommandReceived_revoker CommandReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) CommandReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServices>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServices<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarCommand) Command() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarCommandOrigin) Origin() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) GameBarServicesCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const;
        using GameBarServicesCreated_revoker = impl::event_revoker<Windows::Media::Capture::IGameBarServicesManager, &impl::abi_t<Windows::Media::Capture::IGameBarServicesManager>::remove_GameBarServicesCreated>;
        [[nodiscard]] GameBarServicesCreated_revoker GameBarServicesCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) GameBarServicesCreated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesManager>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarServices) GameBarServices() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarServicesManager) GetDefault() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IGameBarServicesTargetInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TitleId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::GameBarServicesDisplayMode) DisplayMode() const;
    };
    template <> struct consume<Windows::Media::Capture::IGameBarServicesTargetInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagMediaRecording
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StopAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) FinishAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagMediaRecording2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ResumeAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagMediaRecording3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>) PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>) StopWithResultAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagPhotoCapture
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto>) CaptureAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) FinishAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagPhotoCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StopAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) FinishAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
        using PhotoCaptured_revoker = impl::event_revoker<Windows::Media::Capture::ILowLagPhotoSequenceCapture, &impl::abi_t<Windows::Media::Capture::ILowLagPhotoSequenceCapture>::remove_PhotoCaptured>;
        [[nodiscard]] PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PhotoCaptured(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) InitializeAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) InitializeAsync(Windows::Media::Capture::MediaCaptureInitializationSettings const& mediaCaptureInitializationSettings) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StopRecordAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) CapturePhotoToStreamAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) AddEffectAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, param::hstring const& effectActivationID, Windows::Foundation::Collections::IPropertySet const& effectSettings) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ClearEffectsAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
        WINRT_IMPL_AUTO(void) SetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, winrt::guid const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, winrt::guid const& propertyId) const;
        WINRT_IMPL_AUTO(winrt::event_token) Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
        using Failed_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture, &impl::abi_t<Windows::Media::Capture::IMediaCapture>::remove_Failed>;
        [[nodiscard]] Failed_revoker Failed(auto_revoke_t, Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
        WINRT_IMPL_AUTO(void) Failed(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
        using RecordLimitationExceeded_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture, &impl::abi_t<Windows::Media::Capture::IMediaCapture>::remove_RecordLimitationExceeded>;
        [[nodiscard]] RecordLimitationExceeded_revoker RecordLimitationExceeded(auto_revoke_t, Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
        WINRT_IMPL_AUTO(void) RecordLimitationExceeded(winrt::event_token const& eventCookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureSettings) MediaCaptureSettings() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::AudioDeviceController) AudioDeviceController() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::VideoDeviceController) VideoDeviceController() const;
        WINRT_IMPL_AUTO(void) SetPreviewMirroring(bool value) const;
        WINRT_IMPL_AUTO(bool) GetPreviewMirroring() const;
        WINRT_IMPL_AUTO(void) SetPreviewRotation(Windows::Media::Capture::VideoRotation const& value) const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::VideoRotation) GetPreviewRotation() const;
        WINRT_IMPL_AUTO(void) SetRecordRotation(Windows::Media::Capture::VideoRotation const& value) const;
        WINRT_IMPL_AUTO(Windows::Media::Capture::VideoRotation) GetRecordRotation() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>) PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>) PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>) PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>) PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture>) PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture>) PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties, Windows::Media::MediaProperties::MediaPropertySet const& encoderProperties) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>) PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
        WINRT_IMPL_AUTO(winrt::event_token) FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
        using FocusChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture3, &impl::abi_t<Windows::Media::Capture::IMediaCapture3>::remove_FocusChanged>;
        [[nodiscard]] FocusChanged_revoker FocusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FocusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
        using PhotoConfirmationCaptured_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture3, &impl::abi_t<Windows::Media::Capture::IMediaCapture3>::remove_PhotoConfirmationCaptured>;
        [[nodiscard]] PhotoConfirmationCaptured_revoker PhotoConfirmationCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PhotoConfirmationCaptured(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture4
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>) AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition const& definition) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>) AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition const& definition, Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ResumeRecordAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        using CameraStreamStateChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture4, &impl::abi_t<Windows::Media::Capture::IMediaCapture4>::remove_CameraStreamStateChanged>;
        [[nodiscard]] CameraStreamStateChanged_revoker CameraStreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraStreamStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::CameraStreamState) CameraStreamState() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>) GetPreviewFrameAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>) GetPreviewFrameAsync(Windows::Media::VideoFrame const& destination) const;
        WINRT_IMPL_AUTO(winrt::event_token) ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        using ThermalStatusChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture4, &impl::abi_t<Windows::Media::Capture::IMediaCapture4>::remove_ThermalStatusChanged>;
        [[nodiscard]] ThermalStatusChanged_revoker ThermalStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ThermalStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureThermalStatus) ThermalStatus() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture>) PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture5
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RemoveEffectAsync(Windows::Media::IMediaExtension const& effect) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>) PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>) StopRecordWithResultAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource>) FrameSources() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>) CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>) CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>) CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype, Windows::Graphics::Imaging::BitmapSize const& outputSize) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture5>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture6
    {
        WINRT_IMPL_AUTO(winrt::event_token) CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
        using CaptureDeviceExclusiveControlStatusChanged_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCapture6, &impl::abi_t<Windows::Media::Capture::IMediaCapture6>::remove_CaptureDeviceExclusiveControlStatusChanged>;
        [[nodiscard]] CaptureDeviceExclusiveControlStatusChanged_revoker CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CaptureDeviceExclusiveControlStatusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>) CreateMultiSourceFrameReaderAsync(param::async_iterable<Windows::Media::Capture::Frames::MediaFrameSource> const& inputSources) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture6>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapture7
    {
        WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureRelativePanelWatcher) CreateRelativePanelWatcher(Windows::Media::Capture::StreamingCaptureMode const& captureMode, Windows::UI::WindowManagement::DisplayRegion const& displayRegion) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapture7>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus) Status() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Message() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Code() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::MediaCaptureFocusState) FocusState() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings
    {
        WINRT_IMPL_AUTO(void) AudioDeviceId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioDeviceId() const;
        WINRT_IMPL_AUTO(void) VideoDeviceId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoDeviceId() const;
        WINRT_IMPL_AUTO(void) StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::StreamingCaptureMode) StreamingCaptureMode() const;
        WINRT_IMPL_AUTO(void) PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::PhotoCaptureSource) PhotoCaptureSource() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2
    {
        WINRT_IMPL_AUTO(void) MediaCategory(Windows::Media::Capture::MediaCategory const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCategory) MediaCategory() const;
        WINRT_IMPL_AUTO(void) AudioProcessing(Windows::Media::AudioProcessing const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::AudioProcessing) AudioProcessing() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3
    {
        WINRT_IMPL_AUTO(void) AudioSource(Windows::Media::Core::IMediaSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::IMediaSource) AudioSource() const;
        WINRT_IMPL_AUTO(void) VideoSource(Windows::Media::Core::IMediaSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::IMediaSource) VideoSource() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureVideoProfile) VideoProfile() const;
        WINRT_IMPL_AUTO(void) VideoProfile(Windows::Media::Capture::MediaCaptureVideoProfile const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription) PreviewMediaDescription() const;
        WINRT_IMPL_AUTO(void) PreviewMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription) RecordMediaDescription() const;
        WINRT_IMPL_AUTO(void) RecordMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription) PhotoMediaDescription() const;
        WINRT_IMPL_AUTO(void) PhotoMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::Frames::MediaFrameSourceGroup) SourceGroup() const;
        WINRT_IMPL_AUTO(void) SourceGroup(Windows::Media::Capture::Frames::MediaFrameSourceGroup const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureSharingMode) SharingMode() const;
        WINRT_IMPL_AUTO(void) SharingMode(Windows::Media::Capture::MediaCaptureSharingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCaptureMemoryPreference) MemoryPreference() const;
        WINRT_IMPL_AUTO(void) MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AlwaysPlaySystemShutterSound() const;
        WINRT_IMPL_AUTO(void) AlwaysPlaySystemShutterSound(bool value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings7
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) DeviceUriPasswordCredential() const;
        WINRT_IMPL_AUTO(void) DeviceUriPasswordCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) DeviceUri() const;
        WINRT_IMPL_AUTO(void) DeviceUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings7>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCapturePauseResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) LastFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RecordDuration() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCapturePauseResult>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCapturePauseResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureRelativePanelWatcher
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::Panel) RelativePanel() const;
        WINRT_IMPL_AUTO(winrt::event_token) Changed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCaptureRelativePanelWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher, &impl::abi_t<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>::remove_Changed>;
        [[nodiscard]] Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCaptureRelativePanelWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Changed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureRelativePanelWatcher>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureRelativePanelWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::StreamingCaptureMode) StreamingCaptureMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::PhotoCaptureSource) PhotoCaptureSource() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::VideoDeviceCharacteristic) VideoDeviceCharacteristic() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureSettings2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ConcurrentRecordAndPhotoSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ConcurrentRecordAndPhotoSequenceSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CameraSoundRequiredForRegion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) Horizontal35mmEquivalentFocalLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PitchOffsetDegrees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) Vertical35mmEquivalentFocalLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::MediaCategory) MediaCategory() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::AudioProcessing) AudioProcessing() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureSettings3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice) Direct3D11Device() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureStatics
    {
        WINRT_IMPL_AUTO(bool) IsVideoProfileSupported(param::hstring const& videoDeviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>) FindAllVideoProfiles(param::hstring const& videoDeviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>) FindConcurrentProfiles(param::hstring const& videoDeviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>) FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name) const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureStopResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) LastFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RecordDuration() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureStopResult>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStopResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoPreview
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartPreviewAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) StopPreviewAsync() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoPreview>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfile
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>) SupportedPreviewMediaDescription() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>) SupportedRecordMediaDescription() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>) SupportedPhotoMediaDescription() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>) GetConcurrency() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfile>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfile2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo>) FrameSourceInfos() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<winrt::guid, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfile2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Height() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FrameRate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsVariablePhotoSequenceSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHdrVideoSupported() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subtype() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<winrt::guid, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Frame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Context() const;
    };
    template <> struct consume<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IPhotoCapturedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Frame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Thumbnail() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) CaptureTimeOffset() const;
    };
    template <> struct consume<Windows::Media::Capture::IPhotoCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrame) Frame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) CaptureTimeOffset() const;
    };
    template <> struct consume<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_IVideoStreamConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::VideoEncodingProperties) InputProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::VideoEncodingProperties) OutputProperties() const;
    };
    template <> struct consume<Windows::Media::Capture::IVideoStreamConfiguration>
    {
        template <typename D> using type = consume_Windows_Media_Capture_IVideoStreamConfiguration<D>;
    };
    struct struct_Windows_Media_Capture_WhiteBalanceGain
    {
        double R;
        double G;
        double B;
    };
    template <> struct abi<Windows::Media::Capture::WhiteBalanceGain>
    {
        using type = struct_Windows_Media_Capture_WhiteBalanceGain;
    };
}
#endif
