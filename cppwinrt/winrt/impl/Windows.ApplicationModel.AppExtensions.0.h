// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_AppExtensions_0_H
#define WINRT_Windows_ApplicationModel_AppExtensions_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppInfo;
    struct Package;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFolder;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions
{
    struct IAppExtension;
    struct IAppExtensionCatalog;
    struct IAppExtensionCatalogStatics;
    struct IAppExtensionPackageInstalledEventArgs;
    struct IAppExtensionPackageStatusChangedEventArgs;
    struct IAppExtensionPackageUninstallingEventArgs;
    struct IAppExtensionPackageUpdatedEventArgs;
    struct IAppExtensionPackageUpdatingEventArgs;
    struct AppExtension;
    struct AppExtensionCatalog;
    struct AppExtensionPackageInstalledEventArgs;
    struct AppExtensionPackageStatusChangedEventArgs;
    struct AppExtensionPackageUninstallingEventArgs;
    struct AppExtensionPackageUpdatedEventArgs;
    struct AppExtensionPackageUpdatingEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtension>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtension>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtension> = L"Windows.ApplicationModel.AppExtensions.AppExtension";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog> = L"Windows.ApplicationModel.AppExtensions.AppExtensionCatalog";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageInstalledEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtension> = L"Windows.ApplicationModel.AppExtensions.IAppExtension";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalog";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalogStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageInstalledEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatingEventArgs";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtension>{ 0x8450902C,0x15ED,0x4FAF,{ 0x93,0xEA,0x22,0x37,0xBB,0xF8,0xCB,0xD6 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ 0x97872032,0x8426,0x4AD1,{ 0x90,0x84,0x92,0xE8,0x8C,0x2D,0xA2,0x00 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ 0x3C36668A,0x5F18,0x4F0B,{ 0x9C,0xE5,0xCA,0xB6,0x1D,0x19,0x6F,0x11 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ 0x39E59234,0x3351,0x4A8D,{ 0x97,0x45,0xE7,0xD3,0xDD,0x45,0xBC,0x48 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ 0x1CE17433,0x1153,0x44FD,{ 0x87,0xB1,0x8A,0xE1,0x05,0x03,0x03,0xDF } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ 0x60F160C5,0x171E,0x40FF,{ 0xAE,0x98,0xAB,0x2C,0x20,0xDD,0x4D,0x75 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ 0x3A83C43F,0x797E,0x44B5,{ 0xBA,0x24,0xA4,0xC8,0xB5,0xA5,0x43,0xD7 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ 0x7ED59329,0x1A65,0x4800,{ 0xA7,0x00,0xB3,0x21,0x00,0x9E,0x30,0x6A } };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtension>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtension; };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog; };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs; };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppInfo(void**) noexcept = 0;
            virtual int32_t __stdcall GetExtensionPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicFolderAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestRemovePackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_PackageInstalled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageInstalled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUpdating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUpdating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUninstalling(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUninstalling(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Open(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtension
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) AppInfo() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet>) GetExtensionPropertiesAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>) GetPublicFolderAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtension>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtension<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestRemovePackageAsync(param::hstring const& packageFullName) const;
        WINRT_IMPL_AUTO(winrt::event_token) PackageInstalled(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> const& handler) const;
        using PackageInstalled_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageInstalled>;
        [[nodiscard]] PackageInstalled_revoker PackageInstalled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageInstalled(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageUpdating(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> const& handler) const;
        using PackageUpdating_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUpdating>;
        [[nodiscard]] PackageUpdating_revoker PackageUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageUpdating(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageUpdated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> const& handler) const;
        using PackageUpdated_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUpdated>;
        [[nodiscard]] PackageUpdated_revoker PackageUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageUpdated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageUninstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> const& handler) const;
        using PackageUninstalling_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUninstalling>;
        [[nodiscard]] PackageUninstalling_revoker PackageUninstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageUninstalling(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> const& handler) const;
        using PackageStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageStatusChanged>;
        [[nodiscard]] PackageStatusChanged_revoker PackageStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::AppExtensions::AppExtensionCatalog) Open(param::hstring const& appExtensionName) const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppExtensionName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>) Extensions() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppExtensionName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppExtensionName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppExtensionName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>) Extensions() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppExtensionName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
    };
    template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs<D>;
    };
}
#endif
