// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Custom_0_H
#define WINRT_Windows_Devices_Custom_0_H
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Custom
{
    enum class DeviceAccessMode : int32_t
    {
        Read = 0,
        Write = 1,
        ReadWrite = 2,
    };
    enum class DeviceSharingMode : int32_t
    {
        Shared = 0,
        Exclusive = 1,
    };
    enum class IOControlAccessMode : int32_t
    {
        Any = 0,
        Read = 1,
        Write = 2,
        ReadWrite = 3,
    };
    enum class IOControlBufferingMethod : int32_t
    {
        Buffered = 0,
        DirectInput = 1,
        DirectOutput = 2,
        Neither = 3,
    };
    struct ICustomDevice;
    struct ICustomDeviceStatics;
    struct IIOControlCode;
    struct IIOControlCodeFactory;
    struct IKnownDeviceTypesStatics;
    struct CustomDevice;
    struct IOControlCode;
    struct KnownDeviceTypes;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Custom::ICustomDevice>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Custom::ICustomDeviceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Custom::IIOControlCode>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Custom::IIOControlCodeFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Custom::CustomDevice>{ using type = class_category; };
    template <> struct category<Windows::Devices::Custom::IOControlCode>{ using type = class_category; };
    template <> struct category<Windows::Devices::Custom::KnownDeviceTypes>{ using type = class_category; };
    template <> struct category<Windows::Devices::Custom::DeviceAccessMode>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Custom::DeviceSharingMode>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Custom::IOControlAccessMode>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Custom::IOControlBufferingMethod>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::CustomDevice>{ L"Windows.Devices.Custom.CustomDevice" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::IOControlCode>{ L"Windows.Devices.Custom.IOControlCode" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::KnownDeviceTypes>{ L"Windows.Devices.Custom.KnownDeviceTypes" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::DeviceAccessMode>{ L"Windows.Devices.Custom.DeviceAccessMode" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::DeviceSharingMode>{ L"Windows.Devices.Custom.DeviceSharingMode" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::IOControlAccessMode>{ L"Windows.Devices.Custom.IOControlAccessMode" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::IOControlBufferingMethod>{ L"Windows.Devices.Custom.IOControlBufferingMethod" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::ICustomDevice>{ L"Windows.Devices.Custom.ICustomDevice" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::ICustomDeviceStatics>{ L"Windows.Devices.Custom.ICustomDeviceStatics" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::IIOControlCode>{ L"Windows.Devices.Custom.IIOControlCode" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::IIOControlCodeFactory>{ L"Windows.Devices.Custom.IIOControlCodeFactory" };
    template <> inline constexpr auto& name_v<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ L"Windows.Devices.Custom.IKnownDeviceTypesStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::Devices::Custom::ICustomDevice>{ 0xDD30251F,0xC48B,0x43BD,{ 0xBC,0xB1,0xDE,0xC8,0x8F,0x15,0x14,0x3E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Custom::ICustomDeviceStatics>{ 0xC8220312,0xEF4C,0x46B1,{ 0xA5,0x8E,0xEE,0xB3,0x08,0xDC,0x89,0x17 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Custom::IIOControlCode>{ 0x0E9559E7,0x60C8,0x4375,{ 0xA7,0x61,0x7F,0x88,0x08,0x06,0x6C,0x60 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Custom::IIOControlCodeFactory>{ 0x856A7CF0,0x4C11,0x44AE,{ 0xAF,0xC6,0xB8,0xD4,0xA2,0x12,0x78,0x8F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ 0xEE5479C2,0x5448,0x45DA,{ 0xAD,0x1B,0x24,0x94,0x8C,0x23,0x90,0x94 } };
    template <> struct default_interface<Windows::Devices::Custom::CustomDevice>{ using type = Windows::Devices::Custom::ICustomDevice; };
    template <> struct default_interface<Windows::Devices::Custom::IOControlCode>{ using type = Windows::Devices::Custom::IIOControlCode; };
    template <> struct abi<Windows::Devices::Custom::ICustomDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall SendIOControlAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySendIOControlAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Custom::ICustomDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Custom::IIOControlCode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccessMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BufferingMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Function(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceType(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ControlCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Custom::IIOControlCodeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateIOControlCode(uint16_t, uint16_t, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Custom::IKnownDeviceTypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unknown(uint16_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Custom_ICustomDevice
    {
        [[nodiscard]] auto InputStream() const;
        [[nodiscard]] auto OutputStream() const;
        auto SendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const;
        auto TrySendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const;
    };
    template <> struct consume<Windows::Devices::Custom::ICustomDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Custom_ICustomDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Custom_ICustomDeviceStatics
    {
        auto GetDeviceSelector(winrt::guid const& classGuid) const;
        auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode) const;
    };
    template <> struct consume<Windows::Devices::Custom::ICustomDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Custom_ICustomDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Custom_IIOControlCode
    {
        [[nodiscard]] auto AccessMode() const;
        [[nodiscard]] auto BufferingMethod() const;
        [[nodiscard]] auto Function() const;
        [[nodiscard]] auto DeviceType() const;
        [[nodiscard]] auto ControlCode() const;
    };
    template <> struct consume<Windows::Devices::Custom::IIOControlCode>
    {
        template <typename D> using type = consume_Windows_Devices_Custom_IIOControlCode<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Custom_IIOControlCodeFactory
    {
        auto CreateIOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod) const;
    };
    template <> struct consume<Windows::Devices::Custom::IIOControlCodeFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Custom_IIOControlCodeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Custom_IKnownDeviceTypesStatics
    {
        [[nodiscard]] auto Unknown() const;
    };
    template <> struct consume<Windows::Devices::Custom::IKnownDeviceTypesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Custom_IKnownDeviceTypesStatics<D>;
    };
}
#endif
