// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_AccessCache_0_H
#define WINRT_Windows_Storage_AccessCache_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageItem;
    struct StorageFile;
    struct StorageFolder;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::Storage::AccessCache
{
    enum class AccessCacheOptions : uint32_t
    {
        None = 0,
        DisallowUserInput = 0x1,
        FastLocationsOnly = 0x2,
        UseReadOnlyCachedCopy = 0x4,
        SuppressAccessTimeUpdate = 0x8,
    };
    enum class RecentStorageItemVisibility : int32_t
    {
        AppOnly = 0,
        AppAndSystem = 1,
    };
    struct IItemRemovedEventArgs;
    struct IStorageApplicationPermissionsStatics;
    struct IStorageApplicationPermissionsStatics2;
    struct IStorageItemAccessList;
    struct IStorageItemMostRecentlyUsedList;
    struct IStorageItemMostRecentlyUsedList2;
    struct AccessListEntryView;
    struct ItemRemovedEventArgs;
    struct StorageApplicationPermissions;
    struct StorageItemAccessList;
    struct StorageItemMostRecentlyUsedList;
    struct AccessListEntry;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::AccessCache::IItemRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::AccessCache::IStorageItemAccessList>{ using type = interface_category; };
    template <> struct category<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>{ using type = interface_category; };
    template <> struct category<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::AccessCache::AccessListEntryView>{ using type = class_category; };
    template <> struct category<Windows::Storage::AccessCache::ItemRemovedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Storage::AccessCache::StorageApplicationPermissions>{ using type = class_category; };
    template <> struct category<Windows::Storage::AccessCache::StorageItemAccessList>{ using type = class_category; };
    template <> struct category<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>{ using type = class_category; };
    template <> struct category<Windows::Storage::AccessCache::AccessCacheOptions>{ using type = enum_category; };
    template <> struct category<Windows::Storage::AccessCache::RecentStorageItemVisibility>{ using type = enum_category; };
    template <> struct category<Windows::Storage::AccessCache::AccessListEntry>{ using type = struct_category<hstring, hstring>; };
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::AccessListEntryView> = L"Windows.Storage.AccessCache.AccessListEntryView";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::ItemRemovedEventArgs> = L"Windows.Storage.AccessCache.ItemRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::StorageApplicationPermissions> = L"Windows.Storage.AccessCache.StorageApplicationPermissions";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::StorageItemAccessList> = L"Windows.Storage.AccessCache.StorageItemAccessList";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList> = L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::AccessCacheOptions> = L"Windows.Storage.AccessCache.AccessCacheOptions";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::RecentStorageItemVisibility> = L"Windows.Storage.AccessCache.RecentStorageItemVisibility";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::AccessListEntry> = L"Windows.Storage.AccessCache.AccessListEntry";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::IItemRemovedEventArgs> = L"Windows.Storage.AccessCache.IItemRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics> = L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2> = L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics2";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::IStorageItemAccessList> = L"Windows.Storage.AccessCache.IStorageItemAccessList";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList> = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList";
    template <> inline constexpr auto& name_v<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2> = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2";
    template <> inline constexpr guid guid_v<Windows::Storage::AccessCache::IItemRemovedEventArgs>{ 0x59677E5C,0x55BE,0x4C66,{ 0xBA,0x66,0x5E,0xAE,0xA7,0x9D,0x26,0x31 } };
    template <> inline constexpr guid guid_v<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>{ 0x4391DFAA,0xD033,0x48F9,{ 0x80,0x60,0x3E,0xC8,0x47,0xD2,0xE3,0xF1 } };
    template <> inline constexpr guid guid_v<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>{ 0x072716EC,0xAA05,0x4294,{ 0x9A,0x11,0x1A,0x3D,0x04,0x51,0x9A,0xD0 } };
    template <> inline constexpr guid guid_v<Windows::Storage::AccessCache::IStorageItemAccessList>{ 0x2CAFF6AD,0xDE90,0x47F5,{ 0xB2,0xC3,0xDD,0x36,0xC9,0xFD,0xD4,0x53 } };
    template <> inline constexpr guid guid_v<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>{ 0x016239D5,0x510D,0x411E,{ 0x8C,0xF1,0xC3,0xD1,0xEF,0xFA,0x4C,0x33 } };
    template <> inline constexpr guid guid_v<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>{ 0xDA481EA0,0xED8D,0x4731,{ 0xA1,0xDB,0xE4,0x4E,0xE2,0x20,0x40,0x93 } };
    template <> struct default_interface<Windows::Storage::AccessCache::AccessListEntryView>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Storage::AccessCache::AccessListEntry>; };
    template <> struct default_interface<Windows::Storage::AccessCache::ItemRemovedEventArgs>{ using type = Windows::Storage::AccessCache::IItemRemovedEventArgs; };
    template <> struct default_interface<Windows::Storage::AccessCache::StorageItemAccessList>{ using type = Windows::Storage::AccessCache::IStorageItemAccessList; };
    template <> struct default_interface<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>{ using type = Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList; };
    template <> struct abi<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemovedEntry(struct struct_Windows_Storage_AccessCache_AccessListEntry*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FutureAccessList(void**) noexcept = 0;
            virtual int32_t __stdcall get_MostRecentlyUsedList(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFutureAccessListForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMostRecentlyUsedListForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddOverloadDefaultMetadata(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Add(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddOrReplaceOverloadDefaultMetadata(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddOrReplace(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetItemAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFileWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFolderWithOptionsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall ContainsItem(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall CheckAccess(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_Entries(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaximumItemsAllowed(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ItemRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemRemoved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddWithMetadataAndVisibility(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AddOrReplaceWithMetadataAndVisibility(void*, void*, void*, int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IItemRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::AccessCache::AccessListEntry) RemovedEntry() const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IItemRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IItemRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::AccessCache::StorageItemAccessList) FutureAccessList() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList) MostRecentlyUsedList() const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics2
    {
        WINRT_IMPL_AUTO(Windows::Storage::AccessCache::StorageItemAccessList) GetFutureAccessListForUser(Windows::System::User const& user) const;
        WINRT_IMPL_AUTO(Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList) GetMostRecentlyUsedListForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics2>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageItemAccessList
    {
        WINRT_IMPL_AUTO(hstring) Add(Windows::Storage::IStorageItem const& file) const;
        WINRT_IMPL_AUTO(hstring) Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const;
        WINRT_IMPL_AUTO(void) AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file) const;
        WINRT_IMPL_AUTO(void) AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem>) GetItemAsync(param::hstring const& token) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) GetFileAsync(param::hstring const& token) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>) GetFolderAsync(param::hstring const& token) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem>) GetItemAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) GetFileAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>) GetFolderAsync(param::hstring const& token, Windows::Storage::AccessCache::AccessCacheOptions const& options) const;
        WINRT_IMPL_AUTO(void) Remove(param::hstring const& token) const;
        WINRT_IMPL_AUTO(bool) ContainsItem(param::hstring const& token) const;
        WINRT_IMPL_AUTO(void) Clear() const;
        WINRT_IMPL_AUTO(bool) CheckAccess(Windows::Storage::IStorageItem const& file) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::AccessCache::AccessListEntryView) Entries() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaximumItemsAllowed() const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemAccessList<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList
    {
        WINRT_IMPL_AUTO(winrt::event_token) ItemRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const;
        using ItemRemoved_revoker = impl::event_revoker<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList, &impl::abi_t<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>::remove_ItemRemoved>;
        [[nodiscard]] ItemRemoved_revoker ItemRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList, Windows::Storage::AccessCache::ItemRemovedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ItemRemoved(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2
    {
        WINRT_IMPL_AUTO(hstring) Add(Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const;
        WINRT_IMPL_AUTO(void) AddOrReplace(param::hstring const& token, Windows::Storage::IStorageItem const& file, param::hstring const& metadata, Windows::Storage::AccessCache::RecentStorageItemVisibility const& visibility) const;
    };
    template <> struct consume<Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2>
    {
        template <typename D> using type = consume_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2<D>;
    };
    struct struct_Windows_Storage_AccessCache_AccessListEntry
    {
        void* Token;
        void* Metadata;
    };
    template <> struct abi<Windows::Storage::AccessCache::AccessListEntry>
    {
        using type = struct_Windows_Storage_AccessCache_AccessListEntry;
    };
}
#endif
