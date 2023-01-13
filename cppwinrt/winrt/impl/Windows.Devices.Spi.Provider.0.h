// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Spi_Provider_0_H
#define WINRT_Windows_Devices_Spi_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider
{
    enum class ProviderSpiMode : int32_t
    {
        Mode0 = 0,
        Mode1 = 1,
        Mode2 = 2,
        Mode3 = 3,
    };
    enum class ProviderSpiSharingMode : int32_t
    {
        Exclusive = 0,
        Shared = 1,
    };
    struct IProviderSpiConnectionSettings;
    struct IProviderSpiConnectionSettingsFactory;
    struct ISpiControllerProvider;
    struct ISpiDeviceProvider;
    struct ISpiProvider;
    struct ProviderSpiConnectionSettings;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Spi::Provider::ISpiControllerProvider>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Spi::Provider::ISpiDeviceProvider>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Spi::Provider::ISpiProvider>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings>{ using type = class_category; };
    template <> struct category<Windows::Devices::Spi::Provider::ProviderSpiMode>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Spi::Provider::ProviderSpiSharingMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings> = L"Windows.Devices.Spi.Provider.ProviderSpiConnectionSettings";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::ProviderSpiMode> = L"Windows.Devices.Spi.Provider.ProviderSpiMode";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::ProviderSpiSharingMode> = L"Windows.Devices.Spi.Provider.ProviderSpiSharingMode";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings> = L"Windows.Devices.Spi.Provider.IProviderSpiConnectionSettings";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory> = L"Windows.Devices.Spi.Provider.IProviderSpiConnectionSettingsFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::ISpiControllerProvider> = L"Windows.Devices.Spi.Provider.ISpiControllerProvider";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::ISpiDeviceProvider> = L"Windows.Devices.Spi.Provider.ISpiDeviceProvider";
    template <> inline constexpr auto& name_v<Windows::Devices::Spi::Provider::ISpiProvider> = L"Windows.Devices.Spi.Provider.ISpiProvider";
    template <> inline constexpr guid guid_v<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>{ 0xF6034550,0xA542,0x4EC0,{ 0x96,0x01,0xA4,0xDD,0x68,0xF8,0x69,0x7B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>{ 0x66456B5A,0x0C79,0x43E3,{ 0x9F,0x3C,0xE5,0x97,0x80,0xAC,0x18,0xFA } };
    template <> inline constexpr guid guid_v<Windows::Devices::Spi::Provider::ISpiControllerProvider>{ 0xC1686504,0x02CE,0x4226,{ 0xA3,0x85,0x4F,0x11,0xFB,0x04,0xB4,0x1B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Spi::Provider::ISpiDeviceProvider>{ 0x0D1C3443,0x304B,0x405C,{ 0xB4,0xF7,0xF5,0xAB,0x10,0x74,0x46,0x1E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Spi::Provider::ISpiProvider>{ 0x96B461E2,0x77D4,0x48CE,{ 0xAA,0xA0,0x75,0x71,0x5A,0x83,0x62,0xCF } };
    template <> struct default_interface<Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings>{ using type = Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings; };
    template <> struct abi<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChipSelectLine(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ChipSelectLine(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DataBitLength(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataBitLength(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ClockFrequency(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClockFrequency(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SharingMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::Provider::ISpiControllerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceProvider(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::Provider::ISpiDeviceProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionSettings(void**) noexcept = 0;
            virtual int32_t __stdcall Write(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall Read(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall TransferSequential(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall TransferFullDuplex(uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Spi::Provider::ISpiProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ChipSelectLine() const;
        WINRT_IMPL_AUTO(void) ChipSelectLine(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Spi::Provider::ProviderSpiMode) Mode() const;
        WINRT_IMPL_AUTO(void) Mode(Windows::Devices::Spi::Provider::ProviderSpiMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) DataBitLength() const;
        WINRT_IMPL_AUTO(void) DataBitLength(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ClockFrequency() const;
        WINRT_IMPL_AUTO(void) ClockFrequency(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Spi::Provider::ProviderSpiSharingMode) SharingMode() const;
        WINRT_IMPL_AUTO(void) SharingMode(Windows::Devices::Spi::Provider::ProviderSpiSharingMode const& value) const;
    };
    template <> struct consume<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettings>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettingsFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings) Create(int32_t chipSelectLine) const;
    };
    template <> struct consume<Windows::Devices::Spi::Provider::IProviderSpiConnectionSettingsFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettingsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_ISpiControllerProvider
    {
        WINRT_IMPL_AUTO(Windows::Devices::Spi::Provider::ISpiDeviceProvider) GetDeviceProvider(Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings const& settings) const;
    };
    template <> struct consume<Windows::Devices::Spi::Provider::ISpiControllerProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_ISpiControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Spi::Provider::ProviderSpiConnectionSettings) ConnectionSettings() const;
        WINRT_IMPL_AUTO(void) Write(array_view<uint8_t const> buffer) const;
        WINRT_IMPL_AUTO(void) Read(array_view<uint8_t> buffer) const;
        WINRT_IMPL_AUTO(void) TransferSequential(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
        WINRT_IMPL_AUTO(void) TransferFullDuplex(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    };
    template <> struct consume<Windows::Devices::Spi::Provider::ISpiDeviceProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_ISpiDeviceProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Spi_Provider_ISpiProvider
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::Provider::ISpiControllerProvider>>) GetControllersAsync() const;
    };
    template <> struct consume<Windows::Devices::Spi::Provider::ISpiProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Spi_Provider_ISpiProvider<D>;
    };
}
#endif
