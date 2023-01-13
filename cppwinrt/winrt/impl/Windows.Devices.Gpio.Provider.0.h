// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Gpio_Provider_0_H
#define WINRT_Windows_Devices_Gpio_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider
{
    enum class ProviderGpioPinDriveMode : int32_t
    {
        Input = 0,
        Output = 1,
        InputPullUp = 2,
        InputPullDown = 3,
        OutputOpenDrain = 4,
        OutputOpenDrainPullUp = 5,
        OutputOpenSource = 6,
        OutputOpenSourcePullDown = 7,
    };
    enum class ProviderGpioPinEdge : int32_t
    {
        FallingEdge = 0,
        RisingEdge = 1,
    };
    enum class ProviderGpioPinValue : int32_t
    {
        Low = 0,
        High = 1,
    };
    enum class ProviderGpioSharingMode : int32_t
    {
        Exclusive = 0,
        SharedReadOnly = 1,
    };
    struct IGpioControllerProvider;
    struct IGpioPinProvider;
    struct IGpioPinProviderValueChangedEventArgs;
    struct IGpioPinProviderValueChangedEventArgsFactory;
    struct IGpioProvider;
    struct GpioPinProviderValueChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::IGpioProvider>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioPinValue>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>{ L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>{ L"Windows.Devices.Gpio.Provider.ProviderGpioPinDriveMode" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>{ L"Windows.Devices.Gpio.Provider.ProviderGpioPinEdge" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::ProviderGpioPinValue>{ L"Windows.Devices.Gpio.Provider.ProviderGpioPinValue" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>{ L"Windows.Devices.Gpio.Provider.ProviderGpioSharingMode" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ L"Windows.Devices.Gpio.Provider.IGpioControllerProvider" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ L"Windows.Devices.Gpio.Provider.IGpioPinProvider" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory" };
    template <> inline constexpr auto& name_v<Windows::Devices::Gpio::Provider::IGpioProvider>{ L"Windows.Devices.Gpio.Provider.IGpioProvider" };
#endif
    template <> inline constexpr guid guid_v<Windows::Devices::Gpio::Provider::IGpioControllerProvider>{ 0xAD11CEC7,0x19EA,0x4B21,{ 0x87,0x4F,0xB9,0x1A,0xED,0x4A,0x25,0xDB } };
    template <> inline constexpr guid guid_v<Windows::Devices::Gpio::Provider::IGpioPinProvider>{ 0x42344CB7,0x6ABC,0x40FF,{ 0x9C,0xE7,0x73,0xB8,0x53,0x01,0xB9,0x00 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>{ 0x32A6D6F2,0x3D5B,0x44CD,{ 0x8F,0xBE,0x13,0xA6,0x9F,0x2E,0xDB,0x24 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>{ 0x3ECB0B59,0x568C,0x4392,{ 0xB2,0x4A,0x8A,0x59,0xA9,0x02,0xB1,0xF1 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Gpio::Provider::IGpioProvider>{ 0x44E82707,0x08CA,0x434A,{ 0xAF,0xE0,0xD6,0x15,0x80,0x44,0x6F,0x7E } };
    template <> struct default_interface<Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>{ using type = Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs; };
    template <> struct abi<Windows::Devices::Gpio::Provider::IGpioControllerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall OpenPinProvider(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::Provider::IGpioPinProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ValueChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValueChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_DebounceTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DebounceTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_PinNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SharingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsDriveModeSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall GetDriveMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetDriveMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall Write(int32_t) noexcept = 0;
            virtual int32_t __stdcall Read(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Edge(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Gpio::Provider::IGpioProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllers(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_Provider_IGpioControllerProvider
    {
        [[nodiscard]] auto PinCount() const;
        auto OpenPinProvider(int32_t pin, Windows::Devices::Gpio::Provider::ProviderGpioSharingMode const& sharingMode) const;
    };
    template <> struct consume<Windows::Devices::Gpio::Provider::IGpioControllerProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_Provider_IGpioPinProvider
    {
        auto ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const& handler) const;
        using ValueChanged_revoker = impl::event_revoker<Windows::Devices::Gpio::Provider::IGpioPinProvider, &impl::abi_t<Windows::Devices::Gpio::Provider::IGpioPinProvider>::remove_ValueChanged>;
        [[nodiscard]] ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::Provider::IGpioPinProvider, Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs> const& handler) const;
        auto ValueChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto DebounceTimeout() const;
        auto DebounceTimeout(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto PinNumber() const;
        [[nodiscard]] auto SharingMode() const;
        auto IsDriveModeSupported(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const& driveMode) const;
        auto GetDriveMode() const;
        auto SetDriveMode(Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode const& value) const;
        auto Write(Windows::Devices::Gpio::Provider::ProviderGpioPinValue const& value) const;
        auto Read() const;
    };
    template <> struct consume<Windows::Devices::Gpio::Provider::IGpioPinProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioPinProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs
    {
        [[nodiscard]] auto Edge() const;
    };
    template <> struct consume<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory
    {
        auto Create(Windows::Devices::Gpio::Provider::ProviderGpioPinEdge const& edge) const;
    };
    template <> struct consume<Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Gpio_Provider_IGpioProvider
    {
        auto GetControllers() const;
    };
    template <> struct consume<Windows::Devices::Gpio::Provider::IGpioProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Gpio_Provider_IGpioProvider<D>;
    };
}
#endif
