// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_MediaProperties_2_H
#define WINRT_Windows_Media_MediaProperties_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct __declspec(empty_bases) AudioEncodingProperties : Windows::Media::MediaProperties::IAudioEncodingProperties,
        impl::require<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData, Windows::Media::MediaProperties::IAudioEncodingProperties2, Windows::Media::MediaProperties::IAudioEncodingProperties3>
    {
        AudioEncodingProperties(std::nullptr_t) noexcept {}
        AudioEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IAudioEncodingProperties(ptr, take_ownership_from_abi) {}
        AudioEncodingProperties();
        static auto CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static auto CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static auto CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static auto CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample);
        static auto CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static auto CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample);
        static auto CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample);
    };
    struct __declspec(empty_bases) ContainerEncodingProperties : Windows::Media::MediaProperties::IContainerEncodingProperties,
        impl::require<ContainerEncodingProperties, Windows::Media::MediaProperties::IContainerEncodingProperties2>
    {
        ContainerEncodingProperties(std::nullptr_t) noexcept {}
        ContainerEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IContainerEncodingProperties(ptr, take_ownership_from_abi) {}
        ContainerEncodingProperties();
    };
    struct H264ProfileIds
    {
        H264ProfileIds() = delete;
        [[nodiscard]] static auto ConstrainedBaseline();
        [[nodiscard]] static auto Baseline();
        [[nodiscard]] static auto Extended();
        [[nodiscard]] static auto Main();
        [[nodiscard]] static auto High();
        [[nodiscard]] static auto High10();
        [[nodiscard]] static auto High422();
        [[nodiscard]] static auto High444();
        [[nodiscard]] static auto StereoHigh();
        [[nodiscard]] static auto MultiviewHigh();
    };
    struct __declspec(empty_bases) ImageEncodingProperties : Windows::Media::MediaProperties::IImageEncodingProperties,
        impl::require<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingProperties2>
    {
        ImageEncodingProperties(std::nullptr_t) noexcept {}
        ImageEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IImageEncodingProperties(ptr, take_ownership_from_abi) {}
        ImageEncodingProperties();
        static auto CreateJpeg();
        static auto CreatePng();
        static auto CreateJpegXR();
        static auto CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat const& format);
        static auto CreateBmp();
        static auto CreateHeif();
    };
    struct __declspec(empty_bases) MediaEncodingProfile : Windows::Media::MediaProperties::IMediaEncodingProfile,
        impl::require<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfile2, Windows::Media::MediaProperties::IMediaEncodingProfile3>
    {
        MediaEncodingProfile(std::nullptr_t) noexcept {}
        MediaEncodingProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IMediaEncodingProfile(ptr, take_ownership_from_abi) {}
        MediaEncodingProfile();
        static auto CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static auto CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static auto CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static auto CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
        static auto CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
        static auto CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
        static auto CreateFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream);
        static auto CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static auto CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
        static auto CreateAlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static auto CreateFlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static auto CreateHevc(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
    };
    struct MediaEncodingSubtypes
    {
        MediaEncodingSubtypes() = delete;
        [[nodiscard]] static auto Aac();
        [[nodiscard]] static auto AacAdts();
        [[nodiscard]] static auto Ac3();
        [[nodiscard]] static auto AmrNb();
        [[nodiscard]] static auto AmrWb();
        [[nodiscard]] static auto Argb32();
        [[nodiscard]] static auto Asf();
        [[nodiscard]] static auto Avi();
        [[nodiscard]] static auto Bgra8();
        [[nodiscard]] static auto Bmp();
        [[nodiscard]] static auto Eac3();
        [[nodiscard]] static auto Float();
        [[nodiscard]] static auto Gif();
        [[nodiscard]] static auto H263();
        [[nodiscard]] static auto H264();
        [[nodiscard]] static auto H264Es();
        [[nodiscard]] static auto Hevc();
        [[nodiscard]] static auto HevcEs();
        [[nodiscard]] static auto Iyuv();
        [[nodiscard]] static auto Jpeg();
        [[nodiscard]] static auto JpegXr();
        [[nodiscard]] static auto Mjpg();
        [[nodiscard]] static auto Mpeg();
        [[nodiscard]] static auto Mpeg1();
        [[nodiscard]] static auto Mpeg2();
        [[nodiscard]] static auto Mp3();
        [[nodiscard]] static auto Mpeg4();
        [[nodiscard]] static auto Nv12();
        [[nodiscard]] static auto Pcm();
        [[nodiscard]] static auto Png();
        [[nodiscard]] static auto Rgb24();
        [[nodiscard]] static auto Rgb32();
        [[nodiscard]] static auto Tiff();
        [[nodiscard]] static auto Wave();
        [[nodiscard]] static auto Wma8();
        [[nodiscard]] static auto Wma9();
        [[nodiscard]] static auto Wmv3();
        [[nodiscard]] static auto Wvc1();
        [[nodiscard]] static auto Yuy2();
        [[nodiscard]] static auto Yv12();
        [[nodiscard]] static auto Vp9();
        [[nodiscard]] static auto L8();
        [[nodiscard]] static auto L16();
        [[nodiscard]] static auto D16();
        [[nodiscard]] static auto Alac();
        [[nodiscard]] static auto Flac();
        [[nodiscard]] static auto P010();
        [[nodiscard]] static auto Heif();
        [[nodiscard]] static auto Pgs();
        [[nodiscard]] static auto Srt();
        [[nodiscard]] static auto Ssa();
        [[nodiscard]] static auto VobSub();
    };
    struct __declspec(empty_bases) MediaPropertySet : Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>
    {
        MediaPropertySet(std::nullptr_t) noexcept {}
        MediaPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>(ptr, take_ownership_from_abi) {}
        MediaPropertySet();
    };
    struct __declspec(empty_bases) MediaRatio : Windows::Media::MediaProperties::IMediaRatio
    {
        MediaRatio(std::nullptr_t) noexcept {}
        MediaRatio(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IMediaRatio(ptr, take_ownership_from_abi) {}
    };
    struct Mpeg2ProfileIds
    {
        Mpeg2ProfileIds() = delete;
        [[nodiscard]] static auto Simple();
        [[nodiscard]] static auto Main();
        [[nodiscard]] static auto SignalNoiseRatioScalable();
        [[nodiscard]] static auto SpatiallyScalable();
        [[nodiscard]] static auto High();
    };
    struct __declspec(empty_bases) TimedMetadataEncodingProperties : Windows::Media::MediaProperties::IMediaEncodingProperties,
        impl::require<TimedMetadataEncodingProperties, Windows::Media::MediaProperties::ITimedMetadataEncodingProperties>
    {
        TimedMetadataEncodingProperties(std::nullptr_t) noexcept {}
        TimedMetadataEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IMediaEncodingProperties(ptr, take_ownership_from_abi) {}
        TimedMetadataEncodingProperties();
        static auto CreatePgs();
        static auto CreateSrt();
        static auto CreateSsa(array_view<uint8_t const> formatUserData);
        static auto CreateVobSub(array_view<uint8_t const> formatUserData);
    };
    struct __declspec(empty_bases) VideoEncodingProperties : Windows::Media::MediaProperties::IVideoEncodingProperties,
        impl::require<VideoEncodingProperties, Windows::Media::MediaProperties::IVideoEncodingProperties2, Windows::Media::MediaProperties::IVideoEncodingProperties3, Windows::Media::MediaProperties::IVideoEncodingProperties4, Windows::Media::MediaProperties::IVideoEncodingProperties5>
    {
        VideoEncodingProperties(std::nullptr_t) noexcept {}
        VideoEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IVideoEncodingProperties(ptr, take_ownership_from_abi) {}
        VideoEncodingProperties();
        static auto CreateH264();
        static auto CreateMpeg2();
        static auto CreateUncompressed(param::hstring const& subtype, uint32_t width, uint32_t height);
        static auto CreateHevc();
    };
}
#endif
