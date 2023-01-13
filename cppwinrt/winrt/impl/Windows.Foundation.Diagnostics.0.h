// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Diagnostics_0_H
#define WINRT_Windows_Foundation_Diagnostics_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class AsyncStatus : int32_t;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFolder;
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics
{
    enum class CausalityRelation : int32_t
    {
        AssignDelegate = 0,
        Join = 1,
        Choice = 2,
        Cancel = 3,
        Error = 4,
    };
    enum class CausalitySource : int32_t
    {
        Application = 0,
        Library = 1,
        System = 2,
    };
    enum class CausalitySynchronousWork : int32_t
    {
        CompletionNotification = 0,
        ProgressNotification = 1,
        Execution = 2,
    };
    enum class CausalityTraceLevel : int32_t
    {
        Required = 0,
        Important = 1,
        Verbose = 2,
    };
    enum class ErrorOptions : uint32_t
    {
        None = 0,
        SuppressExceptions = 0x1,
        ForceExceptions = 0x2,
        UseSetErrorInfo = 0x4,
        SuppressSetErrorInfo = 0x8,
    };
    enum class LoggingFieldFormat : int32_t
    {
        Default = 0,
        Hidden = 1,
        String = 2,
        Boolean = 3,
        Hexadecimal = 4,
        ProcessId = 5,
        ThreadId = 6,
        Port = 7,
        Ipv4Address = 8,
        Ipv6Address = 9,
        SocketAddress = 10,
        Xml = 11,
        Json = 12,
        Win32Error = 13,
        NTStatus = 14,
        HResult = 15,
        FileTime = 16,
        Signed = 17,
        Unsigned = 18,
    };
    enum class LoggingLevel : int32_t
    {
        Verbose = 0,
        Information = 1,
        Warning = 2,
        Error = 3,
        Critical = 4,
    };
    enum class LoggingOpcode : int32_t
    {
        Info = 0,
        Start = 1,
        Stop = 2,
        Reply = 6,
        Resume = 7,
        Suspend = 8,
        Send = 9,
    };
    struct IAsyncCausalityTracerStatics;
    struct IErrorDetails;
    struct IErrorDetailsStatics;
    struct IErrorReportingSettings;
    struct IFileLoggingSession;
    struct IFileLoggingSessionFactory;
    struct ILogFileGeneratedEventArgs;
    struct ILoggingActivity;
    struct ILoggingActivity2;
    struct ILoggingActivityFactory;
    struct ILoggingChannel;
    struct ILoggingChannel2;
    struct ILoggingChannelFactory;
    struct ILoggingChannelFactory2;
    struct ILoggingChannelOptions;
    struct ILoggingChannelOptionsFactory;
    struct ILoggingFields;
    struct ILoggingOptions;
    struct ILoggingOptionsFactory;
    struct ILoggingSession;
    struct ILoggingSessionFactory;
    struct ILoggingTarget;
    struct ITracingStatusChangedEventArgs;
    struct AsyncCausalityTracer;
    struct ErrorDetails;
    struct FileLoggingSession;
    struct LogFileGeneratedEventArgs;
    struct LoggingActivity;
    struct LoggingChannel;
    struct LoggingChannelOptions;
    struct LoggingFields;
    struct LoggingOptions;
    struct LoggingSession;
    struct RuntimeBrokerErrorSettings;
    struct TracingStatusChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::IErrorDetails>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::IFileLoggingSession>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivity>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivity2>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannel>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannel2>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingFields>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingOptions>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingSession>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ILoggingTarget>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Diagnostics::AsyncCausalityTracer>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ErrorDetails>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::FileLoggingSession>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingActivity>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingChannel>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingFields>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingOptions>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingSession>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Diagnostics::CausalityRelation>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::CausalitySource>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::CausalitySynchronousWork>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::CausalityTraceLevel>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::ErrorOptions>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingFieldFormat>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingLevel>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Diagnostics::LoggingOpcode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::AsyncCausalityTracer> = L"Windows.Foundation.Diagnostics.AsyncCausalityTracer";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ErrorDetails> = L"Windows.Foundation.Diagnostics.ErrorDetails";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::FileLoggingSession> = L"Windows.Foundation.Diagnostics.FileLoggingSession";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> = L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingActivity> = L"Windows.Foundation.Diagnostics.LoggingActivity";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingChannel> = L"Windows.Foundation.Diagnostics.LoggingChannel";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingChannelOptions> = L"Windows.Foundation.Diagnostics.LoggingChannelOptions";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingFields> = L"Windows.Foundation.Diagnostics.LoggingFields";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingOptions> = L"Windows.Foundation.Diagnostics.LoggingOptions";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingSession> = L"Windows.Foundation.Diagnostics.LoggingSession";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings> = L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> = L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::CausalityRelation> = L"Windows.Foundation.Diagnostics.CausalityRelation";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::CausalitySource> = L"Windows.Foundation.Diagnostics.CausalitySource";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::CausalitySynchronousWork> = L"Windows.Foundation.Diagnostics.CausalitySynchronousWork";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::CausalityTraceLevel> = L"Windows.Foundation.Diagnostics.CausalityTraceLevel";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ErrorOptions> = L"Windows.Foundation.Diagnostics.ErrorOptions";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingFieldFormat> = L"Windows.Foundation.Diagnostics.LoggingFieldFormat";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingLevel> = L"Windows.Foundation.Diagnostics.LoggingLevel";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::LoggingOpcode> = L"Windows.Foundation.Diagnostics.LoggingOpcode";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> = L"Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::IErrorDetails> = L"Windows.Foundation.Diagnostics.IErrorDetails";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::IErrorDetailsStatics> = L"Windows.Foundation.Diagnostics.IErrorDetailsStatics";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::IErrorReportingSettings> = L"Windows.Foundation.Diagnostics.IErrorReportingSettings";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::IFileLoggingSession> = L"Windows.Foundation.Diagnostics.IFileLoggingSession";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> = L"Windows.Foundation.Diagnostics.IFileLoggingSessionFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> = L"Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingActivity> = L"Windows.Foundation.Diagnostics.ILoggingActivity";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingActivity2> = L"Windows.Foundation.Diagnostics.ILoggingActivity2";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingActivityFactory> = L"Windows.Foundation.Diagnostics.ILoggingActivityFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingChannel> = L"Windows.Foundation.Diagnostics.ILoggingChannel";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingChannel2> = L"Windows.Foundation.Diagnostics.ILoggingChannel2";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingChannelFactory> = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingChannelFactory2> = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory2";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingChannelOptions> = L"Windows.Foundation.Diagnostics.ILoggingChannelOptions";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> = L"Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingFields> = L"Windows.Foundation.Diagnostics.ILoggingFields";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingOptions> = L"Windows.Foundation.Diagnostics.ILoggingOptions";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingOptionsFactory> = L"Windows.Foundation.Diagnostics.ILoggingOptionsFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingSession> = L"Windows.Foundation.Diagnostics.ILoggingSession";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingSessionFactory> = L"Windows.Foundation.Diagnostics.ILoggingSessionFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ILoggingTarget> = L"Windows.Foundation.Diagnostics.ILoggingTarget";
    template <> inline constexpr auto& name_v<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> = L"Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs";
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ 0x50850B26,0x267E,0x451B,{ 0xA8,0x90,0xAB,0x6A,0x37,0x02,0x45,0xEE } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::IErrorDetails>{ 0x378CBB01,0x2CC9,0x428F,{ 0x8C,0x55,0x2C,0x99,0x0D,0x46,0x3E,0x8F } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ 0xB7703750,0x0B1D,0x46C8,{ 0xAA,0x0E,0x4B,0x81,0x78,0xE4,0xFC,0xE9 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ 0x16369792,0xB03E,0x4BA1,{ 0x8B,0xB8,0xD2,0x8F,0x4A,0xB4,0xD2,0xC0 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::IFileLoggingSession>{ 0x24C74216,0xFED2,0x404C,{ 0x89,0x5F,0x1F,0x96,0x99,0xCB,0x02,0xF7 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ 0xEEA08DCE,0x8447,0x4DAA,{ 0x91,0x33,0x12,0xEB,0x46,0xF6,0x97,0xD4 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ 0x269E976F,0x0D38,0x4C1A,{ 0xB5,0x3F,0xB3,0x95,0xD8,0x81,0xDF,0x84 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingActivity>{ 0xBC032941,0xB766,0x4CB5,{ 0x98,0x48,0x97,0xAC,0x6B,0xA6,0xD6,0x0C } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingActivity2>{ 0x26C29808,0x6322,0x456A,{ 0xAF,0x82,0x80,0xC8,0x64,0x2F,0x17,0x8B } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ 0x6B33B483,0xE10A,0x4C58,{ 0x97,0xD5,0x10,0xFB,0x45,0x10,0x74,0xFB } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingChannel>{ 0xE9A50343,0x11D7,0x4F01,{ 0xB5,0xCA,0xCF,0x49,0x52,0x78,0xC0,0xA8 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingChannel2>{ 0x9F4C3CF3,0x0BAC,0x45A5,{ 0x9E,0x33,0xBA,0xF3,0xF3,0xA2,0x46,0xA5 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ 0x4EDC5B9C,0xAF80,0x4A9B,{ 0xB0,0xDC,0x39,0x8F,0x9A,0xE5,0x20,0x7B } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ 0x4C6EF5DD,0x3B27,0x4DC9,{ 0x99,0xF0,0x29,0x9C,0x6E,0x46,0x03,0xA1 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ 0xC3E847FF,0x0EBB,0x4A53,{ 0x8C,0x54,0xDE,0xC2,0x49,0x26,0xCB,0x2C } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ 0xA93151DA,0x7FAF,0x4191,{ 0x87,0x55,0x5E,0x86,0xDC,0x65,0xD8,0x96 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingFields>{ 0xD7F6B7AF,0x762D,0x4579,{ 0x83,0xBD,0x52,0xC2,0x3B,0xC3,0x33,0xBC } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingOptions>{ 0x90BC7850,0x0192,0x4F5D,{ 0xAC,0x26,0x00,0x6A,0xDA,0xCA,0x12,0xD8 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ 0xD713C6CB,0x98AB,0x464B,{ 0x9F,0x22,0xA3,0x26,0x84,0x78,0x36,0x8A } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingSession>{ 0x6221F306,0x9380,0x4AD7,{ 0xBA,0xF5,0x41,0xEA,0x93,0x10,0xD7,0x68 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ 0x4E937EE5,0x58FD,0x45E0,{ 0x8C,0x2F,0xA1,0x32,0xEF,0xF9,0x5C,0x1E } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ILoggingTarget>{ 0x65F16C35,0xE388,0x4E26,{ 0xB1,0x7A,0xF5,0x1C,0xD3,0xA8,0x39,0x16 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ 0x410B7711,0xFF3B,0x477F,{ 0x9C,0x9A,0xD2,0xEF,0xDA,0x30,0x2D,0xC3 } };
    template <> struct default_interface<Windows::Foundation::Diagnostics::ErrorDetails>{ using type = Windows::Foundation::Diagnostics::IErrorDetails; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::FileLoggingSession>{ using type = Windows::Foundation::Diagnostics::IFileLoggingSession; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ using type = Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingActivity>{ using type = Windows::Foundation::Diagnostics::ILoggingActivity; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingChannel>{ using type = Windows::Foundation::Diagnostics::ILoggingChannel; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ using type = Windows::Foundation::Diagnostics::ILoggingChannelOptions; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingFields>{ using type = Windows::Foundation::Diagnostics::ILoggingFields; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingOptions>{ using type = Windows::Foundation::Diagnostics::ILoggingOptions; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingSession>{ using type = Windows::Foundation::Diagnostics::ILoggingSession; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ using type = Windows::Foundation::Diagnostics::IErrorReportingSettings; };
    template <> struct default_interface<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ using type = Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs; };
    template <> struct abi<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TraceOperationCreation(int32_t, int32_t, winrt::guid, uint64_t, void*, uint64_t) noexcept = 0;
            virtual int32_t __stdcall TraceOperationCompletion(int32_t, int32_t, winrt::guid, uint64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall TraceOperationRelation(int32_t, int32_t, winrt::guid, uint64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall TraceSynchronousWorkStart(int32_t, int32_t, winrt::guid, uint64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall TraceSynchronousWorkCompletion(int32_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall add_TracingStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TracingStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::IErrorDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_LongDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_HelpUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::IErrorDetailsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromHResultAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::IErrorReportingSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetErrorOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetErrorOptions(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::IFileLoggingSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall AddLoggingChannel(void*) noexcept = 0;
            virtual int32_t __stdcall AddLoggingChannelWithLevel(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall RemoveLoggingChannel(void*) noexcept = 0;
            virtual int32_t __stdcall CloseAndSaveToFileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_LogFileGenerated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LogFileGenerated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_File(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivity>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivity2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(void**) noexcept = 0;
            virtual int32_t __stdcall StopActivity(void*) noexcept = 0;
            virtual int32_t __stdcall StopActivityWithFields(void*, void*) noexcept = 0;
            virtual int32_t __stdcall StopActivityWithFieldsAndOptions(void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivityFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateLoggingActivity(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateLoggingActivityWithLevel(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Level(int32_t*) noexcept = 0;
            virtual int32_t __stdcall LogMessage(void*) noexcept = 0;
            virtual int32_t __stdcall LogMessageWithLevel(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall LogValuePair(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall LogValuePairWithLevel(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall add_LoggingEnabled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LoggingEnabled(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannel2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithOptions(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithOptionsAndId(void*, void*, winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Group(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_Group(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingFields>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall BeginStruct(void*) noexcept = 0;
            virtual int32_t __stdcall BeginStructWithTags(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall EndStruct() noexcept = 0;
            virtual int32_t __stdcall AddEmpty(void*) noexcept = 0;
            virtual int32_t __stdcall AddEmptyWithFormat(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddEmptyWithFormatAndTags(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt8(void*, uint8_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt8WithFormat(void*, uint8_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt8WithFormatAndTags(void*, uint8_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt8Array(void*, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall AddUInt8ArrayWithFormat(void*, uint32_t, uint8_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt8ArrayWithFormatAndTags(void*, uint32_t, uint8_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt16(void*, int16_t) noexcept = 0;
            virtual int32_t __stdcall AddInt16WithFormat(void*, int16_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt16WithFormatAndTags(void*, int16_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt16Array(void*, uint32_t, int16_t*) noexcept = 0;
            virtual int32_t __stdcall AddInt16ArrayWithFormat(void*, uint32_t, int16_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt16ArrayWithFormatAndTags(void*, uint32_t, int16_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt16(void*, uint16_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt16WithFormat(void*, uint16_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt16WithFormatAndTags(void*, uint16_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt16Array(void*, uint32_t, uint16_t*) noexcept = 0;
            virtual int32_t __stdcall AddUInt16ArrayWithFormat(void*, uint32_t, uint16_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt16ArrayWithFormatAndTags(void*, uint32_t, uint16_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32WithFormat(void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32WithFormatAndTags(void*, int32_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32Array(void*, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall AddInt32ArrayWithFormat(void*, uint32_t, int32_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt32ArrayWithFormatAndTags(void*, uint32_t, int32_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt32(void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt32WithFormat(void*, uint32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt32WithFormatAndTags(void*, uint32_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt32Array(void*, uint32_t, uint32_t*) noexcept = 0;
            virtual int32_t __stdcall AddUInt32ArrayWithFormat(void*, uint32_t, uint32_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt32ArrayWithFormatAndTags(void*, uint32_t, uint32_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt64(void*, int64_t) noexcept = 0;
            virtual int32_t __stdcall AddInt64WithFormat(void*, int64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt64WithFormatAndTags(void*, int64_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt64Array(void*, uint32_t, int64_t*) noexcept = 0;
            virtual int32_t __stdcall AddInt64ArrayWithFormat(void*, uint32_t, int64_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddInt64ArrayWithFormatAndTags(void*, uint32_t, int64_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt64(void*, uint64_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt64WithFormat(void*, uint64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt64WithFormatAndTags(void*, uint64_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt64Array(void*, uint32_t, uint64_t*) noexcept = 0;
            virtual int32_t __stdcall AddUInt64ArrayWithFormat(void*, uint32_t, uint64_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddUInt64ArrayWithFormatAndTags(void*, uint32_t, uint64_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSingle(void*, float) noexcept = 0;
            virtual int32_t __stdcall AddSingleWithFormat(void*, float, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSingleWithFormatAndTags(void*, float, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSingleArray(void*, uint32_t, float*) noexcept = 0;
            virtual int32_t __stdcall AddSingleArrayWithFormat(void*, uint32_t, float*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSingleArrayWithFormatAndTags(void*, uint32_t, float*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDouble(void*, double) noexcept = 0;
            virtual int32_t __stdcall AddDoubleWithFormat(void*, double, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDoubleWithFormatAndTags(void*, double, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDoubleArray(void*, uint32_t, double*) noexcept = 0;
            virtual int32_t __stdcall AddDoubleArrayWithFormat(void*, uint32_t, double*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDoubleArrayWithFormatAndTags(void*, uint32_t, double*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddChar16(void*, char16_t) noexcept = 0;
            virtual int32_t __stdcall AddChar16WithFormat(void*, char16_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddChar16WithFormatAndTags(void*, char16_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddChar16Array(void*, uint32_t, char16_t*) noexcept = 0;
            virtual int32_t __stdcall AddChar16ArrayWithFormat(void*, uint32_t, char16_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddChar16ArrayWithFormatAndTags(void*, uint32_t, char16_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddBoolean(void*, bool) noexcept = 0;
            virtual int32_t __stdcall AddBooleanWithFormat(void*, bool, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddBooleanWithFormatAndTags(void*, bool, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddBooleanArray(void*, uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall AddBooleanArrayWithFormat(void*, uint32_t, bool*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddBooleanArrayWithFormatAndTags(void*, uint32_t, bool*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddString(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddStringWithFormat(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddStringWithFormatAndTags(void*, void*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddStringArray(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AddStringArrayWithFormat(void*, uint32_t, void**, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddStringArrayWithFormatAndTags(void*, uint32_t, void**, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddGuid(void*, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall AddGuidWithFormat(void*, winrt::guid, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddGuidWithFormatAndTags(void*, winrt::guid, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddGuidArray(void*, uint32_t, winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall AddGuidArrayWithFormat(void*, uint32_t, winrt::guid*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddGuidArrayWithFormatAndTags(void*, uint32_t, winrt::guid*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDateTime(void*, int64_t) noexcept = 0;
            virtual int32_t __stdcall AddDateTimeWithFormat(void*, int64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDateTimeWithFormatAndTags(void*, int64_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDateTimeArray(void*, uint32_t, int64_t*) noexcept = 0;
            virtual int32_t __stdcall AddDateTimeArrayWithFormat(void*, uint32_t, int64_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDateTimeArrayWithFormatAndTags(void*, uint32_t, int64_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddTimeSpan(void*, int64_t) noexcept = 0;
            virtual int32_t __stdcall AddTimeSpanWithFormat(void*, int64_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddTimeSpanWithFormatAndTags(void*, int64_t, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddTimeSpanArray(void*, uint32_t, int64_t*) noexcept = 0;
            virtual int32_t __stdcall AddTimeSpanArrayWithFormat(void*, uint32_t, int64_t*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddTimeSpanArrayWithFormatAndTags(void*, uint32_t, int64_t*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall AddPointWithFormat(void*, Windows::Foundation::Point, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddPointWithFormatAndTags(void*, Windows::Foundation::Point, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddPointArray(void*, uint32_t, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall AddPointArrayWithFormat(void*, uint32_t, Windows::Foundation::Point*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddPointArrayWithFormatAndTags(void*, uint32_t, Windows::Foundation::Point*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSize(void*, Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall AddSizeWithFormat(void*, Windows::Foundation::Size, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSizeWithFormatAndTags(void*, Windows::Foundation::Size, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSizeArray(void*, uint32_t, Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall AddSizeArrayWithFormat(void*, uint32_t, Windows::Foundation::Size*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSizeArrayWithFormatAndTags(void*, uint32_t, Windows::Foundation::Size*, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddRect(void*, Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall AddRectWithFormat(void*, Windows::Foundation::Rect, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddRectWithFormatAndTags(void*, Windows::Foundation::Rect, int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddRectArray(void*, uint32_t, Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall AddRectArrayWithFormat(void*, uint32_t, Windows::Foundation::Rect*, int32_t) noexcept = 0;
            virtual int32_t __stdcall AddRectArrayWithFormatAndTags(void*, uint32_t, Windows::Foundation::Rect*, int32_t, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Keywords(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Keywords(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Tags(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Tags(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Task(int16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Task(int16_t) noexcept = 0;
            virtual int32_t __stdcall get_Opcode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Opcode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_ActivityId(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall get_RelatedActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall put_RelatedActivityId(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithKeywords(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall SaveToFileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddLoggingChannel(void*) noexcept = 0;
            virtual int32_t __stdcall AddLoggingChannelWithLevel(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall RemoveLoggingChannel(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingSessionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall IsEnabledWithLevel(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsEnabledWithLevelAndKeywords(int32_t, int64_t, bool*) noexcept = 0;
            virtual int32_t __stdcall LogEvent(void*) noexcept = 0;
            virtual int32_t __stdcall LogEventWithFields(void*, void*) noexcept = 0;
            virtual int32_t __stdcall LogEventWithFieldsAndLevel(void*, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall LogEventWithFieldsAndOptions(void*, void*, int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall StartActivity(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartActivityWithFields(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartActivityWithFieldsAndLevel(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StartActivityWithFieldsAndOptions(void*, void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TraceLevel(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics
    {
        WINRT_IMPL_AUTO(void) TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext) const;
        WINRT_IMPL_AUTO(void) TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status) const;
        WINRT_IMPL_AUTO(void) TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation) const;
        WINRT_IMPL_AUTO(void) TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const;
        WINRT_IMPL_AUTO(void) TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const;
        WINRT_IMPL_AUTO(winrt::event_token) TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const;
        using TracingStatusChanged_revoker = impl::event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics, &impl::abi_t<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>::remove_TracingStatusChanged>;
        [[nodiscard]] TracingStatusChanged_revoker TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TracingStatusChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_IErrorDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LongDescription() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) HelpUri() const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::IErrorDetails>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails>) CreateFromHResultAsync(int32_t errorCode) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::IErrorDetailsStatics>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_IErrorReportingSettings
    {
        WINRT_IMPL_AUTO(void) SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::ErrorOptions) GetErrorOptions() const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::IErrorReportingSettings>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_IFileLoggingSession
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
        WINRT_IMPL_AUTO(void) AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const;
        WINRT_IMPL_AUTO(void) RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) CloseAndSaveToFileAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) LogFileGenerated(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const;
        using LogFileGenerated_revoker = impl::event_revoker<Windows::Foundation::Diagnostics::IFileLoggingSession, &impl::abi_t<Windows::Foundation::Diagnostics::IFileLoggingSession>::remove_LogFileGenerated>;
        [[nodiscard]] LogFileGenerated_revoker LogFileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LogFileGenerated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::IFileLoggingSession>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::FileLoggingSession) Create(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFile) File() const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingActivity
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) Id() const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivity>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingActivity2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingChannel) Channel() const;
        WINRT_IMPL_AUTO(void) StopActivity(param::hstring const& stopEventName) const;
        WINRT_IMPL_AUTO(void) StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
        WINRT_IMPL_AUTO(void) StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivity2>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingActivity) CreateLoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingActivity) CreateLoggingActivityWithLevel(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivityFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingChannel
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingLevel) Level() const;
        WINRT_IMPL_AUTO(void) LogMessage(param::hstring const& eventString) const;
        WINRT_IMPL_AUTO(void) LogMessage(param::hstring const& eventString, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
        WINRT_IMPL_AUTO(void) LogValuePair(param::hstring const& value1, int32_t value2) const;
        WINRT_IMPL_AUTO(void) LogValuePair(param::hstring const& value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
        WINRT_IMPL_AUTO(winrt::event_token) LoggingEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const;
        using LoggingEnabled_revoker = impl::event_revoker<Windows::Foundation::Diagnostics::ILoggingChannel, &impl::abi_t<Windows::Foundation::Diagnostics::ILoggingChannel>::remove_LoggingEnabled>;
        [[nodiscard]] LoggingEnabled_revoker LoggingEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) LoggingEnabled(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannel>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingChannel2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) Id() const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannel2>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannel2<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingChannel) Create(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingChannel) CreateWithOptions(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingChannel) CreateWithOptionsAndId(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, winrt::guid const& id) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) Group() const;
        WINRT_IMPL_AUTO(void) Group(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelOptions>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingChannelOptions) Create(winrt::guid const& group) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingFields
    {
        WINRT_IMPL_AUTO(void) Clear() const;
        WINRT_IMPL_AUTO(void) BeginStruct(param::hstring const& name) const;
        WINRT_IMPL_AUTO(void) BeginStruct(param::hstring const& name, int32_t tags) const;
        WINRT_IMPL_AUTO(void) EndStruct() const;
        WINRT_IMPL_AUTO(void) AddEmpty(param::hstring const& name) const;
        WINRT_IMPL_AUTO(void) AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt8(param::hstring const& name, uint8_t value) const;
        WINRT_IMPL_AUTO(void) AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value) const;
        WINRT_IMPL_AUTO(void) AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddInt16(param::hstring const& name, int16_t value) const;
        WINRT_IMPL_AUTO(void) AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddInt16Array(param::hstring const& name, array_view<int16_t const> value) const;
        WINRT_IMPL_AUTO(void) AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt16(param::hstring const& name, uint16_t value) const;
        WINRT_IMPL_AUTO(void) AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value) const;
        WINRT_IMPL_AUTO(void) AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddInt32(param::hstring const& name, int32_t value) const;
        WINRT_IMPL_AUTO(void) AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddInt32Array(param::hstring const& name, array_view<int32_t const> value) const;
        WINRT_IMPL_AUTO(void) AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt32(param::hstring const& name, uint32_t value) const;
        WINRT_IMPL_AUTO(void) AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value) const;
        WINRT_IMPL_AUTO(void) AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddInt64(param::hstring const& name, int64_t value) const;
        WINRT_IMPL_AUTO(void) AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddInt64Array(param::hstring const& name, array_view<int64_t const> value) const;
        WINRT_IMPL_AUTO(void) AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt64(param::hstring const& name, uint64_t value) const;
        WINRT_IMPL_AUTO(void) AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value) const;
        WINRT_IMPL_AUTO(void) AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddSingle(param::hstring const& name, float value) const;
        WINRT_IMPL_AUTO(void) AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddSingleArray(param::hstring const& name, array_view<float const> value) const;
        WINRT_IMPL_AUTO(void) AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddDouble(param::hstring const& name, double value) const;
        WINRT_IMPL_AUTO(void) AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddDoubleArray(param::hstring const& name, array_view<double const> value) const;
        WINRT_IMPL_AUTO(void) AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddChar16(param::hstring const& name, char16_t value) const;
        WINRT_IMPL_AUTO(void) AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddChar16Array(param::hstring const& name, array_view<char16_t const> value) const;
        WINRT_IMPL_AUTO(void) AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddBoolean(param::hstring const& name, bool value) const;
        WINRT_IMPL_AUTO(void) AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddBooleanArray(param::hstring const& name, array_view<bool const> value) const;
        WINRT_IMPL_AUTO(void) AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddString(param::hstring const& name, param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddStringArray(param::hstring const& name, array_view<hstring const> value) const;
        WINRT_IMPL_AUTO(void) AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddGuid(param::hstring const& name, winrt::guid const& value) const;
        WINRT_IMPL_AUTO(void) AddGuid(param::hstring const& name, winrt::guid const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddGuid(param::hstring const& name, winrt::guid const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value) const;
        WINRT_IMPL_AUTO(void) AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value) const;
        WINRT_IMPL_AUTO(void) AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value) const;
        WINRT_IMPL_AUTO(void) AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value) const;
        WINRT_IMPL_AUTO(void) AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value) const;
        WINRT_IMPL_AUTO(void) AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddPoint(param::hstring const& name, Windows::Foundation::Point const& value) const;
        WINRT_IMPL_AUTO(void) AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value) const;
        WINRT_IMPL_AUTO(void) AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddSize(param::hstring const& name, Windows::Foundation::Size const& value) const;
        WINRT_IMPL_AUTO(void) AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value) const;
        WINRT_IMPL_AUTO(void) AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddRect(param::hstring const& name, Windows::Foundation::Rect const& value) const;
        WINRT_IMPL_AUTO(void) AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
        WINRT_IMPL_AUTO(void) AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value) const;
        WINRT_IMPL_AUTO(void) AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
        WINRT_IMPL_AUTO(void) AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingFields>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingFields<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) Keywords() const;
        WINRT_IMPL_AUTO(void) Keywords(int64_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Tags() const;
        WINRT_IMPL_AUTO(void) Tags(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int16_t) Task() const;
        WINRT_IMPL_AUTO(void) Task(int16_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingOpcode) Opcode() const;
        WINRT_IMPL_AUTO(void) Opcode(Windows::Foundation::Diagnostics::LoggingOpcode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ActivityId() const;
        WINRT_IMPL_AUTO(void) ActivityId(winrt::guid const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) RelatedActivityId() const;
        WINRT_IMPL_AUTO(void) RelatedActivityId(winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingOptions>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingOptions) CreateWithKeywords(int64_t keywords) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingSession
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) SaveToFileAsync(Windows::Storage::IStorageFolder const& folder, param::hstring const& fileName) const;
        WINRT_IMPL_AUTO(void) AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
        WINRT_IMPL_AUTO(void) AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const;
        WINRT_IMPL_AUTO(void) RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingSession>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingSession<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingSession) Create(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingSessionFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ILoggingTarget
    {
        WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(bool) IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
        WINRT_IMPL_AUTO(bool) IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level, int64_t keywords) const;
        WINRT_IMPL_AUTO(void) LogEvent(param::hstring const& eventName) const;
        WINRT_IMPL_AUTO(void) LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
        WINRT_IMPL_AUTO(void) LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
        WINRT_IMPL_AUTO(void) LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingActivity) StartActivity(param::hstring const& startEventName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingActivity) StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingActivity) StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::LoggingActivity) StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Diagnostics::CausalityTraceLevel) TraceLevel() const;
    };
    template <> struct consume<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>;
    };
}
#endif
