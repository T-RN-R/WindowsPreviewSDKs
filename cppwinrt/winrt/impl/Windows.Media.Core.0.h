// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Core_0_H
#define WINRT_Windows_Media_Core_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceConnection;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress;
    template <typename TResult> struct IAsyncOperation;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IMap;
    template <typename T> struct IObservableVector;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
    struct PropertySet;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapPixelFormat : int32_t;
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    struct CapturedFrameControlValues;
    struct VideoStreamConfiguration;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames
{
    struct MediaFrameSource;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices
{
    struct VideoDeviceController;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    struct FrameController;
}
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    struct IVideoEffectDefinition;
}
WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis
{
    struct DetectedFace;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct TimedMetadataEncodingProperties;
    struct VideoEncodingProperties;
}
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    struct MediaPlaybackItem;
}
WINRT_EXPORT namespace winrt::Windows::Media::Protection
{
    struct MediaProtectionManager;
}
WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive
{
    struct AdaptiveMediaSource;
}
WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer
{
    struct DownloadOperation;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    struct MusicProperties;
    struct VideoProperties;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct Buffer;
    struct IBuffer;
    struct IInputStream;
    struct IRandomAccessStream;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    enum class AudioDecoderDegradation : int32_t
    {
        None = 0,
        DownmixTo2Channels = 1,
        DownmixTo6Channels = 2,
        DownmixTo8Channels = 3,
    };
    enum class AudioDecoderDegradationReason : int32_t
    {
        None = 0,
        LicensingRequirement = 1,
        SpatialAudioNotSupported = 2,
    };
    enum class CodecCategory : int32_t
    {
        Encoder = 0,
        Decoder = 1,
    };
    enum class CodecKind : int32_t
    {
        Audio = 0,
        Video = 1,
    };
    enum class FaceDetectionMode : int32_t
    {
        HighPerformance = 0,
        Balanced = 1,
        HighQuality = 2,
    };
    enum class MediaDecoderStatus : int32_t
    {
        FullySupported = 0,
        UnsupportedSubtype = 1,
        UnsupportedEncoderProperties = 2,
        Degraded = 3,
    };
    enum class MediaSourceState : int32_t
    {
        Initial = 0,
        Opening = 1,
        Opened = 2,
        Failed = 3,
        Closed = 4,
    };
    enum class MediaSourceStatus : int32_t
    {
        FullySupported = 0,
        Unknown = 1,
    };
    enum class MediaStreamSourceClosedReason : int32_t
    {
        Done = 0,
        UnknownError = 1,
        AppReportedError = 2,
        UnsupportedProtectionSystem = 3,
        ProtectionSystemFailure = 4,
        UnsupportedEncodingFormat = 5,
        MissingSampleRequestedEventHandler = 6,
    };
    enum class MediaStreamSourceErrorStatus : int32_t
    {
        Other = 0,
        OutOfMemory = 1,
        FailedToOpenFile = 2,
        FailedToConnectToServer = 3,
        ConnectionToServerLost = 4,
        UnspecifiedNetworkError = 5,
        DecodeError = 6,
        UnsupportedMediaFormat = 7,
    };
    enum class MediaTrackKind : int32_t
    {
        Audio = 0,
        Video = 1,
        TimedMetadata = 2,
    };
    enum class MseAppendMode : int32_t
    {
        Segments = 0,
        Sequence = 1,
    };
    enum class MseEndOfStreamStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        DecodeError = 2,
        UnknownError = 3,
    };
    enum class MseReadyState : int32_t
    {
        Closed = 0,
        Open = 1,
        Ended = 2,
    };
    enum class SceneAnalysisRecommendation : int32_t
    {
        Standard = 0,
        Hdr = 1,
        LowLight = 2,
    };
    enum class TimedMetadataKind : int32_t
    {
        Caption = 0,
        Chapter = 1,
        Custom = 2,
        Data = 3,
        Description = 4,
        Subtitle = 5,
        ImageSubtitle = 6,
        Speech = 7,
    };
    enum class TimedMetadataTrackErrorCode : int32_t
    {
        None = 0,
        DataFormatError = 1,
        NetworkError = 2,
        InternalError = 3,
    };
    enum class TimedTextDisplayAlignment : int32_t
    {
        Before = 0,
        After = 1,
        Center = 2,
    };
    enum class TimedTextFlowDirection : int32_t
    {
        LeftToRight = 0,
        RightToLeft = 1,
    };
    enum class TimedTextFontStyle : int32_t
    {
        Normal = 0,
        Oblique = 1,
        Italic = 2,
    };
    enum class TimedTextLineAlignment : int32_t
    {
        Start = 0,
        End = 1,
        Center = 2,
    };
    enum class TimedTextScrollMode : int32_t
    {
        Popon = 0,
        Rollup = 1,
    };
    enum class TimedTextUnit : int32_t
    {
        Pixels = 0,
        Percentage = 1,
    };
    enum class TimedTextWeight : int32_t
    {
        Normal = 400,
        Bold = 700,
    };
    enum class TimedTextWrapping : int32_t
    {
        NoWrap = 0,
        Wrap = 1,
    };
    enum class TimedTextWritingMode : int32_t
    {
        LeftRightTopBottom = 0,
        RightLeftTopBottom = 1,
        TopBottomRightLeft = 2,
        TopBottomLeftRight = 3,
        LeftRight = 4,
        RightLeft = 5,
        TopBottom = 6,
    };
    enum class VideoStabilizationEffectEnabledChangedReason : int32_t
    {
        Programmatic = 0,
        PixelRateTooHigh = 1,
        RunningSlowly = 2,
    };
    struct IAudioStreamDescriptor;
    struct IAudioStreamDescriptor2;
    struct IAudioStreamDescriptor3;
    struct IAudioStreamDescriptorFactory;
    struct IAudioTrack;
    struct IAudioTrackOpenFailedEventArgs;
    struct IAudioTrackSupportInfo;
    struct IChapterCue;
    struct ICodecInfo;
    struct ICodecQuery;
    struct ICodecSubtypesStatics;
    struct IDataCue;
    struct IDataCue2;
    struct IFaceDetectedEventArgs;
    struct IFaceDetectionEffect;
    struct IFaceDetectionEffectDefinition;
    struct IFaceDetectionEffectFrame;
    struct IHighDynamicRangeControl;
    struct IHighDynamicRangeOutput;
    struct IImageCue;
    struct IInitializeMediaStreamSourceRequestedEventArgs;
    struct ILowLightFusionResult;
    struct ILowLightFusionStatics;
    struct IMediaBinder;
    struct IMediaBindingEventArgs;
    struct IMediaBindingEventArgs2;
    struct IMediaBindingEventArgs3;
    struct IMediaCue;
    struct IMediaCueEventArgs;
    struct IMediaSource;
    struct IMediaSource2;
    struct IMediaSource3;
    struct IMediaSource4;
    struct IMediaSource5;
    struct IMediaSourceAppServiceConnection;
    struct IMediaSourceAppServiceConnectionFactory;
    struct IMediaSourceError;
    struct IMediaSourceOpenOperationCompletedEventArgs;
    struct IMediaSourceStateChangedEventArgs;
    struct IMediaSourceStatics;
    struct IMediaSourceStatics2;
    struct IMediaSourceStatics3;
    struct IMediaSourceStatics4;
    struct IMediaStreamDescriptor;
    struct IMediaStreamDescriptor2;
    struct IMediaStreamSample;
    struct IMediaStreamSample2;
    struct IMediaStreamSampleProtectionProperties;
    struct IMediaStreamSampleStatics;
    struct IMediaStreamSampleStatics2;
    struct IMediaStreamSource;
    struct IMediaStreamSource2;
    struct IMediaStreamSource3;
    struct IMediaStreamSource4;
    struct IMediaStreamSourceClosedEventArgs;
    struct IMediaStreamSourceClosedRequest;
    struct IMediaStreamSourceFactory;
    struct IMediaStreamSourceSampleRenderedEventArgs;
    struct IMediaStreamSourceSampleRequest;
    struct IMediaStreamSourceSampleRequestDeferral;
    struct IMediaStreamSourceSampleRequestedEventArgs;
    struct IMediaStreamSourceStartingEventArgs;
    struct IMediaStreamSourceStartingRequest;
    struct IMediaStreamSourceStartingRequestDeferral;
    struct IMediaStreamSourceSwitchStreamsRequest;
    struct IMediaStreamSourceSwitchStreamsRequestDeferral;
    struct IMediaStreamSourceSwitchStreamsRequestedEventArgs;
    struct IMediaTrack;
    struct IMseSourceBuffer;
    struct IMseSourceBufferList;
    struct IMseStreamSource;
    struct IMseStreamSource2;
    struct IMseStreamSourceStatics;
    struct ISceneAnalysisEffect;
    struct ISceneAnalysisEffectFrame;
    struct ISceneAnalysisEffectFrame2;
    struct ISceneAnalyzedEventArgs;
    struct ISingleSelectMediaTrackList;
    struct ISpeechCue;
    struct ITimedMetadataStreamDescriptor;
    struct ITimedMetadataStreamDescriptorFactory;
    struct ITimedMetadataTrack;
    struct ITimedMetadataTrack2;
    struct ITimedMetadataTrackError;
    struct ITimedMetadataTrackFactory;
    struct ITimedMetadataTrackFailedEventArgs;
    struct ITimedMetadataTrackProvider;
    struct ITimedTextCue;
    struct ITimedTextLine;
    struct ITimedTextRegion;
    struct ITimedTextSource;
    struct ITimedTextSourceResolveResultEventArgs;
    struct ITimedTextSourceStatics;
    struct ITimedTextSourceStatics2;
    struct ITimedTextStyle;
    struct ITimedTextStyle2;
    struct ITimedTextSubformat;
    struct IVideoStabilizationEffect;
    struct IVideoStabilizationEffectEnabledChangedEventArgs;
    struct IVideoStreamDescriptor;
    struct IVideoStreamDescriptor2;
    struct IVideoStreamDescriptorFactory;
    struct IVideoTrack;
    struct IVideoTrackOpenFailedEventArgs;
    struct IVideoTrackSupportInfo;
    struct AudioStreamDescriptor;
    struct AudioTrack;
    struct AudioTrackOpenFailedEventArgs;
    struct AudioTrackSupportInfo;
    struct ChapterCue;
    struct CodecInfo;
    struct CodecQuery;
    struct CodecSubtypes;
    struct DataCue;
    struct FaceDetectedEventArgs;
    struct FaceDetectionEffect;
    struct FaceDetectionEffectDefinition;
    struct FaceDetectionEffectFrame;
    struct HighDynamicRangeControl;
    struct HighDynamicRangeOutput;
    struct ImageCue;
    struct InitializeMediaStreamSourceRequestedEventArgs;
    struct LowLightFusion;
    struct LowLightFusionResult;
    struct MediaBinder;
    struct MediaBindingEventArgs;
    struct MediaCueEventArgs;
    struct MediaSource;
    struct MediaSourceAppServiceConnection;
    struct MediaSourceError;
    struct MediaSourceOpenOperationCompletedEventArgs;
    struct MediaSourceStateChangedEventArgs;
    struct MediaStreamSample;
    struct MediaStreamSamplePropertySet;
    struct MediaStreamSampleProtectionProperties;
    struct MediaStreamSource;
    struct MediaStreamSourceClosedEventArgs;
    struct MediaStreamSourceClosedRequest;
    struct MediaStreamSourceSampleRenderedEventArgs;
    struct MediaStreamSourceSampleRequest;
    struct MediaStreamSourceSampleRequestDeferral;
    struct MediaStreamSourceSampleRequestedEventArgs;
    struct MediaStreamSourceStartingEventArgs;
    struct MediaStreamSourceStartingRequest;
    struct MediaStreamSourceStartingRequestDeferral;
    struct MediaStreamSourceSwitchStreamsRequest;
    struct MediaStreamSourceSwitchStreamsRequestDeferral;
    struct MediaStreamSourceSwitchStreamsRequestedEventArgs;
    struct MseSourceBuffer;
    struct MseSourceBufferList;
    struct MseStreamSource;
    struct SceneAnalysisEffect;
    struct SceneAnalysisEffectDefinition;
    struct SceneAnalysisEffectFrame;
    struct SceneAnalyzedEventArgs;
    struct SpeechCue;
    struct TimedMetadataStreamDescriptor;
    struct TimedMetadataTrack;
    struct TimedMetadataTrackError;
    struct TimedMetadataTrackFailedEventArgs;
    struct TimedTextCue;
    struct TimedTextLine;
    struct TimedTextRegion;
    struct TimedTextSource;
    struct TimedTextSourceResolveResultEventArgs;
    struct TimedTextStyle;
    struct TimedTextSubformat;
    struct VideoStabilizationEffect;
    struct VideoStabilizationEffectDefinition;
    struct VideoStabilizationEffectEnabledChangedEventArgs;
    struct VideoStreamDescriptor;
    struct VideoTrack;
    struct VideoTrackOpenFailedEventArgs;
    struct VideoTrackSupportInfo;
    struct MseTimeRange;
    struct TimedTextDouble;
    struct TimedTextPadding;
    struct TimedTextPoint;
    struct TimedTextSize;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Core::IAudioStreamDescriptor>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IAudioStreamDescriptor2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IAudioStreamDescriptor3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IAudioStreamDescriptorFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IAudioTrack>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IAudioTrackSupportInfo>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IChapterCue>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ICodecInfo>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ICodecQuery>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ICodecSubtypesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IDataCue>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IDataCue2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IFaceDetectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IFaceDetectionEffect>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IFaceDetectionEffectDefinition>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IFaceDetectionEffectFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IHighDynamicRangeControl>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IHighDynamicRangeOutput>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IImageCue>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ILowLightFusionResult>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ILowLightFusionStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaBinder>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaBindingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaBindingEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaBindingEventArgs3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaCue>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaCueEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSource>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSource2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSource3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSource4>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSource5>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceAppServiceConnection>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceError>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceStatics3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaSourceStatics4>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamDescriptor>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamDescriptor2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSample>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSample2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSampleStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSampleStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSource>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSource2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSource3>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSource4>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceClosedRequest>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRequest>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceStartingRequest>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMediaTrack>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMseSourceBuffer>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMseSourceBufferList>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMseStreamSource>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMseStreamSource2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IMseStreamSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ISceneAnalysisEffect>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ISceneAnalysisEffectFrame>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ISceneAnalysisEffectFrame2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ISceneAnalyzedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ISingleSelectMediaTrackList>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ISpeechCue>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataStreamDescriptor>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataTrack>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataTrack2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataTrackError>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataTrackFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedMetadataTrackProvider>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextCue>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextLine>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextRegion>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextSource>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextSourceStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextStyle>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextStyle2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::ITimedTextSubformat>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoStabilizationEffect>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoStreamDescriptor>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoStreamDescriptor2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoStreamDescriptorFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoTrack>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::IVideoTrackSupportInfo>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::AudioStreamDescriptor>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::AudioTrack>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::AudioTrackSupportInfo>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::ChapterCue>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::CodecInfo>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::CodecQuery>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::CodecSubtypes>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::DataCue>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::FaceDetectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::FaceDetectionEffect>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::FaceDetectionEffectDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::FaceDetectionEffectFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::HighDynamicRangeControl>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::HighDynamicRangeOutput>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::ImageCue>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::LowLightFusion>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::LowLightFusionResult>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaBinder>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaBindingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaCueEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaSource>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaSourceAppServiceConnection>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaSourceError>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaSourceStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSample>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSamplePropertySet>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSampleProtectionProperties>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSource>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceClosedRequest>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRequest>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceStartingRequest>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MseSourceBuffer>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MseSourceBufferList>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::MseStreamSource>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::SceneAnalysisEffect>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::SceneAnalysisEffectDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::SceneAnalysisEffectFrame>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::SceneAnalyzedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::SpeechCue>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedMetadataStreamDescriptor>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedMetadataTrack>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedMetadataTrackError>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextCue>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextLine>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextRegion>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextSource>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextStyle>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::TimedTextSubformat>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoStabilizationEffect>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoStabilizationEffectDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoStreamDescriptor>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoTrack>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::VideoTrackSupportInfo>{ using type = class_category; };
    template <> struct category<Windows::Media::Core::AudioDecoderDegradation>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::AudioDecoderDegradationReason>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::CodecCategory>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::CodecKind>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::FaceDetectionMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MediaDecoderStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MediaSourceState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MediaSourceStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceClosedReason>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MediaStreamSourceErrorStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MediaTrackKind>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MseAppendMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MseEndOfStreamStatus>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MseReadyState>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::SceneAnalysisRecommendation>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedMetadataKind>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedMetadataTrackErrorCode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextDisplayAlignment>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextFlowDirection>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextFontStyle>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextLineAlignment>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextScrollMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextUnit>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextWeight>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextWrapping>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::TimedTextWritingMode>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason>{ using type = enum_category; };
    template <> struct category<Windows::Media::Core::MseTimeRange>{ using type = struct_category<Windows::Foundation::TimeSpan, Windows::Foundation::TimeSpan>; };
    template <> struct category<Windows::Media::Core::TimedTextDouble>{ using type = struct_category<double, Windows::Media::Core::TimedTextUnit>; };
    template <> struct category<Windows::Media::Core::TimedTextPadding>{ using type = struct_category<double, double, double, double, Windows::Media::Core::TimedTextUnit>; };
    template <> struct category<Windows::Media::Core::TimedTextPoint>{ using type = struct_category<double, double, Windows::Media::Core::TimedTextUnit>; };
    template <> struct category<Windows::Media::Core::TimedTextSize>{ using type = struct_category<double, double, Windows::Media::Core::TimedTextUnit>; };
    template <> inline constexpr auto& name_v<Windows::Media::Core::AudioStreamDescriptor> = L"Windows.Media.Core.AudioStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::AudioTrack> = L"Windows.Media.Core.AudioTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::AudioTrackOpenFailedEventArgs> = L"Windows.Media.Core.AudioTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::AudioTrackSupportInfo> = L"Windows.Media.Core.AudioTrackSupportInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ChapterCue> = L"Windows.Media.Core.ChapterCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::CodecInfo> = L"Windows.Media.Core.CodecInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Core::CodecQuery> = L"Windows.Media.Core.CodecQuery";
    template <> inline constexpr auto& name_v<Windows::Media::Core::CodecSubtypes> = L"Windows.Media.Core.CodecSubtypes";
    template <> inline constexpr auto& name_v<Windows::Media::Core::DataCue> = L"Windows.Media.Core.DataCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::FaceDetectedEventArgs> = L"Windows.Media.Core.FaceDetectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::FaceDetectionEffect> = L"Windows.Media.Core.FaceDetectionEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Core::FaceDetectionEffectDefinition> = L"Windows.Media.Core.FaceDetectionEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Core::FaceDetectionEffectFrame> = L"Windows.Media.Core.FaceDetectionEffectFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Core::HighDynamicRangeControl> = L"Windows.Media.Core.HighDynamicRangeControl";
    template <> inline constexpr auto& name_v<Windows::Media::Core::HighDynamicRangeOutput> = L"Windows.Media.Core.HighDynamicRangeOutput";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ImageCue> = L"Windows.Media.Core.ImageCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> = L"Windows.Media.Core.InitializeMediaStreamSourceRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::LowLightFusion> = L"Windows.Media.Core.LowLightFusion";
    template <> inline constexpr auto& name_v<Windows::Media::Core::LowLightFusionResult> = L"Windows.Media.Core.LowLightFusionResult";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaBinder> = L"Windows.Media.Core.MediaBinder";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaBindingEventArgs> = L"Windows.Media.Core.MediaBindingEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaCueEventArgs> = L"Windows.Media.Core.MediaCueEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSource> = L"Windows.Media.Core.MediaSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSourceAppServiceConnection> = L"Windows.Media.Core.MediaSourceAppServiceConnection";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSourceError> = L"Windows.Media.Core.MediaSourceError";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> = L"Windows.Media.Core.MediaSourceOpenOperationCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSourceStateChangedEventArgs> = L"Windows.Media.Core.MediaSourceStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSample> = L"Windows.Media.Core.MediaStreamSample";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSamplePropertySet> = L"Windows.Media.Core.MediaStreamSamplePropertySet";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSampleProtectionProperties> = L"Windows.Media.Core.MediaStreamSampleProtectionProperties";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSource> = L"Windows.Media.Core.MediaStreamSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceClosedEventArgs> = L"Windows.Media.Core.MediaStreamSourceClosedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceClosedRequest> = L"Windows.Media.Core.MediaStreamSourceClosedRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> = L"Windows.Media.Core.MediaStreamSourceSampleRenderedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSampleRequest> = L"Windows.Media.Core.MediaStreamSourceSampleRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral> = L"Windows.Media.Core.MediaStreamSourceSampleRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> = L"Windows.Media.Core.MediaStreamSourceSampleRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceStartingEventArgs> = L"Windows.Media.Core.MediaStreamSourceStartingEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceStartingRequest> = L"Windows.Media.Core.MediaStreamSourceStartingRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral> = L"Windows.Media.Core.MediaStreamSourceStartingRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest> = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral> = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseSourceBuffer> = L"Windows.Media.Core.MseSourceBuffer";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseSourceBufferList> = L"Windows.Media.Core.MseSourceBufferList";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseStreamSource> = L"Windows.Media.Core.MseStreamSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::SceneAnalysisEffect> = L"Windows.Media.Core.SceneAnalysisEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Core::SceneAnalysisEffectDefinition> = L"Windows.Media.Core.SceneAnalysisEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Core::SceneAnalysisEffectFrame> = L"Windows.Media.Core.SceneAnalysisEffectFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Core::SceneAnalyzedEventArgs> = L"Windows.Media.Core.SceneAnalyzedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::SpeechCue> = L"Windows.Media.Core.SpeechCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedMetadataStreamDescriptor> = L"Windows.Media.Core.TimedMetadataStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedMetadataTrack> = L"Windows.Media.Core.TimedMetadataTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedMetadataTrackError> = L"Windows.Media.Core.TimedMetadataTrackError";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedMetadataTrackFailedEventArgs> = L"Windows.Media.Core.TimedMetadataTrackFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextCue> = L"Windows.Media.Core.TimedTextCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextLine> = L"Windows.Media.Core.TimedTextLine";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextRegion> = L"Windows.Media.Core.TimedTextRegion";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextSource> = L"Windows.Media.Core.TimedTextSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextSourceResolveResultEventArgs> = L"Windows.Media.Core.TimedTextSourceResolveResultEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextStyle> = L"Windows.Media.Core.TimedTextStyle";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextSubformat> = L"Windows.Media.Core.TimedTextSubformat";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoStabilizationEffect> = L"Windows.Media.Core.VideoStabilizationEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoStabilizationEffectDefinition> = L"Windows.Media.Core.VideoStabilizationEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> = L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoStreamDescriptor> = L"Windows.Media.Core.VideoStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoTrack> = L"Windows.Media.Core.VideoTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoTrackOpenFailedEventArgs> = L"Windows.Media.Core.VideoTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoTrackSupportInfo> = L"Windows.Media.Core.VideoTrackSupportInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Core::AudioDecoderDegradation> = L"Windows.Media.Core.AudioDecoderDegradation";
    template <> inline constexpr auto& name_v<Windows::Media::Core::AudioDecoderDegradationReason> = L"Windows.Media.Core.AudioDecoderDegradationReason";
    template <> inline constexpr auto& name_v<Windows::Media::Core::CodecCategory> = L"Windows.Media.Core.CodecCategory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::CodecKind> = L"Windows.Media.Core.CodecKind";
    template <> inline constexpr auto& name_v<Windows::Media::Core::FaceDetectionMode> = L"Windows.Media.Core.FaceDetectionMode";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaDecoderStatus> = L"Windows.Media.Core.MediaDecoderStatus";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSourceState> = L"Windows.Media.Core.MediaSourceState";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaSourceStatus> = L"Windows.Media.Core.MediaSourceStatus";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceClosedReason> = L"Windows.Media.Core.MediaStreamSourceClosedReason";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaStreamSourceErrorStatus> = L"Windows.Media.Core.MediaStreamSourceErrorStatus";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MediaTrackKind> = L"Windows.Media.Core.MediaTrackKind";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseAppendMode> = L"Windows.Media.Core.MseAppendMode";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseEndOfStreamStatus> = L"Windows.Media.Core.MseEndOfStreamStatus";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseReadyState> = L"Windows.Media.Core.MseReadyState";
    template <> inline constexpr auto& name_v<Windows::Media::Core::SceneAnalysisRecommendation> = L"Windows.Media.Core.SceneAnalysisRecommendation";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedMetadataKind> = L"Windows.Media.Core.TimedMetadataKind";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedMetadataTrackErrorCode> = L"Windows.Media.Core.TimedMetadataTrackErrorCode";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextDisplayAlignment> = L"Windows.Media.Core.TimedTextDisplayAlignment";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextFlowDirection> = L"Windows.Media.Core.TimedTextFlowDirection";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextFontStyle> = L"Windows.Media.Core.TimedTextFontStyle";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextLineAlignment> = L"Windows.Media.Core.TimedTextLineAlignment";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextScrollMode> = L"Windows.Media.Core.TimedTextScrollMode";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextUnit> = L"Windows.Media.Core.TimedTextUnit";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextWeight> = L"Windows.Media.Core.TimedTextWeight";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextWrapping> = L"Windows.Media.Core.TimedTextWrapping";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextWritingMode> = L"Windows.Media.Core.TimedTextWritingMode";
    template <> inline constexpr auto& name_v<Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason> = L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedReason";
    template <> inline constexpr auto& name_v<Windows::Media::Core::MseTimeRange> = L"Windows.Media.Core.MseTimeRange";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextDouble> = L"Windows.Media.Core.TimedTextDouble";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextPadding> = L"Windows.Media.Core.TimedTextPadding";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextPoint> = L"Windows.Media.Core.TimedTextPoint";
    template <> inline constexpr auto& name_v<Windows::Media::Core::TimedTextSize> = L"Windows.Media.Core.TimedTextSize";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioStreamDescriptor> = L"Windows.Media.Core.IAudioStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioStreamDescriptor2> = L"Windows.Media.Core.IAudioStreamDescriptor2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioStreamDescriptor3> = L"Windows.Media.Core.IAudioStreamDescriptor3";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioStreamDescriptorFactory> = L"Windows.Media.Core.IAudioStreamDescriptorFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioTrack> = L"Windows.Media.Core.IAudioTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioTrackOpenFailedEventArgs> = L"Windows.Media.Core.IAudioTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IAudioTrackSupportInfo> = L"Windows.Media.Core.IAudioTrackSupportInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IChapterCue> = L"Windows.Media.Core.IChapterCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ICodecInfo> = L"Windows.Media.Core.ICodecInfo";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ICodecQuery> = L"Windows.Media.Core.ICodecQuery";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ICodecSubtypesStatics> = L"Windows.Media.Core.ICodecSubtypesStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IDataCue> = L"Windows.Media.Core.IDataCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IDataCue2> = L"Windows.Media.Core.IDataCue2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IFaceDetectedEventArgs> = L"Windows.Media.Core.IFaceDetectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IFaceDetectionEffect> = L"Windows.Media.Core.IFaceDetectionEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IFaceDetectionEffectDefinition> = L"Windows.Media.Core.IFaceDetectionEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IFaceDetectionEffectFrame> = L"Windows.Media.Core.IFaceDetectionEffectFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IHighDynamicRangeControl> = L"Windows.Media.Core.IHighDynamicRangeControl";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IHighDynamicRangeOutput> = L"Windows.Media.Core.IHighDynamicRangeOutput";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IImageCue> = L"Windows.Media.Core.IImageCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs> = L"Windows.Media.Core.IInitializeMediaStreamSourceRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ILowLightFusionResult> = L"Windows.Media.Core.ILowLightFusionResult";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ILowLightFusionStatics> = L"Windows.Media.Core.ILowLightFusionStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaBinder> = L"Windows.Media.Core.IMediaBinder";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaBindingEventArgs> = L"Windows.Media.Core.IMediaBindingEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaBindingEventArgs2> = L"Windows.Media.Core.IMediaBindingEventArgs2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaBindingEventArgs3> = L"Windows.Media.Core.IMediaBindingEventArgs3";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaCue> = L"Windows.Media.Core.IMediaCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaCueEventArgs> = L"Windows.Media.Core.IMediaCueEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSource> = L"Windows.Media.Core.IMediaSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSource2> = L"Windows.Media.Core.IMediaSource2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSource3> = L"Windows.Media.Core.IMediaSource3";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSource4> = L"Windows.Media.Core.IMediaSource4";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSource5> = L"Windows.Media.Core.IMediaSource5";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceAppServiceConnection> = L"Windows.Media.Core.IMediaSourceAppServiceConnection";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory> = L"Windows.Media.Core.IMediaSourceAppServiceConnectionFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceError> = L"Windows.Media.Core.IMediaSourceError";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs> = L"Windows.Media.Core.IMediaSourceOpenOperationCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceStateChangedEventArgs> = L"Windows.Media.Core.IMediaSourceStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceStatics> = L"Windows.Media.Core.IMediaSourceStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceStatics2> = L"Windows.Media.Core.IMediaSourceStatics2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceStatics3> = L"Windows.Media.Core.IMediaSourceStatics3";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaSourceStatics4> = L"Windows.Media.Core.IMediaSourceStatics4";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamDescriptor> = L"Windows.Media.Core.IMediaStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamDescriptor2> = L"Windows.Media.Core.IMediaStreamDescriptor2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSample> = L"Windows.Media.Core.IMediaStreamSample";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSample2> = L"Windows.Media.Core.IMediaStreamSample2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSampleProtectionProperties> = L"Windows.Media.Core.IMediaStreamSampleProtectionProperties";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSampleStatics> = L"Windows.Media.Core.IMediaStreamSampleStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSampleStatics2> = L"Windows.Media.Core.IMediaStreamSampleStatics2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSource> = L"Windows.Media.Core.IMediaStreamSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSource2> = L"Windows.Media.Core.IMediaStreamSource2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSource3> = L"Windows.Media.Core.IMediaStreamSource3";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSource4> = L"Windows.Media.Core.IMediaStreamSource4";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceClosedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceClosedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceClosedRequest> = L"Windows.Media.Core.IMediaStreamSourceClosedRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceFactory> = L"Windows.Media.Core.IMediaStreamSourceFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceSampleRenderedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSampleRequest> = L"Windows.Media.Core.IMediaStreamSourceSampleRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral> = L"Windows.Media.Core.IMediaStreamSourceSampleRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceSampleRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceStartingEventArgs> = L"Windows.Media.Core.IMediaStreamSourceStartingEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceStartingRequest> = L"Windows.Media.Core.IMediaStreamSourceStartingRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral> = L"Windows.Media.Core.IMediaStreamSourceStartingRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest> = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequest";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral> = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMediaTrack> = L"Windows.Media.Core.IMediaTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMseSourceBuffer> = L"Windows.Media.Core.IMseSourceBuffer";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMseSourceBufferList> = L"Windows.Media.Core.IMseSourceBufferList";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMseStreamSource> = L"Windows.Media.Core.IMseStreamSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMseStreamSource2> = L"Windows.Media.Core.IMseStreamSource2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IMseStreamSourceStatics> = L"Windows.Media.Core.IMseStreamSourceStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ISceneAnalysisEffect> = L"Windows.Media.Core.ISceneAnalysisEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ISceneAnalysisEffectFrame> = L"Windows.Media.Core.ISceneAnalysisEffectFrame";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ISceneAnalysisEffectFrame2> = L"Windows.Media.Core.ISceneAnalysisEffectFrame2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ISceneAnalyzedEventArgs> = L"Windows.Media.Core.ISceneAnalyzedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ISingleSelectMediaTrackList> = L"Windows.Media.Core.ISingleSelectMediaTrackList";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ISpeechCue> = L"Windows.Media.Core.ISpeechCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataStreamDescriptor> = L"Windows.Media.Core.ITimedMetadataStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory> = L"Windows.Media.Core.ITimedMetadataStreamDescriptorFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataTrack> = L"Windows.Media.Core.ITimedMetadataTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataTrack2> = L"Windows.Media.Core.ITimedMetadataTrack2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataTrackError> = L"Windows.Media.Core.ITimedMetadataTrackError";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataTrackFactory> = L"Windows.Media.Core.ITimedMetadataTrackFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs> = L"Windows.Media.Core.ITimedMetadataTrackFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedMetadataTrackProvider> = L"Windows.Media.Core.ITimedMetadataTrackProvider";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextCue> = L"Windows.Media.Core.ITimedTextCue";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextLine> = L"Windows.Media.Core.ITimedTextLine";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextRegion> = L"Windows.Media.Core.ITimedTextRegion";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextSource> = L"Windows.Media.Core.ITimedTextSource";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs> = L"Windows.Media.Core.ITimedTextSourceResolveResultEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextSourceStatics> = L"Windows.Media.Core.ITimedTextSourceStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextSourceStatics2> = L"Windows.Media.Core.ITimedTextSourceStatics2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextStyle> = L"Windows.Media.Core.ITimedTextStyle";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextStyle2> = L"Windows.Media.Core.ITimedTextStyle2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::ITimedTextSubformat> = L"Windows.Media.Core.ITimedTextSubformat";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoStabilizationEffect> = L"Windows.Media.Core.IVideoStabilizationEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs> = L"Windows.Media.Core.IVideoStabilizationEffectEnabledChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoStreamDescriptor> = L"Windows.Media.Core.IVideoStreamDescriptor";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoStreamDescriptor2> = L"Windows.Media.Core.IVideoStreamDescriptor2";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoStreamDescriptorFactory> = L"Windows.Media.Core.IVideoStreamDescriptorFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoTrack> = L"Windows.Media.Core.IVideoTrack";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoTrackOpenFailedEventArgs> = L"Windows.Media.Core.IVideoTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Media::Core::IVideoTrackSupportInfo> = L"Windows.Media.Core.IVideoTrackSupportInfo";
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioStreamDescriptor>{ 0x1E3692E4,0x4027,0x4847,{ 0xA7,0x0B,0xDF,0x1D,0x9A,0x2A,0x7B,0x04 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioStreamDescriptor2>{ 0x2E68F1F6,0xA448,0x497B,{ 0x88,0x40,0x85,0x08,0x26,0x65,0xAC,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioStreamDescriptor3>{ 0x4D220DA1,0x8E83,0x44EF,{ 0x89,0x73,0x2F,0x63,0xE9,0x93,0xF3,0x6B } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioStreamDescriptorFactory>{ 0x4A86CE9E,0x4CB1,0x4380,{ 0x8E,0x0C,0x83,0x50,0x4B,0x7F,0x5B,0xF3 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioTrack>{ 0xF23B6E77,0x3EF7,0x40DE,{ 0xB9,0x43,0x06,0x8B,0x13,0x21,0x70,0x1D } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ 0xEEDDB9B9,0xBB7C,0x4112,{ 0xBF,0x76,0x93,0x84,0x67,0x6F,0x82,0x4B } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IAudioTrackSupportInfo>{ 0x178BEFF7,0xCC39,0x44A6,{ 0xB9,0x51,0x4A,0x56,0x53,0xF0,0x73,0xFA } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IChapterCue>{ 0x72A98001,0xD38A,0x4C0A,{ 0x8F,0xA6,0x75,0xCD,0xDA,0xF4,0x66,0x4C } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ICodecInfo>{ 0x51E89F85,0xEA97,0x499C,{ 0x86,0xAC,0x4C,0xE5,0xE7,0x3F,0x3A,0x42 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ICodecQuery>{ 0x222A953A,0xAF61,0x4E04,{ 0x80,0x8A,0xA4,0x63,0x4E,0x2F,0x3A,0xC4 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ICodecSubtypesStatics>{ 0xA66AC4F2,0x888B,0x4224,{ 0x8C,0xF6,0x2A,0x8D,0x4E,0xB0,0x23,0x82 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IDataCue>{ 0x7C7F676D,0x1FBC,0x4E2D,{ 0x9A,0x87,0xEE,0x38,0xBD,0x1D,0xC6,0x37 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IDataCue2>{ 0xBC561B15,0x95F2,0x49E8,{ 0x96,0xF1,0x8D,0xD5,0xDA,0xC6,0x8D,0x93 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IFaceDetectedEventArgs>{ 0x19918426,0xC65B,0x46BA,{ 0x85,0xF8,0x13,0x88,0x05,0x76,0xC9,0x0A } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IFaceDetectionEffect>{ 0xAE15EBD2,0x0542,0x42A9,{ 0xBC,0x90,0xF2,0x83,0xA2,0x9F,0x46,0xC1 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IFaceDetectionEffectDefinition>{ 0x43DCA081,0xB848,0x4F33,{ 0xB7,0x02,0x1F,0xD2,0x62,0x4F,0xB0,0x16 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IFaceDetectionEffectFrame>{ 0x8AB08993,0x5DC8,0x447B,{ 0xA2,0x47,0x52,0x70,0xBD,0x80,0x2E,0xCE } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IHighDynamicRangeControl>{ 0x55F1A7AE,0xD957,0x4DC9,{ 0x9D,0x1C,0x85,0x53,0xA8,0x2A,0x7D,0x99 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IHighDynamicRangeOutput>{ 0x0F57806B,0x253B,0x4119,{ 0xBB,0x40,0x3A,0x90,0xE5,0x13,0x84,0xF7 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IImageCue>{ 0x52828282,0x367B,0x440B,{ 0x91,0x16,0x3C,0x84,0x57,0x0D,0xD2,0x70 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ 0x25BC45E1,0x9B08,0x4C2E,{ 0xA8,0x55,0x45,0x42,0xF1,0xA7,0x5D,0xEB } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ILowLightFusionResult>{ 0x78EDBE35,0x27A0,0x42E0,{ 0x9C,0xD3,0x73,0x8D,0x20,0x89,0xDE,0x9C } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ILowLightFusionStatics>{ 0x5305016D,0xC29E,0x40E2,{ 0x87,0xA9,0x9E,0x1F,0xD2,0xF1,0x92,0xF5 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaBinder>{ 0x2B7E40AA,0xDE07,0x424F,{ 0x83,0xF1,0xF1,0xDE,0x46,0xC4,0xFA,0x2E } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaBindingEventArgs>{ 0xB61CB25A,0x1B6D,0x4630,{ 0xA8,0x6D,0x2F,0x08,0x37,0xF7,0x12,0xE5 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaBindingEventArgs2>{ 0x0464CCEB,0xBB5A,0x482F,{ 0xB8,0xBA,0xF0,0x28,0x4C,0x69,0x65,0x67 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaBindingEventArgs3>{ 0xF8EB475E,0x19BE,0x44FC,{ 0xA5,0xED,0x7A,0xBA,0x31,0x50,0x37,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaCue>{ 0xC7D15E5D,0x59DC,0x431F,{ 0xA0,0xEE,0x27,0x74,0x43,0x23,0xB3,0x6D } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaCueEventArgs>{ 0xD12F47F7,0x5FA4,0x4E68,{ 0x9F,0xE5,0x32,0x16,0x0D,0xCE,0xE5,0x7E } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSource>{ 0xE7BFB599,0xA09D,0x4C21,{ 0xBC,0xDF,0x20,0xAF,0x4F,0x86,0xB3,0xD9 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSource2>{ 0x2EB61048,0x655F,0x4C37,{ 0xB8,0x13,0xB4,0xE4,0x5D,0xFA,0x0A,0xBE } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSource3>{ 0xB59F0D9B,0x4B6E,0x41ED,{ 0xBB,0xB4,0x7C,0x75,0x09,0xA9,0x94,0xAD } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSource4>{ 0xBDAFAD57,0x8EFF,0x4C63,{ 0x85,0xA6,0x84,0xDE,0x0A,0xE3,0xE4,0xF2 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSource5>{ 0x331A22AE,0xED2E,0x4A22,{ 0x94,0xC8,0xB7,0x43,0xA9,0x2B,0x30,0x22 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceAppServiceConnection>{ 0x61E1EA97,0x1916,0x4810,{ 0xB7,0xF4,0xB6,0x42,0xBE,0x82,0x95,0x96 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ 0x65B912EB,0x80B9,0x44F9,{ 0x9C,0x1E,0xE1,0x20,0xF6,0xD9,0x28,0x38 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceError>{ 0x5C0A8965,0x37C5,0x4E9D,{ 0x8D,0x21,0x1C,0xDE,0xE9,0x0C,0xEC,0xC6 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ 0xFC682CEB,0xE281,0x477C,{ 0xA8,0xE0,0x1A,0xCD,0x65,0x41,0x14,0xC8 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ 0x0A30AF82,0x9071,0x4BAC,{ 0xBC,0x39,0xCA,0x2A,0x93,0xB7,0x17,0xA9 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceStatics>{ 0xF77D6FA4,0x4652,0x410E,{ 0xB1,0xD8,0xE9,0xA5,0xE2,0x45,0xA4,0x5C } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceStatics2>{ 0xEEE161A4,0x7F13,0x4896,{ 0xB8,0xCB,0xDF,0x0D,0xE5,0xBC,0xB9,0xF1 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceStatics3>{ 0x453A30D6,0x2BEA,0x4122,{ 0x9F,0x73,0xEA,0xCE,0x04,0x52,0x6E,0x35 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaSourceStatics4>{ 0x281B3BFC,0xE50A,0x4428,{ 0xA5,0x00,0x9C,0x4E,0xD9,0x18,0xD3,0xF0 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamDescriptor>{ 0x80F16E6E,0x92F7,0x451E,{ 0x97,0xD2,0xAF,0xD8,0x07,0x42,0xDA,0x70 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamDescriptor2>{ 0x5073010F,0xE8B2,0x4071,{ 0xB0,0x0B,0xEB,0xF3,0x37,0xA7,0x6B,0x58 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSample>{ 0x5C8DB627,0x4B80,0x4361,{ 0x98,0x37,0x6C,0xB7,0x48,0x1A,0xD9,0xD6 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSample2>{ 0x45078691,0xFCE8,0x4746,{ 0xA1,0xC8,0x10,0xC2,0x5D,0x3D,0x7C,0xD3 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ 0x4EB88292,0xECDF,0x493E,{ 0x84,0x1D,0xDD,0x4A,0xDD,0x7C,0xAC,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSampleStatics>{ 0xDFDF218F,0xA6CF,0x4579,{ 0xBE,0x41,0x73,0xDD,0x94,0x1A,0xD9,0x72 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSampleStatics2>{ 0x9EFE9521,0x6D46,0x494C,{ 0xA2,0xF8,0xD6,0x62,0x92,0x2E,0x2D,0xD7 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSource>{ 0x3712D543,0x45EB,0x4138,{ 0xAA,0x62,0xC0,0x1E,0x26,0xF3,0x84,0x3F } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSource2>{ 0xEC55D0AD,0x2E6A,0x4F74,{ 0xAD,0xBB,0xB5,0x62,0xD1,0x53,0x38,0x49 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSource3>{ 0x6A2A2746,0x3DDD,0x4DDF,{ 0xA1,0x21,0x94,0x04,0x5E,0xCF,0x94,0x40 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSource4>{ 0x1D0CFCAB,0x830D,0x417C,{ 0xA3,0xA9,0x24,0x54,0xFD,0x64,0x15,0xC7 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ 0xCD8C7EB2,0x4816,0x4E24,{ 0x88,0xF0,0x49,0x1E,0xF7,0x38,0x64,0x06 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceClosedRequest>{ 0x907C00E9,0x18A3,0x4951,{ 0x88,0x7A,0x2C,0x1E,0xEB,0xD5,0xC6,0x9E } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceFactory>{ 0xEF77E0D9,0xD158,0x4B7A,{ 0x86,0x3F,0x20,0x33,0x42,0xFB,0xFD,0x41 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ 0x9D697B05,0xD4F2,0x4C7A,{ 0x9D,0xFE,0x8D,0x6C,0xD0,0xB3,0xEE,0x84 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSampleRequest>{ 0x4DB341A9,0x3501,0x4D9B,{ 0x83,0xF9,0x8F,0x23,0x5C,0x82,0x25,0x32 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ 0x7895CC02,0xF982,0x43C8,{ 0x9D,0x16,0xC6,0x2D,0x99,0x93,0x19,0xBE } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ 0x10F9BB9E,0x71C5,0x492F,{ 0x84,0x7F,0x0D,0xA1,0xF3,0x5E,0x81,0xF8 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ 0xF41468F2,0xC274,0x4940,{ 0xA5,0xBB,0x28,0xA5,0x72,0x45,0x2F,0xA7 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceStartingRequest>{ 0x2A9093E4,0x35C4,0x4B1B,{ 0xA7,0x91,0x0D,0x99,0xDB,0x56,0xDD,0x1D } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ 0x3F1356A5,0x6340,0x4DC4,{ 0x99,0x10,0x06,0x8E,0xD9,0xF5,0x98,0xF8 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ 0x41B8808E,0x38A9,0x4EC3,{ 0x9B,0xA0,0xB6,0x9B,0x85,0x50,0x1E,0x90 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ 0xBEE3D835,0xA505,0x4F9A,{ 0xB9,0x43,0x2B,0x8C,0xB1,0xB4,0xBB,0xD9 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ 0x42202B72,0x6EA1,0x4677,{ 0x98,0x1E,0x35,0x0A,0x0D,0xA4,0x12,0xAA } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMediaTrack>{ 0x03E1FAFC,0xC931,0x491A,{ 0xB4,0x6B,0xC1,0x0E,0xE8,0xC2,0x56,0xB7 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMseSourceBuffer>{ 0x0C1AA3E3,0xDF8D,0x4079,{ 0xA3,0xFE,0x68,0x49,0x18,0x4B,0x4E,0x2F } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMseSourceBufferList>{ 0x95FAE8E7,0xA8E7,0x4EBF,{ 0x89,0x27,0x14,0x5E,0x94,0x0B,0xA5,0x11 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMseStreamSource>{ 0xB0B4198D,0x02F4,0x4923,{ 0x88,0xDD,0x81,0xBC,0x3F,0x36,0x0F,0xFA } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMseStreamSource2>{ 0x66F57D37,0xF9E7,0x418A,{ 0x9C,0xDE,0xA0,0x20,0xE9,0x56,0x55,0x2B } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IMseStreamSourceStatics>{ 0x465C679D,0xD570,0x43CE,{ 0xBA,0x21,0x0B,0xFF,0x5F,0x3F,0xBD,0x0A } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ISceneAnalysisEffect>{ 0xC04BA319,0xCA41,0x4813,{ 0xBF,0xFD,0x7B,0x08,0xB0,0xED,0x25,0x57 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ISceneAnalysisEffectFrame>{ 0xD8B10E4C,0x7FD9,0x42E1,{ 0x85,0xEB,0x65,0x72,0xC2,0x97,0xC9,0x87 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ISceneAnalysisEffectFrame2>{ 0x2D4E29BE,0x061F,0x47AE,{ 0x99,0x15,0x02,0x52,0x4B,0x5F,0x9A,0x5F } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ISceneAnalyzedEventArgs>{ 0x146B9588,0x2851,0x45E4,{ 0xAD,0x55,0x44,0xCF,0x8D,0xF8,0xDB,0x4D } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ISingleSelectMediaTrackList>{ 0x77206F1F,0xC34F,0x494F,{ 0x80,0x77,0x2B,0xAD,0x9F,0xF4,0xEC,0xF1 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ISpeechCue>{ 0xAEE254DC,0x1725,0x4BAD,{ 0x80,0x43,0xA9,0x84,0x99,0xB0,0x17,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataStreamDescriptor>{ 0x133336BF,0x296A,0x463E,{ 0x9F,0xF9,0x01,0xCD,0x25,0x69,0x14,0x08 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ 0xC027DE30,0x7362,0x4FF9,{ 0x98,0xB1,0x2D,0xFD,0x0B,0x8D,0x1C,0xAE } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataTrack>{ 0x9E6AED9E,0xF67A,0x49A9,{ 0xB3,0x30,0xCF,0x03,0xB0,0xE9,0xCF,0x07 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataTrack2>{ 0x21B4B648,0x9F9D,0x40BA,{ 0xA8,0xF3,0x1A,0x92,0x75,0x3A,0xEF,0x0B } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataTrackError>{ 0xB3767915,0x4114,0x4819,{ 0xB9,0xD9,0xDD,0x76,0x08,0x9E,0x72,0xF8 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataTrackFactory>{ 0x8DD57611,0x97B3,0x4E1F,{ 0x85,0x2C,0x0F,0x48,0x2C,0x81,0xAD,0x26 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ 0xA57FC9D1,0x6789,0x4D4D,{ 0xB0,0x7F,0x84,0xB4,0xF3,0x1A,0xCB,0x70 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedMetadataTrackProvider>{ 0x3B7F2024,0xF74E,0x4ADE,{ 0x93,0xC5,0x21,0x9D,0xA0,0x5B,0x68,0x56 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextCue>{ 0x51C79E51,0x3B86,0x494D,{ 0xB3,0x59,0xBB,0x2E,0xA7,0xAC,0xA9,0xA9 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextLine>{ 0x978D7CE2,0x7308,0x4C66,{ 0xBE,0x50,0x65,0x77,0x72,0x89,0xF5,0xDF } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextRegion>{ 0x1ED0881F,0x8A06,0x4222,{ 0x9F,0x59,0xB2,0x1B,0xF4,0x01,0x24,0xB4 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextSource>{ 0xC4ED9BA6,0x101F,0x404D,{ 0xA9,0x49,0x82,0xF3,0x3F,0xCD,0x93,0xB7 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ 0x48907C9C,0xDCD8,0x4C33,{ 0x9A,0xD3,0x6C,0xDC,0xE7,0xB1,0xC5,0x66 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextSourceStatics>{ 0x7E311853,0x9ABA,0x4AC4,{ 0xBB,0x98,0x2F,0xB1,0x76,0xC3,0xBF,0xDD } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextSourceStatics2>{ 0xB66B7602,0x923E,0x43FA,{ 0x96,0x33,0x58,0x70,0x75,0x81,0x2D,0xB5 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextStyle>{ 0x1BB2384D,0xA825,0x40C2,{ 0xA7,0xF5,0x28,0x1E,0xAE,0xDF,0x3B,0x55 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextStyle2>{ 0x655F492D,0x6111,0x4787,{ 0x89,0xCC,0x68,0x6F,0xEC,0xE5,0x7E,0x14 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::ITimedTextSubformat>{ 0xD713502F,0x3261,0x4722,{ 0xA0,0xC2,0xB9,0x37,0xB2,0x39,0x0F,0x14 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoStabilizationEffect>{ 0x0808A650,0x9698,0x4E57,{ 0x87,0x7B,0xBD,0x7C,0xB2,0xEE,0x0F,0x8A } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ 0x187EFF28,0x67BB,0x4713,{ 0xB9,0x00,0x41,0x68,0xDA,0x16,0x45,0x29 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoStreamDescriptor>{ 0x12EE0D55,0x9C2B,0x4440,{ 0x80,0x57,0x2C,0x7A,0x90,0xF0,0xCB,0xEC } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoStreamDescriptor2>{ 0x8B306E10,0x453E,0x4088,{ 0x83,0x2D,0xC3,0x6F,0xA4,0xF9,0x4A,0xF3 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoStreamDescriptorFactory>{ 0x494EF6D1,0xBB75,0x43D2,{ 0x9E,0x5E,0x7B,0x79,0xA3,0xAF,0xCE,0xD4 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoTrack>{ 0x99F3B7F3,0xE298,0x4396,{ 0xBB,0x6A,0xA5,0x1B,0xE6,0xA2,0xA2,0x0A } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ 0x7679E231,0x04F9,0x4C82,{ 0xA4,0xEE,0x86,0x02,0xC8,0xBB,0x47,0x54 } };
    template <> inline constexpr guid guid_v<Windows::Media::Core::IVideoTrackSupportInfo>{ 0x4BB534A0,0xFC5F,0x450D,{ 0x8F,0xF0,0x77,0x8D,0x59,0x04,0x86,0xDE } };
    template <> struct default_interface<Windows::Media::Core::AudioStreamDescriptor>{ using type = Windows::Media::Core::IAudioStreamDescriptor; };
    template <> struct default_interface<Windows::Media::Core::AudioTrack>{ using type = Windows::Media::Core::IMediaTrack; };
    template <> struct default_interface<Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ using type = Windows::Media::Core::IAudioTrackOpenFailedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::AudioTrackSupportInfo>{ using type = Windows::Media::Core::IAudioTrackSupportInfo; };
    template <> struct default_interface<Windows::Media::Core::ChapterCue>{ using type = Windows::Media::Core::IChapterCue; };
    template <> struct default_interface<Windows::Media::Core::CodecInfo>{ using type = Windows::Media::Core::ICodecInfo; };
    template <> struct default_interface<Windows::Media::Core::CodecQuery>{ using type = Windows::Media::Core::ICodecQuery; };
    template <> struct default_interface<Windows::Media::Core::DataCue>{ using type = Windows::Media::Core::IDataCue; };
    template <> struct default_interface<Windows::Media::Core::FaceDetectedEventArgs>{ using type = Windows::Media::Core::IFaceDetectedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::FaceDetectionEffect>{ using type = Windows::Media::Core::IFaceDetectionEffect; };
    template <> struct default_interface<Windows::Media::Core::FaceDetectionEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<Windows::Media::Core::FaceDetectionEffectFrame>{ using type = Windows::Media::Core::IFaceDetectionEffectFrame; };
    template <> struct default_interface<Windows::Media::Core::HighDynamicRangeControl>{ using type = Windows::Media::Core::IHighDynamicRangeControl; };
    template <> struct default_interface<Windows::Media::Core::HighDynamicRangeOutput>{ using type = Windows::Media::Core::IHighDynamicRangeOutput; };
    template <> struct default_interface<Windows::Media::Core::ImageCue>{ using type = Windows::Media::Core::IImageCue; };
    template <> struct default_interface<Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ using type = Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::LowLightFusionResult>{ using type = Windows::Media::Core::ILowLightFusionResult; };
    template <> struct default_interface<Windows::Media::Core::MediaBinder>{ using type = Windows::Media::Core::IMediaBinder; };
    template <> struct default_interface<Windows::Media::Core::MediaBindingEventArgs>{ using type = Windows::Media::Core::IMediaBindingEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaCueEventArgs>{ using type = Windows::Media::Core::IMediaCueEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaSource>{ using type = Windows::Media::Core::IMediaSource2; };
    template <> struct default_interface<Windows::Media::Core::MediaSourceAppServiceConnection>{ using type = Windows::Media::Core::IMediaSourceAppServiceConnection; };
    template <> struct default_interface<Windows::Media::Core::MediaSourceError>{ using type = Windows::Media::Core::IMediaSourceError; };
    template <> struct default_interface<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ using type = Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaSourceStateChangedEventArgs>{ using type = Windows::Media::Core::IMediaSourceStateChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSample>{ using type = Windows::Media::Core::IMediaStreamSample; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSamplePropertySet>{ using type = Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSampleProtectionProperties>{ using type = Windows::Media::Core::IMediaStreamSampleProtectionProperties; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSource>{ using type = Windows::Media::Core::IMediaStreamSource; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceClosedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceClosedRequest>{ using type = Windows::Media::Core::IMediaStreamSourceClosedRequest; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRequest>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRequest; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceStartingEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceStartingRequest>{ using type = Windows::Media::Core::IMediaStreamSourceStartingRequest; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ using type = Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ using type = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ using type = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral; };
    template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::MseSourceBuffer>{ using type = Windows::Media::Core::IMseSourceBuffer; };
    template <> struct default_interface<Windows::Media::Core::MseSourceBufferList>{ using type = Windows::Media::Core::IMseSourceBufferList; };
    template <> struct default_interface<Windows::Media::Core::MseStreamSource>{ using type = Windows::Media::Core::IMseStreamSource; };
    template <> struct default_interface<Windows::Media::Core::SceneAnalysisEffect>{ using type = Windows::Media::Core::ISceneAnalysisEffect; };
    template <> struct default_interface<Windows::Media::Core::SceneAnalysisEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<Windows::Media::Core::SceneAnalysisEffectFrame>{ using type = Windows::Media::Core::ISceneAnalysisEffectFrame; };
    template <> struct default_interface<Windows::Media::Core::SceneAnalyzedEventArgs>{ using type = Windows::Media::Core::ISceneAnalyzedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::SpeechCue>{ using type = Windows::Media::Core::ISpeechCue; };
    template <> struct default_interface<Windows::Media::Core::TimedMetadataStreamDescriptor>{ using type = Windows::Media::Core::IMediaStreamDescriptor; };
    template <> struct default_interface<Windows::Media::Core::TimedMetadataTrack>{ using type = Windows::Media::Core::ITimedMetadataTrack; };
    template <> struct default_interface<Windows::Media::Core::TimedMetadataTrackError>{ using type = Windows::Media::Core::ITimedMetadataTrackError; };
    template <> struct default_interface<Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ using type = Windows::Media::Core::ITimedMetadataTrackFailedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::TimedTextCue>{ using type = Windows::Media::Core::ITimedTextCue; };
    template <> struct default_interface<Windows::Media::Core::TimedTextLine>{ using type = Windows::Media::Core::ITimedTextLine; };
    template <> struct default_interface<Windows::Media::Core::TimedTextRegion>{ using type = Windows::Media::Core::ITimedTextRegion; };
    template <> struct default_interface<Windows::Media::Core::TimedTextSource>{ using type = Windows::Media::Core::ITimedTextSource; };
    template <> struct default_interface<Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ using type = Windows::Media::Core::ITimedTextSourceResolveResultEventArgs; };
    template <> struct default_interface<Windows::Media::Core::TimedTextStyle>{ using type = Windows::Media::Core::ITimedTextStyle; };
    template <> struct default_interface<Windows::Media::Core::TimedTextSubformat>{ using type = Windows::Media::Core::ITimedTextSubformat; };
    template <> struct default_interface<Windows::Media::Core::VideoStabilizationEffect>{ using type = Windows::Media::Core::IVideoStabilizationEffect; };
    template <> struct default_interface<Windows::Media::Core::VideoStabilizationEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ using type = Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::VideoStreamDescriptor>{ using type = Windows::Media::Core::IVideoStreamDescriptor; };
    template <> struct default_interface<Windows::Media::Core::VideoTrack>{ using type = Windows::Media::Core::IMediaTrack; };
    template <> struct default_interface<Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ using type = Windows::Media::Core::IVideoTrackOpenFailedEventArgs; };
    template <> struct default_interface<Windows::Media::Core::VideoTrackSupportInfo>{ using type = Windows::Media::Core::IVideoTrackSupportInfo; };
    template <> struct abi<Windows::Media::Core::IAudioStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IAudioStreamDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_LeadingEncoderPadding(void*) noexcept = 0;
            virtual int32_t __stdcall get_LeadingEncoderPadding(void**) noexcept = 0;
            virtual int32_t __stdcall put_TrailingEncoderPadding(void*) noexcept = 0;
            virtual int32_t __stdcall get_TrailingEncoderPadding(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IAudioStreamDescriptor3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IAudioStreamDescriptorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IAudioTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OpenFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IAudioTrackSupportInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecoderStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Degradation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DegradationReason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaSourceStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IChapterCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ICodecInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Category(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subtypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTrusted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ICodecQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(int32_t, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ICodecSubtypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFormatDV25(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDV50(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvc(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvh1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvhD(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvsd(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvsl(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH263(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH264(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH265(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH264ES(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatHevc(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatHevcES(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatM4S2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMjpg(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMP43(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMP4S(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMP4V(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMpeg2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatVP80(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatVP90(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMpg1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMss1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMss2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWmv1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWmv2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWmv3(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWvc1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormat420O(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAdts(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAlac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAmrNB(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAmrWB(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAmrWP(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDolbyAC3(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDolbyAC3Spdif(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDolbyDDPlus(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDrm(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDts(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatFlac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatFloat(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatMP3(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatMPeg(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatMsp1(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatOpus(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatPcm(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWmaSpdif(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWMAudioLossless(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWMAudioV8(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWMAudioV9(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IDataCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IDataCue2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IFaceDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IFaceDetectionEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredDetectionInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredDetectionInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_FaceDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FaceDetected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IFaceDetectionEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DetectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DetectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SynchronousDetectionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SynchronousDetectionEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IFaceDetectionEffectFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DetectedFaces(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IHighDynamicRangeControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IHighDynamicRangeOutput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certainty(double*) noexcept = 0;
            virtual int32_t __stdcall get_FrameControllers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IImageCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(struct struct_Windows_Media_Core_TimedTextPoint*) noexcept = 0;
            virtual int32_t __stdcall put_Position(struct struct_Windows_Media_Core_TimedTextPoint) noexcept = 0;
            virtual int32_t __stdcall get_Extent(struct struct_Windows_Media_Core_TimedTextSize*) noexcept = 0;
            virtual int32_t __stdcall put_Extent(struct struct_Windows_Media_Core_TimedTextSize) noexcept = 0;
            virtual int32_t __stdcall put_SoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_RandomAccessStream(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ILowLightFusionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ILowLightFusionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedBitmapPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxSupportedFrameCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall FuseAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaBinder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Binding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Binding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Token(void**) noexcept = 0;
            virtual int32_t __stdcall put_Token(void*) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaBindingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Canceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Canceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MediaBinder(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetUri(void*) noexcept = 0;
            virtual int32_t __stdcall SetStream(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetStreamReference(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaBindingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAdaptiveMediaSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetStorageFile(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaBindingEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDownloadOperation(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaCueEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OpenOperationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenOperationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CustomProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExternalTimedTextSources(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExternalTimedMetadataTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSource4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AdaptiveMediaSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaStreamSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_MseStreamSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall OpenAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSource5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DownloadOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceAppServiceConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_InitializeMediaStreamSourceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InitializeMediaStreamSourceRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromAdaptiveMediaSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromMediaStreamSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromMseStreamSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIMediaSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStorageFile(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStream(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamReference(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromMediaBinder(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromMediaFrameSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaSourceStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDownloadOperation(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSample>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Processed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Processed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Buffer(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Protection(void**) noexcept = 0;
            virtual int32_t __stdcall put_DecodeTimestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DecodeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyFrame(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyFrame(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Discontinuous(bool) noexcept = 0;
            virtual int32_t __stdcall get_Discontinuous(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSample2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direct3D11Surface(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSampleProtectionProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetKeyIdentifier(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetKeyIdentifier(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetInitializationVector(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetInitializationVector(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetSubSampleMapping(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetSubSampleMapping(uint32_t*, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSampleStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromBuffer(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamAsync(void*, uint32_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSampleStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDirect3D11Surface(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Starting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Starting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Paused(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Paused(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SampleRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SampleRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SwitchStreamsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SwitchStreamsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyError(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddStreamDescriptor(void*) noexcept = 0;
            virtual int32_t __stdcall put_MediaProtectionManager(void*) noexcept = 0;
            virtual int32_t __stdcall get_MediaProtectionManager(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_CanSeek(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanSeek(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BufferTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_BufferTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SetBufferedRange(int64_t, int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MusicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProperties(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall AddProtectionKey(void*, uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SampleRendered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SampleRendered(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MaxSupportedPlaybackRate(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSupportedPlaybackRate(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSource4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsLive(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsLive(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceClosedRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDescriptor(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDescriptors(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SampleLag(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall put_Sample(void*) noexcept = 0;
            virtual int32_t __stdcall get_Sample(void**) noexcept = 0;
            virtual int32_t __stdcall ReportSampleProgress(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceStartingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPosition(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetActualStartPosition(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldStreamDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStreamDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMediaTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMseSourceBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UpdateStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UpdateEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ErrorOccurred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ErrorOccurred(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Aborted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Aborted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsUpdating(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Buffered(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimestampOffset(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TimestampOffset(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AppendWindowStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AppendWindowStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AppendWindowEnd(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppendWindowEnd(void*) noexcept = 0;
            virtual int32_t __stdcall AppendBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall AppendStream(void*) noexcept = 0;
            virtual int32_t __stdcall AppendStreamMaxSize(void*, uint64_t) noexcept = 0;
            virtual int32_t __stdcall Abort() noexcept = 0;
            virtual int32_t __stdcall Remove(int64_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMseSourceBufferList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceBufferAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceBufferAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceBufferRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceBufferRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Buffers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMseStreamSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Ended(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Ended(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SourceBuffers(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveSourceBuffers(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReadyState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall AddSourceBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveSourceBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall EndOfStream(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMseStreamSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LiveSeekableRange(void**) noexcept = 0;
            virtual int32_t __stdcall put_LiveSeekableRange(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IMseStreamSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsContentTypeSupported(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ISceneAnalysisEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighDynamicRangeAnalyzer(void**) noexcept = 0;
            virtual int32_t __stdcall put_DesiredAnalysisInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredAnalysisInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_SceneAnalyzed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SceneAnalyzed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ISceneAnalysisEffectFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameControlValues(void**) noexcept = 0;
            virtual int32_t __stdcall get_HighDynamicRange(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ISceneAnalysisEffectFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnalysisRecommendation(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ISceneAnalyzedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SelectedIndexChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectedIndexChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall put_SelectedIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ISpeechCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartPositionInInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartPositionInInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndPositionInInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndPositionInInput(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CueEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CueEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CueExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CueExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TrackFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TrackFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Cues(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveCues(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimedMetadataKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DispatchType(void**) noexcept = 0;
            virtual int32_t __stdcall AddCue(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveCue(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataTrack2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataTrackError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataTrackFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TimedMetadataTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CueRegion(void**) noexcept = 0;
            virtual int32_t __stdcall put_CueRegion(void*) noexcept = 0;
            virtual int32_t __stdcall get_CueStyle(void**) noexcept = 0;
            virtual int32_t __stdcall put_CueStyle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Lines(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextLine>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subformats(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextRegion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Position(struct struct_Windows_Media_Core_TimedTextPoint*) noexcept = 0;
            virtual int32_t __stdcall put_Position(struct struct_Windows_Media_Core_TimedTextPoint) noexcept = 0;
            virtual int32_t __stdcall get_Extent(struct struct_Windows_Media_Core_TimedTextSize*) noexcept = 0;
            virtual int32_t __stdcall put_Extent(struct struct_Windows_Media_Core_TimedTextSize) noexcept = 0;
            virtual int32_t __stdcall get_Background(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Background(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_WritingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WritingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DisplayAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
            virtual int32_t __stdcall get_IsOverflowClipped(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOverflowClipped(bool) noexcept = 0;
            virtual int32_t __stdcall get_Padding(struct struct_Windows_Media_Core_TimedTextPadding*) noexcept = 0;
            virtual int32_t __stdcall put_Padding(struct struct_Windows_Media_Core_TimedTextPadding) noexcept = 0;
            virtual int32_t __stdcall get_TextWrapping(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TextWrapping(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScrollMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScrollMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Resolved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Resolved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromStream(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUri(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamWithLanguage(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUriWithLanguage(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromStreamWithIndex(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUriWithIndex(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamWithIndexAndLanguage(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUriWithIndexAndLanguage(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextStyle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_FontFamily(void**) noexcept = 0;
            virtual int32_t __stdcall put_FontFamily(void*) noexcept = 0;
            virtual int32_t __stdcall get_FontSize(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_FontSize(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
            virtual int32_t __stdcall get_FontWeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontWeight(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Foreground(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Foreground(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Background(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Background(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_IsBackgroundAlwaysShown(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsBackgroundAlwaysShown(bool) noexcept = 0;
            virtual int32_t __stdcall get_FlowDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FlowDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LineAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OutlineColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
            virtual int32_t __stdcall get_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextStyle2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontStyle(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsUnderlineEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsUnderlineEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsLineThroughEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLineThroughEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOverlineEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOverlineEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::ITimedTextSubformat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Length(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SubformatStyle(void**) noexcept = 0;
            virtual int32_t __stdcall put_SubformatStyle(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoStabilizationEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_EnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetRecommendedStreamConfiguration(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoStreamDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoStreamDescriptorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OpenFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Core::IVideoTrackSupportInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecoderStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaSourceStatus(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::AudioEncodingProperties) EncodingProperties() const;
    };
    template <> struct consume<Windows::Media::Core::IAudioStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptor2
    {
        WINRT_IMPL_AUTO(void) LeadingEncoderPadding(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) LeadingEncoderPadding() const;
        WINRT_IMPL_AUTO(void) TrailingEncoderPadding(Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) TrailingEncoderPadding() const;
    };
    template <> struct consume<Windows::Media::Core::IAudioStreamDescriptor2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptor3
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::AudioStreamDescriptor) Copy() const;
    };
    template <> struct consume<Windows::Media::Core::IAudioStreamDescriptor3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptorFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::AudioStreamDescriptor) Create(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<Windows::Media::Core::IAudioStreamDescriptorFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioTrack
    {
        WINRT_IMPL_AUTO(winrt::event_token) OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const;
        using OpenFailed_revoker = impl::event_revoker<Windows::Media::Core::IAudioTrack, &impl::abi_t<Windows::Media::Core::IAudioTrack>::remove_OpenFailed>;
        [[nodiscard]] OpenFailed_revoker OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) OpenFailed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Media::MediaProperties::AudioEncodingProperties) GetEncodingProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Playback::MediaPlaybackItem) PlaybackItem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::AudioTrackSupportInfo) SupportInfo() const;
    };
    template <> struct consume<Windows::Media::Core::IAudioTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioTrackSupportInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaDecoderStatus) DecoderStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::AudioDecoderDegradation) Degradation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::AudioDecoderDegradationReason) DegradationReason() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceStatus) MediaSourceStatus() const;
    };
    template <> struct consume<Windows::Media::Core::IAudioTrackSupportInfo>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioTrackSupportInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IChapterCue
    {
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
    };
    template <> struct consume<Windows::Media::Core::IChapterCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IChapterCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ICodecInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::CodecKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::CodecCategory) Category() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) Subtypes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTrusted() const;
    };
    template <> struct consume<Windows::Media::Core::ICodecInfo>
    {
        template <typename D> using type = consume_Windows_Media_Core_ICodecInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ICodecQuery
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::CodecInfo>>) FindAllAsync(Windows::Media::Core::CodecKind const& kind, Windows::Media::Core::CodecCategory const& category, param::hstring const& subType) const;
    };
    template <> struct consume<Windows::Media::Core::ICodecQuery>
    {
        template <typename D> using type = consume_Windows_Media_Core_ICodecQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ICodecSubtypesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDV25() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDV50() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDvc() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDvh1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDvhD() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDvsd() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatDvsl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatH263() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatH264() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatH265() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatH264ES() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatHevc() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatHevcES() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatM4S2() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMjpg() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMP43() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMP4S() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMP4V() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMpeg2() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatVP80() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatVP90() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMpg1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMss1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatMss2() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatWmv1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatWmv2() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatWmv3() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormatWvc1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoFormat420O() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatAac() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatAdts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatAlac() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatAmrNB() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatAmrWB() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatAmrWP() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatDolbyAC3() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatDolbyAC3Spdif() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatDolbyDDPlus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatDrm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatDts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatFlac() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatFloat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatMP3() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatMPeg() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatMsp1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatOpus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatPcm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatWmaSpdif() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatWMAudioLossless() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatWMAudioV8() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AudioFormatWMAudioV9() const;
    };
    template <> struct consume<Windows::Media::Core::ICodecSubtypesStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_ICodecSubtypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IDataCue
    {
        WINRT_IMPL_AUTO(void) Data(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Data() const;
    };
    template <> struct consume<Windows::Media::Core::IDataCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IDataCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IDataCue2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::PropertySet) Properties() const;
    };
    template <> struct consume<Windows::Media::Core::IDataCue2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IDataCue2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::FaceDetectionEffectFrame) ResultFrame() const;
    };
    template <> struct consume<Windows::Media::Core::IFaceDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectionEffect
    {
        WINRT_IMPL_AUTO(void) Enabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
        WINRT_IMPL_AUTO(void) DesiredDetectionInterval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) DesiredDetectionInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) FaceDetected(Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const& handler) const;
        using FaceDetected_revoker = impl::event_revoker<Windows::Media::Core::IFaceDetectionEffect, &impl::abi_t<Windows::Media::Core::IFaceDetectionEffect>::remove_FaceDetected>;
        [[nodiscard]] FaceDetected_revoker FaceDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FaceDetected(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Media::Core::IFaceDetectionEffect>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectionEffectDefinition
    {
        WINRT_IMPL_AUTO(void) DetectionMode(Windows::Media::Core::FaceDetectionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::FaceDetectionMode) DetectionMode() const;
        WINRT_IMPL_AUTO(void) SynchronousDetectionEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SynchronousDetectionEnabled() const;
    };
    template <> struct consume<Windows::Media::Core::IFaceDetectionEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectionEffectFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace>) DetectedFaces() const;
    };
    template <> struct consume<Windows::Media::Core::IFaceDetectionEffectFrame>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffectFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IHighDynamicRangeControl
    {
        WINRT_IMPL_AUTO(void) Enabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
    };
    template <> struct consume<Windows::Media::Core::IHighDynamicRangeControl>
    {
        template <typename D> using type = consume_Windows_Media_Core_IHighDynamicRangeControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IHighDynamicRangeOutput
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Certainty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController>) FrameControllers() const;
    };
    template <> struct consume<Windows::Media::Core::IHighDynamicRangeOutput>
    {
        template <typename D> using type = consume_Windows_Media_Core_IHighDynamicRangeOutput<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IImageCue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextPoint) Position() const;
        WINRT_IMPL_AUTO(void) Position(Windows::Media::Core::TimedTextPoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSize) Extent() const;
        WINRT_IMPL_AUTO(void) Extent(Windows::Media::Core::TimedTextSize const& value) const;
        WINRT_IMPL_AUTO(void) SoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::SoftwareBitmap) SoftwareBitmap() const;
    };
    template <> struct consume<Windows::Media::Core::IImageCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IImageCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSource) Source() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStream) RandomAccessStream() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ILowLightFusionResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::SoftwareBitmap) Frame() const;
    };
    template <> struct consume<Windows::Media::Core::ILowLightFusionResult>
    {
        template <typename D> using type = consume_Windows_Media_Core_ILowLightFusionResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ILowLightFusionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>) SupportedBitmapPixelFormats() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxSupportedFrameCount() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double>) FuseAsync(param::async_iterable<Windows::Graphics::Imaging::SoftwareBitmap> const& frameSet) const;
    };
    template <> struct consume<Windows::Media::Core::ILowLightFusionStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_ILowLightFusionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBinder
    {
        WINRT_IMPL_AUTO(winrt::event_token) Binding(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const& handler) const;
        using Binding_revoker = impl::event_revoker<Windows::Media::Core::IMediaBinder, &impl::abi_t<Windows::Media::Core::IMediaBinder>::remove_Binding>;
        [[nodiscard]] Binding_revoker Binding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Binding(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Token() const;
        WINRT_IMPL_AUTO(void) Token(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) Source() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaBinder>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBinder<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBindingEventArgs
    {
        WINRT_IMPL_AUTO(winrt::event_token) Canceled(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const& handler) const;
        using Canceled_revoker = impl::event_revoker<Windows::Media::Core::IMediaBindingEventArgs, &impl::abi_t<Windows::Media::Core::IMediaBindingEventArgs>::remove_Canceled>;
        [[nodiscard]] Canceled_revoker Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Canceled(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaBinder) MediaBinder() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
        WINRT_IMPL_AUTO(void) SetUri(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(void) SetStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const;
        WINRT_IMPL_AUTO(void) SetStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaBindingEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBindingEventArgs2
    {
        WINRT_IMPL_AUTO(void) SetAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const;
        WINRT_IMPL_AUTO(void) SetStorageFile(Windows::Storage::IStorageFile const& file) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaBindingEventArgs2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBindingEventArgs3
    {
        WINRT_IMPL_AUTO(void) SetDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaBindingEventArgs3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaCue
    {
        WINRT_IMPL_AUTO(void) StartTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) StartTime() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) Id(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaCueEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::IMediaCue) Cue() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaCueEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaCueEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource
    {
    };
    template <> struct consume<Windows::Media::Core::IMediaSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource2
    {
        WINRT_IMPL_AUTO(winrt::event_token) OpenOperationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const;
        using OpenOperationCompleted_revoker = impl::event_revoker<Windows::Media::Core::IMediaSource2, &impl::abi_t<Windows::Media::Core::IMediaSource2>::remove_OpenOperationCompleted>;
        [[nodiscard]] OpenOperationCompleted_revoker OpenOperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) OpenOperationCompleted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) CustomProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Duration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOpen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource>) ExternalTimedTextSources() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack>) ExternalTimedMetadataTracks() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSource2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource3
    {
        WINRT_IMPL_AUTO(winrt::event_token) StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Media::Core::IMediaSource3, &impl::abi_t<Windows::Media::Core::IMediaSource3>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceState) State() const;
        WINRT_IMPL_AUTO(void) Reset() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSource3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource) AdaptiveMediaSource() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSource) MediaStreamSource() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MseStreamSource) MseStreamSource() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Uri() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) OpenAsync() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSource4>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::BackgroundTransfer::DownloadOperation) DownloadOperation() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSource5>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceAppServiceConnection
    {
        WINRT_IMPL_AUTO(winrt::event_token) InitializeMediaStreamSourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const;
        using InitializeMediaStreamSourceRequested_revoker = impl::event_revoker<Windows::Media::Core::IMediaSourceAppServiceConnection, &impl::abi_t<Windows::Media::Core::IMediaSourceAppServiceConnection>::remove_InitializeMediaStreamSourceRequested>;
        [[nodiscard]] InitializeMediaStreamSourceRequested_revoker InitializeMediaStreamSourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) InitializeMediaStreamSourceRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Start() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceAppServiceConnection>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceAppServiceConnection) Create(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceError
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceError>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceError<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceError) Error() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceState) OldState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceState) NewState() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromMediaStreamSource(Windows::Media::Core::MediaStreamSource const& mediaSource) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromMseStreamSource(Windows::Media::Core::MseStreamSource const& mediaSource) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromIMediaSource(Windows::Media::Core::IMediaSource const& mediaSource) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromStorageFile(Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromUri(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics2
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromMediaBinder(Windows::Media::Core::MediaBinder const& binder) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics3
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromMediaFrameSource(Windows::Media::Capture::Frames::MediaFrameSource const& frameSource) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceStatics3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics4
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaSource) CreateFromDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaSourceStatics4>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSelected() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Language(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamDescriptor2
    {
        WINRT_IMPL_AUTO(void) Label(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Label() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamDescriptor2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSample
    {
        WINRT_IMPL_AUTO(winrt::event_token) Processed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const& handler) const;
        using Processed_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSample, &impl::abi_t<Windows::Media::Core::IMediaStreamSample>::remove_Processed>;
        [[nodiscard]] Processed_revoker Processed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Processed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::Buffer) Buffer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSamplePropertySet) ExtendedProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSampleProtectionProperties) Protection() const;
        WINRT_IMPL_AUTO(void) DecodeTimestamp(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) DecodeTimestamp() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) KeyFrame(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) KeyFrame() const;
        WINRT_IMPL_AUTO(void) Discontinuous(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Discontinuous() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSample>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSample<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSample2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface) Direct3D11Surface() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSample2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSample2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties
    {
        WINRT_IMPL_AUTO(void) SetKeyIdentifier(array_view<uint8_t const> value) const;
        WINRT_IMPL_AUTO(void) GetKeyIdentifier(com_array<uint8_t>& value) const;
        WINRT_IMPL_AUTO(void) SetInitializationVector(array_view<uint8_t const> value) const;
        WINRT_IMPL_AUTO(void) GetInitializationVector(com_array<uint8_t>& value) const;
        WINRT_IMPL_AUTO(void) SetSubSampleMapping(array_view<uint8_t const> value) const;
        WINRT_IMPL_AUTO(void) GetSubSampleMapping(com_array<uint8_t>& value) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSampleProtectionProperties>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSampleStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSample) CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Foundation::TimeSpan const& timestamp) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample>) CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, uint32_t count, Windows::Foundation::TimeSpan const& timestamp) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSampleStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSampleStatics2
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSample) CreateFromDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& timestamp) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSampleStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Starting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const;
        using Starting_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Starting>;
        [[nodiscard]] Starting_revoker Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Starting(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Paused(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        using Paused_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Paused>;
        [[nodiscard]] Paused_revoker Paused(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Paused(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SampleRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const;
        using SampleRequested_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_SampleRequested>;
        [[nodiscard]] SampleRequested_revoker SampleRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SampleRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SwitchStreamsRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const;
        using SwitchStreamsRequested_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_SwitchStreamsRequested>;
        [[nodiscard]] SwitchStreamsRequested_revoker SwitchStreamsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SwitchStreamsRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) NotifyError(Windows::Media::Core::MediaStreamSourceErrorStatus const& errorStatus) const;
        WINRT_IMPL_AUTO(void) AddStreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const;
        WINRT_IMPL_AUTO(void) MediaProtectionManager(Windows::Media::Protection::MediaProtectionManager const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Protection::MediaProtectionManager) MediaProtectionManager() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Duration() const;
        WINRT_IMPL_AUTO(void) CanSeek(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSeek() const;
        WINRT_IMPL_AUTO(void) BufferTime(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) BufferTime() const;
        WINRT_IMPL_AUTO(void) SetBufferedRange(Windows::Foundation::TimeSpan const& startOffset, Windows::Foundation::TimeSpan const& endOffset) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::FileProperties::MusicProperties) MusicProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::FileProperties::VideoProperties) VideoProperties() const;
        WINRT_IMPL_AUTO(void) Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Thumbnail() const;
        WINRT_IMPL_AUTO(void) AddProtectionKey(Windows::Media::Core::IMediaStreamDescriptor const& streamDescriptor, array_view<uint8_t const> keyIdentifier, array_view<uint8_t const> licenseData) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource2
    {
        WINRT_IMPL_AUTO(winrt::event_token) SampleRendered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const;
        using SampleRendered_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource2, &impl::abi_t<Windows::Media::Core::IMediaStreamSource2>::remove_SampleRendered>;
        [[nodiscard]] SampleRendered_revoker SampleRendered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SampleRendered(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSource2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource3
    {
        WINRT_IMPL_AUTO(void) MaxSupportedPlaybackRate(Windows::Foundation::IReference<double> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) MaxSupportedPlaybackRate() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSource3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource4
    {
        WINRT_IMPL_AUTO(void) IsLive(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsLive() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSource4>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceClosedRequest) Request() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceClosedRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceClosedReason) Reason() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceClosedRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceClosedRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSource) CreateFromDescriptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSource) CreateFromDescriptors(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Core::IMediaStreamDescriptor const& descriptor2) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) SampleLag() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::IMediaStreamDescriptor) StreamDescriptor() const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceSampleRequestDeferral) GetDeferral() const;
        WINRT_IMPL_AUTO(void) Sample(Windows::Media::Core::MediaStreamSample const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSample) Sample() const;
        WINRT_IMPL_AUTO(void) ReportSampleProgress(uint32_t progress) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceSampleRequest) Request() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceStartingRequest) Request() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceStartingRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) StartPosition() const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceStartingRequestDeferral) GetDeferral() const;
        WINRT_IMPL_AUTO(void) SetActualStartPosition(Windows::Foundation::TimeSpan const& position) const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceStartingRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::IMediaStreamDescriptor) OldStreamDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::IMediaStreamDescriptor) NewStreamDescriptor() const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest) Request() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaTrack
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaTrackKind) TrackKind() const;
        WINRT_IMPL_AUTO(void) Label(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Label() const;
    };
    template <> struct consume<Windows::Media::Core::IMediaTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseSourceBuffer
    {
        WINRT_IMPL_AUTO(winrt::event_token) UpdateStarting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        using UpdateStarting_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_UpdateStarting>;
        [[nodiscard]] UpdateStarting_revoker UpdateStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) UpdateStarting(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Updated(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Updated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) UpdateEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        using UpdateEnded_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_UpdateEnded>;
        [[nodiscard]] UpdateEnded_revoker UpdateEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) UpdateEnded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        using ErrorOccurred_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_ErrorOccurred>;
        [[nodiscard]] ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ErrorOccurred(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Aborted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        using Aborted_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_Aborted>;
        [[nodiscard]] Aborted_revoker Aborted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Aborted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MseAppendMode) Mode() const;
        WINRT_IMPL_AUTO(void) Mode(Windows::Media::Core::MseAppendMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsUpdating() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange>) Buffered() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) TimestampOffset() const;
        WINRT_IMPL_AUTO(void) TimestampOffset(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) AppendWindowStart() const;
        WINRT_IMPL_AUTO(void) AppendWindowStart(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) AppendWindowEnd() const;
        WINRT_IMPL_AUTO(void) AppendWindowEnd(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        WINRT_IMPL_AUTO(void) AppendBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
        WINRT_IMPL_AUTO(void) AppendStream(Windows::Storage::Streams::IInputStream const& stream) const;
        WINRT_IMPL_AUTO(void) AppendStream(Windows::Storage::Streams::IInputStream const& stream, uint64_t maxSize) const;
        WINRT_IMPL_AUTO(void) Abort() const;
        WINRT_IMPL_AUTO(void) Remove(Windows::Foundation::TimeSpan const& start, Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& end) const;
    };
    template <> struct consume<Windows::Media::Core::IMseSourceBuffer>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseSourceBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseSourceBufferList
    {
        WINRT_IMPL_AUTO(winrt::event_token) SourceBufferAdded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
        using SourceBufferAdded_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBufferList, &impl::abi_t<Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferAdded>;
        [[nodiscard]] SourceBufferAdded_revoker SourceBufferAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceBufferAdded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceBufferRemoved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
        using SourceBufferRemoved_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBufferList, &impl::abi_t<Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferRemoved>;
        [[nodiscard]] SourceBufferRemoved_revoker SourceBufferRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceBufferRemoved(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer>) Buffers() const;
    };
    template <> struct consume<Windows::Media::Core::IMseSourceBufferList>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseSourceBufferList<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseStreamSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) Opened(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        using Opened_revoker = impl::event_revoker<Windows::Media::Core::IMseStreamSource, &impl::abi_t<Windows::Media::Core::IMseStreamSource>::remove_Opened>;
        [[nodiscard]] Opened_revoker Opened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Opened(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Ended(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        using Ended_revoker = impl::event_revoker<Windows::Media::Core::IMseStreamSource, &impl::abi_t<Windows::Media::Core::IMseStreamSource>::remove_Ended>;
        [[nodiscard]] Ended_revoker Ended(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Ended(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Media::Core::IMseStreamSource, &impl::abi_t<Windows::Media::Core::IMseStreamSource>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MseSourceBufferList) SourceBuffers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MseSourceBufferList) ActiveSourceBuffers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MseReadyState) ReadyState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::MseSourceBuffer) AddSourceBuffer(param::hstring const& mimeType) const;
        WINRT_IMPL_AUTO(void) RemoveSourceBuffer(Windows::Media::Core::MseSourceBuffer const& buffer) const;
        WINRT_IMPL_AUTO(void) EndOfStream(Windows::Media::Core::MseEndOfStreamStatus const& status) const;
    };
    template <> struct consume<Windows::Media::Core::IMseStreamSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseStreamSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseStreamSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange>) LiveSeekableRange() const;
        WINRT_IMPL_AUTO(void) LiveSeekableRange(Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange> const& value) const;
    };
    template <> struct consume<Windows::Media::Core::IMseStreamSource2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseStreamSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseStreamSourceStatics
    {
        WINRT_IMPL_AUTO(bool) IsContentTypeSupported(param::hstring const& contentType) const;
    };
    template <> struct consume<Windows::Media::Core::IMseStreamSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseStreamSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalysisEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::HighDynamicRangeControl) HighDynamicRangeAnalyzer() const;
        WINRT_IMPL_AUTO(void) DesiredAnalysisInterval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) DesiredAnalysisInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) SceneAnalyzed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const;
        using SceneAnalyzed_revoker = impl::event_revoker<Windows::Media::Core::ISceneAnalysisEffect, &impl::abi_t<Windows::Media::Core::ISceneAnalysisEffect>::remove_SceneAnalyzed>;
        [[nodiscard]] SceneAnalyzed_revoker SceneAnalyzed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SceneAnalyzed(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Media::Core::ISceneAnalysisEffect>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalysisEffectFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Capture::CapturedFrameControlValues) FrameControlValues() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::HighDynamicRangeOutput) HighDynamicRange() const;
    };
    template <> struct consume<Windows::Media::Core::ISceneAnalysisEffectFrame>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffectFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalysisEffectFrame2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::SceneAnalysisRecommendation) AnalysisRecommendation() const;
    };
    template <> struct consume<Windows::Media::Core::ISceneAnalysisEffectFrame2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffectFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalyzedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::SceneAnalysisEffectFrame) ResultFrame() const;
    };
    template <> struct consume<Windows::Media::Core::ISceneAnalyzedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalyzedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISingleSelectMediaTrackList
    {
        WINRT_IMPL_AUTO(winrt::event_token) SelectedIndexChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const& handler) const;
        using SelectedIndexChanged_revoker = impl::event_revoker<Windows::Media::Core::ISingleSelectMediaTrackList, &impl::abi_t<Windows::Media::Core::ISingleSelectMediaTrackList>::remove_SelectedIndexChanged>;
        [[nodiscard]] SelectedIndexChanged_revoker SelectedIndexChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SelectedIndexChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) SelectedIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) SelectedIndex() const;
    };
    template <> struct consume<Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISpeechCue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        WINRT_IMPL_AUTO(void) Text(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) StartPositionInInput() const;
        WINRT_IMPL_AUTO(void) StartPositionInInput(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) EndPositionInInput() const;
        WINRT_IMPL_AUTO(void) EndPositionInInput(Windows::Foundation::IReference<int32_t> const& value) const;
    };
    template <> struct consume<Windows::Media::Core::ISpeechCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISpeechCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataStreamDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::TimedMetadataEncodingProperties) EncodingProperties() const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataStreamDescriptor) Copy() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataStreamDescriptor) Create(Windows::Media::MediaProperties::TimedMetadataEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrack
    {
        WINRT_IMPL_AUTO(winrt::event_token) CueEntered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        using CueEntered_revoker = impl::event_revoker<Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_CueEntered>;
        [[nodiscard]] CueEntered_revoker CueEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CueEntered(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CueExited(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        using CueExited_revoker = impl::event_revoker<Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_CueExited>;
        [[nodiscard]] CueExited_revoker CueExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CueExited(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TrackFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const;
        using TrackFailed_revoker = impl::event_revoker<Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_TrackFailed>;
        [[nodiscard]] TrackFailed_revoker TrackFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TrackFailed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue>) Cues() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue>) ActiveCues() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataKind) TimedMetadataKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DispatchType() const;
        WINRT_IMPL_AUTO(void) AddCue(Windows::Media::Core::IMediaCue const& cue) const;
        WINRT_IMPL_AUTO(void) RemoveCue(Windows::Media::Core::IMediaCue const& cue) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrack2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Playback::MediaPlaybackItem) PlaybackItem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataTrack2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrack2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackError
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataTrackErrorCode) ErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataTrackError>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackError<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataTrack) Create(param::hstring const& id, param::hstring const& language, Windows::Media::Core::TimedMetadataKind const& kind) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataTrackFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataTrackError) Error() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>) TimedMetadataTracks() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextCue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextRegion) CueRegion() const;
        WINRT_IMPL_AUTO(void) CueRegion(Windows::Media::Core::TimedTextRegion const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextStyle) CueStyle() const;
        WINRT_IMPL_AUTO(void) CueStyle(Windows::Media::Core::TimedTextStyle const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine>) Lines() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextLine
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        WINRT_IMPL_AUTO(void) Text(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat>) Subformats() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextLine>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextLine<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextRegion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextPoint) Position() const;
        WINRT_IMPL_AUTO(void) Position(Windows::Media::Core::TimedTextPoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSize) Extent() const;
        WINRT_IMPL_AUTO(void) Extent(Windows::Media::Core::TimedTextSize const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Background() const;
        WINRT_IMPL_AUTO(void) Background(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextWritingMode) WritingMode() const;
        WINRT_IMPL_AUTO(void) WritingMode(Windows::Media::Core::TimedTextWritingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextDisplayAlignment) DisplayAlignment() const;
        WINRT_IMPL_AUTO(void) DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextDouble) LineHeight() const;
        WINRT_IMPL_AUTO(void) LineHeight(Windows::Media::Core::TimedTextDouble const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOverflowClipped() const;
        WINRT_IMPL_AUTO(void) IsOverflowClipped(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextPadding) Padding() const;
        WINRT_IMPL_AUTO(void) Padding(Windows::Media::Core::TimedTextPadding const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextWrapping) TextWrapping() const;
        WINRT_IMPL_AUTO(void) TextWrapping(Windows::Media::Core::TimedTextWrapping const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZIndex() const;
        WINRT_IMPL_AUTO(void) ZIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextScrollMode) ScrollMode() const;
        WINRT_IMPL_AUTO(void) ScrollMode(Windows::Media::Core::TimedTextScrollMode const& value) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextRegion>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextRegion<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) Resolved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const;
        using Resolved_revoker = impl::event_revoker<Windows::Media::Core::ITimedTextSource, &impl::abi_t<Windows::Media::Core::ITimedTextSource>::remove_Resolved>;
        [[nodiscard]] Resolved_revoker Resolved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Resolved(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedMetadataTrackError) Error() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>) Tracks() const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSourceStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromUri(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromUri(Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSourceStatics2
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage) const;
        WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextSource) CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextSourceStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextStyle
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FontFamily() const;
        WINRT_IMPL_AUTO(void) FontFamily(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextDouble) FontSize() const;
        WINRT_IMPL_AUTO(void) FontSize(Windows::Media::Core::TimedTextDouble const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextWeight) FontWeight() const;
        WINRT_IMPL_AUTO(void) FontWeight(Windows::Media::Core::TimedTextWeight const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Foreground() const;
        WINRT_IMPL_AUTO(void) Foreground(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Background() const;
        WINRT_IMPL_AUTO(void) Background(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBackgroundAlwaysShown() const;
        WINRT_IMPL_AUTO(void) IsBackgroundAlwaysShown(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextFlowDirection) FlowDirection() const;
        WINRT_IMPL_AUTO(void) FlowDirection(Windows::Media::Core::TimedTextFlowDirection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextLineAlignment) LineAlignment() const;
        WINRT_IMPL_AUTO(void) LineAlignment(Windows::Media::Core::TimedTextLineAlignment const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) OutlineColor() const;
        WINRT_IMPL_AUTO(void) OutlineColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextDouble) OutlineThickness() const;
        WINRT_IMPL_AUTO(void) OutlineThickness(Windows::Media::Core::TimedTextDouble const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextDouble) OutlineRadius() const;
        WINRT_IMPL_AUTO(void) OutlineRadius(Windows::Media::Core::TimedTextDouble const& value) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextStyle>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextStyle2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextFontStyle) FontStyle() const;
        WINRT_IMPL_AUTO(void) FontStyle(Windows::Media::Core::TimedTextFontStyle const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsUnderlineEnabled() const;
        WINRT_IMPL_AUTO(void) IsUnderlineEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsLineThroughEnabled() const;
        WINRT_IMPL_AUTO(void) IsLineThroughEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOverlineEnabled() const;
        WINRT_IMPL_AUTO(void) IsOverlineEnabled(bool value) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextStyle2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSubformat
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) StartIndex() const;
        WINRT_IMPL_AUTO(void) StartIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Length() const;
        WINRT_IMPL_AUTO(void) Length(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::TimedTextStyle) SubformatStyle() const;
        WINRT_IMPL_AUTO(void) SubformatStyle(Windows::Media::Core::TimedTextStyle const& value) const;
    };
    template <> struct consume<Windows::Media::Core::ITimedTextSubformat>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSubformat<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStabilizationEffect
    {
        WINRT_IMPL_AUTO(void) Enabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
        WINRT_IMPL_AUTO(winrt::event_token) EnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const;
        using EnabledChanged_revoker = impl::event_revoker<Windows::Media::Core::IVideoStabilizationEffect, &impl::abi_t<Windows::Media::Core::IVideoStabilizationEffect>::remove_EnabledChanged>;
        [[nodiscard]] EnabledChanged_revoker EnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) EnabledChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(Windows::Media::Capture::VideoStreamConfiguration) GetRecommendedStreamConfiguration(Windows::Media::Devices::VideoDeviceController const& controller, Windows::Media::MediaProperties::VideoEncodingProperties const& desiredProperties) const;
    };
    template <> struct consume<Windows::Media::Core::IVideoStabilizationEffect>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStabilizationEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason) Reason() const;
    };
    template <> struct consume<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStreamDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::VideoEncodingProperties) EncodingProperties() const;
    };
    template <> struct consume<Windows::Media::Core::IVideoStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStreamDescriptor2
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::VideoStreamDescriptor) Copy() const;
    };
    template <> struct consume<Windows::Media::Core::IVideoStreamDescriptor2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStreamDescriptorFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Core::VideoStreamDescriptor) Create(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<Windows::Media::Core::IVideoStreamDescriptorFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoTrack
    {
        WINRT_IMPL_AUTO(winrt::event_token) OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const;
        using OpenFailed_revoker = impl::event_revoker<Windows::Media::Core::IVideoTrack, &impl::abi_t<Windows::Media::Core::IVideoTrack>::remove_OpenFailed>;
        [[nodiscard]] OpenFailed_revoker OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) OpenFailed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Media::MediaProperties::VideoEncodingProperties) GetEncodingProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Playback::MediaPlaybackItem) PlaybackItem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::VideoTrackSupportInfo) SupportInfo() const;
    };
    template <> struct consume<Windows::Media::Core::IVideoTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoTrackSupportInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaDecoderStatus) DecoderStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Core::MediaSourceStatus) MediaSourceStatus() const;
    };
    template <> struct consume<Windows::Media::Core::IVideoTrackSupportInfo>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoTrackSupportInfo<D>;
    };
    struct struct_Windows_Media_Core_MseTimeRange
    {
        int64_t Start;
        int64_t End;
    };
    template <> struct abi<Windows::Media::Core::MseTimeRange>
    {
        using type = struct_Windows_Media_Core_MseTimeRange;
    };
    struct struct_Windows_Media_Core_TimedTextDouble
    {
        double Value;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextDouble>
    {
        using type = struct_Windows_Media_Core_TimedTextDouble;
    };
    struct struct_Windows_Media_Core_TimedTextPadding
    {
        double Before;
        double After;
        double Start;
        double End;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextPadding>
    {
        using type = struct_Windows_Media_Core_TimedTextPadding;
    };
    struct struct_Windows_Media_Core_TimedTextPoint
    {
        double X;
        double Y;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextPoint>
    {
        using type = struct_Windows_Media_Core_TimedTextPoint;
    };
    struct struct_Windows_Media_Core_TimedTextSize
    {
        double Height;
        double Width;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextSize>
    {
        using type = struct_Windows_Media_Core_TimedTextSize;
    };
}
#endif
