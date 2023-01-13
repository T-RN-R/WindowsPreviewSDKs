// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WebUI_Core_2_H
#define WINRT_Windows_UI_WebUI_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.WebUI.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WebUI::Core
{
    struct MenuClosedEventHandler : Windows::Foundation::IUnknown
    {
        MenuClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
        MenuClosedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> MenuClosedEventHandler(L lambda);
        template <typename F> MenuClosedEventHandler(F* function);
        template <typename O, typename M> MenuClosedEventHandler(O* object, M method);
        template <typename O, typename M> MenuClosedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> MenuClosedEventHandler(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct MenuOpenedEventHandler : Windows::Foundation::IUnknown
    {
        MenuOpenedEventHandler(std::nullptr_t = nullptr) noexcept {}
        MenuOpenedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> MenuOpenedEventHandler(L lambda);
        template <typename F> MenuOpenedEventHandler(F* function);
        template <typename O, typename M> MenuOpenedEventHandler(O* object, M method);
        template <typename O, typename M> MenuOpenedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> MenuOpenedEventHandler(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct SizeChangedEventHandler : Windows::Foundation::IUnknown
    {
        SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SizeChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SizeChangedEventHandler(L lambda);
        template <typename F> SizeChangedEventHandler(F* function);
        template <typename O, typename M> SizeChangedEventHandler(O* object, M method);
        template <typename O, typename M> SizeChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SizeChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs const& eventArgs) const;
    };
    struct __declspec(empty_bases) WebUICommandBar : Windows::UI::WebUI::Core::IWebUICommandBar
    {
        WebUICommandBar(std::nullptr_t) noexcept {}
        WebUICommandBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBar(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) WebUICommandBarBitmapIcon : Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon
    {
        WebUICommandBarBitmapIcon(std::nullptr_t) noexcept {}
        WebUICommandBarBitmapIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon(ptr, take_ownership_from_abi) {}
        WebUICommandBarBitmapIcon();
        explicit WebUICommandBarBitmapIcon(Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) WebUICommandBarConfirmationButton : Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton
    {
        WebUICommandBarConfirmationButton(std::nullptr_t) noexcept {}
        WebUICommandBarConfirmationButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton(ptr, take_ownership_from_abi) {}
        WebUICommandBarConfirmationButton();
    };
    struct __declspec(empty_bases) WebUICommandBarIconButton : Windows::UI::WebUI::Core::IWebUICommandBarIconButton
    {
        WebUICommandBarIconButton(std::nullptr_t) noexcept {}
        WebUICommandBarIconButton(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBarIconButton(ptr, take_ownership_from_abi) {}
        WebUICommandBarIconButton();
    };
    struct __declspec(empty_bases) WebUICommandBarItemInvokedEventArgs : Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs
    {
        WebUICommandBarItemInvokedEventArgs(std::nullptr_t) noexcept {}
        WebUICommandBarItemInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUICommandBarSizeChangedEventArgs : Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs
    {
        WebUICommandBarSizeChangedEventArgs(std::nullptr_t) noexcept {}
        WebUICommandBarSizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebUICommandBarSymbolIcon : Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon
    {
        WebUICommandBarSymbolIcon(std::nullptr_t) noexcept {}
        WebUICommandBarSymbolIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon(ptr, take_ownership_from_abi) {}
        WebUICommandBarSymbolIcon();
        explicit WebUICommandBarSymbolIcon(param::hstring const& symbol);
    };
}
#endif
