// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Enumeration_0_H
#define WINRT_Windows_Devices_Enumeration_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background
{
    struct DeviceWatcherTrigger;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IMapView;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    enum class DeviceAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class DeviceClass : int32_t
    {
        All = 0,
        AudioCapture = 1,
        AudioRender = 2,
        PortableStorageDevice = 3,
        VideoCapture = 4,
        ImageScanner = 5,
        Location = 6,
    };
    enum class DeviceInformationKind : int32_t
    {
        Unknown = 0,
        DeviceInterface = 1,
        DeviceContainer = 2,
        Device = 3,
        DeviceInterfaceClass = 4,
        AssociationEndpoint = 5,
        AssociationEndpointContainer = 6,
        AssociationEndpointService = 7,
        DevicePanel = 8,
    };
    enum class DevicePairingKinds : uint32_t
    {
        None = 0,
        ConfirmOnly = 0x1,
        DisplayPin = 0x2,
        ProvidePin = 0x4,
        ConfirmPinMatch = 0x8,
        ProvidePasswordCredential = 0x10,
    };
    enum class DevicePairingProtectionLevel : int32_t
    {
        Default = 0,
        None = 1,
        Encryption = 2,
        EncryptionAndAuthentication = 3,
    };
    enum class DevicePairingResultStatus : int32_t
    {
        Paired = 0,
        NotReadyToPair = 1,
        NotPaired = 2,
        AlreadyPaired = 3,
        ConnectionRejected = 4,
        TooManyConnections = 5,
        HardwareFailure = 6,
        AuthenticationTimeout = 7,
        AuthenticationNotAllowed = 8,
        AuthenticationFailure = 9,
        NoSupportedProfiles = 10,
        ProtectionLevelCouldNotBeMet = 11,
        AccessDenied = 12,
        InvalidCeremonyData = 13,
        PairingCanceled = 14,
        OperationAlreadyInProgress = 15,
        RequiredHandlerNotRegistered = 16,
        RejectedByHandler = 17,
        RemoteDeviceHasAssociation = 18,
        Failed = 19,
    };
    enum class DevicePickerDisplayStatusOptions : uint32_t
    {
        None = 0,
        ShowProgress = 0x1,
        ShowDisconnectButton = 0x2,
        ShowRetryButton = 0x4,
    };
    enum class DeviceUnpairingResultStatus : int32_t
    {
        Unpaired = 0,
        AlreadyUnpaired = 1,
        OperationAlreadyInProgress = 2,
        AccessDenied = 3,
        Failed = 4,
    };
    enum class DeviceWatcherEventKind : int32_t
    {
        Add = 0,
        Update = 1,
        Remove = 2,
    };
    enum class DeviceWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class Panel : int32_t
    {
        Unknown = 0,
        Front = 1,
        Back = 2,
        Top = 3,
        Bottom = 4,
        Left = 5,
        Right = 6,
    };
    struct IDeviceAccessChangedEventArgs;
    struct IDeviceAccessChangedEventArgs2;
    struct IDeviceAccessInformation;
    struct IDeviceAccessInformationStatics;
    struct IDeviceConnectionChangeTriggerDetails;
    struct IDeviceDisconnectButtonClickedEventArgs;
    struct IDeviceInformation;
    struct IDeviceInformation2;
    struct IDeviceInformationCustomPairing;
    struct IDeviceInformationPairing;
    struct IDeviceInformationPairing2;
    struct IDeviceInformationPairingStatics;
    struct IDeviceInformationPairingStatics2;
    struct IDeviceInformationStatics;
    struct IDeviceInformationStatics2;
    struct IDeviceInformationUpdate;
    struct IDeviceInformationUpdate2;
    struct IDevicePairingRequestedEventArgs;
    struct IDevicePairingRequestedEventArgs2;
    struct IDevicePairingResult;
    struct IDevicePairingSettings;
    struct IDevicePicker;
    struct IDevicePickerAppearance;
    struct IDevicePickerFilter;
    struct IDeviceSelectedEventArgs;
    struct IDeviceUnpairingResult;
    struct IDeviceWatcher;
    struct IDeviceWatcher2;
    struct IDeviceWatcherEvent;
    struct IDeviceWatcherTriggerDetails;
    struct IEnclosureLocation;
    struct IEnclosureLocation2;
    struct DeviceAccessChangedEventArgs;
    struct DeviceAccessInformation;
    struct DeviceConnectionChangeTriggerDetails;
    struct DeviceDisconnectButtonClickedEventArgs;
    struct DeviceInformation;
    struct DeviceInformationCollection;
    struct DeviceInformationCustomPairing;
    struct DeviceInformationPairing;
    struct DeviceInformationUpdate;
    struct DevicePairingRequestedEventArgs;
    struct DevicePairingResult;
    struct DevicePicker;
    struct DevicePickerAppearance;
    struct DevicePickerFilter;
    struct DeviceSelectedEventArgs;
    struct DeviceThumbnail;
    struct DeviceUnpairingResult;
    struct DeviceWatcher;
    struct DeviceWatcherEvent;
    struct DeviceWatcherTriggerDetails;
    struct EnclosureLocation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceAccessInformation>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceAccessInformationStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformation>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformation2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationPairing>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationPairing2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationPairingStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationPairingStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationUpdate>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceInformationUpdate2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePairingResult>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePairingSettings>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePicker>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePickerAppearance>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDevicePickerFilter>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceSelectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceUnpairingResult>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceWatcher2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceWatcherEvent>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IEnclosureLocation>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::IEnclosureLocation2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceAccessChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceAccessInformation>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceInformation>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceInformationCollection>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceInformationCustomPairing>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceInformationPairing>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceInformationUpdate>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePairingRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePairingResult>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePicker>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePickerAppearance>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePickerFilter>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceSelectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceThumbnail>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceUnpairingResult>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceWatcher>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceWatcherEvent>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceWatcherTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::EnclosureLocation>{ using type = class_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceAccessStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceClass>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceInformationKind>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePairingKinds>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePairingProtectionLevel>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePairingResultStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceUnpairingResultStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceWatcherEventKind>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::DeviceWatcherStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Enumeration::Panel>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> = L"Windows.Devices.Enumeration.DeviceAccessChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceAccessInformation> = L"Windows.Devices.Enumeration.DeviceAccessInformation";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails> = L"Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> = L"Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceInformation> = L"Windows.Devices.Enumeration.DeviceInformation";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceInformationCollection> = L"Windows.Devices.Enumeration.DeviceInformationCollection";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceInformationCustomPairing> = L"Windows.Devices.Enumeration.DeviceInformationCustomPairing";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceInformationPairing> = L"Windows.Devices.Enumeration.DeviceInformationPairing";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceInformationUpdate> = L"Windows.Devices.Enumeration.DeviceInformationUpdate";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> = L"Windows.Devices.Enumeration.DevicePairingRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePairingResult> = L"Windows.Devices.Enumeration.DevicePairingResult";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePicker> = L"Windows.Devices.Enumeration.DevicePicker";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePickerAppearance> = L"Windows.Devices.Enumeration.DevicePickerAppearance";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePickerFilter> = L"Windows.Devices.Enumeration.DevicePickerFilter";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceSelectedEventArgs> = L"Windows.Devices.Enumeration.DeviceSelectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceThumbnail> = L"Windows.Devices.Enumeration.DeviceThumbnail";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceUnpairingResult> = L"Windows.Devices.Enumeration.DeviceUnpairingResult";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceWatcher> = L"Windows.Devices.Enumeration.DeviceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceWatcherEvent> = L"Windows.Devices.Enumeration.DeviceWatcherEvent";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceWatcherTriggerDetails> = L"Windows.Devices.Enumeration.DeviceWatcherTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::EnclosureLocation> = L"Windows.Devices.Enumeration.EnclosureLocation";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceAccessStatus> = L"Windows.Devices.Enumeration.DeviceAccessStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceClass> = L"Windows.Devices.Enumeration.DeviceClass";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceInformationKind> = L"Windows.Devices.Enumeration.DeviceInformationKind";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePairingKinds> = L"Windows.Devices.Enumeration.DevicePairingKinds";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePairingProtectionLevel> = L"Windows.Devices.Enumeration.DevicePairingProtectionLevel";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePairingResultStatus> = L"Windows.Devices.Enumeration.DevicePairingResultStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions> = L"Windows.Devices.Enumeration.DevicePickerDisplayStatusOptions";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceUnpairingResultStatus> = L"Windows.Devices.Enumeration.DeviceUnpairingResultStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceWatcherEventKind> = L"Windows.Devices.Enumeration.DeviceWatcherEventKind";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::DeviceWatcherStatus> = L"Windows.Devices.Enumeration.DeviceWatcherStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::Panel> = L"Windows.Devices.Enumeration.Panel";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs> = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2> = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceAccessInformation> = L"Windows.Devices.Enumeration.IDeviceAccessInformation";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceAccessInformationStatics> = L"Windows.Devices.Enumeration.IDeviceAccessInformationStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails> = L"Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs> = L"Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformation> = L"Windows.Devices.Enumeration.IDeviceInformation";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformation2> = L"Windows.Devices.Enumeration.IDeviceInformation2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationCustomPairing> = L"Windows.Devices.Enumeration.IDeviceInformationCustomPairing";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationPairing> = L"Windows.Devices.Enumeration.IDeviceInformationPairing";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationPairing2> = L"Windows.Devices.Enumeration.IDeviceInformationPairing2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationPairingStatics> = L"Windows.Devices.Enumeration.IDeviceInformationPairingStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationPairingStatics2> = L"Windows.Devices.Enumeration.IDeviceInformationPairingStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationStatics> = L"Windows.Devices.Enumeration.IDeviceInformationStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationStatics2> = L"Windows.Devices.Enumeration.IDeviceInformationStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationUpdate> = L"Windows.Devices.Enumeration.IDeviceInformationUpdate";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceInformationUpdate2> = L"Windows.Devices.Enumeration.IDeviceInformationUpdate2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs> = L"Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2> = L"Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePairingResult> = L"Windows.Devices.Enumeration.IDevicePairingResult";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePairingSettings> = L"Windows.Devices.Enumeration.IDevicePairingSettings";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePicker> = L"Windows.Devices.Enumeration.IDevicePicker";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePickerAppearance> = L"Windows.Devices.Enumeration.IDevicePickerAppearance";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDevicePickerFilter> = L"Windows.Devices.Enumeration.IDevicePickerFilter";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceSelectedEventArgs> = L"Windows.Devices.Enumeration.IDeviceSelectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceUnpairingResult> = L"Windows.Devices.Enumeration.IDeviceUnpairingResult";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceWatcher> = L"Windows.Devices.Enumeration.IDeviceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceWatcher2> = L"Windows.Devices.Enumeration.IDeviceWatcher2";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceWatcherEvent> = L"Windows.Devices.Enumeration.IDeviceWatcherEvent";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails> = L"Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IEnclosureLocation> = L"Windows.Devices.Enumeration.IEnclosureLocation";
    template <> inline constexpr auto& name_v<Windows::Devices::Enumeration::IEnclosureLocation2> = L"Windows.Devices.Enumeration.IEnclosureLocation2";
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>{ 0xDEDA0BCC,0x4F9D,0x4F58,{ 0x9D,0xBA,0xA9,0xBC,0x80,0x04,0x08,0xD5 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>{ 0x82523262,0x934B,0x4B30,{ 0xA1,0x78,0xAD,0xC3,0x9F,0x2F,0x2B,0xE3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceAccessInformation>{ 0x0BAA9A73,0x6DE5,0x4915,{ 0x8D,0xDD,0x9A,0x05,0x54,0xA6,0xF5,0x45 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceAccessInformationStatics>{ 0x574BD3D3,0x5F30,0x45CD,{ 0x8A,0x94,0x72,0x4F,0xE5,0x97,0x30,0x84 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails>{ 0xB8578C0C,0xBBC1,0x484B,{ 0xBF,0xFA,0x7B,0x31,0xDC,0xC2,0x00,0xB2 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs>{ 0x8E44B56D,0xF902,0x4A00,{ 0xB5,0x36,0xF3,0x79,0x92,0xE6,0xA2,0xA7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformation>{ 0xABA0FB95,0x4398,0x489D,{ 0x8E,0x44,0xE6,0x13,0x09,0x27,0x01,0x1F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformation2>{ 0xF156A638,0x7997,0x48D9,{ 0xA1,0x0C,0x26,0x9D,0x46,0x53,0x3F,0x48 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>{ 0x85138C02,0x4EE6,0x4914,{ 0x83,0x70,0x10,0x7A,0x39,0x14,0x4C,0x0E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationPairing>{ 0x2C4769F5,0xF684,0x40D5,{ 0x84,0x69,0xE8,0xDB,0xAA,0xB7,0x04,0x85 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationPairing2>{ 0xF68612FD,0x0AEE,0x4328,{ 0x85,0xCC,0x1C,0x74,0x2B,0xB1,0x79,0x0D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationPairingStatics>{ 0xE915C408,0x36D4,0x49A1,{ 0xBF,0x13,0x51,0x41,0x73,0x79,0x9B,0x6B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationPairingStatics2>{ 0x04DE5372,0xB7B7,0x476B,{ 0xA7,0x4F,0xC5,0x83,0x6A,0x70,0x4D,0x98 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationStatics>{ 0xC17F100E,0x3A46,0x4A78,{ 0x80,0x13,0x76,0x9D,0xC9,0xB9,0x73,0x90 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationStatics2>{ 0x493B4F34,0xA84F,0x45FD,{ 0x91,0x67,0x15,0xD1,0xCB,0x1B,0xD1,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationUpdate>{ 0x8F315305,0xD972,0x44B7,{ 0xA3,0x7E,0x9E,0x82,0x2C,0x78,0x21,0x3B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceInformationUpdate2>{ 0x5D9D148C,0xA873,0x485E,{ 0xBA,0xA6,0xAA,0x62,0x07,0x88,0xE3,0xCC } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs>{ 0xF717FC56,0xDE6B,0x487F,{ 0x83,0x76,0x01,0x80,0xAC,0xA6,0x99,0x63 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2>{ 0xC83752D9,0xE4D3,0x4DB0,{ 0xA3,0x60,0xA1,0x05,0xE4,0x37,0xDB,0xDC } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePairingResult>{ 0x072B02BF,0xDD95,0x4025,{ 0x9B,0x37,0xDE,0x51,0xAD,0xBA,0x37,0xB7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePairingSettings>{ 0x482CB27C,0x83BB,0x420E,{ 0xBE,0x51,0x66,0x02,0xB2,0x22,0xDE,0x54 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePicker>{ 0x84997AA2,0x034A,0x4440,{ 0x88,0x13,0x7D,0x0B,0xD4,0x79,0xBF,0x5A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePickerAppearance>{ 0xE69A12C6,0xE627,0x4ED8,{ 0x9B,0x6C,0x46,0x0A,0xF4,0x45,0xE5,0x6D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDevicePickerFilter>{ 0x91DB92A2,0x57CB,0x48F1,{ 0x9B,0x59,0xA5,0x9B,0x7A,0x1F,0x02,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceSelectedEventArgs>{ 0x269EDADE,0x1D2F,0x4940,{ 0x84,0x02,0x41,0x56,0xB8,0x1D,0x3C,0x77 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceUnpairingResult>{ 0x66F44AD3,0x79D9,0x444B,{ 0x92,0xCF,0xA9,0x2E,0xF7,0x25,0x71,0xC7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceWatcher>{ 0xC9EAB97D,0x8F6B,0x4F96,{ 0xA9,0xF4,0xAB,0xC8,0x14,0xE2,0x22,0x71 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceWatcher2>{ 0xFF08456E,0xED14,0x49E9,{ 0x9A,0x69,0x81,0x17,0xC5,0x4A,0xE9,0x71 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceWatcherEvent>{ 0x74AA9C0B,0x1DBD,0x47FD,{ 0xB6,0x35,0x3C,0xC5,0x56,0xD0,0xFF,0x8B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails>{ 0x38808119,0x4CB7,0x4E57,{ 0xA5,0x6D,0x77,0x6D,0x07,0xCB,0xFE,0xF9 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IEnclosureLocation>{ 0x42340A27,0x5810,0x459C,{ 0xAA,0xBB,0xC6,0x5E,0x1F,0x81,0x3E,0xCF } };
    template <> inline constexpr guid guid_v<Windows::Devices::Enumeration::IEnclosureLocation2>{ 0x2885995B,0xE07D,0x485D,{ 0x8A,0x9E,0xBD,0xF2,0x9A,0xEF,0x4F,0x66 } };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceAccessChangedEventArgs>{ using type = Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceAccessInformation>{ using type = Windows::Devices::Enumeration::IDeviceAccessInformation; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails>{ using type = Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs>{ using type = Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceInformation>{ using type = Windows::Devices::Enumeration::IDeviceInformation; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceInformationCollection>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceInformation>; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceInformationCustomPairing>{ using type = Windows::Devices::Enumeration::IDeviceInformationCustomPairing; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceInformationPairing>{ using type = Windows::Devices::Enumeration::IDeviceInformationPairing; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceInformationUpdate>{ using type = Windows::Devices::Enumeration::IDeviceInformationUpdate; };
    template <> struct default_interface<Windows::Devices::Enumeration::DevicePairingRequestedEventArgs>{ using type = Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs; };
    template <> struct default_interface<Windows::Devices::Enumeration::DevicePairingResult>{ using type = Windows::Devices::Enumeration::IDevicePairingResult; };
    template <> struct default_interface<Windows::Devices::Enumeration::DevicePicker>{ using type = Windows::Devices::Enumeration::IDevicePicker; };
    template <> struct default_interface<Windows::Devices::Enumeration::DevicePickerAppearance>{ using type = Windows::Devices::Enumeration::IDevicePickerAppearance; };
    template <> struct default_interface<Windows::Devices::Enumeration::DevicePickerFilter>{ using type = Windows::Devices::Enumeration::IDevicePickerFilter; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceSelectedEventArgs>{ using type = Windows::Devices::Enumeration::IDeviceSelectedEventArgs; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceThumbnail>{ using type = Windows::Storage::Streams::IRandomAccessStreamWithContentType; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceUnpairingResult>{ using type = Windows::Devices::Enumeration::IDeviceUnpairingResult; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceWatcher>{ using type = Windows::Devices::Enumeration::IDeviceWatcher; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceWatcherEvent>{ using type = Windows::Devices::Enumeration::IDeviceWatcherEvent; };
    template <> struct default_interface<Windows::Devices::Enumeration::DeviceWatcherTriggerDetails>{ using type = Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails; };
    template <> struct default_interface<Windows::Devices::Enumeration::EnclosureLocation>{ using type = Windows::Devices::Enumeration::IEnclosureLocation; };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceAccessInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AccessChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccessChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CurrentStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceAccessInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDeviceClassId(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDeviceClass(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_EnclosureLocation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall Update(void*) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetGlyphThumbnailAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pairing(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PairAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall PairWithProtectionLevelAsync(uint32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall PairWithProtectionLevelAndSettingsAsync(uint32_t, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_PairingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PairingRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationPairing>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPaired(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanPair(bool*) noexcept = 0;
            virtual int32_t __stdcall PairAsync(void**) noexcept = 0;
            virtual int32_t __stdcall PairWithProtectionLevelAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationPairing2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Custom(void**) noexcept = 0;
            virtual int32_t __stdcall PairWithProtectionLevelAndSettingsAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnpairAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationPairingStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryRegisterForAllInboundPairingRequests(uint32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationPairingStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryRegisterForAllInboundPairingRequestsWithProtectionLevel(uint32_t, int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIdAsyncAdditionalProperties(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncDeviceClass(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncAqsFilter(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncAqsFilterAndAdditionalProperties(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherDeviceClass(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherAqsFilter(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherAqsFilterAndAdditionalProperties(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAqsFilterFromDeviceClass(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIdAsyncWithKindAndAdditionalProperties(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncWithKindAqsFilterAndAdditionalProperties(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherWithKindAqsFilterAndAdditionalProperties(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationUpdate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceInformationUpdate2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_PairingKind(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pin(void**) noexcept = 0;
            virtual int32_t __stdcall Accept() noexcept = 0;
            virtual int32_t __stdcall AcceptWithPin(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcceptWithPasswordCredential(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePairingResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionLevelUsed(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePairingSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Filter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Appearance(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedProperties(void**) noexcept = 0;
            virtual int32_t __stdcall add_DeviceSelected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DeviceSelected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisconnectButtonClicked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisconnectButtonClicked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DevicePickerDismissed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DevicePickerDismissed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Show(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall ShowWithPlacement(Windows::Foundation::Rect, int32_t) noexcept = 0;
            virtual int32_t __stdcall PickSingleDeviceAsync(Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall PickSingleDeviceAsyncWithPlacement(Windows::Foundation::Rect, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Hide() noexcept = 0;
            virtual int32_t __stdcall SetDisplayStatus(void*, void*, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePickerAppearance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_AccentColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_AccentColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForegroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedForegroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_SelectedAccentColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedAccentColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDevicePickerFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedDeviceClasses(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedDeviceSelectors(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceSelectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedDevice(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceUnpairingResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceWatcher2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetBackgroundTrigger(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceWatcherEvent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInformationUpdate(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceWatcherEvents(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IEnclosureLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InDock(bool*) noexcept = 0;
            virtual int32_t __stdcall get_InLid(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Panel(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Enumeration::IEnclosureLocation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RotationAngleInDegreesClockwise(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceAccessStatus) Status() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceAccessInformation
    {
        WINRT_IMPL_AUTO(winrt::event_token) AccessChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> const& handler) const;
        using AccessChanged_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceAccessInformation, &impl::abi_t<Windows::Devices::Enumeration::IDeviceAccessInformation>::remove_AccessChanged>;
        [[nodiscard]] AccessChanged_revoker AccessChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AccessChanged(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceAccessStatus) CurrentStatus() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceAccessInformation>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceAccessInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceAccessInformationStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceAccessInformation) CreateFromId(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceAccessInformation) CreateFromDeviceClassId(winrt::guid const& deviceClassId) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceAccessInformation) CreateFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceAccessInformationStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceAccessInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceConnectionChangeTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceConnectionChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceDisconnectButtonClickedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformation) Device() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceDisconnectButtonClickedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDefault() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::EnclosureLocation) EnclosureLocation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
        WINRT_IMPL_AUTO(void) Update(Windows::Devices::Enumeration::DeviceInformationUpdate const& updateInfo) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail>) GetThumbnailAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail>) GetGlyphThumbnailAsync() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformation>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformationKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformationPairing) Pairing() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformation2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult>) PairAsync(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult>) PairAsync(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult>) PairAsync(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel, Windows::Devices::Enumeration::IDevicePairingSettings const& devicePairingSettings) const;
        WINRT_IMPL_AUTO(winrt::event_token) PairingRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> const& handler) const;
        using PairingRequested_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceInformationCustomPairing, &impl::abi_t<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>::remove_PairingRequested>;
        [[nodiscard]] PairingRequested_revoker PairingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PairingRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationPairing
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPaired() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanPair() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult>) PairAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult>) PairAsync(Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationPairing>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationPairing<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationPairing2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePairingProtectionLevel) ProtectionLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformationCustomPairing) Custom() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult>) PairAsync(Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel, Windows::Devices::Enumeration::IDevicePairingSettings const& devicePairingSettings) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult>) UnpairAsync() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationPairing2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationPairing2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationPairingStatics
    {
        WINRT_IMPL_AUTO(bool) TryRegisterForAllInboundPairingRequests(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationPairingStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationPairingStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationPairingStatics2
    {
        WINRT_IMPL_AUTO(bool) TryRegisterForAllInboundPairingRequestsWithProtectionLevel(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationPairingStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationPairingStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation>) CreateFromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation>) CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection>) FindAllAsync(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection>) FindAllAsync(param::hstring const& aqsFilter) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection>) FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcher) CreateWatcher() const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcher) CreateWatcher(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcher) CreateWatcher(param::hstring const& aqsFilter) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcher) CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetAqsFilterFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation>) CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection>) FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind) const;
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcher) CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationUpdate
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationUpdate>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationUpdate<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceInformationUpdate2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformationKind) Kind() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceInformationUpdate2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceInformationUpdate2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformation) DeviceInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePairingKinds) PairingKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Pin() const;
        WINRT_IMPL_AUTO(void) Accept() const;
        WINRT_IMPL_AUTO(void) Accept(param::hstring const& pin) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs2
    {
        WINRT_IMPL_AUTO(void) AcceptWithPasswordCredential(Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePairingResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePairingResultStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePairingProtectionLevel) ProtectionLevelUsed() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePairingResult>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePairingResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePairingSettings
    {
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePairingSettings>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePairingSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePicker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePickerFilter) Filter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePickerAppearance) Appearance() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) RequestedProperties() const;
        WINRT_IMPL_AUTO(winrt::event_token) DeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> const& handler) const;
        using DeviceSelected_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDevicePicker, &impl::abi_t<Windows::Devices::Enumeration::IDevicePicker>::remove_DeviceSelected>;
        [[nodiscard]] DeviceSelected_revoker DeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DeviceSelected(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> const& handler) const;
        using DisconnectButtonClicked_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDevicePicker, &impl::abi_t<Windows::Devices::Enumeration::IDevicePicker>::remove_DisconnectButtonClicked>;
        [[nodiscard]] DisconnectButtonClicked_revoker DisconnectButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DisconnectButtonClicked(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Foundation::IInspectable> const& handler) const;
        using DevicePickerDismissed_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDevicePicker, &impl::abi_t<Windows::Devices::Enumeration::IDevicePicker>::remove_DevicePickerDismissed>;
        [[nodiscard]] DevicePickerDismissed_revoker DevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) DevicePickerDismissed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Show(Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(void) Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& placement) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation>) PickSingleDeviceAsync(Windows::Foundation::Rect const& selection) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation>) PickSingleDeviceAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& placement) const;
        WINRT_IMPL_AUTO(void) Hide() const;
        WINRT_IMPL_AUTO(void) SetDisplayStatus(Windows::Devices::Enumeration::DeviceInformation const& device, param::hstring const& status, Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions const& options) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePicker>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePicker<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePickerAppearance
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) ForegroundColor() const;
        WINRT_IMPL_AUTO(void) ForegroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) BackgroundColor() const;
        WINRT_IMPL_AUTO(void) BackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) AccentColor() const;
        WINRT_IMPL_AUTO(void) AccentColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SelectedForegroundColor() const;
        WINRT_IMPL_AUTO(void) SelectedForegroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SelectedBackgroundColor() const;
        WINRT_IMPL_AUTO(void) SelectedBackgroundColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SelectedAccentColor() const;
        WINRT_IMPL_AUTO(void) SelectedAccentColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePickerAppearance>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDevicePickerFilter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::Enumeration::DeviceClass>) SupportedDeviceClasses() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) SupportedDeviceSelectors() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDevicePickerFilter>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDevicePickerFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceSelectedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformation) SelectedDevice() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceSelectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceSelectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceUnpairingResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceUnpairingResultStatus) Status() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceUnpairingResult>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceUnpairingResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceWatcher, &impl::abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceWatcher, &impl::abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const;
        WINRT_IMPL_AUTO(void) Updated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceWatcher, &impl::abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceWatcher, &impl::abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Devices::Enumeration::IDeviceWatcher, &impl::abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceWatcher>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceWatcher2
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::DeviceWatcherTrigger) GetBackgroundTrigger(param::iterable<Windows::Devices::Enumeration::DeviceWatcherEventKind> const& requestedEventKinds) const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceWatcher2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceWatcher2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceWatcherEvent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcherEventKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformation) DeviceInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformationUpdate) DeviceInformationUpdate() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceWatcherEvent>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceWatcherEvent<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IDeviceWatcherTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent>) DeviceWatcherEvents() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IDeviceWatcherTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IEnclosureLocation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) InDock() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) InLid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::Panel) Panel() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IEnclosureLocation>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IEnclosureLocation<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Enumeration_IEnclosureLocation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) RotationAngleInDegreesClockwise() const;
    };
    template <> struct consume<Windows::Devices::Enumeration::IEnclosureLocation2>
    {
        template <typename D> using type = consume_Windows_Devices_Enumeration_IEnclosureLocation2<D>;
    };
}
#endif
