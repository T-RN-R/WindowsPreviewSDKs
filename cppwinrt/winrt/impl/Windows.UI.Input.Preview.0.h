// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_0_H
#define WINRT_Windows_UI_Input_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::UI::Input
{
    struct InputActivationListener;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct AppWindow;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview
{
    struct IInputActivationListenerPreviewStatics;
    struct InputActivationListenerPreview;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::InputActivationListenerPreview>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::InputActivationListenerPreview>{ L"Windows.UI.Input.Preview.InputActivationListenerPreview" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>{ L"Windows.UI.Input.Preview.IInputActivationListenerPreviewStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>{ 0xF0551CE5,0x0DE6,0x5BE0,{ 0xA5,0x89,0xF7,0x37,0x20,0x1A,0x45,0x82 } };
    template <> struct abi<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForApplicationWindow(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_IInputActivationListenerPreviewStatics
    {
        auto CreateForApplicationWindow(Windows::UI::WindowManagement::AppWindow const& window) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_IInputActivationListenerPreviewStatics<D>;
    };
}
#endif
