// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Text_H
#define WINRT_Windows_UI_Text_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200213.5"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Text.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Text_IContentLinkInfo<D>::Id() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->get_Id(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_IContentLinkInfo<D>::Id(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->put_Id(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_IContentLinkInfo<D>::DisplayText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->get_DisplayText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_IContentLinkInfo<D>::DisplayText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->put_DisplayText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_IContentLinkInfo<D>::SecondaryText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->get_SecondaryText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_IContentLinkInfo<D>::SecondaryText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->put_SecondaryText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_UI_Text_IContentLinkInfo<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_IContentLinkInfo<D>::Uri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->put_Uri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_IContentLinkInfo<D>::LinkContentKind() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->get_LinkContentKind(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_IContentLinkInfo<D>::LinkContentKind(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IContentLinkInfo)->put_LinkContentKind(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::Black() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Black(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::Bold() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Bold(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::ExtraBlack() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_ExtraBlack(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::ExtraBold() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_ExtraBold(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::ExtraLight() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_ExtraLight(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::Light() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Light(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::Medium() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Medium(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::Normal() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Normal(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::SemiBold() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_SemiBold(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::SemiLight() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_SemiLight(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontWeight) consume_Windows_UI_Text_IFontWeightsStatics<D>::Thin() const
    {
        Windows::UI::Text::FontWeight value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Thin(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ContentLinkInfo) consume_Windows_UI_Text_IRichEditTextRange<D>::ContentLinkInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IRichEditTextRange)->get_ContentLinkInfo(&value));
        return Windows::UI::Text::ContentLinkInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_IRichEditTextRange<D>::ContentLinkInfo(Windows::UI::Text::ContentLinkInfo const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::IRichEditTextRange)->put_ContentLinkInfo(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::AllCaps() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_AllCaps(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::AllCaps(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_AllCaps(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_UI_Text_ITextCharacterFormat<D>::BackgroundColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_BackgroundColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::BackgroundColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_BackgroundColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Bold() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Bold(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Bold(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Bold(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontStretch) consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStretch() const
    {
        Windows::UI::Text::FontStretch value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_FontStretch(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStretch(Windows::UI::Text::FontStretch const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_FontStretch(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontStyle) consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStyle() const
    {
        Windows::UI::Text::FontStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_FontStyle(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStyle(Windows::UI::Text::FontStyle const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_FontStyle(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_UI_Text_ITextCharacterFormat<D>::ForegroundColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_ForegroundColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::ForegroundColor(Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_ForegroundColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Hidden() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Hidden(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Hidden(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Hidden(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Italic() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Italic(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Italic(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Italic(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextCharacterFormat<D>::Kerning() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Kerning(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Kerning(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Kerning(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_ITextCharacterFormat<D>::LanguageTag() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_LanguageTag(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::LanguageTag(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_LanguageTag(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::LinkType) consume_Windows_UI_Text_ITextCharacterFormat<D>::LinkType() const
    {
        Windows::UI::Text::LinkType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_LinkType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_ITextCharacterFormat<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Name(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Name(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Outline() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Outline(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Outline(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Outline(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextCharacterFormat<D>::Position() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Position(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Position(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Position(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::ProtectedText() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_ProtectedText(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::ProtectedText(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_ProtectedText(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextCharacterFormat<D>::Size() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Size(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Size(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Size(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::SmallCaps() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_SmallCaps(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::SmallCaps(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_SmallCaps(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextCharacterFormat<D>::Spacing() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Spacing(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Spacing(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Spacing(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Strikethrough() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Strikethrough(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Strikethrough(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Strikethrough(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Subscript() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Subscript(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Subscript(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Subscript(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextCharacterFormat<D>::Superscript() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Superscript(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Superscript(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Superscript(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::TextScript) consume_Windows_UI_Text_ITextCharacterFormat<D>::TextScript() const
    {
        Windows::UI::Text::TextScript value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_TextScript(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::TextScript(Windows::UI::Text::TextScript const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_TextScript(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::UnderlineType) consume_Windows_UI_Text_ITextCharacterFormat<D>::Underline() const
    {
        Windows::UI::Text::UnderlineType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Underline(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Underline(Windows::UI::Text::UnderlineType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Underline(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextCharacterFormat<D>::Weight() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Weight(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::Weight(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Weight(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextCharacterFormat<D>::SetClone(Windows::UI::Text::ITextCharacterFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->SetClone(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextCharacterFormat) consume_Windows_UI_Text_ITextCharacterFormat<D>::GetClone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->GetClone(&result));
        return Windows::UI::Text::ITextCharacterFormat{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextCharacterFormat<D>::IsEqual(Windows::UI::Text::ITextCharacterFormat const& format) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextCharacterFormat)->IsEqual(*(void**)(&format), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_UI_Text_ITextConstantsStatics<D>::AutoColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_AutoColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextConstantsStatics<D>::MinUnitCount() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_MinUnitCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextConstantsStatics<D>::MaxUnitCount() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_MaxUnitCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedFloatValue() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedFloatValue(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedInt32Value() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedInt32Value(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontStretch) consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedFontStretch() const
    {
        Windows::UI::Text::FontStretch value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedFontStretch(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FontStyle) consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedFontStyle() const
    {
        Windows::UI::Text::FontStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedFontStyle(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::CaretType) consume_Windows_UI_Text_ITextDocument<D>::CaretType() const
    {
        Windows::UI::Text::CaretType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->get_CaretType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::CaretType(Windows::UI::Text::CaretType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->put_CaretType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextDocument<D>::DefaultTabStop() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->get_DefaultTabStop(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::DefaultTabStop(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->put_DefaultTabStop(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextSelection) consume_Windows_UI_Text_ITextDocument<D>::Selection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->get_Selection(&value));
        return Windows::UI::Text::ITextSelection{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Text_ITextDocument<D>::UndoLimit() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->get_UndoLimit(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::UndoLimit(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->put_UndoLimit(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextDocument<D>::CanCopy() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->CanCopy(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextDocument<D>::CanPaste() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->CanPaste(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextDocument<D>::CanRedo() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->CanRedo(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextDocument<D>::CanUndo() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->CanUndo(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextDocument<D>::ApplyDisplayUpdates() const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->ApplyDisplayUpdates(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextDocument<D>::BatchDisplayUpdates() const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->BatchDisplayUpdates(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::BeginUndoGroup() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->BeginUndoGroup());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::EndUndoGroup() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->EndUndoGroup());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextCharacterFormat) consume_Windows_UI_Text_ITextDocument<D>::GetDefaultCharacterFormat() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->GetDefaultCharacterFormat(&result));
        return Windows::UI::Text::ITextCharacterFormat{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextParagraphFormat) consume_Windows_UI_Text_ITextDocument<D>::GetDefaultParagraphFormat() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->GetDefaultParagraphFormat(&result));
        return Windows::UI::Text::ITextParagraphFormat{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextRange) consume_Windows_UI_Text_ITextDocument<D>::GetRange(int32_t startPosition, int32_t endPosition) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->GetRange(startPosition, endPosition, &result));
        return Windows::UI::Text::ITextRange{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextRange) consume_Windows_UI_Text_ITextDocument<D>::GetRangeFromPoint(Windows::Foundation::Point const& point, Windows::UI::Text::PointOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->GetRangeFromPoint(impl::bind_in(point), static_cast<uint32_t>(options), &result));
        return Windows::UI::Text::ITextRange{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::GetText(Windows::UI::Text::TextGetOptions const& options, hstring& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->GetText(static_cast<uint32_t>(options), impl::bind_out(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::LoadFromStream(Windows::UI::Text::TextSetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->LoadFromStream(static_cast<uint32_t>(options), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::Redo() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->Redo());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::SaveToStream(Windows::UI::Text::TextGetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->SaveToStream(static_cast<uint32_t>(options), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::SetDefaultCharacterFormat(Windows::UI::Text::ITextCharacterFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->SetDefaultCharacterFormat(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::SetDefaultParagraphFormat(Windows::UI::Text::ITextParagraphFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->SetDefaultParagraphFormat(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::SetText(Windows::UI::Text::TextSetOptions const& options, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->SetText(static_cast<uint32_t>(options), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument<D>::Undo() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument)->Undo());
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextDocument2<D>::AlignmentIncludesTrailingWhitespace() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument2)->get_AlignmentIncludesTrailingWhitespace(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument2<D>::AlignmentIncludesTrailingWhitespace(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument2)->put_AlignmentIncludesTrailingWhitespace(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextDocument2<D>::IgnoreTrailingCharacterSpacing() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument2)->get_IgnoreTrailingCharacterSpacing(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument2<D>::IgnoreTrailingCharacterSpacing(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument2)->put_IgnoreTrailingCharacterSpacing(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument3<D>::ClearUndoRedoHistory() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument3)->ClearUndoRedoHistory());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument4<D>::SetMath(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument4)->SetMath(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument4<D>::GetMath(hstring& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument4)->GetMath(impl::bind_out(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextDocument4<D>::SetMathMode(Windows::UI::Text::RichEditMathMode const& mode) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextDocument4)->SetMathMode(static_cast<int32_t>(mode)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ParagraphAlignment) consume_Windows_UI_Text_ITextParagraphFormat<D>::Alignment() const
    {
        Windows::UI::Text::ParagraphAlignment value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_Alignment(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::Alignment(Windows::UI::Text::ParagraphAlignment const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_Alignment(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::FirstLineIndent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_FirstLineIndent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepTogether() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_KeepTogether(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepTogether(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_KeepTogether(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepWithNext() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_KeepWithNext(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepWithNext(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_KeepWithNext(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::LeftIndent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_LeftIndent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::LineSpacing() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_LineSpacing(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::LineSpacingRule) consume_Windows_UI_Text_ITextParagraphFormat<D>::LineSpacingRule() const
    {
        Windows::UI::Text::LineSpacingRule value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_LineSpacingRule(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::MarkerAlignment) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListAlignment() const
    {
        Windows::UI::Text::MarkerAlignment value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListAlignment(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListAlignment(Windows::UI::Text::MarkerAlignment const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListAlignment(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListLevelIndex() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListLevelIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListLevelIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListLevelIndex(value));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStart() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListStart(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStart(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListStart(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::MarkerStyle) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStyle() const
    {
        Windows::UI::Text::MarkerStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListStyle(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStyle(Windows::UI::Text::MarkerStyle const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListStyle(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListTab() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListTab(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListTab(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListTab(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::MarkerType) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListType() const
    {
        Windows::UI::Text::MarkerType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ListType(Windows::UI::Text::MarkerType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextParagraphFormat<D>::NoLineNumber() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_NoLineNumber(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::NoLineNumber(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_NoLineNumber(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextParagraphFormat<D>::PageBreakBefore() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_PageBreakBefore(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::PageBreakBefore(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_PageBreakBefore(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::RightIndent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_RightIndent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::RightIndent(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_RightIndent(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextParagraphFormat<D>::RightToLeft() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_RightToLeft(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::RightToLeft(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_RightToLeft(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ParagraphStyle) consume_Windows_UI_Text_ITextParagraphFormat<D>::Style() const
    {
        Windows::UI::Text::ParagraphStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_Style(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::Style(Windows::UI::Text::ParagraphStyle const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_Style(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceAfter() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_SpaceAfter(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceAfter(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_SpaceAfter(value));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceBefore() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_SpaceBefore(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceBefore(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_SpaceBefore(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::FormatEffect) consume_Windows_UI_Text_ITextParagraphFormat<D>::WidowControl() const
    {
        Windows::UI::Text::FormatEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_WidowControl(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::WidowControl(Windows::UI::Text::FormatEffect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_WidowControl(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextParagraphFormat<D>::TabCount() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_TabCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::AddTab(float position, Windows::UI::Text::TabAlignment const& align, Windows::UI::Text::TabLeader const& leader) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->AddTab(position, static_cast<int32_t>(align), static_cast<int32_t>(leader)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::ClearAllTabs() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->ClearAllTabs());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::DeleteTab(float position) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->DeleteTab(position));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextParagraphFormat) consume_Windows_UI_Text_ITextParagraphFormat<D>::GetClone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->GetClone(&result));
        return Windows::UI::Text::ITextParagraphFormat{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::GetTab(int32_t index, float& position, Windows::UI::Text::TabAlignment& align, Windows::UI::Text::TabLeader& leader) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->GetTab(index, &position, reinterpret_cast<int32_t*>(&align), reinterpret_cast<int32_t*>(&leader)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextParagraphFormat<D>::IsEqual(Windows::UI::Text::ITextParagraphFormat const& format) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->IsEqual(*(void**)(&format), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::SetClone(Windows::UI::Text::ITextParagraphFormat const& format) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->SetClone(*(void**)(&format)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::SetIndents(float start, float left, float right) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->SetIndents(start, left, right));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextParagraphFormat<D>::SetLineSpacing(Windows::UI::Text::LineSpacingRule const& rule, float spacing) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextParagraphFormat)->SetLineSpacing(static_cast<int32_t>(rule), spacing));
    }
    template <typename D> WINRT_IMPL_AUTO(char16_t) consume_Windows_UI_Text_ITextRange<D>::Character() const
    {
        char16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_Character(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Character(char16_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_Character(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextCharacterFormat) consume_Windows_UI_Text_ITextRange<D>::CharacterFormat() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_CharacterFormat(&value));
        return Windows::UI::Text::ITextCharacterFormat{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::CharacterFormat(Windows::UI::Text::ITextCharacterFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_CharacterFormat(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextRange) consume_Windows_UI_Text_ITextRange<D>::FormattedText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_FormattedText(&value));
        return Windows::UI::Text::ITextRange{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::FormattedText(Windows::UI::Text::ITextRange const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_FormattedText(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::EndPosition() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_EndPosition(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::EndPosition(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_EndPosition(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::RangeGravity) consume_Windows_UI_Text_ITextRange<D>::Gravity() const
    {
        Windows::UI::Text::RangeGravity value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_Gravity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Gravity(Windows::UI::Text::RangeGravity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_Gravity(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::Length() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_Length(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_ITextRange<D>::Link() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_Link(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Link(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_Link(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextParagraphFormat) consume_Windows_UI_Text_ITextRange<D>::ParagraphFormat() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_ParagraphFormat(&value));
        return Windows::UI::Text::ITextParagraphFormat{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::ParagraphFormat(Windows::UI::Text::ITextParagraphFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_ParagraphFormat(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::StartPosition() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_StartPosition(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::StartPosition(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_StartPosition(value));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::StoryLength() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_StoryLength(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Text_ITextRange<D>::Text() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->get_Text(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Text(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->put_Text(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextRange<D>::CanPaste(int32_t format) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->CanPaste(format, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::ChangeCase(Windows::UI::Text::LetterCase const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->ChangeCase(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Collapse(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Collapse(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Copy() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Copy());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Cut() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Cut());
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::Delete(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Delete(static_cast<int32_t>(unit), count, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::EndOf(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->EndOf(static_cast<int32_t>(unit), extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::Expand(Windows::UI::Text::TextRangeUnit const& unit) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Expand(static_cast<int32_t>(unit), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::FindText(param::hstring const& value, int32_t scanLength, Windows::UI::Text::FindOptions const& options) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->FindText(*(void**)(&value), scanLength, static_cast<uint32_t>(options), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::GetCharacterUtf32(uint32_t& value, int32_t offset) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetCharacterUtf32(&value, offset));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::ITextRange) consume_Windows_UI_Text_ITextRange<D>::GetClone() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetClone(&result));
        return Windows::UI::Text::ITextRange{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::GetIndex(Windows::UI::Text::TextRangeUnit const& unit) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetIndex(static_cast<int32_t>(unit), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::GetPoint(Windows::UI::Text::HorizontalCharacterAlignment const& horizontalAlign, Windows::UI::Text::VerticalCharacterAlignment const& verticalAlign, Windows::UI::Text::PointOptions const& options, Windows::Foundation::Point& point) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetPoint(static_cast<int32_t>(horizontalAlign), static_cast<int32_t>(verticalAlign), static_cast<uint32_t>(options), impl::bind_out(point)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::GetRect(Windows::UI::Text::PointOptions const& options, Windows::Foundation::Rect& rect, int32_t& hit) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetRect(static_cast<uint32_t>(options), impl::bind_out(rect), &hit));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::GetText(Windows::UI::Text::TextGetOptions const& options, hstring& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetText(static_cast<uint32_t>(options), impl::bind_out(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::GetTextViaStream(Windows::UI::Text::TextGetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->GetTextViaStream(static_cast<uint32_t>(options), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextRange<D>::InRange(Windows::UI::Text::ITextRange const& range) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->InRange(*(void**)(&range), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::InsertImage(int32_t width, int32_t height, int32_t ascent, Windows::UI::Text::VerticalCharacterAlignment const& verticalAlign, param::hstring const& alternateText, Windows::Storage::Streams::IRandomAccessStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->InsertImage(width, height, ascent, static_cast<int32_t>(verticalAlign), *(void**)(&alternateText), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextRange<D>::InStory(Windows::UI::Text::ITextRange const& range) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->InStory(*(void**)(&range), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Text_ITextRange<D>::IsEqual(Windows::UI::Text::ITextRange const& range) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->IsEqual(*(void**)(&range), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::Move(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Move(static_cast<int32_t>(unit), count, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::MoveEnd(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->MoveEnd(static_cast<int32_t>(unit), count, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::MoveStart(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->MoveStart(static_cast<int32_t>(unit), count, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::Paste(int32_t format) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->Paste(format));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::ScrollIntoView(Windows::UI::Text::PointOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->ScrollIntoView(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::MatchSelection() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->MatchSelection());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::SetIndex(Windows::UI::Text::TextRangeUnit const& unit, int32_t index, bool extend) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->SetIndex(static_cast<int32_t>(unit), index, extend));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::SetPoint(Windows::Foundation::Point const& point, Windows::UI::Text::PointOptions const& options, bool extend) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->SetPoint(impl::bind_in(point), static_cast<uint32_t>(options), extend));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::SetRange(int32_t startPosition, int32_t endPosition) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->SetRange(startPosition, endPosition));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::SetText(Windows::UI::Text::TextSetOptions const& options, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->SetText(static_cast<uint32_t>(options), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextRange<D>::SetTextViaStream(Windows::UI::Text::TextSetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->SetTextViaStream(static_cast<uint32_t>(options), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextRange<D>::StartOf(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextRange)->StartOf(static_cast<int32_t>(unit), extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::SelectionOptions) consume_Windows_UI_Text_ITextSelection<D>::Options() const
    {
        Windows::UI::Text::SelectionOptions value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->get_Options(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextSelection<D>::Options(Windows::UI::Text::SelectionOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->put_Options(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Text::SelectionType) consume_Windows_UI_Text_ITextSelection<D>::Type() const
    {
        Windows::UI::Text::SelectionType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextSelection<D>::EndKey(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->EndKey(static_cast<int32_t>(unit), extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextSelection<D>::HomeKey(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->HomeKey(static_cast<int32_t>(unit), extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextSelection<D>::MoveDown(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->MoveDown(static_cast<int32_t>(unit), count, extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextSelection<D>::MoveLeft(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->MoveLeft(static_cast<int32_t>(unit), count, extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextSelection<D>::MoveRight(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->MoveRight(static_cast<int32_t>(unit), count, extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Text_ITextSelection<D>::MoveUp(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->MoveUp(static_cast<int32_t>(unit), count, extend, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Text_ITextSelection<D>::TypeText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Text::ITextSelection)->TypeText(*(void**)(&value)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::IContentLinkInfo> : produce_base<D, Windows::UI::Text::IContentLinkInfo>
    {
        int32_t __stdcall get_Id(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Id(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecondaryText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecondaryText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SecondaryText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SecondaryText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Uri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LinkContentKind(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LinkContentKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LinkContentKind(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LinkContentKind(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::IFontWeights> : produce_base<D, Windows::UI::Text::IFontWeights>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::IFontWeightsStatics> : produce_base<D, Windows::UI::Text::IFontWeightsStatics>
    {
        int32_t __stdcall get_Black(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().Black());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bold(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().Bold());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtraBlack(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().ExtraBlack());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtraBold(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().ExtraBold());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtraLight(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().ExtraLight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Light(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().Light());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Medium(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().Medium());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Normal(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().Normal());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SemiBold(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().SemiBold());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SemiLight(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().SemiLight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thin(struct struct_Windows_UI_Text_FontWeight* value) noexcept final try
        {
            zero_abi<Windows::UI::Text::FontWeight>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontWeight>(this->shim().Thin());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::IRichEditTextRange> : produce_base<D, Windows::UI::Text::IRichEditTextRange>
    {
        int32_t __stdcall get_ContentLinkInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ContentLinkInfo>(this->shim().ContentLinkInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentLinkInfo(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLinkInfo(*reinterpret_cast<Windows::UI::Text::ContentLinkInfo const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextCharacterFormat> : produce_base<D, Windows::UI::Text::ITextCharacterFormat>
    {
        int32_t __stdcall get_AllCaps(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().AllCaps());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllCaps(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllCaps(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bold(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Bold());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Bold(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bold(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontStretch(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontStretch>(this->shim().FontStretch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FontStretch(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStretch(*reinterpret_cast<Windows::UI::Text::FontStretch const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontStyle>(this->shim().FontStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FontStyle(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStyle(*reinterpret_cast<Windows::UI::Text::FontStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForegroundColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().ForegroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForegroundColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Hidden(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Hidden());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Hidden(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hidden(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Italic(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Italic());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Italic(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Italic(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Kerning(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Kerning());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Kerning(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kerning(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LanguageTag(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LanguageTag());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LanguageTag(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LanguageTag(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LinkType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::LinkType>(this->shim().LinkType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Name(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Outline(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Outline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Outline(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Outline(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Position(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Position(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtectedText(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().ProtectedText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProtectedText(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedText(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Size(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SmallCaps(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().SmallCaps());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SmallCaps(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmallCaps(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Spacing(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Spacing());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Spacing(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Spacing(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Strikethrough(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Strikethrough());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Strikethrough(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Strikethrough(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Subscript(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Subscript());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Subscript(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subscript(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Superscript(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().Superscript());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Superscript(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Superscript(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TextScript(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::TextScript>(this->shim().TextScript());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TextScript(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextScript(*reinterpret_cast<Windows::UI::Text::TextScript const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Underline(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::UnderlineType>(this->shim().Underline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Underline(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Underline(*reinterpret_cast<Windows::UI::Text::UnderlineType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Weight(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Weight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Weight(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Weight(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetClone(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetClone(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetClone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextCharacterFormat>(this->shim().GetClone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsEqual(void* format, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEqual(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&format)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextConstantsStatics> : produce_base<D, Windows::UI::Text::ITextConstantsStatics>
    {
        int32_t __stdcall get_AutoColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().AutoColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinUnitCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MinUnitCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxUnitCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxUnitCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UndefinedColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().UndefinedColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UndefinedFloatValue(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().UndefinedFloatValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UndefinedInt32Value(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().UndefinedInt32Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UndefinedFontStretch(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontStretch>(this->shim().UndefinedFontStretch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UndefinedFontStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FontStyle>(this->shim().UndefinedFontStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextDocument> : produce_base<D, Windows::UI::Text::ITextDocument>
    {
        int32_t __stdcall get_CaretType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::CaretType>(this->shim().CaretType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CaretType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaretType(*reinterpret_cast<Windows::UI::Text::CaretType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultTabStop(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DefaultTabStop());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DefaultTabStop(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultTabStop(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Selection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ITextSelection>(this->shim().Selection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UndoLimit(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().UndoLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UndoLimit(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UndoLimit(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanCopy(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanCopy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanPaste(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanPaste());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanRedo(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanRedo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanUndo(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanUndo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ApplyDisplayUpdates(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().ApplyDisplayUpdates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BatchDisplayUpdates(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().BatchDisplayUpdates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BeginUndoGroup() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginUndoGroup();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EndUndoGroup() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndUndoGroup();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefaultCharacterFormat(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextCharacterFormat>(this->shim().GetDefaultCharacterFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefaultParagraphFormat(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextParagraphFormat>(this->shim().GetDefaultParagraphFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRange(int32_t startPosition, int32_t endPosition, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextRange>(this->shim().GetRange(startPosition, endPosition));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRangeFromPoint(Windows::Foundation::Point point, uint32_t options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextRange>(this->shim().GetRangeFromPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&point), *reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetText(uint32_t options, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            this->shim().GetText(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<hstring*>(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFromStream(uint32_t options, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadFromStream(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Redo() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Redo();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveToStream(uint32_t options, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveToStream(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDefaultCharacterFormat(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultCharacterFormat(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDefaultParagraphFormat(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultParagraphFormat(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetText(uint32_t options, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Undo() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Undo();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextDocument2> : produce_base<D, Windows::UI::Text::ITextDocument2>
    {
        int32_t __stdcall get_AlignmentIncludesTrailingWhitespace(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlignmentIncludesTrailingWhitespace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlignmentIncludesTrailingWhitespace(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlignmentIncludesTrailingWhitespace(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IgnoreTrailingCharacterSpacing(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IgnoreTrailingCharacterSpacing());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IgnoreTrailingCharacterSpacing(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IgnoreTrailingCharacterSpacing(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextDocument3> : produce_base<D, Windows::UI::Text::ITextDocument3>
    {
        int32_t __stdcall ClearUndoRedoHistory() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearUndoRedoHistory();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextDocument4> : produce_base<D, Windows::UI::Text::ITextDocument4>
    {
        int32_t __stdcall SetMath(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMath(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            this->shim().GetMath(*reinterpret_cast<hstring*>(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetMathMode(int32_t mode) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMathMode(*reinterpret_cast<Windows::UI::Text::RichEditMathMode const*>(&mode));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextParagraphFormat> : produce_base<D, Windows::UI::Text::ITextParagraphFormat>
    {
        int32_t __stdcall get_Alignment(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ParagraphAlignment>(this->shim().Alignment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Alignment(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Alignment(*reinterpret_cast<Windows::UI::Text::ParagraphAlignment const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FirstLineIndent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().FirstLineIndent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeepTogether(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().KeepTogether());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeepTogether(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepTogether(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeepWithNext(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().KeepWithNext());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeepWithNext(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepWithNext(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LeftIndent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LeftIndent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LineSpacing(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LineSpacing());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LineSpacingRule(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::LineSpacingRule>(this->shim().LineSpacingRule());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ListAlignment(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::MarkerAlignment>(this->shim().ListAlignment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ListAlignment(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListAlignment(*reinterpret_cast<Windows::UI::Text::MarkerAlignment const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ListLevelIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ListLevelIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ListLevelIndex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListLevelIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ListStart(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ListStart());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ListStart(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListStart(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ListStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::MarkerStyle>(this->shim().ListStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ListStyle(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListStyle(*reinterpret_cast<Windows::UI::Text::MarkerStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ListTab(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ListTab());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ListTab(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListTab(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ListType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::MarkerType>(this->shim().ListType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ListType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListType(*reinterpret_cast<Windows::UI::Text::MarkerType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NoLineNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().NoLineNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NoLineNumber(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoLineNumber(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PageBreakBefore(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().PageBreakBefore());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PageBreakBefore(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageBreakBefore(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RightIndent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RightIndent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RightIndent(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightIndent(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RightToLeft(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().RightToLeft());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RightToLeft(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightToLeft(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Style(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ParagraphStyle>(this->shim().Style());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Style(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::UI::Text::ParagraphStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SpaceAfter(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SpaceAfter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SpaceAfter(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpaceAfter(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SpaceBefore(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SpaceBefore());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SpaceBefore(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpaceBefore(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WidowControl(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::FormatEffect>(this->shim().WidowControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WidowControl(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WidowControl(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TabCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().TabCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddTab(float position, int32_t align, int32_t leader) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTab(position, *reinterpret_cast<Windows::UI::Text::TabAlignment const*>(&align), *reinterpret_cast<Windows::UI::Text::TabLeader const*>(&leader));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearAllTabs() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAllTabs();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteTab(float position) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteTab(position);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetClone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextParagraphFormat>(this->shim().GetClone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTab(int32_t index, float* position, int32_t* align, int32_t* leader) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetTab(index, *position, *reinterpret_cast<Windows::UI::Text::TabAlignment*>(align), *reinterpret_cast<Windows::UI::Text::TabLeader*>(leader));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsEqual(void* format, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEqual(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&format)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetClone(void* format) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetClone(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetIndents(float start, float left, float right) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIndents(start, left, right);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLineSpacing(int32_t rule, float spacing) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLineSpacing(*reinterpret_cast<Windows::UI::Text::LineSpacingRule const*>(&rule), spacing);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextRange> : produce_base<D, Windows::UI::Text::ITextRange>
    {
        int32_t __stdcall get_Character(char16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<char16_t>(this->shim().Character());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Character(char16_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Character(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacterFormat(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ITextCharacterFormat>(this->shim().CharacterFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CharacterFormat(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterFormat(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FormattedText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ITextRange>(this->shim().FormattedText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FormattedText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FormattedText(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndPosition(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().EndPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EndPosition(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPosition(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Gravity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::RangeGravity>(this->shim().Gravity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Gravity(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gravity(*reinterpret_cast<Windows::UI::Text::RangeGravity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Length(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Link(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Link());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Link(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Link(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ParagraphFormat(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::ITextParagraphFormat>(this->shim().ParagraphFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ParagraphFormat(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParagraphFormat(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartPosition(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().StartPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartPosition(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPosition(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StoryLength(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().StoryLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Text(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CanPaste(int32_t format, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanPaste(format));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ChangeCase(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeCase(*reinterpret_cast<Windows::UI::Text::LetterCase const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Collapse(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Collapse(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Copy() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Copy();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Cut() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cut();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Delete(int32_t unit, int32_t count, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Delete(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EndOf(int32_t unit, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().EndOf(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Expand(int32_t unit, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Expand(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindText(void* value, int32_t scanLength, uint32_t options, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().FindText(*reinterpret_cast<hstring const*>(&value), scanLength, *reinterpret_cast<Windows::UI::Text::FindOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCharacterUtf32(uint32_t* value, int32_t offset) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetCharacterUtf32(*value, offset);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetClone(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Text::ITextRange>(this->shim().GetClone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIndex(int32_t unit, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetIndex(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPoint(int32_t horizontalAlign, int32_t verticalAlign, uint32_t options, Windows::Foundation::Point* point) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(point);
            typename D::abi_guard guard(this->shim());
            this->shim().GetPoint(*reinterpret_cast<Windows::UI::Text::HorizontalCharacterAlignment const*>(&horizontalAlign), *reinterpret_cast<Windows::UI::Text::VerticalCharacterAlignment const*>(&verticalAlign), *reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Point*>(point));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRect(uint32_t options, Windows::Foundation::Rect* rect, int32_t* hit) noexcept final try
        {
            zero_abi<Windows::Foundation::Rect>(rect);
            typename D::abi_guard guard(this->shim());
            this->shim().GetRect(*reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Rect*>(rect), *hit);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetText(uint32_t options, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            this->shim().GetText(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<hstring*>(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTextViaStream(uint32_t options, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetTextViaStream(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InRange(void* range, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().InRange(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&range)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InsertImage(int32_t width, int32_t height, int32_t ascent, int32_t verticalAlign, void* alternateText, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertImage(width, height, ascent, *reinterpret_cast<Windows::UI::Text::VerticalCharacterAlignment const*>(&verticalAlign), *reinterpret_cast<hstring const*>(&alternateText), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InStory(void* range, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().InStory(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&range)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsEqual(void* range, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEqual(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&range)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Move(int32_t unit, int32_t count, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Move(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveEnd(int32_t unit, int32_t count, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MoveEnd(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveStart(int32_t unit, int32_t count, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MoveStart(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Paste(int32_t format) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Paste(format);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ScrollIntoView(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollIntoView(*reinterpret_cast<Windows::UI::Text::PointOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MatchSelection() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MatchSelection();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetIndex(int32_t unit, int32_t index, bool extend) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIndex(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), index, extend);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPoint(Windows::Foundation::Point point, uint32_t options, bool extend) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&point), *reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options), extend);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetRange(int32_t startPosition, int32_t endPosition) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRange(startPosition, endPosition);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetText(uint32_t options, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTextViaStream(uint32_t options, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTextViaStream(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartOf(int32_t unit, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().StartOf(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Text::ITextSelection> : produce_base<D, Windows::UI::Text::ITextSelection>
    {
        int32_t __stdcall get_Options(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::SelectionOptions>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Options(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Options(*reinterpret_cast<Windows::UI::Text::SelectionOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::SelectionType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EndKey(int32_t unit, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().EndKey(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall HomeKey(int32_t unit, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().HomeKey(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveDown(int32_t unit, int32_t count, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MoveDown(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveLeft(int32_t unit, int32_t count, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MoveLeft(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveRight(int32_t unit, int32_t count, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MoveRight(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveUp(int32_t unit, int32_t count, bool extend, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MoveUp(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TypeText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TypeText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::Windows::UI::Text
{
    constexpr auto operator|(FindOptions const left, FindOptions const right) noexcept
    {
        return static_cast<FindOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(FindOptions& left, FindOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(FindOptions const left, FindOptions const right) noexcept
    {
        return static_cast<FindOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(FindOptions& left, FindOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(FindOptions const value) noexcept
    {
        return static_cast<FindOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(FindOptions const left, FindOptions const right) noexcept
    {
        return static_cast<FindOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(FindOptions& left, FindOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(PointOptions const left, PointOptions const right) noexcept
    {
        return static_cast<PointOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(PointOptions& left, PointOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(PointOptions const left, PointOptions const right) noexcept
    {
        return static_cast<PointOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(PointOptions& left, PointOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(PointOptions const value) noexcept
    {
        return static_cast<PointOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(PointOptions const left, PointOptions const right) noexcept
    {
        return static_cast<PointOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(PointOptions& left, PointOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(SelectionOptions const left, SelectionOptions const right) noexcept
    {
        return static_cast<SelectionOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(SelectionOptions& left, SelectionOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(SelectionOptions const left, SelectionOptions const right) noexcept
    {
        return static_cast<SelectionOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(SelectionOptions& left, SelectionOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(SelectionOptions const value) noexcept
    {
        return static_cast<SelectionOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(SelectionOptions const left, SelectionOptions const right) noexcept
    {
        return static_cast<SelectionOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(SelectionOptions& left, SelectionOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(TextDecorations const left, TextDecorations const right) noexcept
    {
        return static_cast<TextDecorations>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(TextDecorations& left, TextDecorations const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(TextDecorations const left, TextDecorations const right) noexcept
    {
        return static_cast<TextDecorations>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(TextDecorations& left, TextDecorations const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(TextDecorations const value) noexcept
    {
        return static_cast<TextDecorations>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(TextDecorations const left, TextDecorations const right) noexcept
    {
        return static_cast<TextDecorations>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(TextDecorations& left, TextDecorations const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(TextGetOptions const left, TextGetOptions const right) noexcept
    {
        return static_cast<TextGetOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(TextGetOptions& left, TextGetOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(TextGetOptions const left, TextGetOptions const right) noexcept
    {
        return static_cast<TextGetOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(TextGetOptions& left, TextGetOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(TextGetOptions const value) noexcept
    {
        return static_cast<TextGetOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(TextGetOptions const left, TextGetOptions const right) noexcept
    {
        return static_cast<TextGetOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(TextGetOptions& left, TextGetOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(TextSetOptions const left, TextSetOptions const right) noexcept
    {
        return static_cast<TextSetOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(TextSetOptions& left, TextSetOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(TextSetOptions const left, TextSetOptions const right) noexcept
    {
        return static_cast<TextSetOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(TextSetOptions& left, TextSetOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(TextSetOptions const value) noexcept
    {
        return static_cast<TextSetOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(TextSetOptions const left, TextSetOptions const right) noexcept
    {
        return static_cast<TextSetOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(TextSetOptions& left, TextSetOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline ContentLinkInfo::ContentLinkInfo() :
        ContentLinkInfo(impl::call_factory_cast<ContentLinkInfo(*)(Windows::Foundation::IActivationFactory const&), ContentLinkInfo>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ContentLinkInfo>(); }))
    {
    }
    inline auto FontWeights::Black()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.Black(); });
    }
    inline auto FontWeights::Bold()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.Bold(); });
    }
    inline auto FontWeights::ExtraBlack()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.ExtraBlack(); });
    }
    inline auto FontWeights::ExtraBold()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.ExtraBold(); });
    }
    inline auto FontWeights::ExtraLight()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.ExtraLight(); });
    }
    inline auto FontWeights::Light()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.Light(); });
    }
    inline auto FontWeights::Medium()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.Medium(); });
    }
    inline auto FontWeights::Normal()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.Normal(); });
    }
    inline auto FontWeights::SemiBold()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.SemiBold(); });
    }
    inline auto FontWeights::SemiLight()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.SemiLight(); });
    }
    inline auto FontWeights::Thin()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontWeight(*)(IFontWeightsStatics const&), FontWeights, IFontWeightsStatics>([](IFontWeightsStatics const& f) { return f.Thin(); });
    }
    inline auto TextConstants::AutoColor()
    {
        return impl::call_factory_cast<Windows::UI::Color(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.AutoColor(); });
    }
    inline auto TextConstants::MinUnitCount()
    {
        return impl::call_factory_cast<int32_t(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.MinUnitCount(); });
    }
    inline auto TextConstants::MaxUnitCount()
    {
        return impl::call_factory_cast<int32_t(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.MaxUnitCount(); });
    }
    inline auto TextConstants::UndefinedColor()
    {
        return impl::call_factory_cast<Windows::UI::Color(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.UndefinedColor(); });
    }
    inline auto TextConstants::UndefinedFloatValue()
    {
        return impl::call_factory_cast<float(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.UndefinedFloatValue(); });
    }
    inline auto TextConstants::UndefinedInt32Value()
    {
        return impl::call_factory_cast<int32_t(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.UndefinedInt32Value(); });
    }
    inline auto TextConstants::UndefinedFontStretch()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontStretch(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.UndefinedFontStretch(); });
    }
    inline auto TextConstants::UndefinedFontStyle()
    {
        return impl::call_factory_cast<Windows::UI::Text::FontStyle(*)(ITextConstantsStatics const&), TextConstants, ITextConstantsStatics>([](ITextConstantsStatics const& f) { return f.UndefinedFontStyle(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Text::IContentLinkInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::IFontWeights> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::IFontWeightsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::IRichEditTextRange> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextCharacterFormat> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextConstantsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextDocument> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextDocument2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextDocument3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextDocument4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextParagraphFormat> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextRange> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ITextSelection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::ContentLinkInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::FontWeights> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::RichEditTextDocument> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::RichEditTextRange> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Text::TextConstants> : winrt::impl::hash_base {};
#endif
}
#endif
