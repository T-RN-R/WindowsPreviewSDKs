// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_SpeechSynthesis_0_H
#define WINRT_Windows_Media_SpeechSynthesis_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct IMediaMarker;
}
WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis
{
    enum class SpeechAppendedSilence : int32_t
    {
        Default = 0,
        Min = 1,
    };
    enum class SpeechPunctuationSilence : int32_t
    {
        Default = 0,
        Min = 1,
    };
    enum class VoiceGender : int32_t
    {
        Male = 0,
        Female = 1,
    };
    struct IInstalledVoicesStatic;
    struct IInstalledVoicesStatic2;
    struct ISpeechSynthesisStream;
    struct ISpeechSynthesizer;
    struct ISpeechSynthesizer2;
    struct ISpeechSynthesizerOptions;
    struct ISpeechSynthesizerOptions2;
    struct ISpeechSynthesizerOptions3;
    struct IVoiceInformation;
    struct SpeechSynthesisStream;
    struct SpeechSynthesizer;
    struct SpeechSynthesizerOptions;
    struct VoiceInformation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::IVoiceInformation>{ using type = interface_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>{ using type = class_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::SpeechSynthesizer>{ using type = class_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions>{ using type = class_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::VoiceInformation>{ using type = class_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::SpeechAppendedSilence>{ using type = enum_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::SpeechPunctuationSilence>{ using type = enum_category; };
    template <> struct category<Windows::Media::SpeechSynthesis::VoiceGender>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> = L"Windows.Media.SpeechSynthesis.SpeechSynthesisStream";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::SpeechSynthesizer> = L"Windows.Media.SpeechSynthesis.SpeechSynthesizer";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions> = L"Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::VoiceInformation> = L"Windows.Media.SpeechSynthesis.VoiceInformation";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::SpeechAppendedSilence> = L"Windows.Media.SpeechSynthesis.SpeechAppendedSilence";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::SpeechPunctuationSilence> = L"Windows.Media.SpeechSynthesis.SpeechPunctuationSilence";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::VoiceGender> = L"Windows.Media.SpeechSynthesis.VoiceGender";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2> = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> = L"Windows.Media.SpeechSynthesis.ISpeechSynthesisStream";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizer> = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer2";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2> = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3> = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions3";
    template <> inline constexpr auto& name_v<Windows::Media::SpeechSynthesis::IVoiceInformation> = L"Windows.Media.SpeechSynthesis.IVoiceInformation";
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>{ 0x7D526ECC,0x7533,0x4C3F,{ 0x85,0xBE,0x88,0x8C,0x2B,0xAE,0xEB,0xDC } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>{ 0x64255F2E,0x358D,0x4058,{ 0xBE,0x9A,0xFD,0x3F,0xCB,0x42,0x35,0x30 } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>{ 0x83E46E93,0x244C,0x4622,{ 0xBA,0x0B,0x62,0x29,0xC4,0xD0,0xD6,0x5D } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>{ 0xCE9F7C76,0x97F4,0x4CED,{ 0xAD,0x68,0xD5,0x1C,0x45,0x8E,0x45,0xC6 } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>{ 0xA7C5ECB2,0x4339,0x4D6A,{ 0xBB,0xF8,0xC7,0xA4,0xF1,0x54,0x4C,0x2E } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>{ 0xA0E23871,0xCC3D,0x43C9,{ 0x91,0xB1,0xEE,0x18,0x53,0x24,0xD8,0x3D } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>{ 0x1CBEF60E,0x119C,0x4BED,{ 0xB1,0x18,0xD2,0x50,0xC3,0xA2,0x57,0x93 } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>{ 0x401ED877,0x902C,0x4814,{ 0xA5,0x82,0xA5,0xD0,0xC0,0x76,0x9F,0xA8 } };
    template <> inline constexpr guid guid_v<Windows::Media::SpeechSynthesis::IVoiceInformation>{ 0xB127D6A4,0x1291,0x4604,{ 0xAA,0x9C,0x83,0x13,0x40,0x83,0x35,0x2C } };
    template <> struct default_interface<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>{ using type = Windows::Media::SpeechSynthesis::ISpeechSynthesisStream; };
    template <> struct default_interface<Windows::Media::SpeechSynthesis::SpeechSynthesizer>{ using type = Windows::Media::SpeechSynthesis::ISpeechSynthesizer; };
    template <> struct default_interface<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions>{ using type = Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions; };
    template <> struct default_interface<Windows::Media::SpeechSynthesis::VoiceInformation>{ using type = Windows::Media::SpeechSynthesis::IVoiceInformation; };
    template <> struct abi<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllVoices(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultVoice(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TrySetDefaultVoiceAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Markers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SynthesizeTextToStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SynthesizeSsmlToStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall put_Voice(void*) noexcept = 0;
            virtual int32_t __stdcall get_Voice(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IncludeWordBoundaryMetadata(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeWordBoundaryMetadata(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncludeSentenceBoundaryMetadata(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeSentenceBoundaryMetadata(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioVolume(double*) noexcept = 0;
            virtual int32_t __stdcall put_AudioVolume(double) noexcept = 0;
            virtual int32_t __stdcall get_SpeakingRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_SpeakingRate(double) noexcept = 0;
            virtual int32_t __stdcall get_AudioPitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_AudioPitch(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppendedSilence(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AppendedSilence(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PunctuationSilence(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PunctuationSilence(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Media::SpeechSynthesis::IVoiceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gender(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation>) AllVoices() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SpeechSynthesis::VoiceInformation) DefaultVoice() const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetDefaultVoiceAsync(Windows::Media::SpeechSynthesis::VoiceInformation const& voice) const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker>) Markers() const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>) SynthesizeTextToStreamAsync(param::hstring const& text) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>) SynthesizeSsmlToStreamAsync(param::hstring const& Ssml) const;
        WINRT_IMPL_AUTO(void) Voice(Windows::Media::SpeechSynthesis::VoiceInformation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SpeechSynthesis::VoiceInformation) Voice() const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions) Options() const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IncludeWordBoundaryMetadata() const;
        WINRT_IMPL_AUTO(void) IncludeWordBoundaryMetadata(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IncludeSentenceBoundaryMetadata() const;
        WINRT_IMPL_AUTO(void) IncludeSentenceBoundaryMetadata(bool value) const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) AudioVolume() const;
        WINRT_IMPL_AUTO(void) AudioVolume(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SpeakingRate() const;
        WINRT_IMPL_AUTO(void) SpeakingRate(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AudioPitch() const;
        WINRT_IMPL_AUTO(void) AudioPitch(double value) const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SpeechSynthesis::SpeechAppendedSilence) AppendedSilence() const;
        WINRT_IMPL_AUTO(void) AppendedSilence(Windows::Media::SpeechSynthesis::SpeechAppendedSilence const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SpeechSynthesis::SpeechPunctuationSilence) PunctuationSilence() const;
        WINRT_IMPL_AUTO(void) PunctuationSilence(Windows::Media::SpeechSynthesis::SpeechPunctuationSilence const& value) const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_SpeechSynthesis_IVoiceInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SpeechSynthesis::VoiceGender) Gender() const;
    };
    template <> struct consume<Windows::Media::SpeechSynthesis::IVoiceInformation>
    {
        template <typename D> using type = consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>;
    };
}
#endif
