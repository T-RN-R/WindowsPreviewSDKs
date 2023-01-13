// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Calls_Provider_0_H
#define WINRT_Windows_ApplicationModel_Calls_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider
{
    struct IPhoneCallOrigin;
    struct IPhoneCallOrigin2;
    struct IPhoneCallOrigin3;
    struct IPhoneCallOriginManagerStatics;
    struct IPhoneCallOriginManagerStatics2;
    struct IPhoneCallOriginManagerStatics3;
    struct PhoneCallOrigin;
    struct PhoneCallOriginManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin> = L"Windows.ApplicationModel.Calls.Provider.PhoneCallOrigin";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager> = L"Windows.ApplicationModel.Calls.Provider.PhoneCallOriginManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics3";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ 0x20613479,0x0EF9,0x4454,{ 0x87,0x1C,0xAF,0xB6,0x6A,0x14,0xB6,0xA5 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ 0x04C7E980,0x9AC2,0x4768,{ 0xB5,0x36,0xB6,0x8D,0xA4,0x95,0x7D,0x02 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ 0x49330FB4,0xD1A7,0x43A2,{ 0xAE,0xEE,0xC0,0x7B,0x6D,0xBA,0xF0,0x68 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ 0xCCFC5A0A,0x9AF7,0x6149,{ 0x39,0xD0,0xE0,0x76,0xFC,0xCE,0x13,0x95 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ 0x8BF3EE3F,0x40F4,0x4380,{ 0x8C,0x7C,0xAE,0xA2,0xC9,0xB8,0xDD,0x7A } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>{ 0x2ED69764,0xA6E3,0x50F0,{ 0xB7,0x6A,0xD6,0x7C,0xB3,0x9B,0xDF,0xDE } };
    template <> struct default_interface<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ using type = Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin; };
    template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Category(void**) noexcept = 0;
            virtual int32_t __stdcall put_Category(void*) noexcept = 0;
            virtual int32_t __stdcall get_CategoryDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_CategoryDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayPicture(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayPicture(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCurrentAppActiveCallOriginApp(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowPhoneCallOriginSettingsUI() noexcept = 0;
            virtual int32_t __stdcall SetCallOrigin(winrt::guid, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestSetAsActiveCallOriginAppAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Category() const;
        WINRT_IMPL_AUTO(void) Category(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CategoryDescription() const;
        WINRT_IMPL_AUTO(void) CategoryDescription(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Location() const;
        WINRT_IMPL_AUTO(void) Location(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFile) DisplayPicture() const;
        WINRT_IMPL_AUTO(void) DisplayPicture(Windows::Storage::StorageFile const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCurrentAppActiveCallOriginApp() const;
        WINRT_IMPL_AUTO(void) ShowPhoneCallOriginSettingsUI() const;
        WINRT_IMPL_AUTO(void) SetCallOrigin(winrt::guid const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestSetAsActiveCallOriginAppAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics3<D>;
    };
}
#endif
