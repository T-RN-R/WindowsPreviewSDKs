// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Text_Core_0_H
#define WINRT_Windows_UI_Text_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    struct Rect;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Globalization
{
    struct Language;
}
WINRT_EXPORT namespace winrt::Windows::UI::Text
{
    enum class UnderlineType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement
{
    enum class UIElementType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Text::Core
{
    enum class CoreTextFormatUpdatingReason : int32_t
    {
        None = 0,
        CompositionUnconverted = 1,
        CompositionConverted = 2,
        CompositionTargetUnconverted = 3,
        CompositionTargetConverted = 4,
    };
    enum class CoreTextFormatUpdatingResult : int32_t
    {
        Succeeded = 0,
        Failed = 1,
    };
    enum class CoreTextInputPaneDisplayPolicy : int32_t
    {
        Automatic = 0,
        Manual = 1,
    };
    enum class CoreTextInputScope : int32_t
    {
        Default = 0,
        Url = 1,
        FilePath = 2,
        FileName = 3,
        EmailUserName = 4,
        EmailAddress = 5,
        UserName = 6,
        PersonalFullName = 7,
        PersonalNamePrefix = 8,
        PersonalGivenName = 9,
        PersonalMiddleName = 10,
        PersonalSurname = 11,
        PersonalNameSuffix = 12,
        Address = 13,
        AddressPostalCode = 14,
        AddressStreet = 15,
        AddressStateOrProvince = 16,
        AddressCity = 17,
        AddressCountryName = 18,
        AddressCountryShortName = 19,
        CurrencyAmountAndSymbol = 20,
        CurrencyAmount = 21,
        Date = 22,
        DateMonth = 23,
        DateDay = 24,
        DateYear = 25,
        DateMonthName = 26,
        DateDayName = 27,
        Number = 29,
        SingleCharacter = 30,
        Password = 31,
        TelephoneNumber = 32,
        TelephoneCountryCode = 33,
        TelephoneAreaCode = 34,
        TelephoneLocalNumber = 35,
        Time = 36,
        TimeHour = 37,
        TimeMinuteOrSecond = 38,
        NumberFullWidth = 39,
        AlphanumericHalfWidth = 40,
        AlphanumericFullWidth = 41,
        CurrencyChinese = 42,
        Bopomofo = 43,
        Hiragana = 44,
        KatakanaHalfWidth = 45,
        KatakanaFullWidth = 46,
        Hanja = 47,
        HangulHalfWidth = 48,
        HangulFullWidth = 49,
        Search = 50,
        Formula = 51,
        SearchIncremental = 52,
        ChineseHalfWidth = 53,
        ChineseFullWidth = 54,
        NativeScript = 55,
        Text = 57,
        Chat = 58,
        NameOrPhoneNumber = 59,
        EmailUserNameOrAddress = 60,
        Private = 61,
        Maps = 62,
        PasswordNumeric = 63,
        FormulaNumber = 67,
        ChatWithoutEmoji = 68,
        Digits = 28,
        PinNumeric = 64,
        PinAlphanumeric = 65,
    };
    enum class CoreTextSelectionUpdatingResult : int32_t
    {
        Succeeded = 0,
        Failed = 1,
    };
    enum class CoreTextTextUpdatingResult : int32_t
    {
        Succeeded = 0,
        Failed = 1,
    };
    enum class TextCompositionKind : int32_t
    {
        Default = 0,
        Suggestion = 1,
    };
    struct ICoreTextCompositionCompletedEventArgs;
    struct ICoreTextCompositionSegment;
    struct ICoreTextCompositionStartedEventArgs;
    struct ICoreTextEditContext;
    struct ICoreTextEditContext2;
    struct ICoreTextFormatUpdatingEventArgs;
    struct ICoreTextLayoutBounds;
    struct ICoreTextLayoutRequest;
    struct ICoreTextLayoutRequest2;
    struct ICoreTextLayoutRequestedEventArgs;
    struct ICoreTextSelectionRequest;
    struct ICoreTextSelectionRequestedEventArgs;
    struct ICoreTextSelectionUpdatingEventArgs;
    struct ICoreTextServicesManager;
    struct ICoreTextServicesManagerStatics;
    struct ICoreTextServicesManagerStatics2;
    struct ICoreTextServicesStatics;
    struct ICoreTextTextRequest;
    struct ICoreTextTextRequestedEventArgs;
    struct ICoreTextTextUpdatingEventArgs;
    struct CoreTextCompositionCompletedEventArgs;
    struct CoreTextCompositionSegment;
    struct CoreTextCompositionStartedEventArgs;
    struct CoreTextEditContext;
    struct CoreTextFormatUpdatingEventArgs;
    struct CoreTextLayoutBounds;
    struct CoreTextLayoutRequest;
    struct CoreTextLayoutRequestedEventArgs;
    struct CoreTextSelectionRequest;
    struct CoreTextSelectionRequestedEventArgs;
    struct CoreTextSelectionUpdatingEventArgs;
    struct CoreTextServicesConstants;
    struct CoreTextServicesManager;
    struct CoreTextTextRequest;
    struct CoreTextTextRequestedEventArgs;
    struct CoreTextTextUpdatingEventArgs;
    struct CoreTextRange;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextCompositionSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextEditContext>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextEditContext2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextLayoutBounds>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextLayoutRequest>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextLayoutRequest2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextSelectionRequest>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextServicesManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextServicesManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextServicesManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextServicesStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextTextRequest>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextCompositionSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextEditContext>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextLayoutBounds>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextLayoutRequest>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextSelectionRequest>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextServicesConstants>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextServicesManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextTextRequest>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextTextRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextFormatUpdatingReason>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextFormatUpdatingResult>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextInputScope>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextSelectionUpdatingResult>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextTextUpdatingResult>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::TextCompositionKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Text::Core::CoreTextRange>{ using type = struct_category<int32_t, int32_t>; };
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> = L"Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextCompositionSegment> = L"Windows.UI.Text.Core.CoreTextCompositionSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> = L"Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextEditContext> = L"Windows.UI.Text.Core.CoreTextEditContext";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> = L"Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextLayoutBounds> = L"Windows.UI.Text.Core.CoreTextLayoutBounds";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextLayoutRequest> = L"Windows.UI.Text.Core.CoreTextLayoutRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> = L"Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextSelectionRequest> = L"Windows.UI.Text.Core.CoreTextSelectionRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> = L"Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> = L"Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextServicesConstants> = L"Windows.UI.Text.Core.CoreTextServicesConstants";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextServicesManager> = L"Windows.UI.Text.Core.CoreTextServicesManager";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextTextRequest> = L"Windows.UI.Text.Core.CoreTextTextRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> = L"Windows.UI.Text.Core.CoreTextTextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> = L"Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextFormatUpdatingReason> = L"Windows.UI.Text.Core.CoreTextFormatUpdatingReason";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextFormatUpdatingResult> = L"Windows.UI.Text.Core.CoreTextFormatUpdatingResult";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy> = L"Windows.UI.Text.Core.CoreTextInputPaneDisplayPolicy";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextInputScope> = L"Windows.UI.Text.Core.CoreTextInputScope";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextSelectionUpdatingResult> = L"Windows.UI.Text.Core.CoreTextSelectionUpdatingResult";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextTextUpdatingResult> = L"Windows.UI.Text.Core.CoreTextTextUpdatingResult";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::TextCompositionKind> = L"Windows.UI.Text.Core.TextCompositionKind";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::CoreTextRange> = L"Windows.UI.Text.Core.CoreTextRange";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs> = L"Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextCompositionSegment> = L"Windows.UI.Text.Core.ICoreTextCompositionSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs> = L"Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextEditContext> = L"Windows.UI.Text.Core.ICoreTextEditContext";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextEditContext2> = L"Windows.UI.Text.Core.ICoreTextEditContext2";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs> = L"Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextLayoutBounds> = L"Windows.UI.Text.Core.ICoreTextLayoutBounds";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextLayoutRequest> = L"Windows.UI.Text.Core.ICoreTextLayoutRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextLayoutRequest2> = L"Windows.UI.Text.Core.ICoreTextLayoutRequest2";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs> = L"Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextSelectionRequest> = L"Windows.UI.Text.Core.ICoreTextSelectionRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs> = L"Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs> = L"Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextServicesManager> = L"Windows.UI.Text.Core.ICoreTextServicesManager";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextServicesManagerStatics> = L"Windows.UI.Text.Core.ICoreTextServicesManagerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextServicesManagerStatics2> = L"Windows.UI.Text.Core.ICoreTextServicesManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextServicesStatics> = L"Windows.UI.Text.Core.ICoreTextServicesStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextTextRequest> = L"Windows.UI.Text.Core.ICoreTextTextRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs> = L"Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs> = L"Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs";
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs>{ 0x1F34EBB6,0xB79F,0x4121,{ 0xA5,0xE7,0xFD,0xA9,0xB8,0x61,0x6E,0x30 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextCompositionSegment>{ 0x776C6BD9,0x4EAD,0x4DA7,{ 0x8F,0x47,0x3A,0x88,0xB5,0x23,0xCC,0x34 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs>{ 0x276B16A9,0x64E7,0x4AB0,{ 0xBC,0x4B,0xA0,0x2D,0x73,0x83,0x5B,0xFB } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextEditContext>{ 0xBF6608AF,0x4041,0x47C3,{ 0xB2,0x63,0xA9,0x18,0xEB,0x5E,0xAE,0xF2 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextEditContext2>{ 0xB1867DBB,0x083B,0x49E1,{ 0xB2,0x81,0x2B,0x35,0xD6,0x2B,0xF4,0x66 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs>{ 0x7310BD33,0xB4A8,0x43B1,{ 0xB3,0x7B,0x07,0x24,0xD4,0xAC,0xA7,0xAB } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextLayoutBounds>{ 0xE972C974,0x4436,0x4917,{ 0x80,0xD0,0xA5,0x25,0xE4,0xCA,0x67,0x80 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextLayoutRequest>{ 0x2555A8CC,0x51FD,0x4F03,{ 0x98,0xBF,0xAC,0x78,0x17,0x4D,0x68,0xE0 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextLayoutRequest2>{ 0x676DE624,0xCD3D,0x4BCD,{ 0xBF,0x01,0x7F,0x71,0x10,0x95,0x45,0x11 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs>{ 0xB1DC6AE0,0x9A7B,0x4E9E,{ 0xA5,0x66,0x4A,0x6B,0x5F,0x8A,0xD6,0x76 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextSelectionRequest>{ 0xF0A70403,0x208B,0x4301,{ 0x88,0x3C,0x74,0xCA,0x74,0x85,0xFD,0x8D } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs>{ 0x13C6682B,0xF614,0x421A,{ 0x8F,0x4B,0x9E,0xC8,0xA5,0xA3,0x7F,0xCD } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs>{ 0xD445839F,0xFE7F,0x4BD5,{ 0x8A,0x26,0x09,0x22,0xC1,0xB3,0xE6,0x39 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextServicesManager>{ 0xC2507D83,0x6E0A,0x4A8A,{ 0xBD,0xF8,0x19,0x48,0x87,0x48,0x54,0xBA } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextServicesManagerStatics>{ 0x1520A388,0xE2CF,0x4D65,{ 0xAE,0xB9,0xB3,0x2D,0x86,0xFE,0x39,0xB9 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextServicesManagerStatics2>{ 0xCC0F5D2D,0xEB7D,0x50C7,{ 0x85,0x32,0x02,0x49,0x20,0x81,0xFA,0x31 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextServicesStatics>{ 0x91859A46,0xECCF,0x47A4,{ 0x8A,0xE7,0x09,0x8A,0x9C,0x6F,0xBB,0x15 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextTextRequest>{ 0x50D950A9,0xF51E,0x4CC1,{ 0x8C,0xA1,0xE6,0x34,0x6D,0x1A,0x61,0xBE } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs>{ 0xF096A2D0,0x41C6,0x4C02,{ 0x8B,0x1A,0xD9,0x53,0xB0,0x0C,0xAB,0xB3 } };
    template <> inline constexpr guid guid_v<Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs>{ 0xEEA7918D,0xCC2B,0x4F03,{ 0x8F,0xF6,0x02,0xFD,0x21,0x7D,0xB4,0x50 } };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextCompositionSegment>{ using type = Windows::UI::Text::Core::ICoreTextCompositionSegment; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextEditContext>{ using type = Windows::UI::Text::Core::ICoreTextEditContext; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextLayoutBounds>{ using type = Windows::UI::Text::Core::ICoreTextLayoutBounds; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextLayoutRequest>{ using type = Windows::UI::Text::Core::ICoreTextLayoutRequest; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextSelectionRequest>{ using type = Windows::UI::Text::Core::ICoreTextSelectionRequest; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextServicesManager>{ using type = Windows::UI::Text::Core::ICoreTextServicesManager; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextTextRequest>{ using type = Windows::UI::Text::Core::ICoreTextTextRequest; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextTextRequestedEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs>{ using type = Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs; };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CompositionSegments(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextCompositionSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreconversionString(void**) noexcept = 0;
            virtual int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextEditContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_InputScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InputScope(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsReadOnly(bool) noexcept = 0;
            virtual int32_t __stdcall get_InputPaneDisplayPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InputPaneDisplayPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_TextRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TextRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SelectionRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LayoutRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LayoutRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TextUpdating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TextUpdating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SelectionUpdating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionUpdating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FormatUpdating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FormatUpdating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CompositionStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CompositionStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CompositionCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CompositionCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FocusRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FocusRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyFocusEnter() noexcept = 0;
            virtual int32_t __stdcall NotifyFocusLeave() noexcept = 0;
            virtual int32_t __stdcall NotifyTextChanged(struct struct_Windows_UI_Text_Core_CoreTextRange, int32_t, struct struct_Windows_UI_Text_Core_CoreTextRange) noexcept = 0;
            virtual int32_t __stdcall NotifySelectionChanged(struct struct_Windows_UI_Text_Core_CoreTextRange) noexcept = 0;
            virtual int32_t __stdcall NotifyLayoutChanged() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextEditContext2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_NotifyFocusLeaveCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NotifyFocusLeaveCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall get_TextColor(void**) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnderlineColor(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnderlineType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Result(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Result(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextLayoutBounds>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextBounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_TextBounds(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_ControlBounds(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_ControlBounds(Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextLayoutRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall get_LayoutBounds(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextLayoutRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LayoutBoundsVisualPixels(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextSelectionRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Selection(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall put_Selection(struct struct_Windows_UI_Text_Core_CoreTextRange) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Selection(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall get_Result(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Result(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextServicesManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall add_InputLanguageChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InputLanguageChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateEditContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextServicesManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextServicesManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextCompositionKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextServicesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HiddenCharacter(char16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextTextRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewSelection(struct struct_Windows_UI_Text_Core_CoreTextRange*) noexcept = 0;
            virtual int32_t __stdcall get_InputLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Result(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Result(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment>) CompositionSegments() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextCompositionSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PreconversionString() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Range() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextCompositionSegment>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextCompositionSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextEditContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextInputScope) InputScope() const;
        WINRT_IMPL_AUTO(void) InputScope(Windows::UI::Text::Core::CoreTextInputScope const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReadOnly() const;
        WINRT_IMPL_AUTO(void) IsReadOnly(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy) InputPaneDisplayPolicy() const;
        WINRT_IMPL_AUTO(void) InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) TextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> const& handler) const;
        using TextRequested_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_TextRequested>;
        [[nodiscard]] TextRequested_revoker TextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TextRequested(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SelectionRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> const& handler) const;
        using SelectionRequested_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_SelectionRequested>;
        [[nodiscard]] SelectionRequested_revoker SelectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SelectionRequested(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) LayoutRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> const& handler) const;
        using LayoutRequested_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_LayoutRequested>;
        [[nodiscard]] LayoutRequested_revoker LayoutRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LayoutRequested(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TextUpdating(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> const& handler) const;
        using TextUpdating_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_TextUpdating>;
        [[nodiscard]] TextUpdating_revoker TextUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TextUpdating(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SelectionUpdating(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> const& handler) const;
        using SelectionUpdating_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_SelectionUpdating>;
        [[nodiscard]] SelectionUpdating_revoker SelectionUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SelectionUpdating(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) FormatUpdating(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> const& handler) const;
        using FormatUpdating_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_FormatUpdating>;
        [[nodiscard]] FormatUpdating_revoker FormatUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FormatUpdating(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CompositionStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> const& handler) const;
        using CompositionStarted_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_CompositionStarted>;
        [[nodiscard]] CompositionStarted_revoker CompositionStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CompositionStarted(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CompositionCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> const& handler) const;
        using CompositionCompleted_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_CompositionCompleted>;
        [[nodiscard]] CompositionCompleted_revoker CompositionCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CompositionCompleted(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) FocusRemoved(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const;
        using FocusRemoved_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_FocusRemoved>;
        [[nodiscard]] FocusRemoved_revoker FocusRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) FocusRemoved(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(void) NotifyFocusEnter() const;
        WINRT_IMPL_AUTO(void) NotifyFocusLeave() const;
        WINRT_IMPL_AUTO(void) NotifyTextChanged(Windows::UI::Text::Core::CoreTextRange const& modifiedRange, int32_t newLength, Windows::UI::Text::Core::CoreTextRange const& newSelection) const;
        WINRT_IMPL_AUTO(void) NotifySelectionChanged(Windows::UI::Text::Core::CoreTextRange const& selection) const;
        WINRT_IMPL_AUTO(void) NotifyLayoutChanged() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextEditContext>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextEditContext<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextEditContext2
    {
        WINRT_IMPL_AUTO(winrt::event_token) NotifyFocusLeaveCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const;
        using NotifyFocusLeaveCompleted_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextEditContext2, &impl::abi_t<Windows::UI::Text::Core::ICoreTextEditContext2>::remove_NotifyFocusLeaveCompleted>;
        [[nodiscard]] NotifyFocusLeaveCompleted_revoker NotifyFocusLeaveCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) NotifyFocusLeaveCompleted(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextEditContext2>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextEditContext2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Range() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType>) TextColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType>) BackgroundColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType>) UnderlineColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Text::UnderlineType>) UnderlineType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextFormatUpdatingReason) Reason() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextFormatUpdatingResult) Result() const;
        WINRT_IMPL_AUTO(void) Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextLayoutBounds
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) TextBounds() const;
        WINRT_IMPL_AUTO(void) TextBounds(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) ControlBounds() const;
        WINRT_IMPL_AUTO(void) ControlBounds(Windows::Foundation::Rect const& value) const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextLayoutBounds>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextLayoutBounds<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextLayoutRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Range() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextLayoutBounds) LayoutBounds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextLayoutRequest>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextLayoutRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextLayoutRequest2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextLayoutBounds) LayoutBoundsVisualPixels() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextLayoutRequest2>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextLayoutRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextLayoutRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextLayoutRequest) Request() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextLayoutRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextSelectionRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Selection() const;
        WINRT_IMPL_AUTO(void) Selection(Windows::UI::Text::Core::CoreTextRange const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextSelectionRequest>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextSelectionRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextSelectionRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextSelectionRequest) Request() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextSelectionRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Selection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult) Result() const;
        WINRT_IMPL_AUTO(void) Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextServicesManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Globalization::Language) InputLanguage() const;
        WINRT_IMPL_AUTO(winrt::event_token) InputLanguageChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::Foundation::IInspectable> const& handler) const;
        using InputLanguageChanged_revoker = impl::event_revoker<Windows::UI::Text::Core::ICoreTextServicesManager, &impl::abi_t<Windows::UI::Text::Core::ICoreTextServicesManager>::remove_InputLanguageChanged>;
        [[nodiscard]] InputLanguageChanged_revoker InputLanguageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) InputLanguageChanged(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextEditContext) CreateEditContext() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextServicesManager>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextServicesManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextServicesManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextServicesManager) GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextServicesManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextServicesManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextServicesManagerStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::TextCompositionKind) TextCompositionKind() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextServicesManagerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextServicesManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextServicesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(char16_t) HiddenCharacter() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextServicesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextServicesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextTextRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Range() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        WINRT_IMPL_AUTO(void) Text(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextTextRequest>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextTextRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextTextRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextTextRequest) Request() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextTextRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) Range() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextRange) NewSelection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Globalization::Language) InputLanguage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Text::Core::CoreTextTextUpdatingResult) Result() const;
        WINRT_IMPL_AUTO(void) Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCanceled() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>;
    };
    struct struct_Windows_UI_Text_Core_CoreTextRange
    {
        int32_t StartCaretPosition;
        int32_t EndCaretPosition;
    };
    template <> struct abi<Windows::UI::Text::Core::CoreTextRange>
    {
        using type = struct_Windows_UI_Text_Core_CoreTextRange;
    };
}
#endif
