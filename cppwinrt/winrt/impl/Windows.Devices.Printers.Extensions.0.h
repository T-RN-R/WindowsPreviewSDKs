// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Printers_Extensions_0_H
#define WINRT_Windows_Devices_Printers_Extensions_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions
{
    enum class Print3DWorkflowDetail : int32_t
    {
        Unknown = 0,
        ModelExceedsPrintBed = 1,
        UploadFailed = 2,
        InvalidMaterialSelection = 3,
        InvalidModel = 4,
        ModelNotManifold = 5,
        InvalidPrintTicket = 6,
    };
    enum class Print3DWorkflowStatus : int32_t
    {
        Abandoned = 0,
        Canceled = 1,
        Failed = 2,
        Slicing = 3,
        Submitted = 4,
    };
    struct IPrint3DWorkflow;
    struct IPrint3DWorkflow2;
    struct IPrint3DWorkflowPrintRequestedEventArgs;
    struct IPrint3DWorkflowPrinterChangedEventArgs;
    struct IPrintExtensionContextStatic;
    struct IPrintNotificationEventDetails;
    struct IPrintTaskConfiguration;
    struct IPrintTaskConfigurationSaveRequest;
    struct IPrintTaskConfigurationSaveRequestedDeferral;
    struct IPrintTaskConfigurationSaveRequestedEventArgs;
    struct Print3DWorkflow;
    struct Print3DWorkflowPrintRequestedEventArgs;
    struct Print3DWorkflowPrinterChangedEventArgs;
    struct PrintExtensionContext;
    struct PrintNotificationEventDetails;
    struct PrintTaskConfiguration;
    struct PrintTaskConfigurationSaveRequest;
    struct PrintTaskConfigurationSaveRequestedDeferral;
    struct PrintTaskConfigurationSaveRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintExtensionContext>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::Print3DWorkflow> = L"Windows.Devices.Printers.Extensions.Print3DWorkflow";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrintRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrinterChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::PrintExtensionContext> = L"Windows.Devices.Printers.Extensions.PrintExtensionContext";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::PrintNotificationEventDetails> = L"Windows.Devices.Printers.Extensions.PrintNotificationEventDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::PrintTaskConfiguration> = L"Windows.Devices.Printers.Extensions.PrintTaskConfiguration";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest> = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral> = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedDeferral";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowDetail";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflow> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow2";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrintRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrinterChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic> = L"Windows.Devices.Printers.Extensions.IPrintExtensionContextStatic";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails> = L"Windows.Devices.Printers.Extensions.IPrintNotificationEventDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfiguration";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedDeferral";
    template <> inline constexpr auto& name_v<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedEventArgs";
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ 0xC56F74BD,0x3669,0x4A66,{ 0xAB,0x42,0xC8,0x15,0x19,0x30,0xCD,0x34 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ 0xA2A6C54F,0x8AC1,0x4918,{ 0x97,0x41,0xE3,0x4F,0x30,0x04,0x23,0x9E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ 0x19F8C858,0x5AC8,0x4B55,{ 0x8A,0x5F,0xE6,0x15,0x67,0xDA,0xFB,0x4D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ 0x45226402,0x95FC,0x4847,{ 0x93,0xB3,0x13,0x4D,0xBF,0x5C,0x60,0xF7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>{ 0xE70D9FC1,0xFF79,0x4AA4,{ 0x8C,0x9B,0x0C,0x93,0xAE,0xDF,0xDE,0x8A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>{ 0xE00E4C8A,0x4828,0x4DA1,{ 0x8B,0xB8,0x86,0x72,0xDF,0x85,0x15,0xE7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>{ 0xE3C22451,0x3AA4,0x4885,{ 0x92,0x40,0x31,0x1F,0x5F,0x8F,0xBE,0x9D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>{ 0xEEAF2FCB,0x621E,0x4B62,{ 0xAC,0x77,0xB2,0x81,0xCC,0xE0,0x8D,0x60 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>{ 0xE959D568,0xF729,0x44A4,{ 0x87,0x1D,0xBD,0x06,0x28,0x69,0x6A,0x33 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>{ 0xE06C2879,0x0D61,0x4938,{ 0x91,0xD0,0x96,0xA4,0x5B,0xEE,0x84,0x79 } };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflow; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>{ using type = Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>{ using type = Windows::Devices::Printers::Extensions::IPrintTaskConfiguration; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>{ using type = Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>{ using type = Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral; };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>{ using type = Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs; };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceID(void**) noexcept = 0;
            virtual int32_t __stdcall GetPrintModelPackage(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPrintReady(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrintReady(bool) noexcept = 0;
            virtual int32_t __stdcall add_PrintRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrinterChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrinterChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetExtendedStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetSourceChanged(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromDeviceId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrinterName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EventData(void**) noexcept = 0;
            virtual int32_t __stdcall put_EventData(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrinterExtensionContext(void**) noexcept = 0;
            virtual int32_t __stdcall add_SaveRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SaveRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Cancel() noexcept = 0;
            virtual int32_t __stdcall Save(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceID() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetPrintModelPackage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPrintReady() const;
        WINRT_IMPL_AUTO(void) IsPrintReady(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) PrintRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        using PrintRequested_revoker = impl::event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow, &impl::abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>::remove_PrintRequested>;
        [[nodiscard]] PrintRequested_revoker PrintRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) PrintRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2
    {
        WINRT_IMPL_AUTO(winrt::event_token) PrinterChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        using PrinterChanged_revoker = impl::event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2, &impl::abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>::remove_PrinterChanged>;
        [[nodiscard]] PrinterChanged_revoker PrinterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) PrinterChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Printers::Extensions::Print3DWorkflowStatus) Status() const;
        WINRT_IMPL_AUTO(void) SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const;
        WINRT_IMPL_AUTO(void) SetSource(Windows::Foundation::IInspectable const& source) const;
        WINRT_IMPL_AUTO(void) SetSourceChanged(bool value) const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NewDeviceId() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) FromDeviceId(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PrinterName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EventData() const;
        WINRT_IMPL_AUTO(void) EventData(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) PrinterExtensionContext() const;
        WINRT_IMPL_AUTO(winrt::event_token) SaveRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const;
        using SaveRequested_revoker = impl::event_revoker<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration, &impl::abi_t<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>::remove_SaveRequested>;
        [[nodiscard]] SaveRequested_revoker SaveRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) SaveRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest
    {
        WINRT_IMPL_AUTO(void) Cancel() const;
        WINRT_IMPL_AUTO(void) Save(Windows::Foundation::IInspectable const& printerExtensionContext) const;
        WINRT_IMPL_AUTO(Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral) GetDeferral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Deadline() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest) Request() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs<D>;
    };
}
#endif
