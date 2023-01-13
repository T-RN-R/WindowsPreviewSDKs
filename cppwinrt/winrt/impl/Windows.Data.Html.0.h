// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Html_0_H
#define WINRT_Windows_Data_Html_0_H
WINRT_EXPORT namespace winrt::Windows::Data::Html
{
    struct IHtmlUtilities;
    struct HtmlUtilities;
}
namespace winrt::impl
{
    template <> struct category<Windows::Data::Html::IHtmlUtilities>{ using type = interface_category; };
    template <> struct category<Windows::Data::Html::HtmlUtilities>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Data::Html::HtmlUtilities>{ L"Windows.Data.Html.HtmlUtilities" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Data::Html::IHtmlUtilities>{ L"Windows.Data.Html.IHtmlUtilities" };
#endif
    template <> inline constexpr guid guid_v<Windows::Data::Html::IHtmlUtilities>{ 0xFEC00ADD,0x2399,0x4FAC,{ 0xB5,0xA7,0x05,0xE9,0xAC,0xD7,0x18,0x1D } };
    template <> struct abi<Windows::Data::Html::IHtmlUtilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertToText(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Data_Html_IHtmlUtilities
    {
        auto ConvertToText(param::hstring const& html) const;
    };
    template <> struct consume<Windows::Data::Html::IHtmlUtilities>
    {
        template <typename D> using type = consume_Windows_Data_Html_IHtmlUtilities<D>;
    };
}
#endif
