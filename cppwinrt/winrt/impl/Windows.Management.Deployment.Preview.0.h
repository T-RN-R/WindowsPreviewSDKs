// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Deployment_Preview_0_H
#define WINRT_Windows_Management_Deployment_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview
{
    struct IClassicAppManagerStatics;
    struct IInstalledClassicAppInfo;
    struct ClassicAppManager;
    struct InstalledClassicAppInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>{ using type = interface_category; };
    template <> struct category<Windows::Management::Deployment::Preview::ClassicAppManager>{ using type = class_category; };
    template <> struct category<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Management::Deployment::Preview::ClassicAppManager> = L"Windows.Management.Deployment.Preview.ClassicAppManager";
    template <> inline constexpr auto& name_v<Windows::Management::Deployment::Preview::InstalledClassicAppInfo> = L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo";
    template <> inline constexpr auto& name_v<Windows::Management::Deployment::Preview::IClassicAppManagerStatics> = L"Windows.Management.Deployment.Preview.IClassicAppManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> = L"Windows.Management.Deployment.Preview.IInstalledClassicAppInfo";
    template <> inline constexpr guid guid_v<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>{ 0xE2FAD668,0x882C,0x4F33,{ 0xB0,0x35,0x0D,0xF7,0xB9,0x0D,0x67,0xE6 } };
    template <> inline constexpr guid guid_v<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>{ 0x0A7D3DA3,0x65D0,0x4086,{ 0x80,0xD6,0x06,0x10,0xD7,0x60,0x20,0x7D } };
    template <> struct default_interface<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>{ using type = Windows::Management::Deployment::Preview::IInstalledClassicAppInfo; };
    template <> struct abi<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindInstalledApp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayVersion(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Management::Deployment::Preview::InstalledClassicAppInfo) FindInstalledApp(param::hstring const& appUninstallKey) const;
    };
    template <> struct consume<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayVersion() const;
    };
    template <> struct consume<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>
    {
        template <typename D> using type = consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>;
    };
}
#endif
