// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Power_Diagnostics_0_H
#define WINRT_Windows_System_Power_Diagnostics_0_H
WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics
{
    struct IBackgroundEnergyDiagnosticsStatics;
    struct IForegroundEnergyDiagnosticsStatics;
    struct BackgroundEnergyDiagnostics;
    struct ForegroundEnergyDiagnostics;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics>{ using type = class_category; };
    template <> struct category<Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics>{ L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics" };
    template <> inline constexpr auto& name_v<Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics>{ L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ L"Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics" };
    template <> inline constexpr auto& name_v<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ L"Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ 0xD7663702,0xD3A6,0x46E0,{ 0x8F,0x9B,0x50,0xB9,0x5B,0xB4,0xF9,0xC5 } };
    template <> inline constexpr guid guid_v<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ 0x23CA0917,0xCD07,0x4609,{ 0xBE,0x15,0x8F,0xE8,0x94,0xC5,0xE4,0x1E } };
    template <> struct abi<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceSpecificConversionFactor(double*) noexcept = 0;
            virtual int32_t __stdcall ComputeTotalEnergyUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall ResetTotalEnergyUsage() noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceSpecificConversionFactor(double*) noexcept = 0;
            virtual int32_t __stdcall ComputeTotalEnergyUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall ResetTotalEnergyUsage() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics
    {
        [[nodiscard]] auto DeviceSpecificConversionFactor() const;
        auto ComputeTotalEnergyUsage() const;
        auto ResetTotalEnergyUsage() const;
    };
    template <> struct consume<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>
    {
        template <typename D> using type = consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics
    {
        [[nodiscard]] auto DeviceSpecificConversionFactor() const;
        auto ComputeTotalEnergyUsage() const;
        auto ResetTotalEnergyUsage() const;
    };
    template <> struct consume<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>
    {
        template <typename D> using type = consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>;
    };
}
#endif
