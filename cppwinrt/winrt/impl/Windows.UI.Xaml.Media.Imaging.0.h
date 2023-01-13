// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_Imaging_0_H
#define WINRT_Windows_UI_Xaml_Media_Imaging_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background
{
    struct IBackgroundTaskInstance;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
    struct ExceptionRoutedEventHandler;
    struct RoutedEventHandler;
    struct UIElement;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging
{
    enum class BitmapCreateOptions : uint32_t
    {
        None = 0,
        IgnoreImageCache = 0x8,
    };
    enum class DecodePixelType : int32_t
    {
        Physical = 0,
        Logical = 1,
    };
    enum class SvgImageSourceLoadStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        InvalidFormat = 2,
        Other = 3,
    };
    struct IBitmapImage;
    struct IBitmapImage2;
    struct IBitmapImage3;
    struct IBitmapImageFactory;
    struct IBitmapImageStatics;
    struct IBitmapImageStatics2;
    struct IBitmapImageStatics3;
    struct IBitmapSource;
    struct IBitmapSourceFactory;
    struct IBitmapSourceStatics;
    struct IDownloadProgressEventArgs;
    struct IRenderTargetBitmap;
    struct IRenderTargetBitmapStatics;
    struct ISoftwareBitmapSource;
    struct ISurfaceImageSource;
    struct ISurfaceImageSourceFactory;
    struct ISvgImageSource;
    struct ISvgImageSourceFactory;
    struct ISvgImageSourceFailedEventArgs;
    struct ISvgImageSourceOpenedEventArgs;
    struct ISvgImageSourceStatics;
    struct IVirtualSurfaceImageSource;
    struct IVirtualSurfaceImageSourceFactory;
    struct IWriteableBitmap;
    struct IWriteableBitmapFactory;
    struct IXamlRenderingBackgroundTask;
    struct IXamlRenderingBackgroundTaskFactory;
    struct IXamlRenderingBackgroundTaskOverrides;
    struct BitmapImage;
    struct BitmapSource;
    struct DownloadProgressEventArgs;
    struct RenderTargetBitmap;
    struct SoftwareBitmapSource;
    struct SurfaceImageSource;
    struct SvgImageSource;
    struct SvgImageSourceFailedEventArgs;
    struct SvgImageSourceOpenedEventArgs;
    struct VirtualSurfaceImageSource;
    struct WriteableBitmap;
    struct XamlRenderingBackgroundTask;
    struct DownloadProgressEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::BitmapImage>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::BitmapSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::WriteableBitmap>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::DecodePixelType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::BitmapImage>{ L"Windows.UI.Xaml.Media.Imaging.BitmapImage" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::BitmapSource>{ L"Windows.UI.Xaml.Media.Imaging.BitmapSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs>{ L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap>{ L"Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource>{ L"Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource>{ L"Windows.UI.Xaml.Media.Imaging.SurfaceImageSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::SvgImageSource>{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs>{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs>{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource>{ L"Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::WriteableBitmap>{ L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask>{ L"Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions>{ L"Windows.UI.Xaml.Media.Imaging.BitmapCreateOptions" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::DecodePixelType>{ L"Windows.UI.Xaml.Media.Imaging.DecodePixelType" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceLoadStatus" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImage" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImage2" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImage3" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ L"Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ L"Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmap" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides" };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventHandler" };
#endif
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ 0x31AF3271,0xE3B4,0x442D,{ 0xA3,0x41,0x4C,0x02,0x26,0xB2,0x72,0x5B } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ 0x1069C1B6,0x8C9B,0x4762,{ 0xBE,0x3D,0x75,0x9F,0x56,0x98,0xF2,0xB3 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ 0xF1DE6F26,0x3C73,0x453F,{ 0xA7,0xBA,0x9B,0x85,0xC1,0x8B,0x37,0x33 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ 0xC9132978,0x4810,0x4E5E,{ 0x80,0x87,0x03,0x67,0x1E,0xE6,0x0D,0x85 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ 0x9E282143,0x70E8,0x437C,{ 0x9F,0xA4,0x2C,0xBF,0x29,0x5C,0xFF,0x84 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ 0xC5F5576A,0x75AF,0x41A4,{ 0xB8,0x93,0x8F,0xE9,0x1F,0xEE,0x28,0x82 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ 0x2B44E30D,0xF6D5,0x4411,{ 0xA8,0xCD,0xBF,0x76,0x03,0xC4,0xFA,0xA0 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ 0x23D86411,0x202F,0x41B2,{ 0x8C,0x5B,0xA8,0xA3,0xB3,0x33,0x80,0x0B } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ 0xE240420E,0xD4A7,0x49A4,{ 0xA0,0xB4,0xA5,0x9F,0xDD,0x77,0xE5,0x08 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ 0x9A9C9981,0x827B,0x4E51,{ 0x89,0x1B,0x8A,0x15,0xB5,0x11,0x84,0x2D } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ 0x7311E0D4,0xFE94,0x4E70,{ 0x9B,0x90,0xCD,0xD4,0x7A,0xC2,0x3A,0xFB } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ 0x500DEE81,0x893C,0x4C0A,{ 0x8F,0xEC,0x46,0x78,0xAC,0x71,0x75,0x89 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ 0xF0A1EFEE,0xC131,0x4D40,{ 0x9C,0x47,0xF7,0xD7,0xCF,0x2B,0x07,0x7F } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ 0xD2DD9ED0,0xD3C5,0x4056,{ 0x91,0xB5,0xB7,0xC1,0xD1,0xE8,0x13,0x0E } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ 0x62F7D416,0xC714,0x4C4C,{ 0x82,0x73,0xF8,0x39,0xBC,0x58,0x13,0x5C } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ 0x3AB2212A,0xEF65,0x4A5F,{ 0xBF,0xAC,0x73,0x99,0x3E,0x8C,0x12,0xC9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ 0x03E1CEC3,0x0CA8,0x4A4E,{ 0x8D,0x7C,0xC8,0x08,0xA0,0x83,0x85,0x86 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ 0xC794E9E7,0xCF23,0x4D72,{ 0xBF,0x1A,0xDF,0xAA,0x16,0xD8,0xEA,0x52 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ 0x68BB3170,0x3CCC,0x4035,{ 0xAC,0x01,0x98,0x34,0x54,0x3D,0x74,0x4E } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ 0x85EF4C16,0x748E,0x4008,{ 0x95,0xC7,0x6A,0x23,0xDD,0x73,0x16,0xDB } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ 0x9C6638CE,0xBED1,0x4AAB,{ 0xAC,0xBB,0xD3,0xE2,0x18,0x5D,0x31,0x5A } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ 0x4A711FEA,0xBFAC,0x11E0,{ 0xA0,0x6A,0x9D,0xE4,0x47,0x24,0x01,0x9B } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ 0x3AB2212A,0xBFAC,0x11E0,{ 0x8A,0x92,0x69,0xE4,0x47,0x24,0x01,0x9B } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ 0xBF0B7E6F,0xDF7C,0x4A85,{ 0x84,0x13,0xA1,0x21,0x62,0x85,0x83,0x5C } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ 0x5563EBB1,0x3EF2,0x42C5,{ 0x9C,0x6D,0x1C,0xF5,0xDC,0xC0,0x41,0xFF } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ 0x5D5FE9AA,0x533E,0x44B8,{ 0xA9,0x75,0xFC,0x5F,0x1E,0x3B,0xFF,0x52 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ 0xA3D1BB63,0x38F8,0x4DA3,{ 0x9F,0xCA,0xFD,0x81,0x28,0xA2,0xCB,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ 0x9C2A6997,0xA908,0x4711,{ 0xB4,0xB2,0xA9,0x60,0xDB,0x3D,0x8E,0x5A } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ 0x1ABAEE23,0x74EE,0x4CC7,{ 0x99,0xBA,0xB1,0x71,0xE3,0xCD,0xA6,0x1E } };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::BitmapImage>{ using type = Windows::UI::Xaml::Media::Imaging::IBitmapImage; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::BitmapSource>{ using type = Windows::UI::Xaml::Media::Imaging::IBitmapSource; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs>{ using type = Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap>{ using type = Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource>{ using type = Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource>{ using type = Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SvgImageSource>{ using type = Windows::UI::Xaml::Media::Imaging::ISvgImageSource; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs>{ using type = Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs>{ using type = Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource>{ using type = Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::WriteableBitmap>{ using type = Windows::UI::Xaml::Media::Imaging::IWriteableBitmap; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask>{ using type = Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask; };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CreateOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CreateOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_UriSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_UriSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_DecodePixelWidth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecodePixelWidth(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DecodePixelHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecodePixelHeight(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_DownloadProgress(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DownloadProgress(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ImageOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageOpened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ImageFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageFailed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecodePixelType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DecodePixelType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAnimatedBitmap(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaying(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AutoPlay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoPlay(bool) noexcept = 0;
            virtual int32_t __stdcall Play() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithUriSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CreateOptionsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_UriSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DecodePixelWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DecodePixelHeightProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecodePixelTypeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAnimatedBitmapProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPlayingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoPlayProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelWidth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetSourceAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PixelHeightProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Progress(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Progress(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelWidth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RenderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RenderToSizeAsync(void*, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetPixelsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PixelHeightProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetBitmapAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithDimensions(int32_t, int32_t, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDimensionsAndOpacity(int32_t, int32_t, bool, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UriSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_UriSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_RasterizePixelWidth(double*) noexcept = 0;
            virtual int32_t __stdcall put_RasterizePixelWidth(double) noexcept = 0;
            virtual int32_t __stdcall get_RasterizePixelHeight(double*) noexcept = 0;
            virtual int32_t __stdcall put_RasterizePixelHeight(double) noexcept = 0;
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_OpenFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SetSourceAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithUriSource(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UriSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RasterizePixelWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RasterizePixelHeightProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithDimensions(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDimensionsAndOpacity(int32_t, int32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelBuffer(void**) noexcept = 0;
            virtual int32_t __stdcall Invalidate() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithDimensions(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnRun(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage
    {
        [[nodiscard]] auto CreateOptions() const;
        auto CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions const& value) const;
        [[nodiscard]] auto UriSource() const;
        auto UriSource(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto DecodePixelWidth() const;
        auto DecodePixelWidth(int32_t value) const;
        [[nodiscard]] auto DecodePixelHeight() const;
        auto DecodePixelHeight(int32_t value) const;
        auto DownloadProgress(Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const& handler) const;
        using DownloadProgress_revoker = impl::event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage, &impl::abi_t<Windows::UI::Xaml::Media::Imaging::IBitmapImage>::remove_DownloadProgress>;
        [[nodiscard]] DownloadProgress_revoker DownloadProgress(auto_revoke_t, Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const& handler) const;
        auto DownloadProgress(winrt::event_token const& token) const noexcept;
        auto ImageOpened(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using ImageOpened_revoker = impl::event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage, &impl::abi_t<Windows::UI::Xaml::Media::Imaging::IBitmapImage>::remove_ImageOpened>;
        [[nodiscard]] ImageOpened_revoker ImageOpened(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        auto ImageOpened(winrt::event_token const& token) const noexcept;
        auto ImageFailed(Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const;
        using ImageFailed_revoker = impl::event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage, &impl::abi_t<Windows::UI::Xaml::Media::Imaging::IBitmapImage>::remove_ImageFailed>;
        [[nodiscard]] ImageFailed_revoker ImageFailed(auto_revoke_t, Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const;
        auto ImageFailed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImage>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage2
    {
        [[nodiscard]] auto DecodePixelType() const;
        auto DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3
    {
        [[nodiscard]] auto IsAnimatedBitmap() const;
        [[nodiscard]] auto IsPlaying() const;
        [[nodiscard]] auto AutoPlay() const;
        auto AutoPlay(bool value) const;
        auto Play() const;
        auto Stop() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory
    {
        auto CreateInstanceWithUriSource(Windows::Foundation::Uri const& uriSource) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics
    {
        [[nodiscard]] auto CreateOptionsProperty() const;
        [[nodiscard]] auto UriSourceProperty() const;
        [[nodiscard]] auto DecodePixelWidthProperty() const;
        [[nodiscard]] auto DecodePixelHeightProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2
    {
        [[nodiscard]] auto DecodePixelTypeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3
    {
        [[nodiscard]] auto IsAnimatedBitmapProperty() const;
        [[nodiscard]] auto IsPlayingProperty() const;
        [[nodiscard]] auto AutoPlayProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource
    {
        [[nodiscard]] auto PixelWidth() const;
        [[nodiscard]] auto PixelHeight() const;
        auto SetSource(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const;
        auto SetSourceAsync(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics
    {
        [[nodiscard]] auto PixelWidthProperty() const;
        [[nodiscard]] auto PixelHeightProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs
    {
        [[nodiscard]] auto Progress() const;
        auto Progress(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap
    {
        [[nodiscard]] auto PixelWidth() const;
        [[nodiscard]] auto PixelHeight() const;
        auto RenderAsync(Windows::UI::Xaml::UIElement const& element) const;
        auto RenderAsync(Windows::UI::Xaml::UIElement const& element, int32_t scaledWidth, int32_t scaledHeight) const;
        auto GetPixelsAsync() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics
    {
        [[nodiscard]] auto PixelWidthProperty() const;
        [[nodiscard]] auto PixelHeightProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource
    {
        auto SetBitmapAsync(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory
    {
        auto CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource
    {
        [[nodiscard]] auto UriSource() const;
        auto UriSource(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto RasterizePixelWidth() const;
        auto RasterizePixelWidth(double value) const;
        [[nodiscard]] auto RasterizePixelHeight() const;
        auto RasterizePixelHeight(double value) const;
        auto Opened(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const& handler) const;
        using Opened_revoker = impl::event_revoker<Windows::UI::Xaml::Media::Imaging::ISvgImageSource, &impl::abi_t<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>::remove_Opened>;
        [[nodiscard]] Opened_revoker Opened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const& handler) const;
        auto Opened(winrt::event_token const& token) const noexcept;
        auto OpenFailed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const& handler) const;
        using OpenFailed_revoker = impl::event_revoker<Windows::UI::Xaml::Media::Imaging::ISvgImageSource, &impl::abi_t<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>::remove_OpenFailed>;
        [[nodiscard]] OpenFailed_revoker OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const& handler) const;
        auto OpenFailed(winrt::event_token const& token) const noexcept;
        auto SetSourceAsync(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        auto CreateInstanceWithUriSource(Windows::Foundation::Uri const& uriSource, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics
    {
        [[nodiscard]] auto UriSourceProperty() const;
        [[nodiscard]] auto RasterizePixelWidthProperty() const;
        [[nodiscard]] auto RasterizePixelHeightProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory
    {
        auto CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const;
        auto CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap
    {
        [[nodiscard]] auto PixelBuffer() const;
        auto Invalidate() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory
    {
        auto CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides
    {
        auto OnRun(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides<D>;
    };
}
#endif
