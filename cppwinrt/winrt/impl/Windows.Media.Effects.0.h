// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Effects_0_H
#define WINRT_Windows_Media_Effects_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct AudioFrame;
    enum class AudioProcessing : int32_t;
    struct VideoFrame;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    enum class MediaCategory : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::Editing
{
    struct MediaOverlay;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    enum class MediaMirroringOptions : uint32_t;
    enum class MediaRotation : int32_t;
    enum class SphericalVideoFrameFormat : int32_t;
    struct VideoEncodingProperties;
}
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    enum class SphericalVideoProjectionMode : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::Render
{
    enum class AudioRenderCategory : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    enum class MediaVideoProcessingAlgorithm : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    enum class AudioEffectType : int32_t
    {
        Other = 0,
        AcousticEchoCancellation = 1,
        NoiseSuppression = 2,
        AutomaticGainControl = 3,
        BeamForming = 4,
        ConstantToneRemoval = 5,
        Equalizer = 6,
        LoudnessEqualizer = 7,
        BassBoost = 8,
        VirtualSurround = 9,
        VirtualHeadphones = 10,
        SpeakerFill = 11,
        RoomCorrection = 12,
        BassManagement = 13,
        EnvironmentalEffects = 14,
        SpeakerProtection = 15,
        SpeakerCompensation = 16,
        DynamicRangeCompression = 17,
    };
    enum class MediaEffectClosedReason : int32_t
    {
        Done = 0,
        UnknownError = 1,
        UnsupportedEncodingFormat = 2,
        EffectCurrentlyUnloaded = 3,
    };
    enum class MediaMemoryTypes : int32_t
    {
        Gpu = 0,
        Cpu = 1,
        GpuAndCpu = 2,
    };
    struct IAudioCaptureEffectsManager;
    struct IAudioEffect;
    struct IAudioEffectDefinition;
    struct IAudioEffectDefinitionFactory;
    struct IAudioEffectsManagerStatics;
    struct IAudioRenderEffectsManager;
    struct IAudioRenderEffectsManager2;
    struct IBasicAudioEffect;
    struct IBasicVideoEffect;
    struct ICompositeVideoFrameContext;
    struct IProcessAudioFrameContext;
    struct IProcessVideoFrameContext;
    struct IVideoCompositor;
    struct IVideoCompositorDefinition;
    struct IVideoCompositorDefinitionFactory;
    struct IVideoEffectDefinition;
    struct IVideoEffectDefinitionFactory;
    struct IVideoTransformEffectDefinition;
    struct IVideoTransformEffectDefinition2;
    struct IVideoTransformSphericalProjection;
    struct AudioCaptureEffectsManager;
    struct AudioEffect;
    struct AudioEffectDefinition;
    struct AudioEffectsManager;
    struct AudioRenderEffectsManager;
    struct CompositeVideoFrameContext;
    struct ProcessAudioFrameContext;
    struct ProcessVideoFrameContext;
    struct VideoCompositorDefinition;
    struct VideoEffectDefinition;
    struct VideoTransformEffectDefinition;
    struct VideoTransformSphericalProjection;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Effects::IAudioCaptureEffectsManager>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IAudioEffect>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IAudioEffectDefinition>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IAudioEffectDefinitionFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IAudioEffectsManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IAudioRenderEffectsManager>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IAudioRenderEffectsManager2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IBasicAudioEffect>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IBasicVideoEffect>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::ICompositeVideoFrameContext>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IProcessAudioFrameContext>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IProcessVideoFrameContext>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoCompositor>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoCompositorDefinition>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoCompositorDefinitionFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoEffectDefinition>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoEffectDefinitionFactory>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoTransformEffectDefinition>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoTransformEffectDefinition2>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::IVideoTransformSphericalProjection>{ using type = interface_category; };
    template <> struct category<Windows::Media::Effects::AudioCaptureEffectsManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::AudioEffect>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::AudioEffectDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::AudioEffectsManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::AudioRenderEffectsManager>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::CompositeVideoFrameContext>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::ProcessAudioFrameContext>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::ProcessVideoFrameContext>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::VideoCompositorDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::VideoEffectDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::VideoTransformEffectDefinition>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::VideoTransformSphericalProjection>{ using type = class_category; };
    template <> struct category<Windows::Media::Effects::AudioEffectType>{ using type = enum_category; };
    template <> struct category<Windows::Media::Effects::MediaEffectClosedReason>{ using type = enum_category; };
    template <> struct category<Windows::Media::Effects::MediaMemoryTypes>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Media::Effects::AudioCaptureEffectsManager> = L"Windows.Media.Effects.AudioCaptureEffectsManager";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::AudioEffect> = L"Windows.Media.Effects.AudioEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::AudioEffectDefinition> = L"Windows.Media.Effects.AudioEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::AudioEffectsManager> = L"Windows.Media.Effects.AudioEffectsManager";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::AudioRenderEffectsManager> = L"Windows.Media.Effects.AudioRenderEffectsManager";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::CompositeVideoFrameContext> = L"Windows.Media.Effects.CompositeVideoFrameContext";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::ProcessAudioFrameContext> = L"Windows.Media.Effects.ProcessAudioFrameContext";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::ProcessVideoFrameContext> = L"Windows.Media.Effects.ProcessVideoFrameContext";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::VideoCompositorDefinition> = L"Windows.Media.Effects.VideoCompositorDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::VideoEffectDefinition> = L"Windows.Media.Effects.VideoEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::VideoTransformEffectDefinition> = L"Windows.Media.Effects.VideoTransformEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::VideoTransformSphericalProjection> = L"Windows.Media.Effects.VideoTransformSphericalProjection";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::AudioEffectType> = L"Windows.Media.Effects.AudioEffectType";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::MediaEffectClosedReason> = L"Windows.Media.Effects.MediaEffectClosedReason";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::MediaMemoryTypes> = L"Windows.Media.Effects.MediaMemoryTypes";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioCaptureEffectsManager> = L"Windows.Media.Effects.IAudioCaptureEffectsManager";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioEffect> = L"Windows.Media.Effects.IAudioEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioEffectDefinition> = L"Windows.Media.Effects.IAudioEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioEffectDefinitionFactory> = L"Windows.Media.Effects.IAudioEffectDefinitionFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioEffectsManagerStatics> = L"Windows.Media.Effects.IAudioEffectsManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioRenderEffectsManager> = L"Windows.Media.Effects.IAudioRenderEffectsManager";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IAudioRenderEffectsManager2> = L"Windows.Media.Effects.IAudioRenderEffectsManager2";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IBasicAudioEffect> = L"Windows.Media.Effects.IBasicAudioEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IBasicVideoEffect> = L"Windows.Media.Effects.IBasicVideoEffect";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::ICompositeVideoFrameContext> = L"Windows.Media.Effects.ICompositeVideoFrameContext";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IProcessAudioFrameContext> = L"Windows.Media.Effects.IProcessAudioFrameContext";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IProcessVideoFrameContext> = L"Windows.Media.Effects.IProcessVideoFrameContext";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoCompositor> = L"Windows.Media.Effects.IVideoCompositor";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoCompositorDefinition> = L"Windows.Media.Effects.IVideoCompositorDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoCompositorDefinitionFactory> = L"Windows.Media.Effects.IVideoCompositorDefinitionFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoEffectDefinition> = L"Windows.Media.Effects.IVideoEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoEffectDefinitionFactory> = L"Windows.Media.Effects.IVideoEffectDefinitionFactory";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoTransformEffectDefinition> = L"Windows.Media.Effects.IVideoTransformEffectDefinition";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoTransformEffectDefinition2> = L"Windows.Media.Effects.IVideoTransformEffectDefinition2";
    template <> inline constexpr auto& name_v<Windows::Media::Effects::IVideoTransformSphericalProjection> = L"Windows.Media.Effects.IVideoTransformSphericalProjection";
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioCaptureEffectsManager>{ 0x8F85C271,0x038D,0x4393,{ 0x82,0x98,0x54,0x01,0x10,0x60,0x8E,0xEF } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioEffect>{ 0x34AAFA51,0x9207,0x4055,{ 0xBE,0x93,0x6E,0x57,0x34,0xA8,0x6A,0xE4 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioEffectDefinition>{ 0xE4D7F974,0x7D80,0x4F73,{ 0x90,0x89,0xE3,0x1C,0x9D,0xB9,0xC2,0x94 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioEffectDefinitionFactory>{ 0x8E1DA646,0xE705,0x45ED,{ 0x8A,0x2B,0xFC,0x4E,0x4F,0x40,0x5A,0x97 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioEffectsManagerStatics>{ 0x66406C04,0x86FA,0x47CC,{ 0xA3,0x15,0xF4,0x89,0xD8,0xC3,0xFE,0x10 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioRenderEffectsManager>{ 0x4DC98966,0x8751,0x42B2,{ 0xBF,0xCB,0x39,0xCA,0x78,0x64,0xBD,0x47 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IAudioRenderEffectsManager2>{ 0xA844CD09,0x5ECC,0x44B3,{ 0xBB,0x4E,0x1D,0xB0,0x72,0x87,0x13,0x9C } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IBasicAudioEffect>{ 0x8C062C53,0x6BC0,0x48B8,{ 0xA9,0x9A,0x4B,0x41,0x55,0x0F,0x13,0x59 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IBasicVideoEffect>{ 0x8262C7EF,0xB360,0x40BE,{ 0x94,0x9B,0x2F,0xF4,0x2F,0xF3,0x56,0x93 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::ICompositeVideoFrameContext>{ 0x6C30024B,0xF514,0x4278,{ 0xA5,0xF7,0xB9,0x18,0x80,0x49,0xD1,0x10 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IProcessAudioFrameContext>{ 0x4CD92946,0x1222,0x4A27,{ 0xA5,0x86,0xFB,0x3E,0x20,0x27,0x32,0x55 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IProcessVideoFrameContext>{ 0x276F0E2B,0x6461,0x401E,{ 0xBA,0x78,0x0F,0xDA,0xD6,0x11,0x4E,0xEC } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoCompositor>{ 0x8510B43E,0x420C,0x420F,{ 0x96,0xC7,0x7C,0x98,0xBB,0xA1,0xFC,0x55 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoCompositorDefinition>{ 0x7946B8D0,0x2010,0x4AE3,{ 0x9A,0xB2,0x2C,0xEF,0x42,0xED,0xD4,0xD2 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoCompositorDefinitionFactory>{ 0x4366FD10,0x68B8,0x4D52,{ 0x89,0xB6,0x02,0xA9,0x68,0xCC,0xA8,0x99 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoEffectDefinition>{ 0x39F38CF0,0x8D0F,0x4F3E,{ 0x84,0xFC,0x2D,0x46,0xA5,0x29,0x79,0x43 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoEffectDefinitionFactory>{ 0x81439B4E,0x6E33,0x428F,{ 0x9D,0x21,0xB5,0xAA,0xFE,0xF7,0x61,0x7C } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoTransformEffectDefinition>{ 0x9664BB6A,0x1EA6,0x4AA6,{ 0x80,0x74,0xAB,0xE8,0x85,0x1E,0xCA,0xE2 } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoTransformEffectDefinition2>{ 0xF0A8089F,0x66C8,0x4694,{ 0x9F,0xD9,0x11,0x36,0xAB,0xF7,0x44,0x4A } };
    template <> inline constexpr guid guid_v<Windows::Media::Effects::IVideoTransformSphericalProjection>{ 0xCF4401F0,0x9BF2,0x4C39,{ 0x9F,0x41,0xE0,0x22,0x51,0x4A,0x84,0x68 } };
    template <> struct default_interface<Windows::Media::Effects::AudioCaptureEffectsManager>{ using type = Windows::Media::Effects::IAudioCaptureEffectsManager; };
    template <> struct default_interface<Windows::Media::Effects::AudioEffect>{ using type = Windows::Media::Effects::IAudioEffect; };
    template <> struct default_interface<Windows::Media::Effects::AudioEffectDefinition>{ using type = Windows::Media::Effects::IAudioEffectDefinition; };
    template <> struct default_interface<Windows::Media::Effects::AudioRenderEffectsManager>{ using type = Windows::Media::Effects::IAudioRenderEffectsManager; };
    template <> struct default_interface<Windows::Media::Effects::CompositeVideoFrameContext>{ using type = Windows::Media::Effects::ICompositeVideoFrameContext; };
    template <> struct default_interface<Windows::Media::Effects::ProcessAudioFrameContext>{ using type = Windows::Media::Effects::IProcessAudioFrameContext; };
    template <> struct default_interface<Windows::Media::Effects::ProcessVideoFrameContext>{ using type = Windows::Media::Effects::IProcessVideoFrameContext; };
    template <> struct default_interface<Windows::Media::Effects::VideoCompositorDefinition>{ using type = Windows::Media::Effects::IVideoCompositorDefinition; };
    template <> struct default_interface<Windows::Media::Effects::VideoEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<Windows::Media::Effects::VideoTransformEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<Windows::Media::Effects::VideoTransformSphericalProjection>{ using type = Windows::Media::Effects::IVideoTransformSphericalProjection; };
    template <> struct abi<Windows::Media::Effects::IAudioCaptureEffectsManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AudioCaptureEffectsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioCaptureEffectsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetAudioCaptureEffects(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IAudioEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioEffectType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IAudioEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivatableClassId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IAudioEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithProperties(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IAudioEffectsManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAudioRenderEffectsManager(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioRenderEffectsManagerWithMode(void*, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioCaptureEffectsManager(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAudioCaptureEffectsManagerWithMode(void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IAudioRenderEffectsManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AudioRenderEffectsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioRenderEffectsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetAudioRenderEffects(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IAudioRenderEffectsManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectsProviderThumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall get_EffectsProviderSettingsLabel(void**) noexcept = 0;
            virtual int32_t __stdcall ShowSettingsUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IBasicAudioEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UseInputFrameForOutput(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall SetEncodingProperties(void*) noexcept = 0;
            virtual int32_t __stdcall ProcessFrame(void*) noexcept = 0;
            virtual int32_t __stdcall Close(int32_t) noexcept = 0;
            virtual int32_t __stdcall DiscardQueuedFrames() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IBasicVideoEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedMemoryTypes(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TimeIndependent(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall SetEncodingProperties(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ProcessFrame(void*) noexcept = 0;
            virtual int32_t __stdcall Close(int32_t) noexcept = 0;
            virtual int32_t __stdcall DiscardQueuedFrames() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::ICompositeVideoFrameContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SurfacesToOverlay(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputFrame(void**) noexcept = 0;
            virtual int32_t __stdcall GetOverlayForSurface(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IProcessAudioFrameContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IProcessVideoFrameContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoCompositor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TimeIndependent(bool*) noexcept = 0;
            virtual int32_t __stdcall SetEncodingProperties(void*, void*) noexcept = 0;
            virtual int32_t __stdcall CompositeFrame(void*) noexcept = 0;
            virtual int32_t __stdcall Close(int32_t) noexcept = 0;
            virtual int32_t __stdcall DiscardQueuedFrames() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoCompositorDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivatableClassId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoCompositorDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithProperties(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivatableClassId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoEffectDefinitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithProperties(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoTransformEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PaddingColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_PaddingColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_OutputSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_OutputSize(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_CropRectangle(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_CropRectangle(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Mirror(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mirror(uint32_t) noexcept = 0;
            virtual int32_t __stdcall put_ProcessingAlgorithm(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProcessingAlgorithm(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoTransformEffectDefinition2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SphericalProjection(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::Effects::IVideoTransformSphericalProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_FrameFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FrameFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProjectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalFieldOfViewInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalFieldOfViewInDegrees(double) noexcept = 0;
            virtual int32_t __stdcall get_ViewOrientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_ViewOrientation(Windows::Foundation::Numerics::quaternion) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioCaptureEffectsManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) AudioCaptureEffectsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const& handler) const;
        using AudioCaptureEffectsChanged_revoker = impl::event_revoker<Windows::Media::Effects::IAudioCaptureEffectsManager, &impl::abi_t<Windows::Media::Effects::IAudioCaptureEffectsManager>::remove_AudioCaptureEffectsChanged>;
        [[nodiscard]] AudioCaptureEffectsChanged_revoker AudioCaptureEffectsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AudioCaptureEffectsChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect>) GetAudioCaptureEffects() const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioCaptureEffectsManager>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Effects::AudioEffectType) AudioEffectType() const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioEffect>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioEffectDefinition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ActivatableClassId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) Properties() const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioEffectDefinitionFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Effects::AudioEffectDefinition) Create(param::hstring const& activatableClassId) const;
        WINRT_IMPL_AUTO(Windows::Media::Effects::AudioEffectDefinition) CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioEffectsManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Media::Effects::AudioRenderEffectsManager) CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category) const;
        WINRT_IMPL_AUTO(Windows::Media::Effects::AudioRenderEffectsManager) CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode) const;
        WINRT_IMPL_AUTO(Windows::Media::Effects::AudioCaptureEffectsManager) CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category) const;
        WINRT_IMPL_AUTO(Windows::Media::Effects::AudioCaptureEffectsManager) CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode) const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioEffectsManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioRenderEffectsManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) AudioRenderEffectsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const& handler) const;
        using AudioRenderEffectsChanged_revoker = impl::event_revoker<Windows::Media::Effects::IAudioRenderEffectsManager, &impl::abi_t<Windows::Media::Effects::IAudioRenderEffectsManager>::remove_AudioRenderEffectsChanged>;
        [[nodiscard]] AudioRenderEffectsChanged_revoker AudioRenderEffectsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AudioRenderEffectsChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect>) GetAudioRenderEffects() const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioRenderEffectsManager>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IAudioRenderEffectsManager2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamWithContentType) EffectsProviderThumbnail() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EffectsProviderSettingsLabel() const;
        WINRT_IMPL_AUTO(void) ShowSettingsUI() const;
    };
    template <> struct consume<Windows::Media::Effects::IAudioRenderEffectsManager2>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IBasicAudioEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) UseInputFrameForOutput() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::AudioEncodingProperties>) SupportedEncodingProperties() const;
        WINRT_IMPL_AUTO(void) SetEncodingProperties(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
        WINRT_IMPL_AUTO(void) ProcessFrame(Windows::Media::Effects::ProcessAudioFrameContext const& context) const;
        WINRT_IMPL_AUTO(void) Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const;
        WINRT_IMPL_AUTO(void) DiscardQueuedFrames() const;
    };
    template <> struct consume<Windows::Media::Effects::IBasicAudioEffect>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IBasicAudioEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IBasicVideoEffect
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReadOnly() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Effects::MediaMemoryTypes) SupportedMemoryTypes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TimeIndependent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::VideoEncodingProperties>) SupportedEncodingProperties() const;
        WINRT_IMPL_AUTO(void) SetEncodingProperties(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const;
        WINRT_IMPL_AUTO(void) ProcessFrame(Windows::Media::Effects::ProcessVideoFrameContext const& context) const;
        WINRT_IMPL_AUTO(void) Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const;
        WINRT_IMPL_AUTO(void) DiscardQueuedFrames() const;
    };
    template <> struct consume<Windows::Media::Effects::IBasicVideoEffect>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IBasicVideoEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_ICompositeVideoFrameContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>) SurfacesToOverlay() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) BackgroundFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) OutputFrame() const;
        WINRT_IMPL_AUTO(Windows::Media::Editing::MediaOverlay) GetOverlayForSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surfaceToOverlay) const;
    };
    template <> struct consume<Windows::Media::Effects::ICompositeVideoFrameContext>
    {
        template <typename D> using type = consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IProcessAudioFrameContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::AudioFrame) InputFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::AudioFrame) OutputFrame() const;
    };
    template <> struct consume<Windows::Media::Effects::IProcessAudioFrameContext>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IProcessAudioFrameContext<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IProcessVideoFrameContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) InputFrame() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) OutputFrame() const;
    };
    template <> struct consume<Windows::Media::Effects::IProcessVideoFrameContext>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IProcessVideoFrameContext<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoCompositor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TimeIndependent() const;
        WINRT_IMPL_AUTO(void) SetEncodingProperties(Windows::Media::MediaProperties::VideoEncodingProperties const& backgroundProperties, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const;
        WINRT_IMPL_AUTO(void) CompositeFrame(Windows::Media::Effects::CompositeVideoFrameContext const& context) const;
        WINRT_IMPL_AUTO(void) Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const;
        WINRT_IMPL_AUTO(void) DiscardQueuedFrames() const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoCompositor>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoCompositor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoCompositorDefinition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ActivatableClassId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) Properties() const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoCompositorDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoCompositorDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoCompositorDefinitionFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Effects::VideoCompositorDefinition) Create(param::hstring const& activatableClassId) const;
        WINRT_IMPL_AUTO(Windows::Media::Effects::VideoCompositorDefinition) CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoCompositorDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoCompositorDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoEffectDefinition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ActivatableClassId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) Properties() const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoEffectDefinitionFactory
    {
        WINRT_IMPL_AUTO(Windows::Media::Effects::VideoEffectDefinition) Create(param::hstring const& activatableClassId) const;
        WINRT_IMPL_AUTO(Windows::Media::Effects::VideoEffectDefinition) CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoEffectDefinitionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoEffectDefinitionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoTransformEffectDefinition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PaddingColor() const;
        WINRT_IMPL_AUTO(void) PaddingColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) OutputSize() const;
        WINRT_IMPL_AUTO(void) OutputSize(Windows::Foundation::Size const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) CropRectangle() const;
        WINRT_IMPL_AUTO(void) CropRectangle(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::MediaRotation) Rotation() const;
        WINRT_IMPL_AUTO(void) Rotation(Windows::Media::MediaProperties::MediaRotation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::MediaMirroringOptions) Mirror() const;
        WINRT_IMPL_AUTO(void) Mirror(Windows::Media::MediaProperties::MediaMirroringOptions const& value) const;
        WINRT_IMPL_AUTO(void) ProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm) ProcessingAlgorithm() const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoTransformEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoTransformEffectDefinition2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Effects::VideoTransformSphericalProjection) SphericalProjection() const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoTransformEffectDefinition2>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoTransformEffectDefinition2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Effects_IVideoTransformSphericalProjection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::SphericalVideoFrameFormat) FrameFormat() const;
        WINRT_IMPL_AUTO(void) FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Playback::SphericalVideoProjectionMode) ProjectionMode() const;
        WINRT_IMPL_AUTO(void) ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalFieldOfViewInDegrees() const;
        WINRT_IMPL_AUTO(void) HorizontalFieldOfViewInDegrees(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::quaternion) ViewOrientation() const;
        WINRT_IMPL_AUTO(void) ViewOrientation(Windows::Foundation::Numerics::quaternion const& value) const;
    };
    template <> struct consume<Windows::Media::Effects::IVideoTransformSphericalProjection>
    {
        template <typename D> using type = consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>;
    };
}
#endif
