// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Popups_H
#define WINRT_Windows_UI_Popups_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200213.5"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Popups_IMessageDialog<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IMessageDialog<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->put_Title(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>) consume_Windows_UI_Popups_IMessageDialog<D>::Commands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->get_Commands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Popups_IMessageDialog<D>::DefaultCommandIndex() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->get_DefaultCommandIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IMessageDialog<D>::DefaultCommandIndex(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->put_DefaultCommandIndex(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Popups_IMessageDialog<D>::CancelCommandIndex() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->get_CancelCommandIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IMessageDialog<D>::CancelCommandIndex(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->put_CancelCommandIndex(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Popups_IMessageDialog<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->get_Content(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IMessageDialog<D>::Content(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->put_Content(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>) consume_Windows_UI_Popups_IMessageDialog<D>::ShowAsync() const
    {
        void* messageDialogAsyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->ShowAsync(&messageDialogAsyncOperation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>{ messageDialogAsyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::MessageDialogOptions) consume_Windows_UI_Popups_IMessageDialog<D>::Options() const
    {
        Windows::UI::Popups::MessageDialogOptions value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->get_Options(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IMessageDialog<D>::Options(Windows::UI::Popups::MessageDialogOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialog)->put_Options(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::MessageDialog) consume_Windows_UI_Popups_IMessageDialogFactory<D>::Create(param::hstring const& content) const
    {
        void* messageDialog{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialogFactory)->Create(*(void**)(&content), &messageDialog));
        return Windows::UI::Popups::MessageDialog{ messageDialog, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::MessageDialog) consume_Windows_UI_Popups_IMessageDialogFactory<D>::CreateWithTitle(param::hstring const& content, param::hstring const& title) const
    {
        void* messageDialog{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IMessageDialogFactory)->CreateWithTitle(*(void**)(&content), *(void**)(&title), &messageDialog));
        return Windows::UI::Popups::MessageDialog{ messageDialog, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>) consume_Windows_UI_Popups_IPopupMenu<D>::Commands() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IPopupMenu)->get_Commands(&value));
        return Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>) consume_Windows_UI_Popups_IPopupMenu<D>::ShowAsync(Windows::Foundation::Point const& invocationPoint) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IPopupMenu)->ShowAsync(impl::bind_in(invocationPoint), &asyncOperation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>) consume_Windows_UI_Popups_IPopupMenu<D>::ShowForSelectionAsync(Windows::Foundation::Rect const& selection) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IPopupMenu)->ShowAsyncWithRect(impl::bind_in(selection), &asyncOperation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>) consume_Windows_UI_Popups_IPopupMenu<D>::ShowForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IPopupMenu)->ShowAsyncWithRectAndPlacement(impl::bind_in(selection), static_cast<int32_t>(preferredPlacement), &asyncOperation));
        return Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Popups_IUICommand<D>::Label() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommand)->get_Label(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IUICommand<D>::Label(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommand)->put_Label(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::UICommandInvokedHandler) consume_Windows_UI_Popups_IUICommand<D>::Invoked() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommand)->get_Invoked(&value));
        return Windows::UI::Popups::UICommandInvokedHandler{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IUICommand<D>::Invoked(Windows::UI::Popups::UICommandInvokedHandler const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommand)->put_Invoked(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Popups_IUICommand<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommand)->get_Id(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Popups_IUICommand<D>::Id(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommand)->put_Id(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::UICommand) consume_Windows_UI_Popups_IUICommandFactory<D>::Create(param::hstring const& label) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommandFactory)->Create(*(void**)(&label), &instance));
        return Windows::UI::Popups::UICommand{ instance, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::UICommand) consume_Windows_UI_Popups_IUICommandFactory<D>::CreateWithHandler(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommandFactory)->CreateWithHandler(*(void**)(&label), *(void**)(&action), &instance));
        return Windows::UI::Popups::UICommand{ instance, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Popups::UICommand) consume_Windows_UI_Popups_IUICommandFactory<D>::CreateWithHandlerAndId(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action, Windows::Foundation::IInspectable const& commandId) const
    {
        void* instance{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Popups::IUICommandFactory)->CreateWithHandlerAndId(*(void**)(&label), *(void**)(&action), *(void**)(&commandId), &instance));
        return Windows::UI::Popups::UICommand{ instance, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::UI::Popups::UICommandInvokedHandler, H> final : implements_delegate<Windows::UI::Popups::UICommandInvokedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Popups::UICommandInvokedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* command) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::UI::Popups::IUICommand const*>(&command));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Popups::IMessageDialog> : produce_base<D, Windows::UI::Popups::IMessageDialog>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Commands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>>(this->shim().Commands());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultCommandIndex(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DefaultCommandIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DefaultCommandIndex(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultCommandIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CancelCommandIndex(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CancelCommandIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CancelCommandIndex(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelCommandIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Content(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAsync(void** messageDialogAsyncOperation) noexcept final try
        {
            clear_abi(messageDialogAsyncOperation);
            typename D::abi_guard guard(this->shim());
            *messageDialogAsyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Options(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Popups::MessageDialogOptions>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Options(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Options(*reinterpret_cast<Windows::UI::Popups::MessageDialogOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Popups::IMessageDialogFactory> : produce_base<D, Windows::UI::Popups::IMessageDialogFactory>
    {
        int32_t __stdcall Create(void* content, void** messageDialog) noexcept final try
        {
            clear_abi(messageDialog);
            typename D::abi_guard guard(this->shim());
            *messageDialog = detach_from<Windows::UI::Popups::MessageDialog>(this->shim().Create(*reinterpret_cast<hstring const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithTitle(void* content, void* title, void** messageDialog) noexcept final try
        {
            clear_abi(messageDialog);
            typename D::abi_guard guard(this->shim());
            *messageDialog = detach_from<Windows::UI::Popups::MessageDialog>(this->shim().CreateWithTitle(*reinterpret_cast<hstring const*>(&content), *reinterpret_cast<hstring const*>(&title)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Popups::IPopupMenu> : produce_base<D, Windows::UI::Popups::IPopupMenu>
    {
        int32_t __stdcall get_Commands(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>>(this->shim().Commands());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAsync(Windows::Foundation::Point invocationPoint, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowAsync(*reinterpret_cast<Windows::Foundation::Point const*>(&invocationPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAsyncWithRect(Windows::Foundation::Rect selection, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, int32_t preferredPlacement, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::UI::Popups::IUICommand> : produce_base<D, Windows::UI::Popups::IUICommand>
    {
        int32_t __stdcall get_Label(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Label(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Invoked(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Popups::UICommandInvokedHandler>(this->shim().Invoked());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Invoked(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invoked(*reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Id(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Popups::IUICommandFactory> : produce_base<D, Windows::UI::Popups::IUICommandFactory>
    {
        int32_t __stdcall Create(void* label, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Popups::UICommand>(this->shim().Create(*reinterpret_cast<hstring const*>(&label)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithHandler(void* label, void* action, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Popups::UICommand>(this->shim().CreateWithHandler(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&action)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithHandlerAndId(void* label, void* action, void* commandId, void** instance) noexcept final try
        {
            clear_abi(instance);
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Popups::UICommand>(this->shim().CreateWithHandlerAndId(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&action), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&commandId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    constexpr auto operator|(MessageDialogOptions const left, MessageDialogOptions const right) noexcept
    {
        return static_cast<MessageDialogOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(MessageDialogOptions& left, MessageDialogOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(MessageDialogOptions const left, MessageDialogOptions const right) noexcept
    {
        return static_cast<MessageDialogOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(MessageDialogOptions& left, MessageDialogOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(MessageDialogOptions const value) noexcept
    {
        return static_cast<MessageDialogOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(MessageDialogOptions const left, MessageDialogOptions const right) noexcept
    {
        return static_cast<MessageDialogOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(MessageDialogOptions& left, MessageDialogOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline MessageDialog::MessageDialog(param::hstring const& content) :
        MessageDialog(impl::call_factory<MessageDialog, IMessageDialogFactory>([&](IMessageDialogFactory const& f) { return f.Create(content); }))
    {
    }
    inline MessageDialog::MessageDialog(param::hstring const& content, param::hstring const& title) :
        MessageDialog(impl::call_factory<MessageDialog, IMessageDialogFactory>([&](IMessageDialogFactory const& f) { return f.CreateWithTitle(content, title); }))
    {
    }
    inline PopupMenu::PopupMenu() :
        PopupMenu(impl::call_factory_cast<PopupMenu(*)(Windows::Foundation::IActivationFactory const&), PopupMenu>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PopupMenu>(); }))
    {
    }
    inline UICommand::UICommand() :
        UICommand(impl::call_factory_cast<UICommand(*)(Windows::Foundation::IActivationFactory const&), UICommand>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UICommand>(); }))
    {
    }
    inline UICommand::UICommand(param::hstring const& label) :
        UICommand(impl::call_factory<UICommand, IUICommandFactory>([&](IUICommandFactory const& f) { return f.Create(label); }))
    {
    }
    inline UICommand::UICommand(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action) :
        UICommand(impl::call_factory<UICommand, IUICommandFactory>([&](IUICommandFactory const& f) { return f.CreateWithHandler(label, action); }))
    {
    }
    inline UICommand::UICommand(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action, Windows::Foundation::IInspectable const& commandId) :
        UICommand(impl::call_factory<UICommand, IUICommandFactory>([&](IUICommandFactory const& f) { return f.CreateWithHandlerAndId(label, action, commandId); }))
    {
    }
    inline UICommandSeparator::UICommandSeparator() :
        UICommandSeparator(impl::call_factory_cast<UICommandSeparator(*)(Windows::Foundation::IActivationFactory const&), UICommandSeparator>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UICommandSeparator>(); }))
    {
    }
    template <typename L> UICommandInvokedHandler::UICommandInvokedHandler(L handler) :
        UICommandInvokedHandler(impl::make_delegate<UICommandInvokedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> UICommandInvokedHandler::UICommandInvokedHandler(F* handler) :
        UICommandInvokedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> UICommandInvokedHandler::UICommandInvokedHandler(O* object, M method) :
        UICommandInvokedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> UICommandInvokedHandler::UICommandInvokedHandler(com_ptr<O>&& object, M method) :
        UICommandInvokedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> UICommandInvokedHandler::UICommandInvokedHandler(weak_ref<O>&& object, M method) :
        UICommandInvokedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto UICommandInvokedHandler::operator()(Windows::UI::Popups::IUICommand const& command) const
    {
        check_hresult((*(impl::abi_t<UICommandInvokedHandler>**)this)->Invoke(*(void**)(&command)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Popups::IMessageDialog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::IMessageDialogFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::IPopupMenu> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::IUICommand> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::IUICommandFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::MessageDialog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::PopupMenu> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::UICommand> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Popups::UICommandSeparator> : winrt::impl::hash_base {};
#endif
}
#endif
