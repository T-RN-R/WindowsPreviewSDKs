// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Email_0_H
#define WINRT_Windows_ApplicationModel_Email_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments
{
    struct AppointmentRecurrence;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email
{
    enum class EmailAttachmentDownloadState : int32_t
    {
        NotDownloaded = 0,
        Downloading = 1,
        Downloaded = 2,
        Failed = 3,
    };
    enum class EmailBatchStatus : int32_t
    {
        Success = 0,
        ServerSearchSyncManagerError = 1,
        ServerSearchUnknownError = 2,
    };
    enum class EmailCertificateValidationStatus : int32_t
    {
        Success = 0,
        NoMatch = 1,
        InvalidUsage = 2,
        InvalidCertificate = 3,
        Revoked = 4,
        ChainRevoked = 5,
        RevocationServerFailure = 6,
        Expired = 7,
        Untrusted = 8,
        ServerError = 9,
        UnknownFailure = 10,
    };
    enum class EmailFlagState : int32_t
    {
        Unflagged = 0,
        Flagged = 1,
        Completed = 2,
        Cleared = 3,
    };
    enum class EmailImportance : int32_t
    {
        Normal = 0,
        High = 1,
        Low = 2,
    };
    enum class EmailMailboxActionKind : int32_t
    {
        MarkMessageAsSeen = 0,
        MarkMessageRead = 1,
        ChangeMessageFlagState = 2,
        MoveMessage = 3,
        SaveDraft = 4,
        SendMessage = 5,
        CreateResponseReplyMessage = 6,
        CreateResponseReplyAllMessage = 7,
        CreateResponseForwardMessage = 8,
        MoveFolder = 9,
        MarkFolderForSyncEnabled = 10,
    };
    enum class EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation : int32_t
    {
        None = 0,
        StrongAlgorithm = 1,
        AnyAlgorithm = 2,
    };
    enum class EmailMailboxAutoReplyMessageResponseKind : int32_t
    {
        Html = 0,
        PlainText = 1,
    };
    enum class EmailMailboxChangeType : int32_t
    {
        MessageCreated = 0,
        MessageModified = 1,
        MessageDeleted = 2,
        FolderCreated = 3,
        FolderModified = 4,
        FolderDeleted = 5,
        ChangeTrackingLost = 6,
    };
    enum class EmailMailboxCreateFolderStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        PermissionsError = 2,
        ServerError = 3,
        UnknownFailure = 4,
        NameCollision = 5,
        ServerRejected = 6,
    };
    enum class EmailMailboxDeleteFolderStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        PermissionsError = 2,
        ServerError = 3,
        UnknownFailure = 4,
        CouldNotDeleteEverything = 5,
    };
    enum class EmailMailboxEmptyFolderStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        PermissionsError = 2,
        ServerError = 3,
        UnknownFailure = 4,
        CouldNotDeleteEverything = 5,
    };
    enum class EmailMailboxOtherAppReadAccess : int32_t
    {
        SystemOnly = 0,
        Full = 1,
        None = 2,
    };
    enum class EmailMailboxOtherAppWriteAccess : int32_t
    {
        None = 0,
        Limited = 1,
    };
    enum class EmailMailboxSmimeEncryptionAlgorithm : int32_t
    {
        Any = 0,
        TripleDes = 1,
        Des = 2,
        RC2128Bit = 3,
        RC264Bit = 4,
        RC240Bit = 5,
    };
    enum class EmailMailboxSmimeSigningAlgorithm : int32_t
    {
        Any = 0,
        Sha1 = 1,
        MD5 = 2,
    };
    enum class EmailMailboxSyncStatus : int32_t
    {
        Idle = 0,
        Syncing = 1,
        UpToDate = 2,
        AuthenticationError = 3,
        PolicyError = 4,
        UnknownError = 5,
        ManualAccountRemovalRequired = 6,
    };
    enum class EmailMeetingResponseType : int32_t
    {
        Accept = 0,
        Decline = 1,
        Tentative = 2,
    };
    enum class EmailMessageBodyKind : int32_t
    {
        Html = 0,
        PlainText = 1,
    };
    enum class EmailMessageDownloadState : int32_t
    {
        PartiallyDownloaded = 0,
        Downloading = 1,
        Downloaded = 2,
        Failed = 3,
    };
    enum class EmailMessageResponseKind : int32_t
    {
        None = 0,
        Reply = 1,
        ReplyAll = 2,
        Forward = 3,
    };
    enum class EmailMessageSmimeKind : int32_t
    {
        None = 0,
        ClearSigned = 1,
        OpaqueSigned = 2,
        Encrypted = 3,
    };
    enum class EmailQueryKind : int32_t
    {
        All = 0,
        Important = 1,
        Flagged = 2,
        Unread = 3,
        Read = 4,
        Unseen = 5,
    };
    enum class EmailQuerySearchFields : uint32_t
    {
        None = 0,
        Subject = 0x1,
        Sender = 0x2,
        Preview = 0x4,
        Recipients = 0x8,
        All = 0xffffffff,
    };
    enum class EmailQuerySearchScope : int32_t
    {
        Local = 0,
        Server = 1,
    };
    enum class EmailQuerySortDirection : int32_t
    {
        Descending = 0,
        Ascending = 1,
    };
    enum class EmailQuerySortProperty : int32_t
    {
        Date = 0,
    };
    enum class EmailRecipientResolutionStatus : int32_t
    {
        Success = 0,
        RecipientNotFound = 1,
        AmbiguousRecipient = 2,
        NoCertificate = 3,
        CertificateRequestLimitReached = 4,
        CannotResolveDistributionList = 5,
        ServerError = 6,
        UnknownFailure = 7,
    };
    enum class EmailSpecialFolderKind : int32_t
    {
        None = 0,
        Root = 1,
        Inbox = 2,
        Outbox = 3,
        Drafts = 4,
        DeletedItems = 5,
        Sent = 6,
    };
    enum class EmailStoreAccessType : int32_t
    {
        AppMailboxesReadWrite = 0,
        AllMailboxesLimitedReadWrite = 1,
    };
    struct IEmailAttachment;
    struct IEmailAttachment2;
    struct IEmailAttachmentFactory;
    struct IEmailAttachmentFactory2;
    struct IEmailConversation;
    struct IEmailConversationBatch;
    struct IEmailConversationReader;
    struct IEmailFolder;
    struct IEmailIrmInfo;
    struct IEmailIrmInfoFactory;
    struct IEmailIrmTemplate;
    struct IEmailIrmTemplateFactory;
    struct IEmailItemCounts;
    struct IEmailMailbox;
    struct IEmailMailbox2;
    struct IEmailMailbox3;
    struct IEmailMailbox4;
    struct IEmailMailbox5;
    struct IEmailMailboxAction;
    struct IEmailMailboxAutoReply;
    struct IEmailMailboxAutoReplySettings;
    struct IEmailMailboxCapabilities;
    struct IEmailMailboxCapabilities2;
    struct IEmailMailboxCapabilities3;
    struct IEmailMailboxChange;
    struct IEmailMailboxChangeReader;
    struct IEmailMailboxChangeTracker;
    struct IEmailMailboxChangedDeferral;
    struct IEmailMailboxChangedEventArgs;
    struct IEmailMailboxCreateFolderResult;
    struct IEmailMailboxPolicies;
    struct IEmailMailboxPolicies2;
    struct IEmailMailboxPolicies3;
    struct IEmailMailboxSyncManager;
    struct IEmailMailboxSyncManager2;
    struct IEmailManagerForUser;
    struct IEmailManagerStatics;
    struct IEmailManagerStatics2;
    struct IEmailManagerStatics3;
    struct IEmailMeetingInfo;
    struct IEmailMeetingInfo2;
    struct IEmailMessage;
    struct IEmailMessage2;
    struct IEmailMessage3;
    struct IEmailMessage4;
    struct IEmailMessageBatch;
    struct IEmailMessageReader;
    struct IEmailQueryOptions;
    struct IEmailQueryOptionsFactory;
    struct IEmailQueryTextSearch;
    struct IEmailRecipient;
    struct IEmailRecipientFactory;
    struct IEmailRecipientResolutionResult;
    struct IEmailRecipientResolutionResult2;
    struct IEmailStore;
    struct IEmailStoreNotificationTriggerDetails;
    struct EmailAttachment;
    struct EmailConversation;
    struct EmailConversationBatch;
    struct EmailConversationReader;
    struct EmailFolder;
    struct EmailIrmInfo;
    struct EmailIrmTemplate;
    struct EmailItemCounts;
    struct EmailMailbox;
    struct EmailMailboxAction;
    struct EmailMailboxAutoReply;
    struct EmailMailboxAutoReplySettings;
    struct EmailMailboxCapabilities;
    struct EmailMailboxChange;
    struct EmailMailboxChangeReader;
    struct EmailMailboxChangeTracker;
    struct EmailMailboxChangedDeferral;
    struct EmailMailboxChangedEventArgs;
    struct EmailMailboxCreateFolderResult;
    struct EmailMailboxPolicies;
    struct EmailMailboxSyncManager;
    struct EmailManager;
    struct EmailManagerForUser;
    struct EmailMeetingInfo;
    struct EmailMessage;
    struct EmailMessageBatch;
    struct EmailMessageReader;
    struct EmailQueryOptions;
    struct EmailQueryTextSearch;
    struct EmailRecipient;
    struct EmailRecipientResolutionResult;
    struct EmailStore;
    struct EmailStoreNotificationTriggerDetails;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Email::IEmailAttachment>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailAttachment2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailConversation>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailConversationBatch>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailConversationReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailFolder>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailIrmInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailItemCounts>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox5>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxAction>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChange>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailManagerForUser>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMessage>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMessage2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMessage3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMessage4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMessageBatch>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailMessageReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailQueryOptions>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailRecipient>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailStore>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailAttachment>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailConversation>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailConversationBatch>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailConversationReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailFolder>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailIrmInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailIrmTemplate>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailItemCounts>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailbox>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAction>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAutoReply>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxCapabilities>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChange>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangeReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangeTracker>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxPolicies>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSyncManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailManagerForUser>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMeetingInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessage>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessageBatch>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessageReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQueryOptions>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQueryTextSearch>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailRecipient>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailStore>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailAttachmentDownloadState>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailBatchStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailFlagState>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailImportance>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxActionKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangeType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSyncStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMeetingResponseType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessageBodyKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessageDownloadState>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessageResponseKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailMessageSmimeKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQueryKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQuerySearchFields>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQuerySearchScope>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQuerySortDirection>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailQuerySortProperty>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailSpecialFolderKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Email::EmailStoreAccessType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailAttachment>{ L"Windows.ApplicationModel.Email.EmailAttachment" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailConversation>{ L"Windows.ApplicationModel.Email.EmailConversation" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailConversationBatch>{ L"Windows.ApplicationModel.Email.EmailConversationBatch" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailConversationReader>{ L"Windows.ApplicationModel.Email.EmailConversationReader" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailFolder>{ L"Windows.ApplicationModel.Email.EmailFolder" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailIrmInfo>{ L"Windows.ApplicationModel.Email.EmailIrmInfo" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailIrmTemplate>{ L"Windows.ApplicationModel.Email.EmailIrmTemplate" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailItemCounts>{ L"Windows.ApplicationModel.Email.EmailItemCounts" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailbox>{ L"Windows.ApplicationModel.Email.EmailMailbox" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxAction>{ L"Windows.ApplicationModel.Email.EmailMailboxAction" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxAutoReply>{ L"Windows.ApplicationModel.Email.EmailMailboxAutoReply" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>{ L"Windows.ApplicationModel.Email.EmailMailboxAutoReplySettings" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxCapabilities>{ L"Windows.ApplicationModel.Email.EmailMailboxCapabilities" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxChange>{ L"Windows.ApplicationModel.Email.EmailMailboxChange" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxChangeReader>{ L"Windows.ApplicationModel.Email.EmailMailboxChangeReader" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxChangeTracker>{ L"Windows.ApplicationModel.Email.EmailMailboxChangeTracker" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>{ L"Windows.ApplicationModel.Email.EmailMailboxChangedDeferral" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>{ L"Windows.ApplicationModel.Email.EmailMailboxChangedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>{ L"Windows.ApplicationModel.Email.EmailMailboxCreateFolderResult" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxPolicies>{ L"Windows.ApplicationModel.Email.EmailMailboxPolicies" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxSyncManager>{ L"Windows.ApplicationModel.Email.EmailMailboxSyncManager" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailManager>{ L"Windows.ApplicationModel.Email.EmailManager" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailManagerForUser>{ L"Windows.ApplicationModel.Email.EmailManagerForUser" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMeetingInfo>{ L"Windows.ApplicationModel.Email.EmailMeetingInfo" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessage>{ L"Windows.ApplicationModel.Email.EmailMessage" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessageBatch>{ L"Windows.ApplicationModel.Email.EmailMessageBatch" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessageReader>{ L"Windows.ApplicationModel.Email.EmailMessageReader" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQueryOptions>{ L"Windows.ApplicationModel.Email.EmailQueryOptions" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQueryTextSearch>{ L"Windows.ApplicationModel.Email.EmailQueryTextSearch" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailRecipient>{ L"Windows.ApplicationModel.Email.EmailRecipient" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>{ L"Windows.ApplicationModel.Email.EmailRecipientResolutionResult" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailStore>{ L"Windows.ApplicationModel.Email.EmailStore" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>{ L"Windows.ApplicationModel.Email.EmailStoreNotificationTriggerDetails" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailAttachmentDownloadState>{ L"Windows.ApplicationModel.Email.EmailAttachmentDownloadState" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailBatchStatus>{ L"Windows.ApplicationModel.Email.EmailBatchStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>{ L"Windows.ApplicationModel.Email.EmailCertificateValidationStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailFlagState>{ L"Windows.ApplicationModel.Email.EmailFlagState" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailImportance>{ L"Windows.ApplicationModel.Email.EmailImportance" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxActionKind>{ L"Windows.ApplicationModel.Email.EmailMailboxActionKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation>{ L"Windows.ApplicationModel.Email.EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>{ L"Windows.ApplicationModel.Email.EmailMailboxAutoReplyMessageResponseKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxChangeType>{ L"Windows.ApplicationModel.Email.EmailMailboxChangeType" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus>{ L"Windows.ApplicationModel.Email.EmailMailboxCreateFolderStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus>{ L"Windows.ApplicationModel.Email.EmailMailboxDeleteFolderStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus>{ L"Windows.ApplicationModel.Email.EmailMailboxEmptyFolderStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess>{ L"Windows.ApplicationModel.Email.EmailMailboxOtherAppReadAccess" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess>{ L"Windows.ApplicationModel.Email.EmailMailboxOtherAppWriteAccess" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>{ L"Windows.ApplicationModel.Email.EmailMailboxSmimeEncryptionAlgorithm" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>{ L"Windows.ApplicationModel.Email.EmailMailboxSmimeSigningAlgorithm" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMailboxSyncStatus>{ L"Windows.ApplicationModel.Email.EmailMailboxSyncStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMeetingResponseType>{ L"Windows.ApplicationModel.Email.EmailMeetingResponseType" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessageBodyKind>{ L"Windows.ApplicationModel.Email.EmailMessageBodyKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessageDownloadState>{ L"Windows.ApplicationModel.Email.EmailMessageDownloadState" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessageResponseKind>{ L"Windows.ApplicationModel.Email.EmailMessageResponseKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailMessageSmimeKind>{ L"Windows.ApplicationModel.Email.EmailMessageSmimeKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQueryKind>{ L"Windows.ApplicationModel.Email.EmailQueryKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQuerySearchFields>{ L"Windows.ApplicationModel.Email.EmailQuerySearchFields" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQuerySearchScope>{ L"Windows.ApplicationModel.Email.EmailQuerySearchScope" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQuerySortDirection>{ L"Windows.ApplicationModel.Email.EmailQuerySortDirection" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailQuerySortProperty>{ L"Windows.ApplicationModel.Email.EmailQuerySortProperty" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus>{ L"Windows.ApplicationModel.Email.EmailRecipientResolutionStatus" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailSpecialFolderKind>{ L"Windows.ApplicationModel.Email.EmailSpecialFolderKind" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::EmailStoreAccessType>{ L"Windows.ApplicationModel.Email.EmailStoreAccessType" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailAttachment>{ L"Windows.ApplicationModel.Email.IEmailAttachment" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailAttachment2>{ L"Windows.ApplicationModel.Email.IEmailAttachment2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ L"Windows.ApplicationModel.Email.IEmailAttachmentFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ L"Windows.ApplicationModel.Email.IEmailAttachmentFactory2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailConversation>{ L"Windows.ApplicationModel.Email.IEmailConversation" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailConversationBatch>{ L"Windows.ApplicationModel.Email.IEmailConversationBatch" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailConversationReader>{ L"Windows.ApplicationModel.Email.IEmailConversationReader" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailFolder>{ L"Windows.ApplicationModel.Email.IEmailFolder" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailIrmInfo>{ L"Windows.ApplicationModel.Email.IEmailIrmInfo" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ L"Windows.ApplicationModel.Email.IEmailIrmInfoFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ L"Windows.ApplicationModel.Email.IEmailIrmTemplate" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ L"Windows.ApplicationModel.Email.IEmailIrmTemplateFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailItemCounts>{ L"Windows.ApplicationModel.Email.IEmailItemCounts" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailbox>{ L"Windows.ApplicationModel.Email.IEmailMailbox" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailbox2>{ L"Windows.ApplicationModel.Email.IEmailMailbox2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailbox3>{ L"Windows.ApplicationModel.Email.IEmailMailbox3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailbox4>{ L"Windows.ApplicationModel.Email.IEmailMailbox4" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailbox5>{ L"Windows.ApplicationModel.Email.IEmailMailbox5" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxAction>{ L"Windows.ApplicationModel.Email.IEmailMailboxAction" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ L"Windows.ApplicationModel.Email.IEmailMailboxAutoReply" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ L"Windows.ApplicationModel.Email.IEmailMailboxAutoReplySettings" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxChange>{ L"Windows.ApplicationModel.Email.IEmailMailboxChange" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ L"Windows.ApplicationModel.Email.IEmailMailboxChangeReader" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ L"Windows.ApplicationModel.Email.IEmailMailboxChangeTracker" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ L"Windows.ApplicationModel.Email.IEmailMailboxChangedDeferral" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ L"Windows.ApplicationModel.Email.IEmailMailboxChangedEventArgs" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ L"Windows.ApplicationModel.Email.IEmailMailboxCreateFolderResult" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ L"Windows.ApplicationModel.Email.IEmailMailboxPolicies" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ L"Windows.ApplicationModel.Email.IEmailMailboxPolicies2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ L"Windows.ApplicationModel.Email.IEmailMailboxPolicies3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ L"Windows.ApplicationModel.Email.IEmailMailboxSyncManager" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ L"Windows.ApplicationModel.Email.IEmailMailboxSyncManager2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailManagerForUser>{ L"Windows.ApplicationModel.Email.IEmailManagerForUser" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailManagerStatics>{ L"Windows.ApplicationModel.Email.IEmailManagerStatics" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ L"Windows.ApplicationModel.Email.IEmailManagerStatics2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ L"Windows.ApplicationModel.Email.IEmailManagerStatics3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ L"Windows.ApplicationModel.Email.IEmailMeetingInfo" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ L"Windows.ApplicationModel.Email.IEmailMeetingInfo2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMessage>{ L"Windows.ApplicationModel.Email.IEmailMessage" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMessage2>{ L"Windows.ApplicationModel.Email.IEmailMessage2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMessage3>{ L"Windows.ApplicationModel.Email.IEmailMessage3" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMessage4>{ L"Windows.ApplicationModel.Email.IEmailMessage4" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMessageBatch>{ L"Windows.ApplicationModel.Email.IEmailMessageBatch" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailMessageReader>{ L"Windows.ApplicationModel.Email.IEmailMessageReader" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailQueryOptions>{ L"Windows.ApplicationModel.Email.IEmailQueryOptions" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ L"Windows.ApplicationModel.Email.IEmailQueryOptionsFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ L"Windows.ApplicationModel.Email.IEmailQueryTextSearch" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailRecipient>{ L"Windows.ApplicationModel.Email.IEmailRecipient" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ L"Windows.ApplicationModel.Email.IEmailRecipientFactory" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ L"Windows.ApplicationModel.Email.IEmailRecipientResolutionResult" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ L"Windows.ApplicationModel.Email.IEmailRecipientResolutionResult2" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailStore>{ L"Windows.ApplicationModel.Email.IEmailStore" };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ L"Windows.ApplicationModel.Email.IEmailStoreNotificationTriggerDetails" };
#endif
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailAttachment>{ 0xF353CAF9,0x57C8,0x4ADB,{ 0xB9,0x92,0x60,0xFC,0xEB,0x58,0x4F,0x54 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailAttachment2>{ 0x225F1070,0xB0FF,0x4571,{ 0x9D,0x54,0xA7,0x06,0xC4,0x8D,0x55,0xC6 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ 0x796EAC46,0xED56,0x4979,{ 0x87,0x08,0xAB,0xB8,0xBC,0x85,0x4B,0x7D } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ 0x23259435,0x51F9,0x427D,{ 0xAD,0xCD,0x24,0x10,0x23,0xC8,0xCF,0xB7 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailConversation>{ 0xDA18C248,0xA0BC,0x4349,{ 0x90,0x2D,0x90,0xF6,0x63,0x89,0xF5,0x1B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailConversationBatch>{ 0xB8C1AB81,0x01C5,0x432A,{ 0x9D,0xF1,0xFE,0x85,0xD9,0x8A,0x27,0x9A } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailConversationReader>{ 0xB4630F82,0x2875,0x44C8,{ 0x9B,0x8C,0x85,0xBE,0xB3,0xA3,0xC6,0x53 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailFolder>{ 0xA24F7771,0x996C,0x4864,{ 0xB1,0xBA,0xED,0x12,0x40,0xE5,0x7D,0x11 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailIrmInfo>{ 0x90F52193,0xB1A0,0x4EBD,{ 0xA6,0xB6,0xDD,0xCA,0x55,0x60,0x6E,0x0E } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ 0x314BB18C,0xE3E6,0x4D7B,{ 0xBE,0x8D,0x91,0xA9,0x63,0x11,0xB0,0x1B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ 0xF327758D,0x546D,0x4BEA,{ 0xA9,0x63,0x54,0xA3,0x8B,0x2C,0xC0,0x16 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ 0x3DA31876,0x8738,0x4418,{ 0xB9,0xCB,0x47,0x1B,0x93,0x6F,0xE7,0x1E } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailItemCounts>{ 0x5BD13321,0xFEC8,0x4BAB,{ 0x83,0xBA,0x0B,0xAF,0x3C,0x1F,0x6C,0xBD } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailbox>{ 0xA8790649,0xCF5B,0x411B,{ 0x80,0xB1,0x4A,0x6A,0x14,0x84,0xCE,0x25 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailbox2>{ 0x14F8E404,0x6CA2,0x4AB2,{ 0x92,0x41,0x79,0xCD,0x7B,0xF4,0x63,0x46 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailbox3>{ 0x3DA5897B,0x458B,0x408A,{ 0x8E,0x37,0xAC,0x8B,0x05,0xD8,0xAF,0x56 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailbox4>{ 0x5D1F301B,0xF222,0x48A7,{ 0xB7,0xB6,0x71,0x63,0x56,0xCD,0x26,0xA1 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailbox5>{ 0x39967087,0x0092,0x49BE,{ 0xBD,0x0E,0x5D,0x4D,0xC9,0xD9,0x6D,0x90 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxAction>{ 0xAC9889FA,0x21FA,0x4927,{ 0x92,0x10,0xD4,0x10,0x58,0x2F,0xDF,0x3E } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ 0xE223254C,0x8AB4,0x485B,{ 0xB3,0x1F,0x04,0xD1,0x54,0x76,0xBD,0x59 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ 0xA87A9FA8,0x0AC6,0x4B77,{ 0xBA,0x77,0xA6,0xB9,0x9E,0x9A,0x27,0xB8 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ 0xEEDEC3A6,0x89DB,0x4305,{ 0x82,0xC4,0x43,0x9E,0x0A,0x33,0xDA,0x11 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ 0x69723EE4,0x2F21,0x4CBC,{ 0x88,0xAB,0x2E,0x76,0x02,0xA4,0x80,0x6B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ 0xF690E944,0x56F2,0x45AA,{ 0x87,0x2C,0x0C,0xE9,0xF3,0xDB,0x0B,0x5C } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxChange>{ 0x61EDF54B,0x11EF,0x400C,{ 0xAD,0xDE,0x8C,0xDE,0x65,0xC8,0x5E,0x66 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ 0xBDBD0EBB,0xC53D,0x4331,{ 0x97,0xBE,0xBE,0x75,0xA2,0x14,0x6A,0x75 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ 0x7AE48638,0x5166,0x42B7,{ 0x88,0x82,0xFD,0x21,0xC9,0x2B,0xDD,0x4B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ 0x779A74C1,0x97C5,0x4B54,{ 0xB3,0x0D,0x30,0x62,0x32,0x62,0x3E,0x6D } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ 0x3CFD5F6E,0x01D4,0x4E4A,{ 0xA4,0x4C,0xB2,0x2D,0xD4,0x2E,0xC2,0x07 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ 0xB228557F,0x2885,0x4998,{ 0xB5,0x95,0x8A,0x2D,0x37,0x4C,0xE9,0x50 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ 0x1F3345C5,0x1C3B,0x4DC7,{ 0xB4,0x10,0x63,0x73,0x78,0x3E,0x54,0x5D } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ 0xBAB58AFB,0xA14B,0x497C,{ 0xA8,0xE2,0x55,0xEA,0xC2,0x9C,0xC4,0xB5 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ 0xBDD4A01F,0x4867,0x414A,{ 0x81,0xA2,0x80,0x39,0x19,0xC4,0x41,0x91 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ 0x517AC55A,0x3591,0x4B5D,{ 0x85,0xBC,0xC7,0x1D,0xDE,0x86,0x22,0x63 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ 0xCD8DC97E,0x95C1,0x4F89,{ 0x81,0xB7,0xE6,0xAE,0xCB,0x66,0x95,0xFC } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailManagerForUser>{ 0xF773DE9F,0x3CA5,0x4B0F,{ 0x90,0xC1,0x15,0x6E,0x40,0x17,0x4C,0xE5 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailManagerStatics>{ 0xF5128654,0x55C5,0x4890,{ 0xA8,0x24,0x21,0x6C,0x26,0x18,0xCE,0x7F } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ 0xAC052DA3,0xB194,0x425D,{ 0xB6,0xD9,0xD0,0xF0,0x41,0x35,0xED,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ 0x4A722395,0x843E,0x4945,{ 0xB3,0xAA,0x34,0x9E,0x07,0xA3,0x62,0xC5 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ 0x31C03FA9,0x7933,0x415F,{ 0xA2,0x75,0xD1,0x65,0xBA,0x07,0x02,0x6B } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ 0x7E59386D,0xB0D9,0x4FE5,{ 0x86,0x7C,0xE3,0x1E,0xD2,0xB5,0x88,0xB8 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMessage>{ 0x6C6D948D,0x80B5,0x48F8,{ 0xB0,0xB1,0xE0,0x4E,0x43,0x0F,0x44,0xE5 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMessage2>{ 0xFDC8248B,0x9F1A,0x44DB,{ 0xBD,0x3C,0x65,0xC3,0x84,0x77,0x0F,0x86 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMessage3>{ 0xA1EA675C,0xE598,0x4D29,{ 0xA0,0x18,0xFC,0x7B,0x7E,0xEC,0xE0,0xA1 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMessage4>{ 0x317CF181,0x3E7F,0x4A05,{ 0x83,0x94,0x3E,0x10,0x33,0x6D,0xD4,0x35 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMessageBatch>{ 0x605CD08F,0x25D9,0x4F1B,{ 0x9E,0x51,0x05,0x14,0xC0,0x14,0x96,0x53 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailMessageReader>{ 0x2F4ABE9F,0x6213,0x4A85,{ 0xA3,0xB0,0xF9,0x2D,0x1A,0x83,0x9D,0x19 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailQueryOptions>{ 0x45504B9B,0x3E7F,0x4D52,{ 0xB6,0xDD,0xD6,0xFD,0x4E,0x1F,0xBD,0x9A } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ 0x88F1A1B8,0x78AB,0x4EE8,{ 0xB4,0xE3,0x04,0x6D,0x6E,0x2F,0xE5,0xE2 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ 0x9FA0A288,0x3C5D,0x46A5,{ 0xA6,0xE2,0x31,0xD6,0xFD,0x17,0xE5,0x40 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailRecipient>{ 0xCAE825B3,0x4478,0x4814,{ 0xB9,0x00,0xC9,0x02,0xB5,0xE1,0x9B,0x53 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ 0x5500B84D,0xC79A,0x4EF8,{ 0xB9,0x09,0x72,0x2E,0x18,0xE3,0x93,0x5D } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ 0x918338FA,0x8D8D,0x4573,{ 0x80,0xD1,0x07,0x17,0x2A,0x34,0xB9,0x8D } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ 0x5E420BB6,0xCE5B,0x4BDE,{ 0xB9,0xD4,0xE1,0x6D,0xA0,0xB0,0x9F,0xCA } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailStore>{ 0xF803226E,0x9137,0x4F8B,{ 0xA4,0x70,0x27,0x9A,0xC3,0x05,0x8E,0xB6 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ 0xCE17563C,0x46E6,0x43C9,{ 0x96,0xF7,0xFA,0xCF,0x7D,0xD7,0x10,0xCB } };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailAttachment>{ using type = Windows::ApplicationModel::Email::IEmailAttachment; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailConversation>{ using type = Windows::ApplicationModel::Email::IEmailConversation; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailConversationBatch>{ using type = Windows::ApplicationModel::Email::IEmailConversationBatch; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailConversationReader>{ using type = Windows::ApplicationModel::Email::IEmailConversationReader; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailFolder>{ using type = Windows::ApplicationModel::Email::IEmailFolder; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailIrmInfo>{ using type = Windows::ApplicationModel::Email::IEmailIrmInfo; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailIrmTemplate>{ using type = Windows::ApplicationModel::Email::IEmailIrmTemplate; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailItemCounts>{ using type = Windows::ApplicationModel::Email::IEmailItemCounts; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailbox>{ using type = Windows::ApplicationModel::Email::IEmailMailbox; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxAction>{ using type = Windows::ApplicationModel::Email::IEmailMailboxAction; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxAutoReply>{ using type = Windows::ApplicationModel::Email::IEmailMailboxAutoReply; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>{ using type = Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxCapabilities>{ using type = Windows::ApplicationModel::Email::IEmailMailboxCapabilities; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChange>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChange; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangeReader>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangeReader; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangeTracker>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangeTracker; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>{ using type = Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxPolicies>{ using type = Windows::ApplicationModel::Email::IEmailMailboxPolicies; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxSyncManager>{ using type = Windows::ApplicationModel::Email::IEmailMailboxSyncManager; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailManagerForUser>{ using type = Windows::ApplicationModel::Email::IEmailManagerForUser; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMeetingInfo>{ using type = Windows::ApplicationModel::Email::IEmailMeetingInfo; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMessage>{ using type = Windows::ApplicationModel::Email::IEmailMessage; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMessageBatch>{ using type = Windows::ApplicationModel::Email::IEmailMessageBatch; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailMessageReader>{ using type = Windows::ApplicationModel::Email::IEmailMessageReader; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailQueryOptions>{ using type = Windows::ApplicationModel::Email::IEmailQueryOptions; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailQueryTextSearch>{ using type = Windows::ApplicationModel::Email::IEmailQueryTextSearch; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailRecipient>{ using type = Windows::ApplicationModel::Email::IEmailRecipient; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>{ using type = Windows::ApplicationModel::Email::IEmailRecipientResolutionResult; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailStore>{ using type = Windows::ApplicationModel::Email::IEmailStore; };
    template <> struct default_interface<Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>{ using type = Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails; };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FileName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachment2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentLocation(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentLocation(void*) noexcept = 0;
            virtual int32_t __stdcall get_DownloadState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DownloadState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedDownloadSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_EstimatedDownloadSizeInBytes(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsFromBaseMessage(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInline(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInline(bool) noexcept = 0;
            virtual int32_t __stdcall get_MimeType(void**) noexcept = 0;
            virtual int32_t __stdcall put_MimeType(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachmentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailConversation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_MailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_FlagState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HasAttachment(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Importance(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastEmailResponseKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MessageCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MostRecentMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_MostRecentMessageTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Preview(void**) noexcept = 0;
            virtual int32_t __stdcall get_LatestSender(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnreadMessageCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall FindMessagesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindMessagesWithCountAsync(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailConversationBatch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Conversations(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailConversationReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailFolder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_MailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ParentFolderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsSyncEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSyncEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_LastSuccessfulSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_LastSuccessfulSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindChildFoldersAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageCountsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveWithNewNameAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SaveMessageAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanEdit(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanEdit(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanExtractData(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanExtractData(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanForward(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanForward(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanModifyRecipientsOnResponse(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanModifyRecipientsOnResponse(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanPrintData(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanPrintData(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanRemoveIrmOnResponse(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanRemoveIrmOnResponse(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanReply(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanReply(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanReplyAll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanReplyAll(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ExpirationDate(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsIrmOriginator(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIrmOriginator(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsProgramaticAccessAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsProgramaticAccessAllowed(bool) noexcept = 0;
            virtual int32_t __stdcall get_Template(void**) noexcept = 0;
            virtual int32_t __stdcall put_Template(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmTemplate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailItemCounts>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Flagged(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Important(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Total(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Unread(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOwnedByCurrentApp(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDataEncryptedUnderLock(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MailAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_MailAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_MailAddressAliases(void**) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppWriteAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppWriteAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Policies(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SyncManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSpecialFolderAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall MarkMessageAsSeenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkFolderAsSeenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkMessageReadAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall ChangeMessageFlagStateAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveMessageAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveFolderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveFolderWithNewNameAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkFolderSyncEnabledAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall SendMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveDraftAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DownloadMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DownloadAttachmentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateResponseMessageAsync(void*, int32_t, void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUpdateMeetingResponseAsync(void*, int32_t, void*, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryForwardMeetingAsync(void*, void*, void*, int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryProposeNewTimeForMeetingAsync(void*, int64_t, int64_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_MailboxChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MailboxChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SmartSendMessageAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetAutoReplySettingsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetAutoReplySettingsAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LinkedMailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ResolveRecipientsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ValidateCertificatesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryEmptyFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateFolderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryDeleteFolderAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterSyncManagerAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetChangeTracker(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxAction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ChangeNumber(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Response(void**) noexcept = 0;
            virtual int32_t __stdcall put_Response(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ResponseKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ResponseKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_InternalReply(void**) noexcept = 0;
            virtual int32_t __stdcall get_KnownExternalReply(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnknownExternalReply(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanForwardMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanGetAndSetExternalAutoReplies(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanGetAndSetInternalAutoReplies(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanUpdateMeetingResponses(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanServerSearchFolders(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanServerSearchMailbox(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanProposeNewTimeForMeetings(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanSmartSend(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanResolveRecipients(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanValidateCertificates(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanEmptyFolder(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanCreateFolder(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanDeleteFolder(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanMoveFolder(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_CanForwardMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanGetAndSetExternalAutoReplies(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanGetAndSetInternalAutoReplies(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanUpdateMeetingResponses(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanServerSearchFolders(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanServerSearchMailbox(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanProposeNewTimeForMeetings(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanSmartSend(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanResolveRecipients(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanValidateCertificates(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanEmptyFolder(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanCreateFolder(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanDeleteFolder(bool) noexcept = 0;
            virtual int32_t __stdcall put_CanMoveFolder(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MailboxActions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_Folder(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcceptChanges() noexcept = 0;
            virtual int32_t __stdcall AcceptChangesThrough(void*) noexcept = 0;
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTracking(bool*) noexcept = 0;
            virtual int32_t __stdcall Enable() noexcept = 0;
            virtual int32_t __stdcall GetChangeReader(void**) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Folder(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxPolicies>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedSmimeEncryptionAlgorithmNegotiation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AllowSmimeSoftCertificates(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RequiredSmimeEncryptionAlgorithm(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequiredSmimeSigningAlgorithm(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MustEncryptSmimeMessages(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MustSignSmimeMessages(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AllowedSmimeEncryptionAlgorithmNegotiation(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_AllowSmimeSoftCertificates(bool) noexcept = 0;
            virtual int32_t __stdcall put_RequiredSmimeEncryptionAlgorithm(void*) noexcept = 0;
            virtual int32_t __stdcall put_RequiredSmimeSigningAlgorithm(void*) noexcept = 0;
            virtual int32_t __stdcall put_MustEncryptSmimeMessages(bool) noexcept = 0;
            virtual int32_t __stdcall put_MustSignSmimeMessages(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastSuccessfulSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastAttemptedSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SyncAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_SyncStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SyncStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_LastSuccessfulSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall put_LastAttemptedSyncTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowComposeNewEmailAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowComposeNewEmailAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMeetingInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowNewTimeProposal(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowNewTimeProposal(bool) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentRoamingId(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppointmentRoamingId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentOriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppointmentOriginalStartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsAllDay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAllDay(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsResponseRequested(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsResponseRequested(bool) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProposedStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProposedStartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProposedDuration(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProposedDuration(void*) noexcept = 0;
            virtual int32_t __stdcall get_RecurrenceStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_RecurrenceStartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(void**) noexcept = 0;
            virtual int32_t __stdcall put_Recurrence(void*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteChangeNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_RemoteChangeNumber(uint64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMeetingInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReportedOutOfDateByServer(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall put_Body(void*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall get_CC(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bcc(void**) noexcept = 0;
            virtual int32_t __stdcall get_Attachments(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_MailboxId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConversationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_FolderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowInternetImages(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowInternetImages(bool) noexcept = 0;
            virtual int32_t __stdcall get_ChangeNumber(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DownloadState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DownloadState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedDownloadSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_EstimatedDownloadSizeInBytes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_FlagState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FlagState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HasPartialBodies(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Importance(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Importance(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InResponseToMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IrmInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_IrmInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsDraftMessage(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRead(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRead(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSeen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSeen(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsServerSearchMessage(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSmartSendable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MessageClass(void**) noexcept = 0;
            virtual int32_t __stdcall put_MessageClass(void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedSubject(void**) noexcept = 0;
            virtual int32_t __stdcall get_OriginalCodePage(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OriginalCodePage(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Preview(void**) noexcept = 0;
            virtual int32_t __stdcall put_Preview(void*) noexcept = 0;
            virtual int32_t __stdcall get_LastResponseKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LastResponseKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Sender(void**) noexcept = 0;
            virtual int32_t __stdcall put_Sender(void*) noexcept = 0;
            virtual int32_t __stdcall get_SentTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_SentTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_MeetingInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_MeetingInfo(void*) noexcept = 0;
            virtual int32_t __stdcall GetBodyStream(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetBodyStream(int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmimeData(void**) noexcept = 0;
            virtual int32_t __stdcall put_SmimeData(void*) noexcept = 0;
            virtual int32_t __stdcall get_SmimeKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SmimeKind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReplyTo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SentRepresenting(void**) noexcept = 0;
            virtual int32_t __stdcall put_SentRepresenting(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMessageBatch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Messages(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailMessageReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextSearch(void**) noexcept = 0;
            virtual int32_t __stdcall get_SortDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SortDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SortProperty(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SortProperty(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FolderIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithText(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithTextAndFields(void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailQueryTextSearch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Fields(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Fields(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SearchScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SearchScope(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipientFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithName(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PublicKeys(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetPublicKeys(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindMailboxesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMailboxAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMailboxAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMailboxInAccountAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailAttachment
    {
        [[nodiscard]] auto FileName() const;
        auto FileName(param::hstring const& value) const;
        [[nodiscard]] auto Data() const;
        auto Data(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachment>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachment<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailAttachment2
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto ContentId() const;
        auto ContentId(param::hstring const& value) const;
        [[nodiscard]] auto ContentLocation() const;
        auto ContentLocation(param::hstring const& value) const;
        [[nodiscard]] auto DownloadState() const;
        auto DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState const& value) const;
        [[nodiscard]] auto EstimatedDownloadSizeInBytes() const;
        auto EstimatedDownloadSizeInBytes(uint64_t value) const;
        [[nodiscard]] auto IsFromBaseMessage() const;
        [[nodiscard]] auto IsInline() const;
        auto IsInline(bool value) const;
        [[nodiscard]] auto MimeType() const;
        auto MimeType(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachment2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory
    {
        auto Create(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachmentFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory2
    {
        auto Create(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data, param::hstring const& mimeType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailConversation
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto MailboxId() const;
        [[nodiscard]] auto FlagState() const;
        [[nodiscard]] auto HasAttachment() const;
        [[nodiscard]] auto Importance() const;
        [[nodiscard]] auto LastEmailResponseKind() const;
        [[nodiscard]] auto MessageCount() const;
        [[nodiscard]] auto MostRecentMessageId() const;
        [[nodiscard]] auto MostRecentMessageTime() const;
        [[nodiscard]] auto Preview() const;
        [[nodiscard]] auto LatestSender() const;
        [[nodiscard]] auto Subject() const;
        [[nodiscard]] auto UnreadMessageCount() const;
        auto FindMessagesAsync() const;
        auto FindMessagesAsync(uint32_t count) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailConversation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailConversation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailConversationBatch
    {
        [[nodiscard]] auto Conversations() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailConversationBatch>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailConversationBatch<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailConversationReader
    {
        auto ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailConversationReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailConversationReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailFolder
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto MailboxId() const;
        [[nodiscard]] auto ParentFolderId() const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto IsSyncEnabled() const;
        auto IsSyncEnabled(bool value) const;
        [[nodiscard]] auto LastSuccessfulSyncTime() const;
        auto LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto Kind() const;
        auto CreateFolderAsync(param::hstring const& name) const;
        auto DeleteAsync() const;
        auto FindChildFoldersAsync() const;
        auto GetConversationReader() const;
        auto GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
        auto GetMessageAsync(param::hstring const& id) const;
        auto GetMessageReader() const;
        auto GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
        auto GetMessageCountsAsync() const;
        auto TryMoveAsync(Windows::ApplicationModel::Email::EmailFolder const& newParentFolder) const;
        auto TryMoveAsync(Windows::ApplicationModel::Email::EmailFolder const& newParentFolder, param::hstring const& newFolderName) const;
        auto TrySaveAsync() const;
        auto SaveMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailFolder>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailFolder<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailIrmInfo
    {
        [[nodiscard]] auto CanEdit() const;
        auto CanEdit(bool value) const;
        [[nodiscard]] auto CanExtractData() const;
        auto CanExtractData(bool value) const;
        [[nodiscard]] auto CanForward() const;
        auto CanForward(bool value) const;
        [[nodiscard]] auto CanModifyRecipientsOnResponse() const;
        auto CanModifyRecipientsOnResponse(bool value) const;
        [[nodiscard]] auto CanPrintData() const;
        auto CanPrintData(bool value) const;
        [[nodiscard]] auto CanRemoveIrmOnResponse() const;
        auto CanRemoveIrmOnResponse(bool value) const;
        [[nodiscard]] auto CanReply() const;
        auto CanReply(bool value) const;
        [[nodiscard]] auto CanReplyAll() const;
        auto CanReplyAll(bool value) const;
        [[nodiscard]] auto ExpirationDate() const;
        auto ExpirationDate(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto IsIrmOriginator() const;
        auto IsIrmOriginator(bool value) const;
        [[nodiscard]] auto IsProgramaticAccessAllowed() const;
        auto IsProgramaticAccessAllowed(bool value) const;
        [[nodiscard]] auto Template() const;
        auto Template(Windows::ApplicationModel::Email::EmailIrmTemplate const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailIrmInfoFactory
    {
        auto Create(Windows::Foundation::DateTime const& expiration, Windows::ApplicationModel::Email::EmailIrmTemplate const& irmTemplate) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailIrmTemplate
    {
        [[nodiscard]] auto Id() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Description() const;
        auto Description(param::hstring const& value) const;
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmTemplate>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailIrmTemplateFactory
    {
        auto Create(param::hstring const& id, param::hstring const& name, param::hstring const& description) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmTemplateFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailItemCounts
    {
        [[nodiscard]] auto Flagged() const;
        [[nodiscard]] auto Important() const;
        [[nodiscard]] auto Total() const;
        [[nodiscard]] auto Unread() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailItemCounts>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailItemCounts<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailbox
    {
        [[nodiscard]] auto Capabilities() const;
        [[nodiscard]] auto ChangeTracker() const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto IsOwnedByCurrentApp() const;
        [[nodiscard]] auto IsDataEncryptedUnderLock() const;
        [[nodiscard]] auto MailAddress() const;
        auto MailAddress(param::hstring const& value) const;
        [[nodiscard]] auto MailAddressAliases() const;
        [[nodiscard]] auto OtherAppReadAccess() const;
        auto OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess const& value) const;
        [[nodiscard]] auto OtherAppWriteAccess() const;
        auto OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess const& value) const;
        [[nodiscard]] auto Policies() const;
        [[nodiscard]] auto SourceDisplayName() const;
        [[nodiscard]] auto SyncManager() const;
        [[nodiscard]] auto UserDataAccountId() const;
        auto GetConversationReader() const;
        auto GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
        auto GetMessageReader() const;
        auto GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
        auto DeleteAsync() const;
        auto GetConversationAsync(param::hstring const& id) const;
        auto GetFolderAsync(param::hstring const& id) const;
        auto GetMessageAsync(param::hstring const& id) const;
        auto GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind const& folderType) const;
        auto SaveAsync() const;
        auto MarkMessageAsSeenAsync(param::hstring const& messageId) const;
        auto MarkFolderAsSeenAsync(param::hstring const& folderId) const;
        auto MarkMessageReadAsync(param::hstring const& messageId, bool isRead) const;
        auto ChangeMessageFlagStateAsync(param::hstring const& messageId, Windows::ApplicationModel::Email::EmailFlagState const& flagState) const;
        auto TryMoveMessageAsync(param::hstring const& messageId, param::hstring const& newParentFolderId) const;
        auto TryMoveFolderAsync(param::hstring const& folderId, param::hstring const& newParentFolderId) const;
        auto TryMoveFolderAsync(param::hstring const& folderId, param::hstring const& newParentFolderId, param::hstring const& newFolderName) const;
        auto DeleteMessageAsync(param::hstring const& messageId) const;
        auto MarkFolderSyncEnabledAsync(param::hstring const& folderId, bool isSyncEnabled) const;
        auto SendMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
        auto SaveDraftAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
        auto DownloadMessageAsync(param::hstring const& messageId) const;
        auto DownloadAttachmentAsync(param::hstring const& attachmentId) const;
        auto CreateResponseMessageAsync(param::hstring const& messageId, Windows::ApplicationModel::Email::EmailMessageResponseKind const& responseType, param::hstring const& subject, Windows::ApplicationModel::Email::EmailMessageBodyKind const& responseHeaderType, param::hstring const& responseHeader) const;
        auto TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, Windows::ApplicationModel::Email::EmailMeetingResponseType const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const;
        auto TryForwardMeetingAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, param::async_iterable<Windows::ApplicationModel::Email::EmailRecipient> const& recipients, param::hstring const& subject, Windows::ApplicationModel::Email::EmailMessageBodyKind const& forwardHeaderType, param::hstring const& forwardHeader, param::hstring const& comment) const;
        auto TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const;
        auto MailboxChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const& pHandler) const;
        using MailboxChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Email::IEmailMailbox, &impl::abi_t<Windows::ApplicationModel::Email::IEmailMailbox>::remove_MailboxChanged>;
        [[nodiscard]] MailboxChanged_revoker MailboxChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const& pHandler) const;
        auto MailboxChanged(winrt::event_token const& token) const noexcept;
        auto SendMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message, bool smartSend) const;
        auto TrySetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const& autoReplySettings) const;
        auto TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const& requestedFormat) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailbox2
    {
        [[nodiscard]] auto LinkedMailboxId() const;
        [[nodiscard]] auto NetworkAccountId() const;
        [[nodiscard]] auto NetworkId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailbox3
    {
        auto ResolveRecipientsAsync(param::async_iterable<hstring> const& recipients) const;
        auto ValidateCertificatesAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
        auto TryEmptyFolderAsync(param::hstring const& folderId) const;
        auto TryCreateFolderAsync(param::hstring const& parentFolderId, param::hstring const& name) const;
        auto TryDeleteFolderAsync(param::hstring const& folderId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailbox4
    {
        auto RegisterSyncManagerAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailbox5
    {
        auto GetChangeTracker(param::hstring const& identity) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxAction
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto ChangeNumber() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxAction>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxAction<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto Response() const;
        auto Response(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings
    {
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto ResponseKind() const;
        auto ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto EndTime() const;
        auto EndTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto InternalReply() const;
        [[nodiscard]] auto KnownExternalReply() const;
        [[nodiscard]] auto UnknownExternalReply() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities
    {
        [[nodiscard]] auto CanForwardMeetings() const;
        [[nodiscard]] auto CanGetAndSetExternalAutoReplies() const;
        [[nodiscard]] auto CanGetAndSetInternalAutoReplies() const;
        [[nodiscard]] auto CanUpdateMeetingResponses() const;
        [[nodiscard]] auto CanServerSearchFolders() const;
        [[nodiscard]] auto CanServerSearchMailbox() const;
        [[nodiscard]] auto CanProposeNewTimeForMeetings() const;
        [[nodiscard]] auto CanSmartSend() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2
    {
        [[nodiscard]] auto CanResolveRecipients() const;
        [[nodiscard]] auto CanValidateCertificates() const;
        [[nodiscard]] auto CanEmptyFolder() const;
        [[nodiscard]] auto CanCreateFolder() const;
        [[nodiscard]] auto CanDeleteFolder() const;
        [[nodiscard]] auto CanMoveFolder() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3
    {
        auto CanForwardMeetings(bool value) const;
        auto CanGetAndSetExternalAutoReplies(bool value) const;
        auto CanGetAndSetInternalAutoReplies(bool value) const;
        auto CanUpdateMeetingResponses(bool value) const;
        auto CanServerSearchFolders(bool value) const;
        auto CanServerSearchMailbox(bool value) const;
        auto CanProposeNewTimeForMeetings(bool value) const;
        auto CanSmartSend(bool value) const;
        auto CanResolveRecipients(bool value) const;
        auto CanValidateCertificates(bool value) const;
        auto CanEmptyFolder(bool value) const;
        auto CanCreateFolder(bool value) const;
        auto CanDeleteFolder(bool value) const;
        auto CanMoveFolder(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxChange
    {
        [[nodiscard]] auto ChangeType() const;
        [[nodiscard]] auto MailboxActions() const;
        [[nodiscard]] auto Message() const;
        [[nodiscard]] auto Folder() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChange>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChange<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader
    {
        auto AcceptChanges() const;
        auto AcceptChangesThrough(Windows::ApplicationModel::Email::EmailMailboxChange const& lastChangeToAcknowledge) const;
        auto ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker
    {
        [[nodiscard]] auto IsTracking() const;
        auto Enable() const;
        auto GetChangeReader() const;
        auto Reset() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangedDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Folder() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies
    {
        [[nodiscard]] auto AllowedSmimeEncryptionAlgorithmNegotiation() const;
        [[nodiscard]] auto AllowSmimeSoftCertificates() const;
        [[nodiscard]] auto RequiredSmimeEncryptionAlgorithm() const;
        [[nodiscard]] auto RequiredSmimeSigningAlgorithm() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxPolicies>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies2
    {
        [[nodiscard]] auto MustEncryptSmimeMessages() const;
        [[nodiscard]] auto MustSignSmimeMessages() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3
    {
        auto AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation const& value) const;
        auto AllowSmimeSoftCertificates(bool value) const;
        auto RequiredSmimeEncryptionAlgorithm(Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> const& value) const;
        auto RequiredSmimeSigningAlgorithm(Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> const& value) const;
        auto MustEncryptSmimeMessages(bool value) const;
        auto MustSignSmimeMessages(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto LastSuccessfulSyncTime() const;
        [[nodiscard]] auto LastAttemptedSyncTime() const;
        auto SyncAsync() const;
        auto SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        using SyncStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Email::IEmailMailboxSyncManager, &impl::abi_t<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>::remove_SyncStatusChanged>;
        [[nodiscard]] SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        auto SyncStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2
    {
        auto Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus const& value) const;
        auto LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
        auto LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailManagerForUser
    {
        auto ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
        auto RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType) const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailManagerStatics
    {
        auto ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailManagerStatics2
    {
        auto RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailManagerStatics3
    {
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMeetingInfo
    {
        [[nodiscard]] auto AllowNewTimeProposal() const;
        auto AllowNewTimeProposal(bool value) const;
        [[nodiscard]] auto AppointmentRoamingId() const;
        auto AppointmentRoamingId(param::hstring const& value) const;
        [[nodiscard]] auto AppointmentOriginalStartTime() const;
        auto AppointmentOriginalStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto Duration() const;
        auto Duration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto IsAllDay() const;
        auto IsAllDay(bool value) const;
        [[nodiscard]] auto IsResponseRequested() const;
        auto IsResponseRequested(bool value) const;
        [[nodiscard]] auto Location() const;
        auto Location(param::hstring const& value) const;
        [[nodiscard]] auto ProposedStartTime() const;
        auto ProposedStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& proposedStartTime) const;
        [[nodiscard]] auto ProposedDuration() const;
        auto ProposedDuration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& duration) const;
        [[nodiscard]] auto RecurrenceStartTime() const;
        auto RecurrenceStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto Recurrence() const;
        auto Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const;
        [[nodiscard]] auto RemoteChangeNumber() const;
        auto RemoteChangeNumber(uint64_t value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMeetingInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMeetingInfo2
    {
        [[nodiscard]] auto IsReportedOutOfDateByServer() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMeetingInfo2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMeetingInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMessage
    {
        [[nodiscard]] auto Subject() const;
        auto Subject(param::hstring const& value) const;
        [[nodiscard]] auto Body() const;
        auto Body(param::hstring const& value) const;
        [[nodiscard]] auto To() const;
        [[nodiscard]] auto CC() const;
        [[nodiscard]] auto Bcc() const;
        [[nodiscard]] auto Attachments() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMessage2
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto MailboxId() const;
        [[nodiscard]] auto ConversationId() const;
        [[nodiscard]] auto FolderId() const;
        [[nodiscard]] auto AllowInternetImages() const;
        auto AllowInternetImages(bool value) const;
        [[nodiscard]] auto ChangeNumber() const;
        [[nodiscard]] auto DownloadState() const;
        auto DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState const& value) const;
        [[nodiscard]] auto EstimatedDownloadSizeInBytes() const;
        auto EstimatedDownloadSizeInBytes(uint32_t value) const;
        [[nodiscard]] auto FlagState() const;
        auto FlagState(Windows::ApplicationModel::Email::EmailFlagState const& value) const;
        [[nodiscard]] auto HasPartialBodies() const;
        [[nodiscard]] auto Importance() const;
        auto Importance(Windows::ApplicationModel::Email::EmailImportance const& value) const;
        [[nodiscard]] auto InResponseToMessageId() const;
        [[nodiscard]] auto IrmInfo() const;
        auto IrmInfo(Windows::ApplicationModel::Email::EmailIrmInfo const& value) const;
        [[nodiscard]] auto IsDraftMessage() const;
        [[nodiscard]] auto IsRead() const;
        auto IsRead(bool value) const;
        [[nodiscard]] auto IsSeen() const;
        auto IsSeen(bool value) const;
        [[nodiscard]] auto IsServerSearchMessage() const;
        [[nodiscard]] auto IsSmartSendable() const;
        [[nodiscard]] auto MessageClass() const;
        auto MessageClass(param::hstring const& value) const;
        [[nodiscard]] auto NormalizedSubject() const;
        [[nodiscard]] auto OriginalCodePage() const;
        auto OriginalCodePage(int32_t value) const;
        [[nodiscard]] auto Preview() const;
        auto Preview(param::hstring const& value) const;
        [[nodiscard]] auto LastResponseKind() const;
        auto LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind const& value) const;
        [[nodiscard]] auto Sender() const;
        auto Sender(Windows::ApplicationModel::Email::EmailRecipient const& value) const;
        [[nodiscard]] auto SentTime() const;
        auto SentTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto MeetingInfo() const;
        auto MeetingInfo(Windows::ApplicationModel::Email::EmailMeetingInfo const& value) const;
        auto GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind const& type) const;
        auto SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind const& type, Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMessage3
    {
        [[nodiscard]] auto SmimeData() const;
        auto SmimeData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto SmimeKind() const;
        auto SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMessage4
    {
        [[nodiscard]] auto ReplyTo() const;
        [[nodiscard]] auto SentRepresenting() const;
        auto SentRepresenting(Windows::ApplicationModel::Email::EmailRecipient const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMessageBatch
    {
        [[nodiscard]] auto Messages() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMessageBatch>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessageBatch<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailMessageReader
    {
        auto ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailMessageReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessageReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailQueryOptions
    {
        [[nodiscard]] auto TextSearch() const;
        [[nodiscard]] auto SortDirection() const;
        auto SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection const& value) const;
        [[nodiscard]] auto SortProperty() const;
        auto SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty const& value) const;
        [[nodiscard]] auto Kind() const;
        auto Kind(Windows::ApplicationModel::Email::EmailQueryKind const& value) const;
        [[nodiscard]] auto FolderIds() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailQueryOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory
    {
        auto CreateWithText(param::hstring const& text) const;
        auto CreateWithTextAndFields(param::hstring const& text, Windows::ApplicationModel::Email::EmailQuerySearchFields const& fields) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch
    {
        [[nodiscard]] auto Fields() const;
        auto Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields const& value) const;
        [[nodiscard]] auto SearchScope() const;
        auto SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope const& value) const;
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailQueryTextSearch>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailRecipient
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Address() const;
        auto Address(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipient>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipient<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailRecipientFactory
    {
        auto Create(param::hstring const& address) const;
        auto CreateWithName(param::hstring const& address, param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipientFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipientFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto PublicKeys() const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2
    {
        auto Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus const& value) const;
        auto SetPublicKeys(param::iterable<Windows::Security::Cryptography::Certificates::Certificate> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailStore
    {
        auto FindMailboxesAsync() const;
        auto GetConversationReader() const;
        auto GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
        auto GetMessageReader() const;
        auto GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
        auto GetMailboxAsync(param::hstring const& id) const;
        auto GetConversationAsync(param::hstring const& id) const;
        auto GetFolderAsync(param::hstring const& id) const;
        auto GetMessageAsync(param::hstring const& id) const;
        auto CreateMailboxAsync(param::hstring const& accountName, param::hstring const& accountAddress) const;
        auto CreateMailboxAsync(param::hstring const& accountName, param::hstring const& accountAddress, param::hstring const& userDataAccountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Email_IEmailStoreNotificationTriggerDetails
    {
    };
    template <> struct consume<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailStoreNotificationTriggerDetails<D>;
    };
}
#endif
