// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintSupport_H
#define WINRT_Windows_Graphics_Printing_PrintSupport_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.Printing.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Devices.Printers.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.2.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintSupport.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Printers::IppPrintDevice) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::Printer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession)->get_Printer(&value));
        return Windows::Devices::Printers::IppPrintDevice{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintTicketValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession)->add_PrintTicketValidationRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintTicketValidationRequested_revoker consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintTicketValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PrintTicketValidationRequested_revoker>(this, PrintTicketValidationRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintTicketValidationRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession)->remove_PrintTicketValidationRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintDeviceCapabilitiesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession)->add_PrintDeviceCapabilitiesChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintDeviceCapabilitiesChanged_revoker consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintDeviceCapabilitiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PrintDeviceCapabilitiesChanged_revoker>(this, PrintDeviceCapabilitiesChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::PrintDeviceCapabilitiesChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession)->remove_PrintDeviceCapabilitiesChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails)->get_Session(&value));
        return Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Data::Xml::Dom::XmlDocument) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs<D>::GetCurrentPrintDeviceCapabilities() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs)->GetCurrentPrintDeviceCapabilities(&result));
        return Windows::Data::Xml::Dom::XmlDocument{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs<D>::UpdatePrintDeviceCapabilities(Windows::Data::Xml::Dom::XmlDocument const& updatedPdc) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs)->UpdatePrintDeviceCapabilities(*(void**)(&updatedPdc)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs<D>::PrintTicket() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs)->get_PrintTicket(&value));
        return Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs<D>::SetPrintTicketValidationStatus(Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus const& status) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs)->SetPrintTicketValidationStatus(static_cast<int32_t>(status)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo<D>::SourceAppInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo)->get_SourceAppInfo(&value));
        return Windows::ApplicationModel::AppInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Printers::IppPrintDevice) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo<D>::Printer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo)->get_Printer(&value));
        return Windows::Devices::Printers::IppPrintDevice{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs)->get_Session(&value));
        return Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>::SessionPrintTicket() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession)->get_SessionPrintTicket(&value));
        return Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>::DocumentTitle() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession)->get_DocumentTitle(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>::LaunchKind() const
    {
        Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession)->get_LaunchKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>::UpdatePrintTicket(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& printTicket) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession)->UpdatePrintTicket(*(void**)(&printTicket)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo) consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>::SessionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession)->get_SessionInfo(&value));
        return Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        int32_t __stdcall get_Printer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::IppPrintDevice>(this->shim().Printer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PrintTicketValidationRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PrintTicketValidationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PrintTicketValidationRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTicketValidationRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PrintDeviceCapabilitiesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PrintDeviceCapabilitiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PrintDeviceCapabilitiesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintDeviceCapabilitiesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
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
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        int32_t __stdcall GetCurrentPrintDeviceCapabilities(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Data::Xml::Dom::XmlDocument>(this->shim().GetCurrentPrintDeviceCapabilities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdatePrintDeviceCapabilities(void* updatedPdc) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdatePrintDeviceCapabilities(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&updatedPdc));
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
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        int32_t __stdcall get_PrintTicket(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>(this->shim().PrintTicket());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPrintTicketValidationStatus(int32_t status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPrintTicketValidationStatus(*reinterpret_cast<Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus const*>(&status));
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
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        int32_t __stdcall get_SourceAppInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppInfo>(this->shim().SourceAppInfo());
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
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>(this->shim().Session());
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
    struct produce<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession> : produce_base<D, Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        int32_t __stdcall get_SessionPrintTicket(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>(this->shim().SessionPrintTicket());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DocumentTitle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DocumentTitle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LaunchKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind>(this->shim().LaunchKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdatePrintTicket(void* printTicket) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdatePrintTicket(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const*>(&printTicket));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>(this->shim().SessionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintSupport
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession> : winrt::impl::hash_base {};
#endif
}
#endif
