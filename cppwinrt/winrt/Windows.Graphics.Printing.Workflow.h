// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_Workflow_H
#define WINRT_Windows_Graphics_Printing_Workflow_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.Printing.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Devices.Printers.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->add_SetupRequested(*(void**)(&setupEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        return impl::make_event_revoker<D, SetupRequested_revoker>(this, SetupRequested(setupEventHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->remove_SetupRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->add_Submitted(*(void**)(&submittedEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const
    {
        return impl::make_event_revoker<D, Submitted_revoker>(this, Submitted(submittedEventHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->remove_Submitted(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Status() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::GetUserPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->GetUserPrintTicketAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::Configuration() const
    {
        void* configuration{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->get_Configuration(&configuration));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ configuration, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::SetRequiresUI() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->SetRequiresUI());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::SourceAppDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_SourceAppDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::JobTitle() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_JobTitle(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::SessionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_SessionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration2<D>::AbortPrintFlow(Windows::Graphics::Printing::Workflow::PrintWorkflowJobAbortReason const& reason) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2)->AbortPrintFlow(static_cast<int32_t>(reason)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->add_SetupRequested(*(void**)(&setupEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        return impl::make_event_revoker<D, SetupRequested_revoker>(this, SetupRequested(setupEventHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->remove_SetupRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->add_XpsDataAvailable(*(void**)(&xpsDataAvailableEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const
    {
        return impl::make_event_revoker<D, XpsDataAvailable_revoker>(this, XpsDataAvailable(xpsDataAvailableEventHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->remove_XpsDataAvailable(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::Status() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::GetUserPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->GetUserPrintTicketAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobActivatedEventArgs<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs)->get_Session(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::Status() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::JobStarting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession)->add_JobStarting(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::JobStarting_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::JobStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, JobStarting_revoker>(this, JobStarting(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::JobStarting(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession)->remove_JobStarting(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::PdlModificationRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession)->add_PdlModificationRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::PdlModificationRequested_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::PdlModificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PdlModificationRequested_revoker>(this, PdlModificationRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::PdlModificationRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession)->remove_PdlModificationRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobNotificationEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobNotificationEventArgs<D>::PrinterJob() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs)->get_PrinterJob(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobNotificationEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobStartingEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Printers::IppPrintDevice) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobStartingEventArgs<D>::Printer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs)->get_Printer(&value));
        return Windows::Devices::Printers::IppPrintDevice{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobStartingEventArgs<D>::SetSkipSystemRendering() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs)->SetSkipSystemRendering());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobStartingEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobTriggerDetails<D>::PrintWorkflowJobSession() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails)->get_PrintWorkflowJobSession(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::Status() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::PdlDataAvailable(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession)->add_PdlDataAvailable(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::PdlDataAvailable_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::PdlDataAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PdlDataAvailable_revoker>(this, PdlDataAvailable(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::PdlDataAvailable(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession)->remove_PdlDataAvailable(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::JobNotification(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession)->add_JobNotification(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::JobNotification_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::JobNotification(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, JobNotification_revoker>(this, JobNotification(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::JobNotification(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession)->remove_JobNotification(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlConverter<D>::ConvertPdlAsync(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& printTicket, Windows::Storage::Streams::IInputStream const& inputStream, Windows::Storage::Streams::IOutputStream const& outputStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter)->ConvertPdlAsync(*(void**)(&printTicket), *(void**)(&inputStream), *(void**)(&outputStream), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlDataAvailableEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlDataAvailableEventArgs<D>::PrinterJob() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs)->get_PrinterJob(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlDataAvailableEventArgs<D>::SourceContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs)->get_SourceContent(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlDataAvailableEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::PrinterJob() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->get_PrinterJob(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::SourceContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->get_SourceContent(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::UILauncher() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->get_UILauncher(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::GetTargetStream(param::hstring const& targetContentType) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->GetTargetStream(*(void**)(&targetContentType), &result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::GetPdlConverter(Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConversionType const& conversionType) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->GetPdlConverter(static_cast<int32_t>(conversionType), &result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlSourceContent<D>::ContentType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent)->get_ContentType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IInputStream) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlSourceContent<D>::GetInputStream() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent)->GetInputStream(&result));
        return Windows::Storage::Streams::IInputStream{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlSourceContent<D>::GetContentFileAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent)->GetContentFileAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IOutputStream) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlTargetStream<D>::GetOutputStream() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream)->GetOutputStream(&result));
        return Windows::Storage::Streams::IOutputStream{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlTargetStream<D>::CompleteStreamSubmission(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const& status) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream)->CompleteStreamSubmission(static_cast<int32_t>(status)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::JobId() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->get_JobId(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Printers::IppPrintDevice) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::Printer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->get_Printer(&value));
        return Windows::Devices::Printers::IppPrintDevice{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJobStatus) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::GetJobStatus() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJobStatus result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->GetJobStatus(reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::GetJobPrintTicket() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->GetJobPrintTicket(&result));
        return Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::GetJobAttributesAsBuffer(param::iterable<hstring> const& attributeNames) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->GetJobAttributesAsBuffer(*(void**)(&attributeNames), &result));
        return Windows::Storage::Streams::IBuffer{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMap<hstring, Windows::Devices::Printers::IppAttributeValue>) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::GetJobAttributes(param::iterable<hstring> const& attributeNames) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->GetJobAttributes(*(void**)(&attributeNames), &result));
        return Windows::Foundation::Collections::IMap<hstring, Windows::Devices::Printers::IppAttributeValue>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Printers::IppSetAttributesResult) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::SetJobAttributesFromBuffer(Windows::Storage::Streams::IBuffer const& jobAttributesBuffer) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->SetJobAttributesFromBuffer(*(void**)(&jobAttributesBuffer), &result));
        return Windows::Devices::Printers::IppSetAttributesResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Printers::IppSetAttributesResult) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>::SetJobAttributes(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Devices::Printers::IppAttributeValue>> const& jobAttributes) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob)->SetJobAttributes(*(void**)(&jobAttributes), &result));
        return Windows::Devices::Printers::IppSetAttributesResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetJobPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetJobPrintTicketAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetSourceSpoolDataAsStreamContent() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetSourceSpoolDataAsStreamContent(&result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetSourceSpoolDataAsXpsObjectModel() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetSourceSpoolDataAsXpsObjectModel(&result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IInputStream) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSpoolStreamContent<D>::GetInputStream() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent)->GetInputStream(&result));
        return Windows::Storage::Streams::IInputStream{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IOutputStream) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowStreamTarget<D>::GetOutputStream() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget)->GetOutputStream(&result));
        return Windows::Storage::Streams::IOutputStream{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->get_Operation(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowTarget) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::GetTarget(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& jobPrintTicket) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->GetTarget(*(void**)(&jobPrintTicket), &result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowTarget{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::Complete(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const& status) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->Complete(static_cast<int32_t>(status)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::XpsContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->get_XpsContent(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>::TargetAsStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget)->get_TargetAsStream(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>::TargetAsXpsObjectModelPackage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget)->get_TargetAsXpsObjectModelPackage(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTriggerDetails<D>::PrintWorkflowSession() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails)->get_PrintWorkflowSession(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUIActivatedEventArgs<D>::PrintWorkflowSession() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs)->get_PrintWorkflowSession(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUILauncher<D>::IsUILaunchEnabled() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher)->IsUILaunchEnabled(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::Workflow::PrintWorkflowUICompletionStatus>) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUILauncher<D>::LaunchAndCompleteUIAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher)->LaunchAndCompleteUIAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::Workflow::PrintWorkflowUICompletionStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs)->get_Operation(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        int32_t __stdcall add_SetupRequested(void* setupEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SetupRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const*>(&setupEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SetupRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetupRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Submitted(void* submittedEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Submitted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const*>(&submittedEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Submitted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        int32_t __stdcall GetUserPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>>(this->shim().GetUserPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** configuration) noexcept final try
        {
            clear_abi(configuration);
            typename D::abi_guard guard(this->shim());
            *configuration = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetRequiresUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequiresUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        int32_t __stdcall get_SourceAppDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SourceAppDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JobTitle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JobTitle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        int32_t __stdcall AbortPrintFlow(int32_t reason) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AbortPrintFlow(*reinterpret_cast<Windows::Graphics::Printing::Workflow::PrintWorkflowJobAbortReason const*>(&reason));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        int32_t __stdcall add_SetupRequested(void* setupEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SetupRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const*>(&setupEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SetupRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetupRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_XpsDataAvailable(void* xpsDataAvailableEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().XpsDataAvailable(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const*>(&xpsDataAvailableEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_XpsDataAvailable(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XpsDataAvailable(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        int32_t __stdcall GetUserPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>>(this->shim().GetUserPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_JobStarting(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().JobStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_JobStarting(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().JobStarting(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PdlModificationRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PdlModificationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PdlModificationRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PdlModificationRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs>
    {
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrinterJob(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob>(this->shim().PrinterJob());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs>
    {
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Printer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::IppPrintDevice>(this->shim().Printer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSkipSystemRendering() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSkipSystemRendering();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails>
    {
        int32_t __stdcall get_PrintWorkflowJobSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession>(this->shim().PrintWorkflowJobSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PdlDataAvailable(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PdlDataAvailable(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PdlDataAvailable(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PdlDataAvailable(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_JobNotification(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().JobNotification(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_JobNotification(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().JobNotification(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter>
    {
        int32_t __stdcall ConvertPdlAsync(void* printTicket, void* inputStream, void* outputStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConvertPdlAsync(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const*>(&printTicket), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&inputStream), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&outputStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs>
    {
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrinterJob(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob>(this->shim().PrinterJob());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourceContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent>(this->shim().SourceContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs>
    {
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrinterJob(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob>(this->shim().PrinterJob());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourceContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent>(this->shim().SourceContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UILauncher(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher>(this->shim().UILauncher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTargetStream(void* targetContentType, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream>(this->shim().GetTargetStream(*reinterpret_cast<hstring const*>(&targetContentType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPdlConverter(int32_t conversionType, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter>(this->shim().GetPdlConverter(*reinterpret_cast<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConversionType const*>(&conversionType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent>
    {
        int32_t __stdcall get_ContentType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInputStream(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetInputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetContentFileAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().GetContentFileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream>
    {
        int32_t __stdcall GetOutputStream(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().GetOutputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CompleteStreamSubmission(int32_t status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompleteStreamSubmission(*reinterpret_cast<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const*>(&status));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob>
    {
        int32_t __stdcall get_JobId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().JobId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Printer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::IppPrintDevice>(this->shim().Printer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetJobStatus(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJobStatus>(this->shim().GetJobStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetJobPrintTicket(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>(this->shim().GetJobPrintTicket());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetJobAttributesAsBuffer(void* attributeNames, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetJobAttributesAsBuffer(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&attributeNames)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetJobAttributes(void* attributeNames, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IMap<hstring, Windows::Devices::Printers::IppAttributeValue>>(this->shim().GetJobAttributes(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&attributeNames)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetJobAttributesFromBuffer(void* jobAttributesBuffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Printers::IppSetAttributesResult>(this->shim().SetJobAttributesFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&jobAttributesBuffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetJobAttributes(void* jobAttributes, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Printers::IppSetAttributesResult>(this->shim().SetJobAttributes(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Devices::Printers::IppAttributeValue>> const*>(&jobAttributes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        int32_t __stdcall GetJobPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>>(this->shim().GetJobPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSourceSpoolDataAsStreamContent(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent>(this->shim().GetSourceSpoolDataAsStreamContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSourceSpoolDataAsXpsObjectModel(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent>(this->shim().GetSourceSpoolDataAsXpsObjectModel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        int32_t __stdcall GetInputStream(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetInputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        int32_t __stdcall GetOutputStream(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().GetOutputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTarget(void* jobPrintTicket, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowTarget>(this->shim().GetTarget(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const*>(&jobPrintTicket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        int32_t __stdcall Complete(int32_t status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete(*reinterpret_cast<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const*>(&status));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_XpsContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent>(this->shim().XpsContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        int32_t __stdcall get_TargetAsStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget>(this->shim().TargetAsStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetAsXpsObjectModelPackage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage>(this->shim().TargetAsXpsObjectModelPackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        int32_t __stdcall get_PrintWorkflowSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession>(this->shim().PrintWorkflowSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        int32_t __stdcall get_PrintWorkflowSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession>(this->shim().PrintWorkflowSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher>
    {
        int32_t __stdcall IsUILaunchEnabled(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsUILaunchEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchAndCompleteUIAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::Workflow::PrintWorkflowUICompletionStatus>>(this->shim().LaunchAndCompleteUIAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowJobActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowJobTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> : winrt::impl::hash_base {};
#endif
}
#endif
