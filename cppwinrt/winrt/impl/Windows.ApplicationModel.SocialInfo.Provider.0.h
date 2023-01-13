// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_SocialInfo_Provider_0_H
#define WINRT_Windows_ApplicationModel_SocialInfo_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo
{
    struct SocialFeedContent;
    enum class SocialFeedKind : int32_t;
    enum class SocialFeedUpdateMode : int32_t;
    struct SocialItemThumbnail;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo::Provider
{
    struct ISocialDashboardItemUpdater;
    struct ISocialFeedUpdater;
    struct ISocialInfoProviderManagerStatics;
    struct SocialDashboardItemUpdater;
    struct SocialFeedUpdater;
    struct SocialInfoProviderManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>{ L"Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>{ L"Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager>{ L"Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ L"Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ L"Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ L"Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>{ 0x3CDE9DC9,0x4800,0x46CD,{ 0x86,0x9B,0x19,0x73,0xEC,0x68,0x5B,0xDE } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>{ 0x7A0C0AA7,0xED89,0x4BD5,{ 0xA8,0xD9,0x15,0xF4,0xD9,0x86,0x1C,0x10 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>{ 0x1B88E52B,0x7787,0x48D6,{ 0xAA,0x12,0xD8,0xE8,0xF4,0x7A,0xB8,0x5A } };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>{ using type = Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater; };
    template <> struct default_interface<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>{ using type = Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater; };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OwnerRemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Timestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall CommitAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OwnerRemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall CommitAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateSocialFeedUpdaterAsync(int32_t, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDashboardItemUpdaterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateBadgeCountValue(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall ReportNewContentAvailable(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall ProvisionAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeprovisionAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater
    {
        [[nodiscard]] auto OwnerRemoteId() const;
        [[nodiscard]] auto Content() const;
        [[nodiscard]] auto Timestamp() const;
        auto Timestamp(Windows::Foundation::DateTime const& value) const;
        auto Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const;
        [[nodiscard]] auto Thumbnail() const;
        auto CommitAsync() const;
        [[nodiscard]] auto TargetUri() const;
        auto TargetUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater
    {
        [[nodiscard]] auto OwnerRemoteId() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Items() const;
        auto CommitAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics
    {
        auto CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const& mode, param::hstring const& ownerRemoteId) const;
        auto CreateDashboardItemUpdaterAsync(param::hstring const& ownerRemoteId) const;
        auto UpdateBadgeCountValue(param::hstring const& itemRemoteId, int32_t newCount) const;
        auto ReportNewContentAvailable(param::hstring const& contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind) const;
        auto ProvisionAsync() const;
        auto DeprovisionAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>;
    };
}
#endif
