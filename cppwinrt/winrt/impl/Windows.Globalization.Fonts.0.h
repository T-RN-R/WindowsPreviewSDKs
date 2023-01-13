// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_Fonts_0_H
#define WINRT_Windows_Globalization_Fonts_0_H
WINRT_EXPORT namespace winrt::Windows::UI::Text
{
    enum class FontStretch : int32_t;
    enum class FontStyle : int32_t;
    struct FontWeight;
}
WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts
{
    struct ILanguageFont;
    struct ILanguageFontGroup;
    struct ILanguageFontGroupFactory;
    struct LanguageFont;
    struct LanguageFontGroup;
}
namespace winrt::impl
{
    template <> struct category<Windows::Globalization::Fonts::ILanguageFont>{ using type = interface_category; };
    template <> struct category<Windows::Globalization::Fonts::ILanguageFontGroup>{ using type = interface_category; };
    template <> struct category<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::Globalization::Fonts::LanguageFont>{ using type = class_category; };
    template <> struct category<Windows::Globalization::Fonts::LanguageFontGroup>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Globalization::Fonts::LanguageFont>{ L"Windows.Globalization.Fonts.LanguageFont" };
    template <> inline constexpr auto& name_v<Windows::Globalization::Fonts::LanguageFontGroup>{ L"Windows.Globalization.Fonts.LanguageFontGroup" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Globalization::Fonts::ILanguageFont>{ L"Windows.Globalization.Fonts.ILanguageFont" };
    template <> inline constexpr auto& name_v<Windows::Globalization::Fonts::ILanguageFontGroup>{ L"Windows.Globalization.Fonts.ILanguageFontGroup" };
    template <> inline constexpr auto& name_v<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ L"Windows.Globalization.Fonts.ILanguageFontGroupFactory" };
#endif
    template <> inline constexpr guid guid_v<Windows::Globalization::Fonts::ILanguageFont>{ 0xB12E5C3A,0xB76D,0x459B,{ 0xBE,0xEB,0x90,0x11,0x51,0xCD,0x77,0xD1 } };
    template <> inline constexpr guid guid_v<Windows::Globalization::Fonts::ILanguageFontGroup>{ 0xF33A7FC3,0x3A5C,0x4AEA,{ 0xB9,0xFF,0xB3,0x9F,0xB2,0x42,0xF7,0xF6 } };
    template <> inline constexpr guid guid_v<Windows::Globalization::Fonts::ILanguageFontGroupFactory>{ 0xFCAEAC67,0x4E77,0x49C7,{ 0xB8,0x56,0xDD,0xE9,0x34,0xFC,0x73,0x5B } };
    template <> struct default_interface<Windows::Globalization::Fonts::LanguageFont>{ using type = Windows::Globalization::Fonts::ILanguageFont; };
    template <> struct default_interface<Windows::Globalization::Fonts::LanguageFontGroup>{ using type = Windows::Globalization::Fonts::ILanguageFontGroup; };
    template <> struct abi<Windows::Globalization::Fonts::ILanguageFont>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FontFamily(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontWeight(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t __stdcall get_FontStretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleFactor(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UITextFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_UIHeadingFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_UITitleFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_UICaptionFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_UINotificationHeadingFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_TraditionalDocumentFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModernDocumentFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentHeadingFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_FixedWidthTextFont(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentAlternate1Font(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentAlternate2Font(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateLanguageFontGroup(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_Fonts_ILanguageFont
    {
        [[nodiscard]] auto FontFamily() const;
        [[nodiscard]] auto FontWeight() const;
        [[nodiscard]] auto FontStretch() const;
        [[nodiscard]] auto FontStyle() const;
        [[nodiscard]] auto ScaleFactor() const;
    };
    template <> struct consume<Windows::Globalization::Fonts::ILanguageFont>
    {
        template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFont<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_Fonts_ILanguageFontGroup
    {
        [[nodiscard]] auto UITextFont() const;
        [[nodiscard]] auto UIHeadingFont() const;
        [[nodiscard]] auto UITitleFont() const;
        [[nodiscard]] auto UICaptionFont() const;
        [[nodiscard]] auto UINotificationHeadingFont() const;
        [[nodiscard]] auto TraditionalDocumentFont() const;
        [[nodiscard]] auto ModernDocumentFont() const;
        [[nodiscard]] auto DocumentHeadingFont() const;
        [[nodiscard]] auto FixedWidthTextFont() const;
        [[nodiscard]] auto DocumentAlternate1Font() const;
        [[nodiscard]] auto DocumentAlternate2Font() const;
    };
    template <> struct consume<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory
    {
        auto CreateLanguageFontGroup(param::hstring const& languageTag) const;
    };
    template <> struct consume<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory<D>;
    };
}
#endif
