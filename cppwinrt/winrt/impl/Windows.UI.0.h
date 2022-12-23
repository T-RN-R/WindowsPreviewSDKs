// C++/WinRT v2.0.200303.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_0_H
#define WINRT_Windows_UI_0_H
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct IColorHelper;
    struct IColorHelperStatics;
    struct IColorHelperStatics2;
    struct IColors;
    struct IColorsStatics;
    struct IUIContentRoot;
    struct IUIContext;
    struct ColorHelper;
    struct Colors;
    struct UIContentRoot;
    struct UIContext;
    struct Color;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::IColorHelper>{ using type = interface_category; };
    template <> struct category<Windows::UI::IColorHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::IColorHelperStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::IColors>{ using type = interface_category; };
    template <> struct category<Windows::UI::IColorsStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::IUIContentRoot>{ using type = interface_category; };
    template <> struct category<Windows::UI::IUIContext>{ using type = interface_category; };
    template <> struct category<Windows::UI::ColorHelper>{ using type = class_category; };
    template <> struct category<Windows::UI::Colors>{ using type = class_category; };
    template <> struct category<Windows::UI::UIContentRoot>{ using type = class_category; };
    template <> struct category<Windows::UI::UIContext>{ using type = class_category; };
    template <> struct category<Windows::UI::Color>{ using type = struct_category<uint8_t, uint8_t, uint8_t, uint8_t>; };
    template <> inline constexpr auto& name_v<Windows::UI::ColorHelper> = L"Windows.UI.ColorHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Colors> = L"Windows.UI.Colors";
    template <> inline constexpr auto& name_v<Windows::UI::UIContentRoot> = L"Windows.UI.UIContentRoot";
    template <> inline constexpr auto& name_v<Windows::UI::UIContext> = L"Windows.UI.UIContext";
    template <> inline constexpr auto& name_v<Windows::UI::Color> = L"Windows.UI.Color";
    template <> inline constexpr auto& name_v<Windows::UI::IColorHelper> = L"Windows.UI.IColorHelper";
    template <> inline constexpr auto& name_v<Windows::UI::IColorHelperStatics> = L"Windows.UI.IColorHelperStatics";
    template <> inline constexpr auto& name_v<Windows::UI::IColorHelperStatics2> = L"Windows.UI.IColorHelperStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::IColors> = L"Windows.UI.IColors";
    template <> inline constexpr auto& name_v<Windows::UI::IColorsStatics> = L"Windows.UI.IColorsStatics";
    template <> inline constexpr auto& name_v<Windows::UI::IUIContentRoot> = L"Windows.UI.IUIContentRoot";
    template <> inline constexpr auto& name_v<Windows::UI::IUIContext> = L"Windows.UI.IUIContext";
    template <> inline constexpr guid guid_v<Windows::UI::IColorHelper>{ 0x193CFBE7,0x65C7,0x4540,{ 0xAD,0x08,0x62,0x83,0xBA,0x76,0x87,0x9A } };
    template <> inline constexpr guid guid_v<Windows::UI::IColorHelperStatics>{ 0x8504DBEA,0xFB6A,0x4144,{ 0xA6,0xC2,0x33,0x49,0x9C,0x92,0x84,0xF5 } };
    template <> inline constexpr guid guid_v<Windows::UI::IColorHelperStatics2>{ 0x24D9AF02,0x6EB0,0x4B94,{ 0x85,0x5C,0xFC,0xF0,0x81,0x8D,0x9A,0x16 } };
    template <> inline constexpr guid guid_v<Windows::UI::IColors>{ 0x9B8C9326,0x4CA6,0x4CE5,{ 0x89,0x94,0x9E,0xFF,0x65,0xCA,0xBD,0xCC } };
    template <> inline constexpr guid guid_v<Windows::UI::IColorsStatics>{ 0xCFF52E04,0xCCA6,0x4614,{ 0xA1,0x7E,0x75,0x49,0x10,0xC8,0x4A,0x99 } };
    template <> inline constexpr guid guid_v<Windows::UI::IUIContentRoot>{ 0x1DFCBAC6,0xB36B,0x5CB9,{ 0x9B,0xC5,0x2B,0x7A,0x0E,0xDD,0xC3,0x78 } };
    template <> inline constexpr guid guid_v<Windows::UI::IUIContext>{ 0xBB5CFACD,0x5BD8,0x59D0,{ 0xA5,0x9E,0x1C,0x17,0xA4,0xD6,0xD2,0x43 } };
    template <> struct default_interface<Windows::UI::ColorHelper>{ using type = Windows::UI::IColorHelper; };
    template <> struct default_interface<Windows::UI::Colors>{ using type = Windows::UI::IColors; };
    template <> struct default_interface<Windows::UI::UIContentRoot>{ using type = Windows::UI::IUIContentRoot; };
    template <> struct default_interface<Windows::UI::UIContext>{ using type = Windows::UI::IUIContext; };
    template <> struct abi<Windows::UI::IColorHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::IColorHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromArgb(uint8_t, uint8_t, uint8_t, uint8_t, struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::IColorHelperStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToDisplayName(struct struct_Windows_UI_Color, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::IColors>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::IColorsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AliceBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_AntiqueWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Aqua(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Aquamarine(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Azure(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Beige(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Bisque(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Black(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BlanchedAlmond(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Blue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BlueViolet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Brown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BurlyWood(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_CadetBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Chartreuse(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Chocolate(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Coral(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_CornflowerBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Cornsilk(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Crimson(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Cyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkCyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGoldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkKhaki(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkMagenta(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOliveGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOrange(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkOrchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSalmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkSlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DarkViolet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DeepPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DeepSkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DimGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_DodgerBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Firebrick(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FloralWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_ForestGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Fuchsia(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gainsboro(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_GhostWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gold(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Goldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Gray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Green(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_GreenYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Honeydew(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_HotPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_IndianRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Indigo(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Ivory(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Khaki(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Lavender(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LavenderBlush(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LawnGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LemonChiffon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightCoral(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightCyan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGoldenrodYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightPink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSalmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightSteelBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LightYellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Lime(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_LimeGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Linen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Magenta(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Maroon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumAquamarine(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumOrchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumPurple(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumSpringGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MediumVioletRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MidnightBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MintCream(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_MistyRose(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Moccasin(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_NavajoWhite(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Navy(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OldLace(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Olive(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OliveDrab(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Orange(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_OrangeRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Orchid(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleGoldenrod(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleTurquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PaleVioletRed(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PapayaWhip(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PeachPuff(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Peru(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Pink(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Plum(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_PowderBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Purple(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Red(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RosyBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RoyalBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SaddleBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Salmon(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SandyBrown(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SeaGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SeaShell(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Sienna(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Silver(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SkyBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SlateBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SlateGray(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Snow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SpringGreen(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_SteelBlue(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tan(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Teal(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Thistle(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Tomato(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Transparent(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Turquoise(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Violet(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Wheat(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_White(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_WhiteSmoke(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_Yellow(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_YellowGreen(struct struct_Windows_UI_Color*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::IUIContentRoot>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UIContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::IUIContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_UI_IColorHelper
    {
    };
    template <> struct consume<Windows::UI::IColorHelper>
    {
        template <typename D> using type = consume_Windows_UI_IColorHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColorHelperStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Color) FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const;
    };
    template <> struct consume<Windows::UI::IColorHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_IColorHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColorHelperStatics2
    {
        WINRT_IMPL_AUTO(hstring) ToDisplayName(Windows::UI::Color const& color) const;
    };
    template <> struct consume<Windows::UI::IColorHelperStatics2>
    {
        template <typename D> using type = consume_Windows_UI_IColorHelperStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColors
    {
    };
    template <> struct consume<Windows::UI::IColors>
    {
        template <typename D> using type = consume_Windows_UI_IColors<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IColorsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) AliceBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) AntiqueWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Aqua() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Aquamarine() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Azure() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Beige() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Bisque() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Black() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) BlanchedAlmond() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Blue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) BlueViolet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Brown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) BurlyWood() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) CadetBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Chartreuse() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Chocolate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Coral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) CornflowerBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Cornsilk() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Crimson() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Cyan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkCyan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkGoldenrod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkKhaki() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkMagenta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkOliveGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkOrange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkOrchid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkSalmon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkSeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkSlateBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkSlateGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkTurquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DarkViolet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DeepPink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DeepSkyBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DimGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) DodgerBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Firebrick() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) FloralWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) ForestGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Fuchsia() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Gainsboro() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) GhostWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Gold() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Goldenrod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Gray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Green() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) GreenYellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Honeydew() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) HotPink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) IndianRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Indigo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Ivory() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Khaki() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Lavender() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LavenderBlush() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LawnGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LemonChiffon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightCoral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightCyan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightGoldenrodYellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightPink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightSalmon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightSeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightSkyBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightSlateGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightSteelBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LightYellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Lime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) LimeGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Linen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Magenta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Maroon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumAquamarine() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumOrchid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumPurple() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumSeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumSlateBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumSpringGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumTurquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MediumVioletRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MidnightBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MintCream() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) MistyRose() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Moccasin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) NavajoWhite() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Navy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) OldLace() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Olive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) OliveDrab() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Orange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) OrangeRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Orchid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PaleGoldenrod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PaleGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PaleTurquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PaleVioletRed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PapayaWhip() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PeachPuff() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Peru() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Pink() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Plum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) PowderBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Purple() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Red() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) RosyBrown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) RoyalBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SaddleBrown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Salmon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SandyBrown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SeaGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SeaShell() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Sienna() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Silver() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SkyBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SlateBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SlateGray() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Snow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SpringGreen() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) SteelBlue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Tan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Teal() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Thistle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Tomato() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Transparent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Turquoise() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Violet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Wheat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) White() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) WhiteSmoke() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Yellow() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) YellowGreen() const;
    };
    template <> struct consume<Windows::UI::IColorsStatics>
    {
        template <typename D> using type = consume_Windows_UI_IColorsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IUIContentRoot
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::UIContext) UIContext() const;
    };
    template <> struct consume<Windows::UI::IUIContentRoot>
    {
        template <typename D> using type = consume_Windows_UI_IUIContentRoot<D>;
    };
    template <typename D>
    struct consume_Windows_UI_IUIContext
    {
    };
    template <> struct consume<Windows::UI::IUIContext>
    {
        template <typename D> using type = consume_Windows_UI_IUIContext<D>;
    };
    struct struct_Windows_UI_Color
    {
        uint8_t A;
        uint8_t R;
        uint8_t G;
        uint8_t B;
    };
    template <> struct abi<Windows::UI::Color>
    {
        using type = struct_Windows_UI_Color;
    };
}
#endif
