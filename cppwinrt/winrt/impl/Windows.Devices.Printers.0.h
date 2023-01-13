// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Printers_0_H
#define WINRT_Windows_Devices_Printers_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct IPrint3DDevice;
    struct IPrint3DDeviceStatics;
    struct IPrintSchema;
    struct Print3DDevice;
    struct PrintSchema;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Printers::IPrint3DDevice>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::IPrint3DDeviceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::IPrintSchema>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Print3DDevice>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::PrintSchema>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Print3DDevice> = L"Windows.Devices.Printers.Print3DDevice";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::PrintSchema> = L"Windows.Devices.Printers.PrintSchema";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::IPrint3DDevice> = L"Windows.Devices.Printers.IPrint3DDevice";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::IPrint3DDeviceStatics> = L"Windows.Devices.Printers.IPrint3DDeviceStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::IPrintSchema> = L"Windows.Devices.Printers.IPrintSchema";
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::IPrint3DDevice>{ 0x041C3D19,0x9713,0x42A2,{ 0x98,0x13,0x7D,0xC3,0x33,0x74,0x28,0xD3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::IPrint3DDeviceStatics>{ 0xFDE3620A,0x67CD,0x41B7,{ 0xA3,0x44,0x51,0x50,0xA1,0xFD,0x75,0xB5 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::IPrintSchema>{ 0xC2B98316,0x26B8,0x4BFB,{ 0x81,0x38,0x9F,0x96,0x2C,0x22,0xA3,0x5B } };
    template <> struct default_interface<Windows::Devices::Printers::Print3DDevice>{ using type = Windows::Devices::Printers::IPrint3DDevice; };
    template <> struct default_interface<Windows::Devices::Printers::PrintSchema>{ using type = Windows::Devices::Printers::IPrintSchema; };
    template <> struct abi<Windows::Devices::Printers::IPrint3DDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintSchema(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::IPrintSchema>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultPrintTicketAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCapabilitiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MergeAndValidateWithDefaultPrintTicketAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrint3DDevice
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Printers::PrintSchema) PrintSchema() const;
    };
    template <> struct consume<Windows::Devices::Printers::IPrint3DDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrint3DDeviceStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Printers::Print3DDevice>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrintSchema
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>) GetDefaultPrintTicketAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>) GetCapabilitiesAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>) MergeAndValidateWithDefaultPrintTicketAsync(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const;
    };
    template <> struct consume<Windows::Devices::Printers::IPrintSchema>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrintSchema<D>;
    };
}
#endif
