// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_0_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments
{
    struct AppointmentCalendar;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts
{
    struct ContactAnnotationList;
    struct ContactGroup;
    struct ContactList;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email
{
    struct EmailMailbox;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks
{
    struct UserDataTaskList;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts
{
    enum class UserDataAccountContentKinds : uint32_t
    {
        Email = 0x1,
        Contact = 0x2,
        Appointment = 0x4,
    };
    enum class UserDataAccountOtherAppReadAccess : int32_t
    {
        SystemOnly = 0,
        Full = 1,
        None = 2,
    };
    enum class UserDataAccountStoreAccessType : int32_t
    {
        AllAccountsReadOnly = 0,
        AppAccountsReadWrite = 1,
    };
    struct IUserDataAccount;
    struct IUserDataAccount2;
    struct IUserDataAccount3;
    struct IUserDataAccount4;
    struct IUserDataAccountManagerForUser;
    struct IUserDataAccountManagerStatics;
    struct IUserDataAccountManagerStatics2;
    struct IUserDataAccountStore;
    struct IUserDataAccountStore2;
    struct IUserDataAccountStore3;
    struct IUserDataAccountStoreChangedEventArgs;
    struct UserDataAccount;
    struct UserDataAccountManager;
    struct UserDataAccountManagerForUser;
    struct UserDataAccountStore;
    struct UserDataAccountStoreChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccount";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManagerForUser";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStore";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountContentKinds";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountOtherAppReadAccess";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType> = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreAccessType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerForUser";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs> = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStoreChangedEventArgs";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>{ 0xB9C4367E,0xB348,0x4910,{ 0xBE,0x94,0x4A,0xD4,0xBB,0xA6,0xDE,0xA7 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>{ 0x078CD89F,0xDE82,0x404B,{ 0x81,0x95,0xC8,0xA3,0xAC,0x19,0x8F,0x60 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>{ 0x01533845,0x6C43,0x4286,{ 0x9D,0x69,0x3E,0x17,0x09,0xA1,0xF2,0x66 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>{ 0xC4315210,0xEAE5,0x4F0A,{ 0xA8,0xB2,0x1C,0xCA,0x11,0x5E,0x00,0x8F } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>{ 0x56A6E8DB,0xDB8F,0x41AB,{ 0xA6,0x5F,0x8C,0x59,0x71,0xAA,0xC9,0x82 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>{ 0x0D9B89EA,0x1928,0x4A20,{ 0x86,0xD5,0x3C,0x73,0x7F,0x7D,0xC3,0xB0 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>{ 0x6A3DED88,0x316B,0x435E,{ 0xB5,0x34,0xF7,0xD4,0xB4,0xB7,0xDB,0xA6 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>{ 0x2073B0AD,0x7D0A,0x4E76,{ 0xBF,0x45,0x23,0x68,0xF9,0x78,0xA5,0x9A } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>{ 0xB1E0AEF7,0x9560,0x4631,{ 0x8A,0xF0,0x06,0x1D,0x30,0x16,0x14,0x69 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>{ 0x8142C094,0xF3C9,0x478B,{ 0xB1,0x17,0x65,0x85,0xBE,0xBB,0x67,0x89 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>{ 0x84E3E2E5,0x8820,0x4512,{ 0xB1,0xF6,0x2E,0x03,0x5B,0xE1,0x07,0x2C } };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccount; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs; };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserDisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAccountTypeId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAppointmentCalendarsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindEmailMailboxesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactListsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactAnnotationListsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnterpriseId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsProtectedUnderLock(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExplictReadAccessPackageFamilyNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanShowCreateContactGroup(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanShowCreateContactGroup(bool) noexcept = 0;
            virtual int32_t __stdcall get_ProviderProperties(void**) noexcept = 0;
            virtual int32_t __stdcall FindUserDataTaskListsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindContactGroupsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryShowCreateContactGroupAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsProtectedUnderLock(bool) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAddAccountAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAccountSettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowAccountErrorResolverAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAccountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAccountAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAccountWithPackageRelativeAppIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_StoreChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StoreChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserDisplayName() const;
        WINRT_IMPL_AUTO(void) UserDisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess) OtherAppReadAccess() const;
        WINRT_IMPL_AUTO(void) OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Icon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceAccountTypeId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PackageFamilyName() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>) FindAppointmentCalendarsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>>) FindEmailMailboxesAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>>) FindContactListsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>>) FindContactAnnotationListsAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EnterpriseId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsProtectedUnderLock() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) ExplictReadAccessPackageFamilyNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanShowCreateContactGroup() const;
        WINRT_IMPL_AUTO(void) CanShowCreateContactGroup(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) ProviderProperties() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>>) FindUserDataTaskListsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>>) FindContactGroupsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) TryShowCreateContactGroupAsync() const;
        WINRT_IMPL_AUTO(void) IsProtectedUnderLock(bool value) const;
        WINRT_IMPL_AUTO(void) Icon(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>) RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>) RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ShowAccountSettingsAsync(param::hstring const& id) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ShowAccountErrorResolverAsync(param::hstring const& id) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser) GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>>) FindAccountsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>) GetAccountAsync(param::hstring const& id) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>) CreateAccountAsync(param::hstring const& userDisplayName) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>) CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId) const;
        WINRT_IMPL_AUTO(winrt::event_token) StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const;
        using StoreChanged_revoker = impl::event_revoker<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2, &impl::abi_t<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::remove_StoreChanged>;
        [[nodiscard]] StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StoreChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>) CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId, param::hstring const& enterpriseId) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs<D>;
    };
}
#endif
