// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Effects_0_H
#define WINRT_Windows_Graphics_Effects_0_H
WINRT_EXPORT namespace winrt::Windows::Graphics::Effects
{
    struct IGraphicsEffect;
    struct IGraphicsEffectSource;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Effects::IGraphicsEffect>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Effects::IGraphicsEffectSource>{ using type = interface_category; };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Graphics::Effects::IGraphicsEffect>{ L"Windows.Graphics.Effects.IGraphicsEffect" };
    template <> inline constexpr auto& name_v<Windows::Graphics::Effects::IGraphicsEffectSource>{ L"Windows.Graphics.Effects.IGraphicsEffectSource" };
#endif
    template <> inline constexpr guid guid_v<Windows::Graphics::Effects::IGraphicsEffect>{ 0xCB51C0CE,0x8FE6,0x4636,{ 0xB2,0x02,0x86,0x1F,0xAA,0x07,0xD8,0xF3 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Effects::IGraphicsEffectSource>{ 0x2D8F9DDC,0x4339,0x4EB9,{ 0x92,0x16,0xF9,0xDE,0xB7,0x56,0x58,0xA2 } };
    template <> struct abi<Windows::Graphics::Effects::IGraphicsEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Effects::IGraphicsEffectSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Effects_IGraphicsEffect
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Graphics::Effects::IGraphicsEffect>
    {
        template <typename D> using type = consume_Windows_Graphics_Effects_IGraphicsEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Effects_IGraphicsEffectSource
    {
    };
    template <> struct consume<Windows::Graphics::Effects::IGraphicsEffectSource>
    {
        template <typename D> using type = consume_Windows_Graphics_Effects_IGraphicsEffectSource<D>;
    };
}
#endif
