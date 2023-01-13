// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_0_H
#define WINRT_Windows_System_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppInfo;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    template <typename T> struct IReference;
    struct Point;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    struct IPropertySet;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct IStorageFolder;
    struct IStorageItem;
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Search
{
    struct StorageFileQueryResult;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics
{
    struct ProcessDiagnosticInfo;
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems
{
    struct RemoteSystemConnectionRequest;
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    enum class Placement : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement
{
    enum class ViewSizePreference : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    enum class AppDiagnosticInfoWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class AppMemoryUsageLevel : int32_t
    {
        Low = 0,
        Medium = 1,
        High = 2,
        OverLimit = 3,
    };
    enum class AppResourceGroupEnergyQuotaState : int32_t
    {
        Unknown = 0,
        Over = 1,
        Under = 2,
    };
    enum class AppResourceGroupExecutionState : int32_t
    {
        Unknown = 0,
        Running = 1,
        Suspending = 2,
        Suspended = 3,
        NotRunning = 4,
    };
    enum class AppResourceGroupInfoWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class AutoUpdateTimeZoneStatus : int32_t
    {
        Attempted = 0,
        TimedOut = 1,
        Failed = 2,
    };
    enum class DiagnosticAccessStatus : int32_t
    {
        Unspecified = 0,
        Denied = 1,
        Limited = 2,
        Allowed = 3,
    };
    enum class DispatcherQueuePriority : int32_t
    {
        Low = -10,
        Normal = 0,
        High = 10,
    };
    enum class LaunchFileStatus : int32_t
    {
        Success = 0,
        AppUnavailable = 1,
        DeniedByPolicy = 2,
        FileTypeNotSupported = 3,
        Unknown = 4,
    };
    enum class LaunchQuerySupportStatus : int32_t
    {
        Available = 0,
        AppNotInstalled = 1,
        AppUnavailable = 2,
        NotSupported = 3,
        Unknown = 4,
    };
    enum class LaunchQuerySupportType : int32_t
    {
        Uri = 0,
        UriForResults = 1,
    };
    enum class LaunchUriStatus : int32_t
    {
        Success = 0,
        AppUnavailable = 1,
        ProtocolUnavailable = 2,
        Unknown = 3,
    };
    enum class PowerState : int32_t
    {
        ConnectedStandby = 0,
        SleepS3 = 1,
    };
    enum class ProcessorArchitecture : int32_t
    {
        X86 = 0,
        Arm = 5,
        X64 = 9,
        Neutral = 11,
        Arm64 = 12,
        X86OnArm64 = 14,
        Unknown = 65535,
    };
    enum class RemoteLaunchUriStatus : int32_t
    {
        Unknown = 0,
        Success = 1,
        AppUnavailable = 2,
        ProtocolUnavailable = 3,
        RemoteSystemUnavailable = 4,
        ValueSetTooLarge = 5,
        DeniedByLocalSystem = 6,
        DeniedByRemoteSystem = 7,
    };
    enum class ShutdownKind : int32_t
    {
        Shutdown = 0,
        Restart = 1,
    };
    enum class UserAuthenticationStatus : int32_t
    {
        Unauthenticated = 0,
        LocallyAuthenticated = 1,
        RemotelyAuthenticated = 2,
    };
    enum class UserPictureSize : int32_t
    {
        Size64x64 = 0,
        Size208x208 = 1,
        Size424x424 = 2,
        Size1080x1080 = 3,
    };
    enum class UserType : int32_t
    {
        LocalUser = 0,
        RemoteUser = 1,
        LocalGuest = 2,
        RemoteGuest = 3,
        SystemManaged = 4,
    };
    enum class UserWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class UserWatcherUpdateKind : int32_t
    {
        Properties = 0,
        Picture = 1,
    };
    enum class VirtualKey : int32_t
    {
        None = 0,
        LeftButton = 1,
        RightButton = 2,
        Cancel = 3,
        MiddleButton = 4,
        XButton1 = 5,
        XButton2 = 6,
        Back = 8,
        Tab = 9,
        Clear = 12,
        Enter = 13,
        Shift = 16,
        Control = 17,
        Menu = 18,
        Pause = 19,
        CapitalLock = 20,
        Kana = 21,
        Hangul = 21,
        Junja = 23,
        Final = 24,
        Hanja = 25,
        Kanji = 25,
        Escape = 27,
        Convert = 28,
        NonConvert = 29,
        Accept = 30,
        ModeChange = 31,
        Space = 32,
        PageUp = 33,
        PageDown = 34,
        End = 35,
        Home = 36,
        Left = 37,
        Up = 38,
        Right = 39,
        Down = 40,
        Select = 41,
        Print = 42,
        Execute = 43,
        Snapshot = 44,
        Insert = 45,
        Delete = 46,
        Help = 47,
        Number0 = 48,
        Number1 = 49,
        Number2 = 50,
        Number3 = 51,
        Number4 = 52,
        Number5 = 53,
        Number6 = 54,
        Number7 = 55,
        Number8 = 56,
        Number9 = 57,
        A = 65,
        B = 66,
        C = 67,
        D = 68,
        E = 69,
        F = 70,
        G = 71,
        H = 72,
        I = 73,
        J = 74,
        K = 75,
        L = 76,
        M = 77,
        N = 78,
        O = 79,
        P = 80,
        Q = 81,
        R = 82,
        S = 83,
        T = 84,
        U = 85,
        V = 86,
        W = 87,
        X = 88,
        Y = 89,
        Z = 90,
        LeftWindows = 91,
        RightWindows = 92,
        Application = 93,
        Sleep = 95,
        NumberPad0 = 96,
        NumberPad1 = 97,
        NumberPad2 = 98,
        NumberPad3 = 99,
        NumberPad4 = 100,
        NumberPad5 = 101,
        NumberPad6 = 102,
        NumberPad7 = 103,
        NumberPad8 = 104,
        NumberPad9 = 105,
        Multiply = 106,
        Add = 107,
        Separator = 108,
        Subtract = 109,
        Decimal = 110,
        Divide = 111,
        F1 = 112,
        F2 = 113,
        F3 = 114,
        F4 = 115,
        F5 = 116,
        F6 = 117,
        F7 = 118,
        F8 = 119,
        F9 = 120,
        F10 = 121,
        F11 = 122,
        F12 = 123,
        F13 = 124,
        F14 = 125,
        F15 = 126,
        F16 = 127,
        F17 = 128,
        F18 = 129,
        F19 = 130,
        F20 = 131,
        F21 = 132,
        F22 = 133,
        F23 = 134,
        F24 = 135,
        NavigationView = 136,
        NavigationMenu = 137,
        NavigationUp = 138,
        NavigationDown = 139,
        NavigationLeft = 140,
        NavigationRight = 141,
        NavigationAccept = 142,
        NavigationCancel = 143,
        NumberKeyLock = 144,
        Scroll = 145,
        LeftShift = 160,
        RightShift = 161,
        LeftControl = 162,
        RightControl = 163,
        LeftMenu = 164,
        RightMenu = 165,
        GoBack = 166,
        GoForward = 167,
        Refresh = 168,
        Stop = 169,
        Search = 170,
        Favorites = 171,
        GoHome = 172,
        GamepadA = 195,
        GamepadB = 196,
        GamepadX = 197,
        GamepadY = 198,
        GamepadRightShoulder = 199,
        GamepadLeftShoulder = 200,
        GamepadLeftTrigger = 201,
        GamepadRightTrigger = 202,
        GamepadDPadUp = 203,
        GamepadDPadDown = 204,
        GamepadDPadLeft = 205,
        GamepadDPadRight = 206,
        GamepadMenu = 207,
        GamepadView = 208,
        GamepadLeftThumbstickButton = 209,
        GamepadRightThumbstickButton = 210,
        GamepadLeftThumbstickUp = 211,
        GamepadLeftThumbstickDown = 212,
        GamepadLeftThumbstickRight = 213,
        GamepadLeftThumbstickLeft = 214,
        GamepadRightThumbstickUp = 215,
        GamepadRightThumbstickDown = 216,
        GamepadRightThumbstickRight = 217,
        GamepadRightThumbstickLeft = 218,
    };
    enum class VirtualKeyModifiers : uint32_t
    {
        None = 0,
        Control = 0x1,
        Menu = 0x2,
        Shift = 0x4,
        Windows = 0x8,
    };
    struct IAppActivationResult;
    struct IAppDiagnosticInfo;
    struct IAppDiagnosticInfo2;
    struct IAppDiagnosticInfo3;
    struct IAppDiagnosticInfoStatics;
    struct IAppDiagnosticInfoStatics2;
    struct IAppDiagnosticInfoWatcher;
    struct IAppDiagnosticInfoWatcherEventArgs;
    struct IAppExecutionStateChangeResult;
    struct IAppMemoryReport;
    struct IAppMemoryReport2;
    struct IAppMemoryUsageLimitChangingEventArgs;
    struct IAppResourceGroupBackgroundTaskReport;
    struct IAppResourceGroupInfo;
    struct IAppResourceGroupInfo2;
    struct IAppResourceGroupInfoWatcher;
    struct IAppResourceGroupInfoWatcherEventArgs;
    struct IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
    struct IAppResourceGroupMemoryReport;
    struct IAppResourceGroupStateReport;
    struct IAppUriHandlerHost;
    struct IAppUriHandlerHostFactory;
    struct IAppUriHandlerRegistration;
    struct IAppUriHandlerRegistrationManager;
    struct IAppUriHandlerRegistrationManagerStatics;
    struct IDateTimeSettingsStatics;
    struct IDispatcherQueue;
    struct IDispatcherQueue2;
    struct IDispatcherQueueController;
    struct IDispatcherQueueControllerStatics;
    struct IDispatcherQueueShutdownStartingEventArgs;
    struct IDispatcherQueueStatics;
    struct IDispatcherQueueTimer;
    struct IFolderLauncherOptions;
    struct IKnownUserPropertiesStatics;
    struct ILaunchUriResult;
    struct ILauncherOptions;
    struct ILauncherOptions2;
    struct ILauncherOptions3;
    struct ILauncherOptions4;
    struct ILauncherStatics;
    struct ILauncherStatics2;
    struct ILauncherStatics3;
    struct ILauncherStatics4;
    struct ILauncherStatics5;
    struct ILauncherUIOptions;
    struct ILauncherViewOptions;
    struct IMemoryManagerStatics;
    struct IMemoryManagerStatics2;
    struct IMemoryManagerStatics3;
    struct IMemoryManagerStatics4;
    struct IProcessLauncherOptions;
    struct IProcessLauncherResult;
    struct IProcessLauncherStatics;
    struct IProcessMemoryReport;
    struct IProtocolForResultsOperation;
    struct IRemoteLauncherOptions;
    struct IRemoteLauncherStatics;
    struct IShutdownManagerStatics;
    struct IShutdownManagerStatics2;
    struct ITimeZoneSettingsStatics;
    struct ITimeZoneSettingsStatics2;
    struct IUser;
    struct IUserAuthenticationStatusChangeDeferral;
    struct IUserAuthenticationStatusChangingEventArgs;
    struct IUserChangedEventArgs;
    struct IUserChangedEventArgs2;
    struct IUserDeviceAssociationChangedEventArgs;
    struct IUserDeviceAssociationStatics;
    struct IUserPicker;
    struct IUserPickerStatics;
    struct IUserStatics;
    struct IUserStatics2;
    struct IUserWatcher;
    struct AppActivationResult;
    struct AppDiagnosticInfo;
    struct AppDiagnosticInfoWatcher;
    struct AppDiagnosticInfoWatcherEventArgs;
    struct AppExecutionStateChangeResult;
    struct AppMemoryReport;
    struct AppMemoryUsageLimitChangingEventArgs;
    struct AppResourceGroupBackgroundTaskReport;
    struct AppResourceGroupInfo;
    struct AppResourceGroupInfoWatcher;
    struct AppResourceGroupInfoWatcherEventArgs;
    struct AppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
    struct AppResourceGroupMemoryReport;
    struct AppResourceGroupStateReport;
    struct AppUriHandlerHost;
    struct AppUriHandlerRegistration;
    struct AppUriHandlerRegistrationManager;
    struct DateTimeSettings;
    struct DispatcherQueue;
    struct DispatcherQueueController;
    struct DispatcherQueueShutdownStartingEventArgs;
    struct DispatcherQueueTimer;
    struct FolderLauncherOptions;
    struct KnownUserProperties;
    struct LaunchUriResult;
    struct Launcher;
    struct LauncherOptions;
    struct LauncherUIOptions;
    struct MemoryManager;
    struct ProcessLauncher;
    struct ProcessLauncherOptions;
    struct ProcessLauncherResult;
    struct ProcessMemoryReport;
    struct ProtocolForResultsOperation;
    struct RemoteLauncher;
    struct RemoteLauncherOptions;
    struct ShutdownManager;
    struct TimeZoneSettings;
    struct User;
    struct UserAuthenticationStatusChangeDeferral;
    struct UserAuthenticationStatusChangingEventArgs;
    struct UserChangedEventArgs;
    struct UserDeviceAssociation;
    struct UserDeviceAssociationChangedEventArgs;
    struct UserPicker;
    struct UserWatcher;
    struct DispatcherQueueHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::IAppActivationResult>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfo>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfo2>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfo3>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfoStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfoStatics2>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfoWatcher>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppDiagnosticInfoWatcherEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppExecutionStateChangeResult>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppMemoryReport>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppMemoryReport2>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppMemoryUsageLimitChangingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupBackgroundTaskReport>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupInfo>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupInfo2>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupInfoWatcher>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupInfoWatcherEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupMemoryReport>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppResourceGroupStateReport>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppUriHandlerHost>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppUriHandlerHostFactory>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppUriHandlerRegistration>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppUriHandlerRegistrationManager>{ using type = interface_category; };
    template <> struct category<Windows::System::IAppUriHandlerRegistrationManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IDateTimeSettingsStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueue>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueue2>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueueController>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueueControllerStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueueShutdownStartingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueueStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IDispatcherQueueTimer>{ using type = interface_category; };
    template <> struct category<Windows::System::IFolderLauncherOptions>{ using type = interface_category; };
    template <> struct category<Windows::System::IKnownUserPropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::ILaunchUriResult>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherOptions>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherOptions2>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherOptions3>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherOptions4>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherStatics2>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherStatics3>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherStatics4>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherStatics5>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherUIOptions>{ using type = interface_category; };
    template <> struct category<Windows::System::ILauncherViewOptions>{ using type = interface_category; };
    template <> struct category<Windows::System::IMemoryManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IMemoryManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::System::IMemoryManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::System::IMemoryManagerStatics4>{ using type = interface_category; };
    template <> struct category<Windows::System::IProcessLauncherOptions>{ using type = interface_category; };
    template <> struct category<Windows::System::IProcessLauncherResult>{ using type = interface_category; };
    template <> struct category<Windows::System::IProcessLauncherStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IProcessMemoryReport>{ using type = interface_category; };
    template <> struct category<Windows::System::IProtocolForResultsOperation>{ using type = interface_category; };
    template <> struct category<Windows::System::IRemoteLauncherOptions>{ using type = interface_category; };
    template <> struct category<Windows::System::IRemoteLauncherStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IShutdownManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IShutdownManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::System::ITimeZoneSettingsStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::ITimeZoneSettingsStatics2>{ using type = interface_category; };
    template <> struct category<Windows::System::IUser>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserAuthenticationStatusChangeDeferral>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserAuthenticationStatusChangingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserDeviceAssociationChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserDeviceAssociationStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserPicker>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserPickerStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserStatics2>{ using type = interface_category; };
    template <> struct category<Windows::System::IUserWatcher>{ using type = interface_category; };
    template <> struct category<Windows::System::AppActivationResult>{ using type = class_category; };
    template <> struct category<Windows::System::AppDiagnosticInfo>{ using type = class_category; };
    template <> struct category<Windows::System::AppDiagnosticInfoWatcher>{ using type = class_category; };
    template <> struct category<Windows::System::AppDiagnosticInfoWatcherEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::AppExecutionStateChangeResult>{ using type = class_category; };
    template <> struct category<Windows::System::AppMemoryReport>{ using type = class_category; };
    template <> struct category<Windows::System::AppMemoryUsageLimitChangingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupBackgroundTaskReport>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupInfo>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupInfoWatcher>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupInfoWatcherEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupMemoryReport>{ using type = class_category; };
    template <> struct category<Windows::System::AppResourceGroupStateReport>{ using type = class_category; };
    template <> struct category<Windows::System::AppUriHandlerHost>{ using type = class_category; };
    template <> struct category<Windows::System::AppUriHandlerRegistration>{ using type = class_category; };
    template <> struct category<Windows::System::AppUriHandlerRegistrationManager>{ using type = class_category; };
    template <> struct category<Windows::System::DateTimeSettings>{ using type = class_category; };
    template <> struct category<Windows::System::DispatcherQueue>{ using type = class_category; };
    template <> struct category<Windows::System::DispatcherQueueController>{ using type = class_category; };
    template <> struct category<Windows::System::DispatcherQueueShutdownStartingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::DispatcherQueueTimer>{ using type = class_category; };
    template <> struct category<Windows::System::FolderLauncherOptions>{ using type = class_category; };
    template <> struct category<Windows::System::KnownUserProperties>{ using type = class_category; };
    template <> struct category<Windows::System::LaunchUriResult>{ using type = class_category; };
    template <> struct category<Windows::System::Launcher>{ using type = class_category; };
    template <> struct category<Windows::System::LauncherOptions>{ using type = class_category; };
    template <> struct category<Windows::System::LauncherUIOptions>{ using type = class_category; };
    template <> struct category<Windows::System::MemoryManager>{ using type = class_category; };
    template <> struct category<Windows::System::ProcessLauncher>{ using type = class_category; };
    template <> struct category<Windows::System::ProcessLauncherOptions>{ using type = class_category; };
    template <> struct category<Windows::System::ProcessLauncherResult>{ using type = class_category; };
    template <> struct category<Windows::System::ProcessMemoryReport>{ using type = class_category; };
    template <> struct category<Windows::System::ProtocolForResultsOperation>{ using type = class_category; };
    template <> struct category<Windows::System::RemoteLauncher>{ using type = class_category; };
    template <> struct category<Windows::System::RemoteLauncherOptions>{ using type = class_category; };
    template <> struct category<Windows::System::ShutdownManager>{ using type = class_category; };
    template <> struct category<Windows::System::TimeZoneSettings>{ using type = class_category; };
    template <> struct category<Windows::System::User>{ using type = class_category; };
    template <> struct category<Windows::System::UserAuthenticationStatusChangeDeferral>{ using type = class_category; };
    template <> struct category<Windows::System::UserAuthenticationStatusChangingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::UserChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::UserDeviceAssociation>{ using type = class_category; };
    template <> struct category<Windows::System::UserDeviceAssociationChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::System::UserPicker>{ using type = class_category; };
    template <> struct category<Windows::System::UserWatcher>{ using type = class_category; };
    template <> struct category<Windows::System::AppDiagnosticInfoWatcherStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::AppMemoryUsageLevel>{ using type = enum_category; };
    template <> struct category<Windows::System::AppResourceGroupEnergyQuotaState>{ using type = enum_category; };
    template <> struct category<Windows::System::AppResourceGroupExecutionState>{ using type = enum_category; };
    template <> struct category<Windows::System::AppResourceGroupInfoWatcherStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::AutoUpdateTimeZoneStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::DiagnosticAccessStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::DispatcherQueuePriority>{ using type = enum_category; };
    template <> struct category<Windows::System::LaunchFileStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::LaunchQuerySupportStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::LaunchQuerySupportType>{ using type = enum_category; };
    template <> struct category<Windows::System::LaunchUriStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::PowerState>{ using type = enum_category; };
    template <> struct category<Windows::System::ProcessorArchitecture>{ using type = enum_category; };
    template <> struct category<Windows::System::RemoteLaunchUriStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::ShutdownKind>{ using type = enum_category; };
    template <> struct category<Windows::System::UserAuthenticationStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::UserPictureSize>{ using type = enum_category; };
    template <> struct category<Windows::System::UserType>{ using type = enum_category; };
    template <> struct category<Windows::System::UserWatcherStatus>{ using type = enum_category; };
    template <> struct category<Windows::System::UserWatcherUpdateKind>{ using type = enum_category; };
    template <> struct category<Windows::System::VirtualKey>{ using type = enum_category; };
    template <> struct category<Windows::System::VirtualKeyModifiers>{ using type = enum_category; };
    template <> struct category<Windows::System::DispatcherQueueHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::System::AppActivationResult> = L"Windows.System.AppActivationResult";
    template <> inline constexpr auto& name_v<Windows::System::AppDiagnosticInfo> = L"Windows.System.AppDiagnosticInfo";
    template <> inline constexpr auto& name_v<Windows::System::AppDiagnosticInfoWatcher> = L"Windows.System.AppDiagnosticInfoWatcher";
    template <> inline constexpr auto& name_v<Windows::System::AppDiagnosticInfoWatcherEventArgs> = L"Windows.System.AppDiagnosticInfoWatcherEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::AppExecutionStateChangeResult> = L"Windows.System.AppExecutionStateChangeResult";
    template <> inline constexpr auto& name_v<Windows::System::AppMemoryReport> = L"Windows.System.AppMemoryReport";
    template <> inline constexpr auto& name_v<Windows::System::AppMemoryUsageLimitChangingEventArgs> = L"Windows.System.AppMemoryUsageLimitChangingEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupBackgroundTaskReport> = L"Windows.System.AppResourceGroupBackgroundTaskReport";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupInfo> = L"Windows.System.AppResourceGroupInfo";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupInfoWatcher> = L"Windows.System.AppResourceGroupInfoWatcher";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupInfoWatcherEventArgs> = L"Windows.System.AppResourceGroupInfoWatcherEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> = L"Windows.System.AppResourceGroupInfoWatcherExecutionStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupMemoryReport> = L"Windows.System.AppResourceGroupMemoryReport";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupStateReport> = L"Windows.System.AppResourceGroupStateReport";
    template <> inline constexpr auto& name_v<Windows::System::AppUriHandlerHost> = L"Windows.System.AppUriHandlerHost";
    template <> inline constexpr auto& name_v<Windows::System::AppUriHandlerRegistration> = L"Windows.System.AppUriHandlerRegistration";
    template <> inline constexpr auto& name_v<Windows::System::AppUriHandlerRegistrationManager> = L"Windows.System.AppUriHandlerRegistrationManager";
    template <> inline constexpr auto& name_v<Windows::System::DateTimeSettings> = L"Windows.System.DateTimeSettings";
    template <> inline constexpr auto& name_v<Windows::System::DispatcherQueue> = L"Windows.System.DispatcherQueue";
    template <> inline constexpr auto& name_v<Windows::System::DispatcherQueueController> = L"Windows.System.DispatcherQueueController";
    template <> inline constexpr auto& name_v<Windows::System::DispatcherQueueShutdownStartingEventArgs> = L"Windows.System.DispatcherQueueShutdownStartingEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::DispatcherQueueTimer> = L"Windows.System.DispatcherQueueTimer";
    template <> inline constexpr auto& name_v<Windows::System::FolderLauncherOptions> = L"Windows.System.FolderLauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::KnownUserProperties> = L"Windows.System.KnownUserProperties";
    template <> inline constexpr auto& name_v<Windows::System::LaunchUriResult> = L"Windows.System.LaunchUriResult";
    template <> inline constexpr auto& name_v<Windows::System::Launcher> = L"Windows.System.Launcher";
    template <> inline constexpr auto& name_v<Windows::System::LauncherOptions> = L"Windows.System.LauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::LauncherUIOptions> = L"Windows.System.LauncherUIOptions";
    template <> inline constexpr auto& name_v<Windows::System::MemoryManager> = L"Windows.System.MemoryManager";
    template <> inline constexpr auto& name_v<Windows::System::ProcessLauncher> = L"Windows.System.ProcessLauncher";
    template <> inline constexpr auto& name_v<Windows::System::ProcessLauncherOptions> = L"Windows.System.ProcessLauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::ProcessLauncherResult> = L"Windows.System.ProcessLauncherResult";
    template <> inline constexpr auto& name_v<Windows::System::ProcessMemoryReport> = L"Windows.System.ProcessMemoryReport";
    template <> inline constexpr auto& name_v<Windows::System::ProtocolForResultsOperation> = L"Windows.System.ProtocolForResultsOperation";
    template <> inline constexpr auto& name_v<Windows::System::RemoteLauncher> = L"Windows.System.RemoteLauncher";
    template <> inline constexpr auto& name_v<Windows::System::RemoteLauncherOptions> = L"Windows.System.RemoteLauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::ShutdownManager> = L"Windows.System.ShutdownManager";
    template <> inline constexpr auto& name_v<Windows::System::TimeZoneSettings> = L"Windows.System.TimeZoneSettings";
    template <> inline constexpr auto& name_v<Windows::System::User> = L"Windows.System.User";
    template <> inline constexpr auto& name_v<Windows::System::UserAuthenticationStatusChangeDeferral> = L"Windows.System.UserAuthenticationStatusChangeDeferral";
    template <> inline constexpr auto& name_v<Windows::System::UserAuthenticationStatusChangingEventArgs> = L"Windows.System.UserAuthenticationStatusChangingEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::UserChangedEventArgs> = L"Windows.System.UserChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::UserDeviceAssociation> = L"Windows.System.UserDeviceAssociation";
    template <> inline constexpr auto& name_v<Windows::System::UserDeviceAssociationChangedEventArgs> = L"Windows.System.UserDeviceAssociationChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::UserPicker> = L"Windows.System.UserPicker";
    template <> inline constexpr auto& name_v<Windows::System::UserWatcher> = L"Windows.System.UserWatcher";
    template <> inline constexpr auto& name_v<Windows::System::AppDiagnosticInfoWatcherStatus> = L"Windows.System.AppDiagnosticInfoWatcherStatus";
    template <> inline constexpr auto& name_v<Windows::System::AppMemoryUsageLevel> = L"Windows.System.AppMemoryUsageLevel";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupEnergyQuotaState> = L"Windows.System.AppResourceGroupEnergyQuotaState";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupExecutionState> = L"Windows.System.AppResourceGroupExecutionState";
    template <> inline constexpr auto& name_v<Windows::System::AppResourceGroupInfoWatcherStatus> = L"Windows.System.AppResourceGroupInfoWatcherStatus";
    template <> inline constexpr auto& name_v<Windows::System::AutoUpdateTimeZoneStatus> = L"Windows.System.AutoUpdateTimeZoneStatus";
    template <> inline constexpr auto& name_v<Windows::System::DiagnosticAccessStatus> = L"Windows.System.DiagnosticAccessStatus";
    template <> inline constexpr auto& name_v<Windows::System::DispatcherQueuePriority> = L"Windows.System.DispatcherQueuePriority";
    template <> inline constexpr auto& name_v<Windows::System::LaunchFileStatus> = L"Windows.System.LaunchFileStatus";
    template <> inline constexpr auto& name_v<Windows::System::LaunchQuerySupportStatus> = L"Windows.System.LaunchQuerySupportStatus";
    template <> inline constexpr auto& name_v<Windows::System::LaunchQuerySupportType> = L"Windows.System.LaunchQuerySupportType";
    template <> inline constexpr auto& name_v<Windows::System::LaunchUriStatus> = L"Windows.System.LaunchUriStatus";
    template <> inline constexpr auto& name_v<Windows::System::PowerState> = L"Windows.System.PowerState";
    template <> inline constexpr auto& name_v<Windows::System::ProcessorArchitecture> = L"Windows.System.ProcessorArchitecture";
    template <> inline constexpr auto& name_v<Windows::System::RemoteLaunchUriStatus> = L"Windows.System.RemoteLaunchUriStatus";
    template <> inline constexpr auto& name_v<Windows::System::ShutdownKind> = L"Windows.System.ShutdownKind";
    template <> inline constexpr auto& name_v<Windows::System::UserAuthenticationStatus> = L"Windows.System.UserAuthenticationStatus";
    template <> inline constexpr auto& name_v<Windows::System::UserPictureSize> = L"Windows.System.UserPictureSize";
    template <> inline constexpr auto& name_v<Windows::System::UserType> = L"Windows.System.UserType";
    template <> inline constexpr auto& name_v<Windows::System::UserWatcherStatus> = L"Windows.System.UserWatcherStatus";
    template <> inline constexpr auto& name_v<Windows::System::UserWatcherUpdateKind> = L"Windows.System.UserWatcherUpdateKind";
    template <> inline constexpr auto& name_v<Windows::System::VirtualKey> = L"Windows.System.VirtualKey";
    template <> inline constexpr auto& name_v<Windows::System::VirtualKeyModifiers> = L"Windows.System.VirtualKeyModifiers";
    template <> inline constexpr auto& name_v<Windows::System::IAppActivationResult> = L"Windows.System.IAppActivationResult";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfo> = L"Windows.System.IAppDiagnosticInfo";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfo2> = L"Windows.System.IAppDiagnosticInfo2";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfo3> = L"Windows.System.IAppDiagnosticInfo3";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfoStatics> = L"Windows.System.IAppDiagnosticInfoStatics";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfoStatics2> = L"Windows.System.IAppDiagnosticInfoStatics2";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfoWatcher> = L"Windows.System.IAppDiagnosticInfoWatcher";
    template <> inline constexpr auto& name_v<Windows::System::IAppDiagnosticInfoWatcherEventArgs> = L"Windows.System.IAppDiagnosticInfoWatcherEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IAppExecutionStateChangeResult> = L"Windows.System.IAppExecutionStateChangeResult";
    template <> inline constexpr auto& name_v<Windows::System::IAppMemoryReport> = L"Windows.System.IAppMemoryReport";
    template <> inline constexpr auto& name_v<Windows::System::IAppMemoryReport2> = L"Windows.System.IAppMemoryReport2";
    template <> inline constexpr auto& name_v<Windows::System::IAppMemoryUsageLimitChangingEventArgs> = L"Windows.System.IAppMemoryUsageLimitChangingEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupBackgroundTaskReport> = L"Windows.System.IAppResourceGroupBackgroundTaskReport";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupInfo> = L"Windows.System.IAppResourceGroupInfo";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupInfo2> = L"Windows.System.IAppResourceGroupInfo2";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupInfoWatcher> = L"Windows.System.IAppResourceGroupInfoWatcher";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupInfoWatcherEventArgs> = L"Windows.System.IAppResourceGroupInfoWatcherEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs> = L"Windows.System.IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupMemoryReport> = L"Windows.System.IAppResourceGroupMemoryReport";
    template <> inline constexpr auto& name_v<Windows::System::IAppResourceGroupStateReport> = L"Windows.System.IAppResourceGroupStateReport";
    template <> inline constexpr auto& name_v<Windows::System::IAppUriHandlerHost> = L"Windows.System.IAppUriHandlerHost";
    template <> inline constexpr auto& name_v<Windows::System::IAppUriHandlerHostFactory> = L"Windows.System.IAppUriHandlerHostFactory";
    template <> inline constexpr auto& name_v<Windows::System::IAppUriHandlerRegistration> = L"Windows.System.IAppUriHandlerRegistration";
    template <> inline constexpr auto& name_v<Windows::System::IAppUriHandlerRegistrationManager> = L"Windows.System.IAppUriHandlerRegistrationManager";
    template <> inline constexpr auto& name_v<Windows::System::IAppUriHandlerRegistrationManagerStatics> = L"Windows.System.IAppUriHandlerRegistrationManagerStatics";
    template <> inline constexpr auto& name_v<Windows::System::IDateTimeSettingsStatics> = L"Windows.System.IDateTimeSettingsStatics";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueue> = L"Windows.System.IDispatcherQueue";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueue2> = L"Windows.System.IDispatcherQueue2";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueueController> = L"Windows.System.IDispatcherQueueController";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueueControllerStatics> = L"Windows.System.IDispatcherQueueControllerStatics";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueueShutdownStartingEventArgs> = L"Windows.System.IDispatcherQueueShutdownStartingEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueueStatics> = L"Windows.System.IDispatcherQueueStatics";
    template <> inline constexpr auto& name_v<Windows::System::IDispatcherQueueTimer> = L"Windows.System.IDispatcherQueueTimer";
    template <> inline constexpr auto& name_v<Windows::System::IFolderLauncherOptions> = L"Windows.System.IFolderLauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::IKnownUserPropertiesStatics> = L"Windows.System.IKnownUserPropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::System::ILaunchUriResult> = L"Windows.System.ILaunchUriResult";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherOptions> = L"Windows.System.ILauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherOptions2> = L"Windows.System.ILauncherOptions2";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherOptions3> = L"Windows.System.ILauncherOptions3";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherOptions4> = L"Windows.System.ILauncherOptions4";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherStatics> = L"Windows.System.ILauncherStatics";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherStatics2> = L"Windows.System.ILauncherStatics2";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherStatics3> = L"Windows.System.ILauncherStatics3";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherStatics4> = L"Windows.System.ILauncherStatics4";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherStatics5> = L"Windows.System.ILauncherStatics5";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherUIOptions> = L"Windows.System.ILauncherUIOptions";
    template <> inline constexpr auto& name_v<Windows::System::ILauncherViewOptions> = L"Windows.System.ILauncherViewOptions";
    template <> inline constexpr auto& name_v<Windows::System::IMemoryManagerStatics> = L"Windows.System.IMemoryManagerStatics";
    template <> inline constexpr auto& name_v<Windows::System::IMemoryManagerStatics2> = L"Windows.System.IMemoryManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::System::IMemoryManagerStatics3> = L"Windows.System.IMemoryManagerStatics3";
    template <> inline constexpr auto& name_v<Windows::System::IMemoryManagerStatics4> = L"Windows.System.IMemoryManagerStatics4";
    template <> inline constexpr auto& name_v<Windows::System::IProcessLauncherOptions> = L"Windows.System.IProcessLauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::IProcessLauncherResult> = L"Windows.System.IProcessLauncherResult";
    template <> inline constexpr auto& name_v<Windows::System::IProcessLauncherStatics> = L"Windows.System.IProcessLauncherStatics";
    template <> inline constexpr auto& name_v<Windows::System::IProcessMemoryReport> = L"Windows.System.IProcessMemoryReport";
    template <> inline constexpr auto& name_v<Windows::System::IProtocolForResultsOperation> = L"Windows.System.IProtocolForResultsOperation";
    template <> inline constexpr auto& name_v<Windows::System::IRemoteLauncherOptions> = L"Windows.System.IRemoteLauncherOptions";
    template <> inline constexpr auto& name_v<Windows::System::IRemoteLauncherStatics> = L"Windows.System.IRemoteLauncherStatics";
    template <> inline constexpr auto& name_v<Windows::System::IShutdownManagerStatics> = L"Windows.System.IShutdownManagerStatics";
    template <> inline constexpr auto& name_v<Windows::System::IShutdownManagerStatics2> = L"Windows.System.IShutdownManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::System::ITimeZoneSettingsStatics> = L"Windows.System.ITimeZoneSettingsStatics";
    template <> inline constexpr auto& name_v<Windows::System::ITimeZoneSettingsStatics2> = L"Windows.System.ITimeZoneSettingsStatics2";
    template <> inline constexpr auto& name_v<Windows::System::IUser> = L"Windows.System.IUser";
    template <> inline constexpr auto& name_v<Windows::System::IUserAuthenticationStatusChangeDeferral> = L"Windows.System.IUserAuthenticationStatusChangeDeferral";
    template <> inline constexpr auto& name_v<Windows::System::IUserAuthenticationStatusChangingEventArgs> = L"Windows.System.IUserAuthenticationStatusChangingEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IUserChangedEventArgs> = L"Windows.System.IUserChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IUserChangedEventArgs2> = L"Windows.System.IUserChangedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::System::IUserDeviceAssociationChangedEventArgs> = L"Windows.System.IUserDeviceAssociationChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::System::IUserDeviceAssociationStatics> = L"Windows.System.IUserDeviceAssociationStatics";
    template <> inline constexpr auto& name_v<Windows::System::IUserPicker> = L"Windows.System.IUserPicker";
    template <> inline constexpr auto& name_v<Windows::System::IUserPickerStatics> = L"Windows.System.IUserPickerStatics";
    template <> inline constexpr auto& name_v<Windows::System::IUserStatics> = L"Windows.System.IUserStatics";
    template <> inline constexpr auto& name_v<Windows::System::IUserStatics2> = L"Windows.System.IUserStatics2";
    template <> inline constexpr auto& name_v<Windows::System::IUserWatcher> = L"Windows.System.IUserWatcher";
    template <> inline constexpr auto& name_v<Windows::System::DispatcherQueueHandler> = L"Windows.System.DispatcherQueueHandler";
    template <> inline constexpr guid guid_v<Windows::System::IAppActivationResult>{ 0x6B528900,0xF46E,0x4EB0,{ 0xAA,0x6C,0x38,0xAF,0x55,0x7C,0xF9,0xED } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfo>{ 0xE348A69A,0x8889,0x4CA3,{ 0xBE,0x07,0xD5,0xFF,0xFF,0x5F,0x08,0x04 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfo2>{ 0xDF46FBD7,0x191A,0x446C,{ 0x94,0x73,0x8F,0xBC,0x23,0x74,0xA3,0x54 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfo3>{ 0xC895C63D,0xDD61,0x4C65,{ 0xBA,0xBD,0x81,0xA1,0x0B,0x4F,0x98,0x15 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfoStatics>{ 0xCE6925BF,0x10CA,0x40C8,{ 0xA9,0xCA,0xC5,0xC9,0x65,0x01,0x86,0x6E } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfoStatics2>{ 0x05B24B86,0x1000,0x4C90,{ 0xBB,0x9F,0x72,0x35,0x07,0x1C,0x50,0xFE } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfoWatcher>{ 0x75575070,0x01D3,0x489A,{ 0x93,0x25,0x52,0xF9,0xCC,0x6E,0xDE,0x0A } };
    template <> inline constexpr guid guid_v<Windows::System::IAppDiagnosticInfoWatcherEventArgs>{ 0x7017C716,0xE1DA,0x4C65,{ 0x99,0xDF,0x04,0x6D,0xFF,0x5B,0xE7,0x1A } };
    template <> inline constexpr guid guid_v<Windows::System::IAppExecutionStateChangeResult>{ 0x6F039BF0,0xF91B,0x4DF8,{ 0xAE,0x77,0x30,0x33,0xCC,0xB6,0x91,0x14 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppMemoryReport>{ 0x6D65339B,0x4D6F,0x45BC,{ 0x9C,0x5E,0xE4,0x9B,0x3F,0xF2,0x75,0x8D } };
    template <> inline constexpr guid guid_v<Windows::System::IAppMemoryReport2>{ 0x5F7F3738,0x51B7,0x42DC,{ 0xB7,0xED,0x79,0xBA,0x46,0xD2,0x88,0x57 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppMemoryUsageLimitChangingEventArgs>{ 0x79F86664,0xFECA,0x4DA5,{ 0x9E,0x40,0x2B,0xC6,0x3E,0xFD,0xC9,0x79 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupBackgroundTaskReport>{ 0x2566E74E,0xB05D,0x40C2,{ 0x9D,0xC1,0x1A,0x4F,0x03,0x9E,0xA1,0x20 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupInfo>{ 0xB913F77A,0xE807,0x49F4,{ 0x84,0x5E,0x7B,0x8B,0xDC,0xFE,0x8E,0xE7 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupInfo2>{ 0xEE9B236D,0xD305,0x4D6B,{ 0x92,0xF7,0x6A,0xFD,0xAD,0x72,0xDE,0xDC } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupInfoWatcher>{ 0xD9B0A0FD,0x6E5A,0x4C72,{ 0x8B,0x17,0x09,0xFE,0xC4,0xA2,0x12,0xBD } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupInfoWatcherEventArgs>{ 0x7A787637,0x6302,0x4D2F,{ 0xBF,0x89,0x1C,0x12,0xD0,0xB2,0xA6,0xB9 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ 0x1BDBEDD7,0xFEE6,0x4FD4,{ 0x98,0xDD,0xE9,0x2A,0x2C,0xC2,0x99,0xF3 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupMemoryReport>{ 0x2C8C06B1,0x7DB1,0x4C51,{ 0xA2,0x25,0x7F,0xAE,0x2D,0x49,0xE4,0x31 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppResourceGroupStateReport>{ 0x52849F18,0x2F70,0x4236,{ 0xAB,0x40,0xD0,0x4D,0xB0,0xC7,0xB9,0x31 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppUriHandlerHost>{ 0x5D50CAC5,0x92D2,0x5409,{ 0xB5,0x6F,0x7F,0x73,0xE1,0x0E,0xA4,0xC3 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppUriHandlerHostFactory>{ 0x257C3C96,0xCE04,0x5F98,{ 0x96,0xBB,0x3E,0xBD,0x3E,0x92,0x75,0xBB } };
    template <> inline constexpr guid guid_v<Windows::System::IAppUriHandlerRegistration>{ 0x6F73AEB1,0x4569,0x5C3F,{ 0x9B,0xA0,0x99,0x12,0x3E,0xEA,0x32,0xC3 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppUriHandlerRegistrationManager>{ 0xE62C9A52,0xAC94,0x5750,{ 0xAC,0x1B,0x6C,0xFB,0x6F,0x25,0x02,0x63 } };
    template <> inline constexpr guid guid_v<Windows::System::IAppUriHandlerRegistrationManagerStatics>{ 0xD5CEDD9F,0x5729,0x5B76,{ 0xA1,0xD4,0x02,0x85,0xF2,0x95,0xC1,0x24 } };
    template <> inline constexpr guid guid_v<Windows::System::IDateTimeSettingsStatics>{ 0x5D2150D1,0x47EE,0x48AB,{ 0xA5,0x2B,0x9F,0x19,0x54,0x27,0x8D,0x82 } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueue>{ 0x603E88E4,0xA338,0x4FFE,{ 0xA4,0x57,0xA5,0xCF,0xB9,0xCE,0xB8,0x99 } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueue2>{ 0xC822C647,0x30EF,0x506E,{ 0xBD,0x1E,0xA6,0x47,0xAE,0x66,0x75,0xFF } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueueController>{ 0x22F34E66,0x50DB,0x4E36,{ 0xA9,0x8D,0x61,0xC0,0x1B,0x38,0x4D,0x20 } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueueControllerStatics>{ 0x0A6C98E0,0x5198,0x49A2,{ 0xA3,0x13,0x3F,0x70,0xD1,0xF1,0x3C,0x27 } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueueShutdownStartingEventArgs>{ 0xC4724C4C,0xFF97,0x40C0,{ 0xA2,0x26,0xCC,0x0A,0xAA,0x54,0x5E,0x89 } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueueStatics>{ 0xA96D83D7,0x9371,0x4517,{ 0x92,0x45,0xD0,0x82,0x4A,0xC1,0x2C,0x74 } };
    template <> inline constexpr guid guid_v<Windows::System::IDispatcherQueueTimer>{ 0x5FEABB1D,0xA31C,0x4727,{ 0xB1,0xAC,0x37,0x45,0x46,0x49,0xD5,0x6A } };
    template <> inline constexpr guid guid_v<Windows::System::IFolderLauncherOptions>{ 0xBB91C27D,0x6B87,0x432A,{ 0xBD,0x04,0x77,0x6C,0x6F,0x5F,0xB2,0xAB } };
    template <> inline constexpr guid guid_v<Windows::System::IKnownUserPropertiesStatics>{ 0x7755911A,0x70C5,0x48E5,{ 0xB6,0x37,0x5B,0xA3,0x44,0x1E,0x4E,0xE4 } };
    template <> inline constexpr guid guid_v<Windows::System::ILaunchUriResult>{ 0xEC27A8DF,0xF6D5,0x45CA,{ 0x91,0x3A,0x70,0xA4,0x0C,0x5C,0x82,0x21 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherOptions>{ 0xBAFA21D8,0xB071,0x4CD8,{ 0x85,0x3E,0x34,0x12,0x03,0xE5,0x57,0xD3 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherOptions2>{ 0x3BA08EB4,0x6E40,0x4DCE,{ 0xA1,0xA3,0x2F,0x53,0x95,0x0A,0xFB,0x49 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherOptions3>{ 0xF0770655,0x4B63,0x4E3A,{ 0x91,0x07,0x4E,0x68,0x78,0x41,0x92,0x3A } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherOptions4>{ 0xEF6FD10E,0xE6FB,0x4814,{ 0xA4,0x4E,0x57,0xE8,0xB9,0xD9,0xA0,0x1B } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherStatics>{ 0x277151C3,0x9E3E,0x42F6,{ 0x91,0xA4,0x5D,0xFD,0xEB,0x23,0x24,0x51 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherStatics2>{ 0x59BA2FBB,0x24CB,0x4C02,{ 0xA4,0xC4,0x82,0x94,0x56,0x9D,0x54,0xF1 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherStatics3>{ 0x234261A8,0x9DB3,0x4683,{ 0xAA,0x42,0xDC,0x6F,0x51,0xD3,0x38,0x47 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherStatics4>{ 0xB9EC819F,0xB5A5,0x41C6,{ 0xB3,0xB3,0xDD,0x1B,0x31,0x78,0xBC,0xF2 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherStatics5>{ 0x5B24EF84,0xD895,0x5FEA,{ 0x91,0x53,0x1A,0xC4,0x9A,0xED,0x9B,0xA9 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherUIOptions>{ 0x1B25DA6E,0x8AA6,0x41E9,{ 0x82,0x51,0x41,0x65,0xF5,0x98,0x5F,0x49 } };
    template <> inline constexpr guid guid_v<Windows::System::ILauncherViewOptions>{ 0x8A9B29F1,0x7CA7,0x49DE,{ 0x9B,0xD3,0x3C,0x5B,0x71,0x84,0xF6,0x16 } };
    template <> inline constexpr guid guid_v<Windows::System::IMemoryManagerStatics>{ 0x5C6C279C,0xD7CA,0x4779,{ 0x91,0x88,0x40,0x57,0x21,0x9C,0xE6,0x4C } };
    template <> inline constexpr guid guid_v<Windows::System::IMemoryManagerStatics2>{ 0x6EEE351F,0x6D62,0x423F,{ 0x94,0x79,0xB0,0x1F,0x9C,0x9F,0x76,0x69 } };
    template <> inline constexpr guid guid_v<Windows::System::IMemoryManagerStatics3>{ 0x149B59CE,0x92AD,0x4E35,{ 0x89,0xEB,0x50,0xDF,0xB4,0xC0,0xD9,0x1C } };
    template <> inline constexpr guid guid_v<Windows::System::IMemoryManagerStatics4>{ 0xC5A94828,0xE84E,0x4886,{ 0x8A,0x0D,0x44,0xB3,0x19,0x0E,0x3B,0x72 } };
    template <> inline constexpr guid guid_v<Windows::System::IProcessLauncherOptions>{ 0x3080B9CF,0xF444,0x4A83,{ 0xBE,0xAF,0xA5,0x49,0xA0,0xF3,0x22,0x9C } };
    template <> inline constexpr guid guid_v<Windows::System::IProcessLauncherResult>{ 0x544C8934,0x86D8,0x4991,{ 0x8E,0x75,0xEC,0xE8,0xA4,0x3B,0x6B,0x6D } };
    template <> inline constexpr guid guid_v<Windows::System::IProcessLauncherStatics>{ 0x33AB66E7,0x2D0E,0x448B,{ 0xA6,0xA0,0xC1,0x3C,0x38,0x36,0xD0,0x9C } };
    template <> inline constexpr guid guid_v<Windows::System::IProcessMemoryReport>{ 0x087305A8,0x9B70,0x4782,{ 0x87,0x41,0x3A,0x98,0x2B,0x6C,0xE5,0xE4 } };
    template <> inline constexpr guid guid_v<Windows::System::IProtocolForResultsOperation>{ 0xD581293A,0x6DE9,0x4D28,{ 0x93,0x78,0xF8,0x67,0x82,0xE1,0x82,0xBB } };
    template <> inline constexpr guid guid_v<Windows::System::IRemoteLauncherOptions>{ 0x9E3A2788,0x2891,0x4CDF,{ 0xA2,0xD6,0x9D,0xFF,0x7D,0x02,0xE6,0x93 } };
    template <> inline constexpr guid guid_v<Windows::System::IRemoteLauncherStatics>{ 0xD7DB7A93,0xA30C,0x48B7,{ 0x9F,0x21,0x05,0x10,0x26,0xA4,0xE5,0x17 } };
    template <> inline constexpr guid guid_v<Windows::System::IShutdownManagerStatics>{ 0x72E247ED,0xDD5B,0x4D6C,{ 0xB1,0xD0,0xC5,0x7A,0x7B,0xBB,0x5F,0x94 } };
    template <> inline constexpr guid guid_v<Windows::System::IShutdownManagerStatics2>{ 0x0F69A02F,0x9C34,0x43C7,{ 0xA8,0xC3,0x70,0xB3,0x0A,0x7F,0x75,0x04 } };
    template <> inline constexpr guid guid_v<Windows::System::ITimeZoneSettingsStatics>{ 0x9B3B2BEA,0xA101,0x41AE,{ 0x9F,0xBD,0x02,0x87,0x28,0xBA,0xB7,0x3D } };
    template <> inline constexpr guid guid_v<Windows::System::ITimeZoneSettingsStatics2>{ 0x555C0DB8,0x39A8,0x49FA,{ 0xB4,0xF6,0xA2,0xC7,0xFC,0x28,0x42,0xEC } };
    template <> inline constexpr guid guid_v<Windows::System::IUser>{ 0xDF9A26C6,0xE746,0x4BCD,{ 0xB5,0xD4,0x12,0x01,0x03,0xC4,0x20,0x9B } };
    template <> inline constexpr guid guid_v<Windows::System::IUserAuthenticationStatusChangeDeferral>{ 0x88B59568,0xBB30,0x42FB,{ 0xA2,0x70,0xE9,0x90,0x2E,0x40,0xEF,0xA7 } };
    template <> inline constexpr guid guid_v<Windows::System::IUserAuthenticationStatusChangingEventArgs>{ 0x8C030F28,0xA711,0x4C1E,{ 0xAB,0x48,0x04,0x17,0x9C,0x15,0x93,0x8F } };
    template <> inline constexpr guid guid_v<Windows::System::IUserChangedEventArgs>{ 0x086459DC,0x18C6,0x48DB,{ 0xBC,0x99,0x72,0x4F,0xB9,0x20,0x3C,0xCC } };
    template <> inline constexpr guid guid_v<Windows::System::IUserChangedEventArgs2>{ 0x6B2CCB44,0x6F01,0x560C,{ 0x97,0xAD,0xFC,0x7F,0x32,0xEC,0x58,0x1F } };
    template <> inline constexpr guid guid_v<Windows::System::IUserDeviceAssociationChangedEventArgs>{ 0xBD1F6F6C,0xBB5D,0x4D7B,{ 0xA5,0xF0,0xC8,0xCD,0x11,0xA3,0x8D,0x42 } };
    template <> inline constexpr guid guid_v<Windows::System::IUserDeviceAssociationStatics>{ 0x7E491E14,0xF85A,0x4C07,{ 0x8D,0xA9,0x7F,0xE3,0xD0,0x54,0x23,0x43 } };
    template <> inline constexpr guid guid_v<Windows::System::IUserPicker>{ 0x7D548008,0xF1E3,0x4A6C,{ 0x8D,0xDC,0xA9,0xBB,0x0F,0x48,0x8A,0xED } };
    template <> inline constexpr guid guid_v<Windows::System::IUserPickerStatics>{ 0xDE3290DC,0x7E73,0x4DF6,{ 0xA1,0xAE,0x4D,0x7E,0xCA,0x82,0xB4,0x0D } };
    template <> inline constexpr guid guid_v<Windows::System::IUserStatics>{ 0x155EB23B,0x242A,0x45E0,{ 0xA2,0xE9,0x31,0x71,0xFC,0x6A,0x7F,0xDD } };
    template <> inline constexpr guid guid_v<Windows::System::IUserStatics2>{ 0x74A37E11,0x2EB5,0x4487,{ 0xB0,0xD5,0x2C,0x67,0x90,0xE0,0x13,0xE9 } };
    template <> inline constexpr guid guid_v<Windows::System::IUserWatcher>{ 0x155EB23B,0x242A,0x45E0,{ 0xA2,0xE9,0x31,0x71,0xFC,0x6A,0x7F,0xBB } };
    template <> inline constexpr guid guid_v<Windows::System::DispatcherQueueHandler>{ 0xDFA2DC9C,0x1A2D,0x4917,{ 0x98,0xF2,0x93,0x9A,0xF1,0xD6,0xE0,0xC8 } };
    template <> struct default_interface<Windows::System::AppActivationResult>{ using type = Windows::System::IAppActivationResult; };
    template <> struct default_interface<Windows::System::AppDiagnosticInfo>{ using type = Windows::System::IAppDiagnosticInfo; };
    template <> struct default_interface<Windows::System::AppDiagnosticInfoWatcher>{ using type = Windows::System::IAppDiagnosticInfoWatcher; };
    template <> struct default_interface<Windows::System::AppDiagnosticInfoWatcherEventArgs>{ using type = Windows::System::IAppDiagnosticInfoWatcherEventArgs; };
    template <> struct default_interface<Windows::System::AppExecutionStateChangeResult>{ using type = Windows::System::IAppExecutionStateChangeResult; };
    template <> struct default_interface<Windows::System::AppMemoryReport>{ using type = Windows::System::IAppMemoryReport; };
    template <> struct default_interface<Windows::System::AppMemoryUsageLimitChangingEventArgs>{ using type = Windows::System::IAppMemoryUsageLimitChangingEventArgs; };
    template <> struct default_interface<Windows::System::AppResourceGroupBackgroundTaskReport>{ using type = Windows::System::IAppResourceGroupBackgroundTaskReport; };
    template <> struct default_interface<Windows::System::AppResourceGroupInfo>{ using type = Windows::System::IAppResourceGroupInfo; };
    template <> struct default_interface<Windows::System::AppResourceGroupInfoWatcher>{ using type = Windows::System::IAppResourceGroupInfoWatcher; };
    template <> struct default_interface<Windows::System::AppResourceGroupInfoWatcherEventArgs>{ using type = Windows::System::IAppResourceGroupInfoWatcherEventArgs; };
    template <> struct default_interface<Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs>{ using type = Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs; };
    template <> struct default_interface<Windows::System::AppResourceGroupMemoryReport>{ using type = Windows::System::IAppResourceGroupMemoryReport; };
    template <> struct default_interface<Windows::System::AppResourceGroupStateReport>{ using type = Windows::System::IAppResourceGroupStateReport; };
    template <> struct default_interface<Windows::System::AppUriHandlerHost>{ using type = Windows::System::IAppUriHandlerHost; };
    template <> struct default_interface<Windows::System::AppUriHandlerRegistration>{ using type = Windows::System::IAppUriHandlerRegistration; };
    template <> struct default_interface<Windows::System::AppUriHandlerRegistrationManager>{ using type = Windows::System::IAppUriHandlerRegistrationManager; };
    template <> struct default_interface<Windows::System::DispatcherQueue>{ using type = Windows::System::IDispatcherQueue; };
    template <> struct default_interface<Windows::System::DispatcherQueueController>{ using type = Windows::System::IDispatcherQueueController; };
    template <> struct default_interface<Windows::System::DispatcherQueueShutdownStartingEventArgs>{ using type = Windows::System::IDispatcherQueueShutdownStartingEventArgs; };
    template <> struct default_interface<Windows::System::DispatcherQueueTimer>{ using type = Windows::System::IDispatcherQueueTimer; };
    template <> struct default_interface<Windows::System::FolderLauncherOptions>{ using type = Windows::System::IFolderLauncherOptions; };
    template <> struct default_interface<Windows::System::LaunchUriResult>{ using type = Windows::System::ILaunchUriResult; };
    template <> struct default_interface<Windows::System::LauncherOptions>{ using type = Windows::System::ILauncherOptions; };
    template <> struct default_interface<Windows::System::LauncherUIOptions>{ using type = Windows::System::ILauncherUIOptions; };
    template <> struct default_interface<Windows::System::ProcessLauncherOptions>{ using type = Windows::System::IProcessLauncherOptions; };
    template <> struct default_interface<Windows::System::ProcessLauncherResult>{ using type = Windows::System::IProcessLauncherResult; };
    template <> struct default_interface<Windows::System::ProcessMemoryReport>{ using type = Windows::System::IProcessMemoryReport; };
    template <> struct default_interface<Windows::System::ProtocolForResultsOperation>{ using type = Windows::System::IProtocolForResultsOperation; };
    template <> struct default_interface<Windows::System::RemoteLauncherOptions>{ using type = Windows::System::IRemoteLauncherOptions; };
    template <> struct default_interface<Windows::System::User>{ using type = Windows::System::IUser; };
    template <> struct default_interface<Windows::System::UserAuthenticationStatusChangeDeferral>{ using type = Windows::System::IUserAuthenticationStatusChangeDeferral; };
    template <> struct default_interface<Windows::System::UserAuthenticationStatusChangingEventArgs>{ using type = Windows::System::IUserAuthenticationStatusChangingEventArgs; };
    template <> struct default_interface<Windows::System::UserChangedEventArgs>{ using type = Windows::System::IUserChangedEventArgs; };
    template <> struct default_interface<Windows::System::UserDeviceAssociationChangedEventArgs>{ using type = Windows::System::IUserDeviceAssociationChangedEventArgs; };
    template <> struct default_interface<Windows::System::UserPicker>{ using type = Windows::System::IUserPicker; };
    template <> struct default_interface<Windows::System::UserWatcher>{ using type = Windows::System::IUserWatcher; };
    template <> struct abi<Windows::System::IAppActivationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_AppResourceGroupInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppDiagnosticInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppDiagnosticInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetResourceGroups(void**) noexcept = 0;
            virtual int32_t __stdcall CreateResourceGroupWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppDiagnosticInfo3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppDiagnosticInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestInfoAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppDiagnosticInfoStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestInfoForPackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestInfoForAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestInfoForAppUserModelId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppDiagnosticInfoWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
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
    template <> struct abi<Windows::System::IAppDiagnosticInfoWatcherEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppDiagnosticInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppExecutionStateChangeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppMemoryReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrivateCommitUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PeakPrivateCommitUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalCommitUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalCommitLimit(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppMemoryReport2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExpectedTotalCommitLimit(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppMemoryUsageLimitChangingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldLimit(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewLimit(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupBackgroundTaskReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Trigger(void**) noexcept = 0;
            virtual int32_t __stdcall get_EntryPoint(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IsShared(bool*) noexcept = 0;
            virtual int32_t __stdcall GetBackgroundTaskReports(void**) noexcept = 0;
            virtual int32_t __stdcall GetMemoryReport(void**) noexcept = 0;
            virtual int32_t __stdcall GetProcessDiagnosticInfos(void**) noexcept = 0;
            virtual int32_t __stdcall GetStateReport(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartSuspendAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartResumeAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartTerminateAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupInfoWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ExecutionStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ExecutionStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupInfoWatcherEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppDiagnosticInfos(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppResourceGroupInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppDiagnosticInfos(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppResourceGroupInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupMemoryReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommitUsageLimit(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_CommitUsageLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PrivateCommitUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalCommitUsage(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppResourceGroupStateReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExecutionState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EnergyQuotaState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppUriHandlerHost>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppUriHandlerHostFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppUriHandlerRegistration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall GetAppAddedHostsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetAppAddedHostsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppUriHandlerRegistrationManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetRegistration(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IAppUriHandlerRegistrationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDateTimeSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetSystemDateTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateTimer(void**) noexcept = 0;
            virtual int32_t __stdcall TryEnqueue(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryEnqueueWithPriority(int32_t, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall add_ShutdownStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShutdownStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ShutdownCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShutdownCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueue2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasThreadAccess(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueueController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
            virtual int32_t __stdcall ShutdownQueueAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueueControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateOnDedicatedThread(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueueShutdownStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentThread(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IDispatcherQueueTimer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Interval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsRunning(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRepeating(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRepeating(bool) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_Tick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Tick(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IFolderLauncherOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemsToSelect(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IKnownUserPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstName(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccountName(void**) noexcept = 0;
            virtual int32_t __stdcall get_GuestHost(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DomainName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionInitiationProtocolUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILaunchUriResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TreatAsUntrusted(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TreatAsUntrusted(bool) noexcept = 0;
            virtual int32_t __stdcall get_DisplayApplicationPicker(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DisplayApplicationPicker(bool) noexcept = 0;
            virtual int32_t __stdcall get_UI(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreferredApplicationPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreferredApplicationPackageFamilyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredApplicationDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreferredApplicationDisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_FallbackUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentType(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentType(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetApplicationPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetApplicationPackageFamilyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringFilesQuery(void**) noexcept = 0;
            virtual int32_t __stdcall put_NeighboringFilesQuery(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherOptions3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IgnoreAppUriHandlers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnoreAppUriHandlers(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherOptions4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LimitPickerToCurrentAppAndAppUriHandlers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LimitPickerToCurrentAppAndAppUriHandlers(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFileWithOptionsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriWithOptionsAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchUriForResultsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriForResultsWithDataAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriWithDataAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall QueryUriSupportAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall QueryUriSupportWithPackageFamilyNameAsync(void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall QueryFileSupportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall QueryFileSupportWithPackageFamilyNameAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindUriSchemeHandlersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindUriSchemeHandlersWithLaunchUriTypeAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindFileHandlersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchFolderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFolderWithOptionsAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall QueryAppUriSupportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall QueryAppUriSupportWithPackageFamilyNameAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAppUriHandlersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriWithOptionsForUserAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriWithDataForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriForResultsForUserAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriForResultsWithDataForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchFolderPathAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFolderPathWithOptionsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFolderPathForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFolderPathWithOptionsForUserAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherUIOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InvocationPoint(void**) noexcept = 0;
            virtual int32_t __stdcall put_InvocationPoint(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionRect(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectionRect(void*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredPlacement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PreferredPlacement(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ILauncherViewOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredRemainingView(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredRemainingView(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IMemoryManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppMemoryUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppMemoryUsageLimit(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppMemoryUsageLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_AppMemoryUsageIncreased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AppMemoryUsageIncreased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AppMemoryUsageDecreased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AppMemoryUsageDecreased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AppMemoryUsageLimitChanging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AppMemoryUsageLimitChanging(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IMemoryManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAppMemoryReport(void**) noexcept = 0;
            virtual int32_t __stdcall GetProcessMemoryReport(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IMemoryManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TrySetAppMemoryUsageLimit(uint64_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IMemoryManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExpectedAppMemoryUsageLimit(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IProcessLauncherOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StandardInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_StandardInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_StandardOutput(void**) noexcept = 0;
            virtual int32_t __stdcall put_StandardOutput(void*) noexcept = 0;
            virtual int32_t __stdcall get_StandardError(void**) noexcept = 0;
            virtual int32_t __stdcall put_StandardError(void*) noexcept = 0;
            virtual int32_t __stdcall get_WorkingDirectory(void**) noexcept = 0;
            virtual int32_t __stdcall put_WorkingDirectory(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IProcessLauncherResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExitCode(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IProcessLauncherStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RunToCompletionAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RunToCompletionAsyncWithOptions(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IProcessMemoryReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrivateWorkingSetUsage(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TotalWorkingSetUsage(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IProtocolForResultsOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportCompleted(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IRemoteLauncherOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_FallbackUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredAppIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IRemoteLauncherStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchUriAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriWithOptionsAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchUriWithDataAsync(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IShutdownManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BeginShutdown(int32_t, int64_t) noexcept = 0;
            virtual int32_t __stdcall CancelShutdown() noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IShutdownManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsPowerStateSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall EnterPowerState(int32_t) noexcept = 0;
            virtual int32_t __stdcall EnterPowerStateWithTimeSpan(int32_t, int64_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ITimeZoneSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentTimeZoneDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedTimeZoneDisplayNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanChangeTimeZone(bool*) noexcept = 0;
            virtual int32_t __stdcall ChangeTimeZoneByDisplayName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::ITimeZoneSettingsStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AutoUpdateTimeZoneAsync(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NonRoamableId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPropertyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPropertiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPictureAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserAuthenticationStatusChangeDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserAuthenticationStatusChangingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangedPropertyKinds(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserDeviceAssociationChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewUser(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldUser(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserDeviceAssociationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindUserFromDeviceId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_UserDeviceAssociationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserDeviceAssociationChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserPicker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowGuestAccounts(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowGuestAccounts(bool) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedSelectedUser(void**) noexcept = 0;
            virtual int32_t __stdcall put_SuggestedSelectedUser(void*) noexcept = 0;
            virtual int32_t __stdcall PickSingleUserAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserPickerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncByType(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncByTypeAndStatus(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::IUserWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AuthenticationStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AuthenticationStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AuthenticationStatusChanging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AuthenticationStatusChanging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::DispatcherQueueHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_IAppActivationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppResourceGroupInfo) AppResourceGroupInfo() const;
    };
    template <> struct consume<Windows::System::IAppActivationResult>
    {
        template <typename D> using type = consume_Windows_System_IAppActivationResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) AppInfo() const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfo>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfo2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupInfo>) GetResourceGroups() const;
        WINRT_IMPL_AUTO(Windows::System::AppResourceGroupInfoWatcher) CreateResourceGroupWatcher() const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfo2>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfo3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::AppActivationResult>) LaunchAsync() const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfo3>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfo3<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfoStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>) RequestInfoAsync() const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfoStatics2
    {
        WINRT_IMPL_AUTO(Windows::System::AppDiagnosticInfoWatcher) CreateWatcher() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::DiagnosticAccessStatus>) RequestAccessAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>) RequestInfoForPackageAsync(param::hstring const& packageFamilyName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>) RequestInfoForAppAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>) RequestInfoForAppAsync(param::hstring const& appUserModelId) const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfoStatics2>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfoWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) Added(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::System::IAppDiagnosticInfoWatcher, &impl::abi_t<Windows::System::IAppDiagnosticInfoWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::System::IAppDiagnosticInfoWatcher, &impl::abi_t<Windows::System::IAppDiagnosticInfoWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::System::IAppDiagnosticInfoWatcher, &impl::abi_t<Windows::System::IAppDiagnosticInfoWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::System::IAppDiagnosticInfoWatcher, &impl::abi_t<Windows::System::IAppDiagnosticInfoWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppDiagnosticInfoWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfoWatcher>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppDiagnosticInfoWatcherEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppDiagnosticInfo) AppDiagnosticInfo() const;
    };
    template <> struct consume<Windows::System::IAppDiagnosticInfoWatcherEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IAppDiagnosticInfoWatcherEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppExecutionStateChangeResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::System::IAppExecutionStateChangeResult>
    {
        template <typename D> using type = consume_Windows_System_IAppExecutionStateChangeResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppMemoryReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) PrivateCommitUsage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) PeakPrivateCommitUsage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) TotalCommitUsage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) TotalCommitLimit() const;
    };
    template <> struct consume<Windows::System::IAppMemoryReport>
    {
        template <typename D> using type = consume_Windows_System_IAppMemoryReport<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppMemoryReport2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) ExpectedTotalCommitLimit() const;
    };
    template <> struct consume<Windows::System::IAppMemoryReport2>
    {
        template <typename D> using type = consume_Windows_System_IAppMemoryReport2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) OldLimit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) NewLimit() const;
    };
    template <> struct consume<Windows::System::IAppMemoryUsageLimitChangingEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupBackgroundTaskReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) TaskId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Trigger() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EntryPoint() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupBackgroundTaskReport>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupBackgroundTaskReport<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) InstanceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsShared() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupBackgroundTaskReport>) GetBackgroundTaskReports() const;
        WINRT_IMPL_AUTO(Windows::System::AppResourceGroupMemoryReport) GetMemoryReport() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::System::Diagnostics::ProcessDiagnosticInfo>) GetProcessDiagnosticInfos() const;
        WINRT_IMPL_AUTO(Windows::System::AppResourceGroupStateReport) GetStateReport() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupInfo>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupInfo2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>) StartSuspendAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>) StartResumeAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>) StartTerminateAsync() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupInfo2>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupInfoWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) Added(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::System::IAppResourceGroupInfoWatcher, &impl::abi_t<Windows::System::IAppResourceGroupInfoWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::System::IAppResourceGroupInfoWatcher, &impl::abi_t<Windows::System::IAppResourceGroupInfoWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::System::IAppResourceGroupInfoWatcher, &impl::abi_t<Windows::System::IAppResourceGroupInfoWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::System::IAppResourceGroupInfoWatcher, &impl::abi_t<Windows::System::IAppResourceGroupInfoWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ExecutionStateChanged(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const& handler) const;
        using ExecutionStateChanged_revoker = impl::event_revoker<Windows::System::IAppResourceGroupInfoWatcher, &impl::abi_t<Windows::System::IAppResourceGroupInfoWatcher>::remove_ExecutionStateChanged>;
        [[nodiscard]] ExecutionStateChanged_revoker ExecutionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ExecutionStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppResourceGroupInfoWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupInfoWatcher>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupInfoWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupInfoWatcherEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo>) AppDiagnosticInfos() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppResourceGroupInfo) AppResourceGroupInfo() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupInfoWatcherEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupInfoWatcherEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo>) AppDiagnosticInfos() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppResourceGroupInfo) AppResourceGroupInfo() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupMemoryReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) CommitUsageLimit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppMemoryUsageLevel) CommitUsageLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) PrivateCommitUsage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) TotalCommitUsage() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupMemoryReport>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupMemoryReport<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppResourceGroupStateReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppResourceGroupExecutionState) ExecutionState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppResourceGroupEnergyQuotaState) EnergyQuotaState() const;
    };
    template <> struct consume<Windows::System::IAppResourceGroupStateReport>
    {
        template <typename D> using type = consume_Windows_System_IAppResourceGroupStateReport<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppUriHandlerHost
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
    };
    template <> struct consume<Windows::System::IAppUriHandlerHost>
    {
        template <typename D> using type = consume_Windows_System_IAppUriHandlerHost<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppUriHandlerHostFactory
    {
        WINRT_IMPL_AUTO(Windows::System::AppUriHandlerHost) CreateInstance(param::hstring const& name) const;
    };
    template <> struct consume<Windows::System::IAppUriHandlerHostFactory>
    {
        template <typename D> using type = consume_Windows_System_IAppUriHandlerHostFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppUriHandlerRegistration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppUriHandlerHost>>) GetAppAddedHostsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetAppAddedHostsAsync(param::async_iterable<Windows::System::AppUriHandlerHost> const& hosts) const;
    };
    template <> struct consume<Windows::System::IAppUriHandlerRegistration>
    {
        template <typename D> using type = consume_Windows_System_IAppUriHandlerRegistration<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppUriHandlerRegistrationManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
        WINRT_IMPL_AUTO(Windows::System::AppUriHandlerRegistration) TryGetRegistration(param::hstring const& name) const;
    };
    template <> struct consume<Windows::System::IAppUriHandlerRegistrationManager>
    {
        template <typename D> using type = consume_Windows_System_IAppUriHandlerRegistrationManager<D>;
    };
    template <typename D>
    struct consume_Windows_System_IAppUriHandlerRegistrationManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::System::AppUriHandlerRegistrationManager) GetDefault() const;
        WINRT_IMPL_AUTO(Windows::System::AppUriHandlerRegistrationManager) GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::System::IAppUriHandlerRegistrationManagerStatics>
    {
        template <typename D> using type = consume_Windows_System_IAppUriHandlerRegistrationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDateTimeSettingsStatics
    {
        WINRT_IMPL_AUTO(void) SetSystemDateTime(Windows::Foundation::DateTime const& utcDateTime) const;
    };
    template <> struct consume<Windows::System::IDateTimeSettingsStatics>
    {
        template <typename D> using type = consume_Windows_System_IDateTimeSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueue
    {
        WINRT_IMPL_AUTO(Windows::System::DispatcherQueueTimer) CreateTimer() const;
        WINRT_IMPL_AUTO(bool) TryEnqueue(Windows::System::DispatcherQueueHandler const& callback) const;
        WINRT_IMPL_AUTO(bool) TryEnqueue(Windows::System::DispatcherQueuePriority const& priority, Windows::System::DispatcherQueueHandler const& callback) const;
        WINRT_IMPL_AUTO(winrt::event_token) ShutdownStarting(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const& handler) const;
        using ShutdownStarting_revoker = impl::event_revoker<Windows::System::IDispatcherQueue, &impl::abi_t<Windows::System::IDispatcherQueue>::remove_ShutdownStarting>;
        [[nodiscard]] ShutdownStarting_revoker ShutdownStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ShutdownStarting(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ShutdownCompleted(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const& handler) const;
        using ShutdownCompleted_revoker = impl::event_revoker<Windows::System::IDispatcherQueue, &impl::abi_t<Windows::System::IDispatcherQueue>::remove_ShutdownCompleted>;
        [[nodiscard]] ShutdownCompleted_revoker ShutdownCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ShutdownCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::IDispatcherQueue>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueue<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueue2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasThreadAccess() const;
    };
    template <> struct consume<Windows::System::IDispatcherQueue2>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueue2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueueController
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) DispatcherQueue() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ShutdownQueueAsync() const;
    };
    template <> struct consume<Windows::System::IDispatcherQueueController>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueueController<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueueControllerStatics
    {
        WINRT_IMPL_AUTO(Windows::System::DispatcherQueueController) CreateOnDedicatedThread() const;
    };
    template <> struct consume<Windows::System::IDispatcherQueueControllerStatics>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueueControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueueShutdownStartingEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::System::IDispatcherQueueShutdownStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueueShutdownStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueueStatics
    {
        WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) GetForCurrentThread() const;
    };
    template <> struct consume<Windows::System::IDispatcherQueueStatics>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IDispatcherQueueTimer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Interval() const;
        WINRT_IMPL_AUTO(void) Interval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRunning() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRepeating() const;
        WINRT_IMPL_AUTO(void) IsRepeating(bool value) const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
        WINRT_IMPL_AUTO(winrt::event_token) Tick(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const& handler) const;
        using Tick_revoker = impl::event_revoker<Windows::System::IDispatcherQueueTimer, &impl::abi_t<Windows::System::IDispatcherQueueTimer>::remove_Tick>;
        [[nodiscard]] Tick_revoker Tick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Tick(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::IDispatcherQueueTimer>
    {
        template <typename D> using type = consume_Windows_System_IDispatcherQueueTimer<D>;
    };
    template <typename D>
    struct consume_Windows_System_IFolderLauncherOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem>) ItemsToSelect() const;
    };
    template <> struct consume<Windows::System::IFolderLauncherOptions>
    {
        template <typename D> using type = consume_Windows_System_IFolderLauncherOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_IKnownUserPropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FirstName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LastName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AccountName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) GuestHost() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PrincipalName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DomainName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SessionInitiationProtocolUri() const;
    };
    template <> struct consume<Windows::System::IKnownUserPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_System_IKnownUserPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILaunchUriResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::LaunchUriStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) Result() const;
    };
    template <> struct consume<Windows::System::ILaunchUriResult>
    {
        template <typename D> using type = consume_Windows_System_ILaunchUriResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TreatAsUntrusted() const;
        WINRT_IMPL_AUTO(void) TreatAsUntrusted(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DisplayApplicationPicker() const;
        WINRT_IMPL_AUTO(void) DisplayApplicationPicker(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::LauncherUIOptions) UI() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PreferredApplicationPackageFamilyName() const;
        WINRT_IMPL_AUTO(void) PreferredApplicationPackageFamilyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PreferredApplicationDisplayName() const;
        WINRT_IMPL_AUTO(void) PreferredApplicationDisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) FallbackUri() const;
        WINRT_IMPL_AUTO(void) FallbackUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentType() const;
        WINRT_IMPL_AUTO(void) ContentType(param::hstring const& value) const;
    };
    template <> struct consume<Windows::System::ILauncherOptions>
    {
        template <typename D> using type = consume_Windows_System_ILauncherOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherOptions2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetApplicationPackageFamilyName() const;
        WINRT_IMPL_AUTO(void) TargetApplicationPackageFamilyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFileQueryResult) NeighboringFilesQuery() const;
        WINRT_IMPL_AUTO(void) NeighboringFilesQuery(Windows::Storage::Search::StorageFileQueryResult const& value) const;
    };
    template <> struct consume<Windows::System::ILauncherOptions2>
    {
        template <typename D> using type = consume_Windows_System_ILauncherOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherOptions3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IgnoreAppUriHandlers() const;
        WINRT_IMPL_AUTO(void) IgnoreAppUriHandlers(bool value) const;
    };
    template <> struct consume<Windows::System::ILauncherOptions3>
    {
        template <typename D> using type = consume_Windows_System_ILauncherOptions3<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherOptions4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) LimitPickerToCurrentAppAndAppUriHandlers() const;
        WINRT_IMPL_AUTO(void) LimitPickerToCurrentAppAndAppUriHandlers(bool value) const;
    };
    template <> struct consume<Windows::System::ILauncherOptions4>
    {
        template <typename D> using type = consume_Windows_System_ILauncherOptions4<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFileAsync(Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchUriAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
    };
    template <> struct consume<Windows::System::ILauncherStatics>
    {
        template <typename D> using type = consume_Windows_System_ILauncherStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>) LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>) LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>) QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>) QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>) QueryFileSupportAsync(Windows::Storage::StorageFile const& file) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>) QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>) FindUriSchemeHandlersAsync(param::hstring const& scheme) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>) FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>) FindFileHandlersAsync(param::hstring const& extension) const;
    };
    template <> struct consume<Windows::System::ILauncherStatics2>
    {
        template <typename D> using type = consume_Windows_System_ILauncherStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherStatics3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options) const;
    };
    template <> struct consume<Windows::System::ILauncherStatics3>
    {
        template <typename D> using type = consume_Windows_System_ILauncherStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherStatics4
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>) QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>) QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>) FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>) LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>) LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>) LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>) LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>) LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
    };
    template <> struct consume<Windows::System::ILauncherStatics4>
    {
        template <typename D> using type = consume_Windows_System_ILauncherStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherStatics5
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFolderPathAsync(param::hstring const& path) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFolderPathAsync(param::hstring const& path, Windows::System::FolderLauncherOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFolderPathForUserAsync(Windows::System::User const& user, param::hstring const& path) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchFolderPathForUserAsync(Windows::System::User const& user, param::hstring const& path, Windows::System::FolderLauncherOptions const& options) const;
    };
    template <> struct consume<Windows::System::ILauncherStatics5>
    {
        template <typename D> using type = consume_Windows_System_ILauncherStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherUIOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Point>) InvocationPoint() const;
        WINRT_IMPL_AUTO(void) InvocationPoint(Windows::Foundation::IReference<Windows::Foundation::Point> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Rect>) SelectionRect() const;
        WINRT_IMPL_AUTO(void) SelectionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Popups::Placement) PreferredPlacement() const;
        WINRT_IMPL_AUTO(void) PreferredPlacement(Windows::UI::Popups::Placement const& value) const;
    };
    template <> struct consume<Windows::System::ILauncherUIOptions>
    {
        template <typename D> using type = consume_Windows_System_ILauncherUIOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_ILauncherViewOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::ViewManagement::ViewSizePreference) DesiredRemainingView() const;
        WINRT_IMPL_AUTO(void) DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const;
    };
    template <> struct consume<Windows::System::ILauncherViewOptions>
    {
        template <typename D> using type = consume_Windows_System_ILauncherViewOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_IMemoryManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) AppMemoryUsage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) AppMemoryUsageLimit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::AppMemoryUsageLevel) AppMemoryUsageLevel() const;
        WINRT_IMPL_AUTO(winrt::event_token) AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using AppMemoryUsageIncreased_revoker = impl::event_revoker<Windows::System::IMemoryManagerStatics, &impl::abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageIncreased>;
        [[nodiscard]] AppMemoryUsageIncreased_revoker AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AppMemoryUsageIncreased(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using AppMemoryUsageDecreased_revoker = impl::event_revoker<Windows::System::IMemoryManagerStatics, &impl::abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageDecreased>;
        [[nodiscard]] AppMemoryUsageDecreased_revoker AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AppMemoryUsageDecreased(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const;
        using AppMemoryUsageLimitChanging_revoker = impl::event_revoker<Windows::System::IMemoryManagerStatics, &impl::abi_t<Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageLimitChanging>;
        [[nodiscard]] AppMemoryUsageLimitChanging_revoker AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AppMemoryUsageLimitChanging(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::IMemoryManagerStatics>
    {
        template <typename D> using type = consume_Windows_System_IMemoryManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IMemoryManagerStatics2
    {
        WINRT_IMPL_AUTO(Windows::System::AppMemoryReport) GetAppMemoryReport() const;
        WINRT_IMPL_AUTO(Windows::System::ProcessMemoryReport) GetProcessMemoryReport() const;
    };
    template <> struct consume<Windows::System::IMemoryManagerStatics2>
    {
        template <typename D> using type = consume_Windows_System_IMemoryManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IMemoryManagerStatics3
    {
        WINRT_IMPL_AUTO(bool) TrySetAppMemoryUsageLimit(uint64_t value) const;
    };
    template <> struct consume<Windows::System::IMemoryManagerStatics3>
    {
        template <typename D> using type = consume_Windows_System_IMemoryManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_System_IMemoryManagerStatics4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) ExpectedAppMemoryUsageLimit() const;
    };
    template <> struct consume<Windows::System::IMemoryManagerStatics4>
    {
        template <typename D> using type = consume_Windows_System_IMemoryManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_System_IProcessLauncherOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IInputStream) StandardInput() const;
        WINRT_IMPL_AUTO(void) StandardInput(Windows::Storage::Streams::IInputStream const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IOutputStream) StandardOutput() const;
        WINRT_IMPL_AUTO(void) StandardOutput(Windows::Storage::Streams::IOutputStream const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IOutputStream) StandardError() const;
        WINRT_IMPL_AUTO(void) StandardError(Windows::Storage::Streams::IOutputStream const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WorkingDirectory() const;
        WINRT_IMPL_AUTO(void) WorkingDirectory(param::hstring const& value) const;
    };
    template <> struct consume<Windows::System::IProcessLauncherOptions>
    {
        template <typename D> using type = consume_Windows_System_IProcessLauncherOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_IProcessLauncherResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ExitCode() const;
    };
    template <> struct consume<Windows::System::IProcessLauncherResult>
    {
        template <typename D> using type = consume_Windows_System_IProcessLauncherResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_IProcessLauncherStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>) RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>) RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options) const;
    };
    template <> struct consume<Windows::System::IProcessLauncherStatics>
    {
        template <typename D> using type = consume_Windows_System_IProcessLauncherStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IProcessMemoryReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) PrivateWorkingSetUsage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) TotalWorkingSetUsage() const;
    };
    template <> struct consume<Windows::System::IProcessMemoryReport>
    {
        template <typename D> using type = consume_Windows_System_IProcessMemoryReport<D>;
    };
    template <typename D>
    struct consume_Windows_System_IProtocolForResultsOperation
    {
        WINRT_IMPL_AUTO(void) ReportCompleted(Windows::Foundation::Collections::ValueSet const& data) const;
    };
    template <> struct consume<Windows::System::IProtocolForResultsOperation>
    {
        template <typename D> using type = consume_Windows_System_IProtocolForResultsOperation<D>;
    };
    template <typename D>
    struct consume_Windows_System_IRemoteLauncherOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) FallbackUri() const;
        WINRT_IMPL_AUTO(void) FallbackUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) PreferredAppIds() const;
    };
    template <> struct consume<Windows::System::IRemoteLauncherOptions>
    {
        template <typename D> using type = consume_Windows_System_IRemoteLauncherOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_IRemoteLauncherStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>) LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>) LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>) LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const;
    };
    template <> struct consume<Windows::System::IRemoteLauncherStatics>
    {
        template <typename D> using type = consume_Windows_System_IRemoteLauncherStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IShutdownManagerStatics
    {
        WINRT_IMPL_AUTO(void) BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout) const;
        WINRT_IMPL_AUTO(void) CancelShutdown() const;
    };
    template <> struct consume<Windows::System::IShutdownManagerStatics>
    {
        template <typename D> using type = consume_Windows_System_IShutdownManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IShutdownManagerStatics2
    {
        WINRT_IMPL_AUTO(bool) IsPowerStateSupported(Windows::System::PowerState const& powerState) const;
        WINRT_IMPL_AUTO(void) EnterPowerState(Windows::System::PowerState const& powerState) const;
        WINRT_IMPL_AUTO(void) EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter) const;
    };
    template <> struct consume<Windows::System::IShutdownManagerStatics2>
    {
        template <typename D> using type = consume_Windows_System_IShutdownManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_ITimeZoneSettingsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CurrentTimeZoneDisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) SupportedTimeZoneDisplayNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanChangeTimeZone() const;
        WINRT_IMPL_AUTO(void) ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName) const;
    };
    template <> struct consume<Windows::System::ITimeZoneSettingsStatics>
    {
        template <typename D> using type = consume_Windows_System_ITimeZoneSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_ITimeZoneSettingsStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::AutoUpdateTimeZoneStatus>) AutoUpdateTimeZoneAsync(Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <> struct consume<Windows::System::ITimeZoneSettingsStatics2>
    {
        template <typename D> using type = consume_Windows_System_ITimeZoneSettingsStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUser
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NonRoamableId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::UserAuthenticationStatus) AuthenticationStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::UserType) Type() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable>) GetPropertyAsync(param::hstring const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet>) GetPropertiesAsync(param::async_vector_view<hstring> const& values) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference>) GetPictureAsync(Windows::System::UserPictureSize const& desiredSize) const;
    };
    template <> struct consume<Windows::System::IUser>
    {
        template <typename D> using type = consume_Windows_System_IUser<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserAuthenticationStatusChangeDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::System::IUserAuthenticationStatusChangeDeferral>
    {
        template <typename D> using type = consume_Windows_System_IUserAuthenticationStatusChangeDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserAuthenticationStatusChangingEventArgs
    {
        WINRT_IMPL_AUTO(Windows::System::UserAuthenticationStatusChangeDeferral) GetDeferral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::UserAuthenticationStatus) NewStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::UserAuthenticationStatus) CurrentStatus() const;
    };
    template <> struct consume<Windows::System::IUserAuthenticationStatusChangingEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
    };
    template <> struct consume<Windows::System::IUserChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IUserChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserChangedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::System::UserWatcherUpdateKind>) ChangedPropertyKinds() const;
    };
    template <> struct consume<Windows::System::IUserChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_System_IUserChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserDeviceAssociationChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) NewUser() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) OldUser() const;
    };
    template <> struct consume<Windows::System::IUserDeviceAssociationChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserDeviceAssociationStatics
    {
        WINRT_IMPL_AUTO(Windows::System::User) FindUserFromDeviceId(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(winrt::event_token) UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const;
        using UserDeviceAssociationChanged_revoker = impl::event_revoker<Windows::System::IUserDeviceAssociationStatics, &impl::abi_t<Windows::System::IUserDeviceAssociationStatics>::remove_UserDeviceAssociationChanged>;
        [[nodiscard]] UserDeviceAssociationChanged_revoker UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) UserDeviceAssociationChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::IUserDeviceAssociationStatics>
    {
        template <typename D> using type = consume_Windows_System_IUserDeviceAssociationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserPicker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowGuestAccounts() const;
        WINRT_IMPL_AUTO(void) AllowGuestAccounts(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) SuggestedSelectedUser() const;
        WINRT_IMPL_AUTO(void) SuggestedSelectedUser(Windows::System::User const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::System::User>) PickSingleUserAsync() const;
    };
    template <> struct consume<Windows::System::IUserPicker>
    {
        template <typename D> using type = consume_Windows_System_IUserPicker<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserPickerStatics
    {
        WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<Windows::System::IUserPickerStatics>
    {
        template <typename D> using type = consume_Windows_System_IUserPickerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserStatics
    {
        WINRT_IMPL_AUTO(Windows::System::UserWatcher) CreateWatcher() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>) FindAllAsync(Windows::System::UserType const& type) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>) FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status) const;
        WINRT_IMPL_AUTO(Windows::System::User) GetFromId(param::hstring const& nonRoamableId) const;
    };
    template <> struct consume<Windows::System::IUserStatics>
    {
        template <typename D> using type = consume_Windows_System_IUserStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserStatics2
    {
        WINRT_IMPL_AUTO(Windows::System::User) GetDefault() const;
    };
    template <> struct consume<Windows::System::IUserStatics2>
    {
        template <typename D> using type = consume_Windows_System_IUserStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_IUserWatcher
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::UserWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
        WINRT_IMPL_AUTO(winrt::event_token) Added(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Updated(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Updated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AuthenticationStatusChanged(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        using AuthenticationStatusChanged_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_AuthenticationStatusChanged>;
        [[nodiscard]] AuthenticationStatusChanged_revoker AuthenticationStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AuthenticationStatusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AuthenticationStatusChanging(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const;
        using AuthenticationStatusChanging_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_AuthenticationStatusChanging>;
        [[nodiscard]] AuthenticationStatusChanging_revoker AuthenticationStatusChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AuthenticationStatusChanging(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::System::IUserWatcher, &impl::abi_t<Windows::System::IUserWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::System::IUserWatcher>
    {
        template <typename D> using type = consume_Windows_System_IUserWatcher<D>;
    };
}
#endif
