// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Provider_0_H
#define WINRT_Windows_Storage_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct IStorageFolder;
    struct IStorageItem;
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    enum class CachedFileOptions : uint32_t
    {
        None = 0,
        RequireUpdateOnAccess = 0x1,
        UseCachedFileWhenOffline = 0x2,
        DenyAccessWhenOffline = 0x4,
    };
    enum class CachedFileTarget : int32_t
    {
        Local = 0,
        Remote = 1,
    };
    enum class FileUpdateStatus : int32_t
    {
        Incomplete = 0,
        Complete = 1,
        UserInputNeeded = 2,
        CurrentlyUnavailable = 3,
        Failed = 4,
        CompleteAndRenamed = 5,
    };
    enum class ReadActivationMode : int32_t
    {
        NotNeeded = 0,
        BeforeAccess = 1,
    };
    enum class StorageProviderHardlinkPolicy : uint32_t
    {
        None = 0,
        Allowed = 0x1,
    };
    enum class StorageProviderHydrationPolicy : int32_t
    {
        Partial = 0,
        Progressive = 1,
        Full = 2,
        AlwaysFull = 3,
    };
    enum class StorageProviderHydrationPolicyModifier : uint32_t
    {
        None = 0,
        ValidationRequired = 0x1,
        StreamingAllowed = 0x2,
        AutoDehydrationAllowed = 0x4,
    };
    enum class StorageProviderInSyncPolicy : uint32_t
    {
        Default = 0,
        FileCreationTime = 0x1,
        FileReadOnlyAttribute = 0x2,
        FileHiddenAttribute = 0x4,
        FileSystemAttribute = 0x8,
        DirectoryCreationTime = 0x10,
        DirectoryReadOnlyAttribute = 0x20,
        DirectoryHiddenAttribute = 0x40,
        DirectorySystemAttribute = 0x80,
        FileLastWriteTime = 0x100,
        DirectoryLastWriteTime = 0x200,
        PreserveInsyncForSyncEngine = 0x80000000,
    };
    enum class StorageProviderPopulationPolicy : int32_t
    {
        Full = 1,
        AlwaysFull = 2,
    };
    enum class StorageProviderProtectionMode : int32_t
    {
        Unknown = 0,
        Personal = 1,
    };
    enum class StorageProviderState : int32_t
    {
        InSync = 0,
        Syncing = 1,
        Paused = 2,
        Error = 3,
        Warning = 4,
        Offline = 5,
    };
    enum class StorageProviderUriSourceStatus : int32_t
    {
        Success = 0,
        NoSyncRoot = 1,
        FileNotFound = 2,
    };
    enum class UIStatus : int32_t
    {
        Unavailable = 0,
        Hidden = 1,
        Visible = 2,
        Complete = 3,
    };
    enum class WriteActivationMode : int32_t
    {
        ReadOnly = 0,
        NotNeeded = 1,
        AfterWrite = 2,
    };
    struct ICachedFileUpdaterStatics;
    struct ICachedFileUpdaterUI;
    struct ICachedFileUpdaterUI2;
    struct IFileUpdateRequest;
    struct IFileUpdateRequest2;
    struct IFileUpdateRequestDeferral;
    struct IFileUpdateRequestedEventArgs;
    struct IStorageProviderError;
    struct IStorageProviderErrorCommand;
    struct IStorageProviderErrorCommandFactory;
    struct IStorageProviderErrorFactory;
    struct IStorageProviderFileTypeInfo;
    struct IStorageProviderFileTypeInfoFactory;
    struct IStorageProviderGetContentInfoForPathResult;
    struct IStorageProviderGetPathForContentUriResult;
    struct IStorageProviderHandlerFactory;
    struct IStorageProviderItemPropertiesStatics;
    struct IStorageProviderItemProperty;
    struct IStorageProviderItemPropertyDefinition;
    struct IStorageProviderItemPropertySource;
    struct IStorageProviderPropertyCapabilities;
    struct IStorageProviderStatus;
    struct IStorageProviderStatusFactory;
    struct IStorageProviderStatusSource;
    struct IStorageProviderSyncRootInfo;
    struct IStorageProviderSyncRootInfo2;
    struct IStorageProviderSyncRootInfo3;
    struct IStorageProviderSyncRootManagerStatics;
    struct IStorageProviderSyncRootManagerStatics2;
    struct IStorageProviderUriSource;
    struct CachedFileUpdater;
    struct CachedFileUpdaterUI;
    struct FileUpdateRequest;
    struct FileUpdateRequestDeferral;
    struct FileUpdateRequestedEventArgs;
    struct StorageProviderError;
    struct StorageProviderErrorCommand;
    struct StorageProviderFileTypeInfo;
    struct StorageProviderGetContentInfoForPathResult;
    struct StorageProviderGetPathForContentUriResult;
    struct StorageProviderItemProperties;
    struct StorageProviderItemProperty;
    struct StorageProviderItemPropertyDefinition;
    struct StorageProviderStatus;
    struct StorageProviderSyncRootInfo;
    struct StorageProviderSyncRootManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequest>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequest2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderError>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderErrorCommand>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderErrorCommandFactory>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderErrorFactory>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderFileTypeInfo>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderHandlerFactory>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemProperty>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderStatus>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderStatusFactory>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderStatusSource>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::IStorageProviderUriSource>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Provider::CachedFileUpdater>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::CachedFileUpdaterUI>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::FileUpdateRequest>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::FileUpdateRequestDeferral>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderError>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderErrorCommand>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderFileTypeInfo>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderItemProperties>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderItemProperty>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderStatus>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderSyncRootManager>{ using type = class_category; };
    template <> struct category<Windows::Storage::Provider::CachedFileOptions>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::CachedFileTarget>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::FileUpdateStatus>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::ReadActivationMode>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderHardlinkPolicy>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderHydrationPolicy>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderInSyncPolicy>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderPopulationPolicy>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderProtectionMode>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderState>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::StorageProviderUriSourceStatus>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::UIStatus>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Provider::WriteActivationMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::CachedFileUpdater>{ L"Windows.Storage.Provider.CachedFileUpdater" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::CachedFileUpdaterUI>{ L"Windows.Storage.Provider.CachedFileUpdaterUI" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::FileUpdateRequest>{ L"Windows.Storage.Provider.FileUpdateRequest" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::FileUpdateRequestDeferral>{ L"Windows.Storage.Provider.FileUpdateRequestDeferral" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ L"Windows.Storage.Provider.FileUpdateRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderError>{ L"Windows.Storage.Provider.StorageProviderError" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderErrorCommand>{ L"Windows.Storage.Provider.StorageProviderErrorCommand" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderFileTypeInfo>{ L"Windows.Storage.Provider.StorageProviderFileTypeInfo" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>{ L"Windows.Storage.Provider.StorageProviderGetContentInfoForPathResult" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>{ L"Windows.Storage.Provider.StorageProviderGetPathForContentUriResult" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderItemProperties>{ L"Windows.Storage.Provider.StorageProviderItemProperties" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderItemProperty>{ L"Windows.Storage.Provider.StorageProviderItemProperty" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ L"Windows.Storage.Provider.StorageProviderItemPropertyDefinition" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderStatus>{ L"Windows.Storage.Provider.StorageProviderStatus" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ L"Windows.Storage.Provider.StorageProviderSyncRootInfo" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderSyncRootManager>{ L"Windows.Storage.Provider.StorageProviderSyncRootManager" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::CachedFileOptions>{ L"Windows.Storage.Provider.CachedFileOptions" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::CachedFileTarget>{ L"Windows.Storage.Provider.CachedFileTarget" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::FileUpdateStatus>{ L"Windows.Storage.Provider.FileUpdateStatus" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::ReadActivationMode>{ L"Windows.Storage.Provider.ReadActivationMode" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderHardlinkPolicy>{ L"Windows.Storage.Provider.StorageProviderHardlinkPolicy" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderHydrationPolicy>{ L"Windows.Storage.Provider.StorageProviderHydrationPolicy" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>{ L"Windows.Storage.Provider.StorageProviderHydrationPolicyModifier" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderInSyncPolicy>{ L"Windows.Storage.Provider.StorageProviderInSyncPolicy" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderPopulationPolicy>{ L"Windows.Storage.Provider.StorageProviderPopulationPolicy" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderProtectionMode>{ L"Windows.Storage.Provider.StorageProviderProtectionMode" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderState>{ L"Windows.Storage.Provider.StorageProviderState" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::StorageProviderUriSourceStatus>{ L"Windows.Storage.Provider.StorageProviderUriSourceStatus" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::UIStatus>{ L"Windows.Storage.Provider.UIStatus" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::WriteActivationMode>{ L"Windows.Storage.Provider.WriteActivationMode" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ L"Windows.Storage.Provider.ICachedFileUpdaterStatics" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::ICachedFileUpdaterUI>{ L"Windows.Storage.Provider.ICachedFileUpdaterUI" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ L"Windows.Storage.Provider.ICachedFileUpdaterUI2" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IFileUpdateRequest>{ L"Windows.Storage.Provider.IFileUpdateRequest" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IFileUpdateRequest2>{ L"Windows.Storage.Provider.IFileUpdateRequest2" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ L"Windows.Storage.Provider.IFileUpdateRequestDeferral" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderError>{ L"Windows.Storage.Provider.IStorageProviderError" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderErrorCommand>{ L"Windows.Storage.Provider.IStorageProviderErrorCommand" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderErrorCommandFactory>{ L"Windows.Storage.Provider.IStorageProviderErrorCommandFactory" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderErrorFactory>{ L"Windows.Storage.Provider.IStorageProviderErrorFactory" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderFileTypeInfo>{ L"Windows.Storage.Provider.IStorageProviderFileTypeInfo" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>{ L"Windows.Storage.Provider.IStorageProviderFileTypeInfoFactory" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>{ L"Windows.Storage.Provider.IStorageProviderGetContentInfoForPathResult" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>{ L"Windows.Storage.Provider.IStorageProviderGetPathForContentUriResult" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderHandlerFactory>{ L"Windows.Storage.Provider.IStorageProviderHandlerFactory" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ L"Windows.Storage.Provider.IStorageProviderItemPropertiesStatics" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderItemProperty>{ L"Windows.Storage.Provider.IStorageProviderItemProperty" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ L"Windows.Storage.Provider.IStorageProviderItemPropertyDefinition" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ L"Windows.Storage.Provider.IStorageProviderItemPropertySource" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ L"Windows.Storage.Provider.IStorageProviderPropertyCapabilities" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderStatus>{ L"Windows.Storage.Provider.IStorageProviderStatus" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderStatusFactory>{ L"Windows.Storage.Provider.IStorageProviderStatusFactory" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderStatusSource>{ L"Windows.Storage.Provider.IStorageProviderStatusSource" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo2" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>{ L"Windows.Storage.Provider.IStorageProviderSyncRootInfo3" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>{ L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics2" };
    template <> inline constexpr auto& name_v<Windows::Storage::Provider::IStorageProviderUriSource>{ L"Windows.Storage.Provider.IStorageProviderUriSource" };
#endif
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ 0x9FC90920,0x7BCF,0x4888,{ 0xA8,0x1E,0x10,0x2D,0x70,0x34,0xD7,0xCE } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::ICachedFileUpdaterUI>{ 0x9E6F41E6,0xBAF2,0x4A97,{ 0xB6,0x00,0x93,0x33,0xF5,0xDF,0x80,0xFD } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ 0x8856A21C,0x8699,0x4340,{ 0x9F,0x49,0xF7,0xCA,0xD7,0xFE,0x89,0x91 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IFileUpdateRequest>{ 0x40C82536,0xC1FE,0x4D93,{ 0xA7,0x92,0x1E,0x73,0x6B,0xC7,0x08,0x37 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IFileUpdateRequest2>{ 0x82484648,0xBDBE,0x447B,{ 0xA2,0xEE,0x7A,0xFE,0x6A,0x03,0x2A,0x94 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ 0xFFCEDB2B,0x8ADE,0x44A5,{ 0xBB,0x00,0x16,0x4C,0x4E,0x72,0xF1,0x3A } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ 0x7B0A9342,0x3905,0x438D,{ 0xAA,0xEF,0x78,0xAE,0x26,0x5F,0x8D,0xD2 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderError>{ 0xCA2B162C,0xECCA,0x5B32,{ 0xBA,0x94,0x0D,0xB1,0x91,0xDE,0x12,0xCC } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderErrorCommand>{ 0xB6B18AED,0xBB65,0x5F26,{ 0x86,0xE4,0x1D,0x3E,0x34,0xD5,0x44,0x77 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderErrorCommandFactory>{ 0xECC1F555,0x3AB4,0x556F,{ 0x8B,0xB2,0x7E,0x55,0x15,0xEE,0xD8,0xDC } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderErrorFactory>{ 0x97D6F240,0x61AB,0x51DC,{ 0x99,0x21,0x18,0xBD,0x0D,0xBE,0xF7,0x9E } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderFileTypeInfo>{ 0x1955B9C1,0x0184,0x5A88,{ 0x87,0xDF,0x45,0x44,0xF4,0x64,0x36,0x5D } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>{ 0x3FA12C6F,0xCCE6,0x5D5D,{ 0x80,0xB1,0x38,0x9E,0x7C,0xF9,0x2D,0xBF } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>{ 0x2564711D,0xAA89,0x4D12,{ 0x82,0xE3,0xF7,0x2A,0x92,0xE3,0x39,0x66 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>{ 0x63711A9D,0x4118,0x45A6,{ 0xAC,0xB6,0x22,0xC4,0x9D,0x01,0x9F,0x40 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderHandlerFactory>{ 0x6154DC3A,0xFC1D,0x5AAE,{ 0x9E,0x23,0xE8,0x65,0x9A,0x22,0xC5,0xF6 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>{ 0x2D2C1C97,0x2704,0x4729,{ 0x8F,0xA9,0x7E,0x6B,0x8E,0x15,0x8C,0x2F } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderItemProperty>{ 0x476CB558,0x730B,0x4188,{ 0xB7,0xB5,0x63,0xB7,0x16,0xED,0x47,0x6D } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>{ 0xC5B383BB,0xFF1F,0x4298,{ 0x83,0x1E,0xFF,0x1C,0x08,0x08,0x96,0x90 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderItemPropertySource>{ 0x8F6F9C3E,0xF632,0x4A9B,{ 0x8D,0x99,0xD2,0xD7,0xA1,0x1D,0xF5,0x6A } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>{ 0x658D2F0E,0x63B7,0x4567,{ 0xAC,0xF9,0x51,0xAB,0xE3,0x01,0xDD,0xA5 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderStatus>{ 0xFF6E761D,0xFB8B,0x56C3,{ 0x9E,0x7A,0x05,0x30,0x9D,0x19,0x1F,0xB4 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderStatusFactory>{ 0xD64828C5,0x9B7A,0x5FA4,{ 0xB1,0x26,0x90,0xBD,0x18,0x93,0x6C,0x7F } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderStatusSource>{ 0x2E316BB2,0xFD43,0x5335,{ 0xB3,0xC4,0xA9,0x62,0xEE,0x31,0xD1,0x7E } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderSyncRootInfo>{ 0x7C1305C4,0x99F9,0x41AC,{ 0x89,0x04,0xAB,0x05,0x5D,0x65,0x49,0x26 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>{ 0xCF51B023,0x7CF1,0x5166,{ 0xBD,0xBA,0xEF,0xD9,0x5F,0x52,0x9E,0x31 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>{ 0x507A6617,0xBEF6,0x56FD,{ 0x85,0x5E,0x75,0xAC,0xE2,0xE4,0x5C,0xF5 } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>{ 0x3E99FBBF,0x8FE3,0x4B40,{ 0xAB,0xC7,0xF6,0xFC,0x3D,0x74,0xC9,0x8E } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>{ 0xEFB6CFEE,0x1374,0x544E,{ 0x9D,0xF1,0x55,0x98,0xD2,0xE9,0xCF,0xDD } };
    template <> inline constexpr guid guid_v<Windows::Storage::Provider::IStorageProviderUriSource>{ 0xB29806D1,0x8BE0,0x4962,{ 0x8B,0xB6,0x0D,0x4C,0x2E,0x14,0xD4,0x7A } };
    template <> struct default_interface<Windows::Storage::Provider::CachedFileUpdaterUI>{ using type = Windows::Storage::Provider::ICachedFileUpdaterUI; };
    template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequest>{ using type = Windows::Storage::Provider::IFileUpdateRequest; };
    template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestDeferral>{ using type = Windows::Storage::Provider::IFileUpdateRequestDeferral; };
    template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ using type = Windows::Storage::Provider::IFileUpdateRequestedEventArgs; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderError>{ using type = Windows::Storage::Provider::IStorageProviderError; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderErrorCommand>{ using type = Windows::Storage::Provider::IStorageProviderErrorCommand; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderFileTypeInfo>{ using type = Windows::Storage::Provider::IStorageProviderFileTypeInfo; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>{ using type = Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>{ using type = Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderItemProperty>{ using type = Windows::Storage::Provider::IStorageProviderItemProperty; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ using type = Windows::Storage::Provider::IStorageProviderItemPropertyDefinition; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderStatus>{ using type = Windows::Storage::Provider::IStorageProviderStatus; };
    template <> struct default_interface<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ using type = Windows::Storage::Provider::IStorageProviderSyncRootInfo; };
    template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetUpdateInformation(void*, void*, int32_t, int32_t, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateTarget(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_FileUpdateRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FileUpdateRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UIRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UIRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_UIStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateRequest(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentId(void**) noexcept = 0;
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateLocalFile(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserInputNeededMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserInputNeededMessage(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_FilePath(void**) noexcept = 0;
            virtual int32_t __stdcall put_FilePath(void*) noexcept = 0;
            virtual int32_t __stdcall get_Button1(void**) noexcept = 0;
            virtual int32_t __stdcall put_Button1(void*) noexcept = 0;
            virtual int32_t __stdcall get_Button2(void**) noexcept = 0;
            virtual int32_t __stdcall put_Button2(void*) noexcept = 0;
            virtual int32_t __stdcall get_Hyperlink1(void**) noexcept = 0;
            virtual int32_t __stdcall put_Hyperlink1(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderErrorCommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActionUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderErrorCommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderErrorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileExtension(void**) noexcept = 0;
            virtual int32_t __stdcall get_IconResource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ContentUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderHandlerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatusSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Id(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Id(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_IconResource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Id(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayNameResource(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemProperties(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsPropertySupported(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorMessages(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderStatusFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstance2(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderStatusSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatus(void**) noexcept = 0;
            virtual int32_t __stdcall add_Changed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Changed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall put_Context(void*) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayNameResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_IconResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_HydrationPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HydrationPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HydrationPolicyModifier(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HydrationPolicyModifier(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_PopulationPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PopulationPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InSyncPolicy(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InSyncPolicy(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_HardlinkPolicy(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HardlinkPolicy(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ShowSiblingsAsGroup(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShowSiblingsAsGroup(bool) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall put_Version(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AllowPinning(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowPinning(bool) noexcept = 0;
            virtual int32_t __stdcall get_StorageProviderItemPropertyDefinitions(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecycleBinUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_RecycleBinUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProviderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_ProviderId(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackFileTypeInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(void*) noexcept = 0;
            virtual int32_t __stdcall Unregister(void*) noexcept = 0;
            virtual int32_t __stdcall GetSyncRootInformationForFolder(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSyncRootInformationForId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentSyncRoots(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPathForContentUri(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetContentInfoForPath(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_ICachedFileUpdaterStatics
    {
        auto SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const;
    };
    template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto UpdateTarget() const;
        auto FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
        using FileUpdateRequested_revoker = impl::event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI, &impl::abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_FileUpdateRequested>;
        [[nodiscard]] FileUpdateRequested_revoker FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
        auto FileUpdateRequested(winrt::event_token const& token) const noexcept;
        auto UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
        using UIRequested_revoker = impl::event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI, &impl::abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_UIRequested>;
        [[nodiscard]] UIRequested_revoker UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
        auto UIRequested(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto UIStatus() const;
    };
    template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI2
    {
        [[nodiscard]] auto UpdateRequest() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequest
    {
        [[nodiscard]] auto ContentId() const;
        [[nodiscard]] auto File() const;
        [[nodiscard]] auto Status() const;
        auto Status(Windows::Storage::Provider::FileUpdateStatus const& value) const;
        auto GetDeferral() const;
        auto UpdateLocalFile(Windows::Storage::IStorageFile const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequest2
    {
        [[nodiscard]] auto UserInputNeededMessage() const;
        auto UserInputNeededMessage(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderError
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto FilePath() const;
        auto FilePath(param::hstring const& value) const;
        [[nodiscard]] auto Button1() const;
        auto Button1(Windows::Storage::Provider::StorageProviderErrorCommand const& value) const;
        [[nodiscard]] auto Button2() const;
        auto Button2(Windows::Storage::Provider::StorageProviderErrorCommand const& value) const;
        [[nodiscard]] auto Hyperlink1() const;
        auto Hyperlink1(Windows::Storage::Provider::StorageProviderErrorCommand const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderError>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderError<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderErrorCommand
    {
        [[nodiscard]] auto Label() const;
        [[nodiscard]] auto ActionUri() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderErrorCommand>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderErrorCommand<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderErrorCommandFactory
    {
        auto CreateInstance(param::hstring const& label, Windows::Foundation::Uri const& actionUri) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderErrorCommandFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderErrorCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderErrorFactory
    {
        auto CreateInstance(param::hstring const& id, param::hstring const& title, param::hstring const& message) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderErrorFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderErrorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderFileTypeInfo
    {
        [[nodiscard]] auto FileExtension() const;
        [[nodiscard]] auto IconResource() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderFileTypeInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderFileTypeInfoFactory
    {
        auto CreateInstance(param::hstring const& fileExtension, param::hstring const& iconResource) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderFileTypeInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult
    {
        [[nodiscard]] auto Status() const;
        auto Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const;
        [[nodiscard]] auto ContentUri() const;
        auto ContentUri(param::hstring const& value) const;
        [[nodiscard]] auto ContentId() const;
        auto ContentId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult
    {
        [[nodiscard]] auto Status() const;
        auto Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const;
        [[nodiscard]] auto Path() const;
        auto Path(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderHandlerFactory
    {
        auto GetStatusSource(param::hstring const& syncRootId) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderHandlerFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderHandlerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics
    {
        auto SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemProperty
    {
        auto Id(int32_t value) const;
        [[nodiscard]] auto Id() const;
        auto Value(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto IconResource(param::hstring const& value) const;
        [[nodiscard]] auto IconResource() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition
    {
        [[nodiscard]] auto Id() const;
        auto Id(int32_t value) const;
        [[nodiscard]] auto DisplayNameResource() const;
        auto DisplayNameResource(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderItemPropertySource
    {
        auto GetItemProperties(param::hstring const& itemPath) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderItemPropertySource<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities
    {
        auto IsPropertySupported(param::hstring const& propertyCanonicalName) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderStatus
    {
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto ErrorMessages() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderStatus>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderStatusFactory
    {
        auto CreateInstance(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message) const;
        auto CreateInstance2(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message, param::iterable<Windows::Storage::Provider::StorageProviderError> const& errorMessages) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderStatusFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderStatusFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderStatusSource
    {
        auto GetStatus() const;
        auto Changed(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::IStorageProviderStatusSource, Windows::Foundation::IInspectable> const& handler) const;
        using Changed_revoker = impl::event_revoker<Windows::Storage::Provider::IStorageProviderStatusSource, &impl::abi_t<Windows::Storage::Provider::IStorageProviderStatusSource>::remove_Changed>;
        [[nodiscard]] Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::IStorageProviderStatusSource, Windows::Foundation::IInspectable> const& handler) const;
        auto Changed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderStatusSource>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderStatusSource<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo
    {
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Context() const;
        auto Context(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto Path() const;
        auto Path(Windows::Storage::IStorageFolder const& value) const;
        [[nodiscard]] auto DisplayNameResource() const;
        auto DisplayNameResource(param::hstring const& value) const;
        [[nodiscard]] auto IconResource() const;
        auto IconResource(param::hstring const& value) const;
        [[nodiscard]] auto HydrationPolicy() const;
        auto HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy const& value) const;
        [[nodiscard]] auto HydrationPolicyModifier() const;
        auto HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const& value) const;
        [[nodiscard]] auto PopulationPolicy() const;
        auto PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy const& value) const;
        [[nodiscard]] auto InSyncPolicy() const;
        auto InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy const& value) const;
        [[nodiscard]] auto HardlinkPolicy() const;
        auto HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy const& value) const;
        [[nodiscard]] auto ShowSiblingsAsGroup() const;
        auto ShowSiblingsAsGroup(bool value) const;
        [[nodiscard]] auto Version() const;
        auto Version(param::hstring const& value) const;
        [[nodiscard]] auto ProtectionMode() const;
        auto ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode const& value) const;
        [[nodiscard]] auto AllowPinning() const;
        auto AllowPinning(bool value) const;
        [[nodiscard]] auto StorageProviderItemPropertyDefinitions() const;
        [[nodiscard]] auto RecycleBinUri() const;
        auto RecycleBinUri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo2
    {
        [[nodiscard]] auto ProviderId() const;
        auto ProviderId(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo3
    {
        [[nodiscard]] auto FallbackFileTypeInfo() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo3<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics
    {
        auto Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation) const;
        auto Unregister(param::hstring const& id) const;
        auto GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder) const;
        auto GetSyncRootInformationForId(param::hstring const& id) const;
        auto GetCurrentSyncRoots() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics2
    {
        auto IsSupported() const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Provider_IStorageProviderUriSource
    {
        auto GetPathForContentUri(param::hstring const& contentUri, Windows::Storage::Provider::StorageProviderGetPathForContentUriResult const& result) const;
        auto GetContentInfoForPath(param::hstring const& path, Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult const& result) const;
    };
    template <> struct consume<Windows::Storage::Provider::IStorageProviderUriSource>
    {
        template <typename D> using type = consume_Windows_Storage_Provider_IStorageProviderUriSource<D>;
    };
}
#endif
