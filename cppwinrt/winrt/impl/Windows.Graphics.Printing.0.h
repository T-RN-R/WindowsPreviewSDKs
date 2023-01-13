// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_0_H
#define WINRT_Windows_Graphics_Printing_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackagePropertySet;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing
{
    enum class PrintBinding : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        None = 3,
        Bale = 4,
        BindBottom = 5,
        BindLeft = 6,
        BindRight = 7,
        BindTop = 8,
        Booklet = 9,
        EdgeStitchBottom = 10,
        EdgeStitchLeft = 11,
        EdgeStitchRight = 12,
        EdgeStitchTop = 13,
        Fold = 14,
        JogOffset = 15,
        Trim = 16,
    };
    enum class PrintBordering : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        Bordered = 3,
        Borderless = 4,
    };
    enum class PrintCollation : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        Collated = 3,
        Uncollated = 4,
    };
    enum class PrintColorMode : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        Color = 3,
        Grayscale = 4,
        Monochrome = 5,
    };
    enum class PrintDuplex : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        OneSided = 3,
        TwoSidedShortEdge = 4,
        TwoSidedLongEdge = 5,
    };
    enum class PrintHolePunch : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        None = 3,
        LeftEdge = 4,
        RightEdge = 5,
        TopEdge = 6,
        BottomEdge = 7,
    };
    enum class PrintMediaSize : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        BusinessCard = 3,
        CreditCard = 4,
        IsoA0 = 5,
        IsoA1 = 6,
        IsoA10 = 7,
        IsoA2 = 8,
        IsoA3 = 9,
        IsoA3Extra = 10,
        IsoA3Rotated = 11,
        IsoA4 = 12,
        IsoA4Extra = 13,
        IsoA4Rotated = 14,
        IsoA5 = 15,
        IsoA5Extra = 16,
        IsoA5Rotated = 17,
        IsoA6 = 18,
        IsoA6Rotated = 19,
        IsoA7 = 20,
        IsoA8 = 21,
        IsoA9 = 22,
        IsoB0 = 23,
        IsoB1 = 24,
        IsoB10 = 25,
        IsoB2 = 26,
        IsoB3 = 27,
        IsoB4 = 28,
        IsoB4Envelope = 29,
        IsoB5Envelope = 30,
        IsoB5Extra = 31,
        IsoB7 = 32,
        IsoB8 = 33,
        IsoB9 = 34,
        IsoC0 = 35,
        IsoC1 = 36,
        IsoC10 = 37,
        IsoC2 = 38,
        IsoC3 = 39,
        IsoC3Envelope = 40,
        IsoC4 = 41,
        IsoC4Envelope = 42,
        IsoC5 = 43,
        IsoC5Envelope = 44,
        IsoC6 = 45,
        IsoC6C5Envelope = 46,
        IsoC6Envelope = 47,
        IsoC7 = 48,
        IsoC8 = 49,
        IsoC9 = 50,
        IsoDLEnvelope = 51,
        IsoDLEnvelopeRotated = 52,
        IsoSRA3 = 53,
        Japan2LPhoto = 54,
        JapanChou3Envelope = 55,
        JapanChou3EnvelopeRotated = 56,
        JapanChou4Envelope = 57,
        JapanChou4EnvelopeRotated = 58,
        JapanDoubleHagakiPostcard = 59,
        JapanDoubleHagakiPostcardRotated = 60,
        JapanHagakiPostcard = 61,
        JapanHagakiPostcardRotated = 62,
        JapanKaku2Envelope = 63,
        JapanKaku2EnvelopeRotated = 64,
        JapanKaku3Envelope = 65,
        JapanKaku3EnvelopeRotated = 66,
        JapanLPhoto = 67,
        JapanQuadrupleHagakiPostcard = 68,
        JapanYou1Envelope = 69,
        JapanYou2Envelope = 70,
        JapanYou3Envelope = 71,
        JapanYou4Envelope = 72,
        JapanYou4EnvelopeRotated = 73,
        JapanYou6Envelope = 74,
        JapanYou6EnvelopeRotated = 75,
        JisB0 = 76,
        JisB1 = 77,
        JisB10 = 78,
        JisB2 = 79,
        JisB3 = 80,
        JisB4 = 81,
        JisB4Rotated = 82,
        JisB5 = 83,
        JisB5Rotated = 84,
        JisB6 = 85,
        JisB6Rotated = 86,
        JisB7 = 87,
        JisB8 = 88,
        JisB9 = 89,
        NorthAmerica10x11 = 90,
        NorthAmerica10x12 = 91,
        NorthAmerica10x14 = 92,
        NorthAmerica11x17 = 93,
        NorthAmerica14x17 = 94,
        NorthAmerica4x6 = 95,
        NorthAmerica4x8 = 96,
        NorthAmerica5x7 = 97,
        NorthAmerica8x10 = 98,
        NorthAmerica9x11 = 99,
        NorthAmericaArchitectureASheet = 100,
        NorthAmericaArchitectureBSheet = 101,
        NorthAmericaArchitectureCSheet = 102,
        NorthAmericaArchitectureDSheet = 103,
        NorthAmericaArchitectureESheet = 104,
        NorthAmericaCSheet = 105,
        NorthAmericaDSheet = 106,
        NorthAmericaESheet = 107,
        NorthAmericaExecutive = 108,
        NorthAmericaGermanLegalFanfold = 109,
        NorthAmericaGermanStandardFanfold = 110,
        NorthAmericaLegal = 111,
        NorthAmericaLegalExtra = 112,
        NorthAmericaLetter = 113,
        NorthAmericaLetterExtra = 114,
        NorthAmericaLetterPlus = 115,
        NorthAmericaLetterRotated = 116,
        NorthAmericaMonarchEnvelope = 117,
        NorthAmericaNote = 118,
        NorthAmericaNumber10Envelope = 119,
        NorthAmericaNumber10EnvelopeRotated = 120,
        NorthAmericaNumber11Envelope = 121,
        NorthAmericaNumber12Envelope = 122,
        NorthAmericaNumber14Envelope = 123,
        NorthAmericaNumber9Envelope = 124,
        NorthAmericaPersonalEnvelope = 125,
        NorthAmericaQuarto = 126,
        NorthAmericaStatement = 127,
        NorthAmericaSuperA = 128,
        NorthAmericaSuperB = 129,
        NorthAmericaTabloid = 130,
        NorthAmericaTabloidExtra = 131,
        OtherMetricA3Plus = 132,
        OtherMetricA4Plus = 133,
        OtherMetricFolio = 134,
        OtherMetricInviteEnvelope = 135,
        OtherMetricItalianEnvelope = 136,
        Prc10Envelope = 137,
        Prc10EnvelopeRotated = 138,
        Prc16K = 139,
        Prc16KRotated = 140,
        Prc1Envelope = 141,
        Prc1EnvelopeRotated = 142,
        Prc2Envelope = 143,
        Prc2EnvelopeRotated = 144,
        Prc32K = 145,
        Prc32KBig = 146,
        Prc32KRotated = 147,
        Prc3Envelope = 148,
        Prc3EnvelopeRotated = 149,
        Prc4Envelope = 150,
        Prc4EnvelopeRotated = 151,
        Prc5Envelope = 152,
        Prc5EnvelopeRotated = 153,
        Prc6Envelope = 154,
        Prc6EnvelopeRotated = 155,
        Prc7Envelope = 156,
        Prc7EnvelopeRotated = 157,
        Prc8Envelope = 158,
        Prc8EnvelopeRotated = 159,
        Prc9Envelope = 160,
        Prc9EnvelopeRotated = 161,
        Roll04Inch = 162,
        Roll06Inch = 163,
        Roll08Inch = 164,
        Roll12Inch = 165,
        Roll15Inch = 166,
        Roll18Inch = 167,
        Roll22Inch = 168,
        Roll24Inch = 169,
        Roll30Inch = 170,
        Roll36Inch = 171,
        Roll54Inch = 172,
    };
    enum class PrintMediaType : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        AutoSelect = 3,
        Archival = 4,
        BackPrintFilm = 5,
        Bond = 6,
        CardStock = 7,
        Continuous = 8,
        EnvelopePlain = 9,
        EnvelopeWindow = 10,
        Fabric = 11,
        HighResolution = 12,
        Label = 13,
        MultiLayerForm = 14,
        MultiPartForm = 15,
        Photographic = 16,
        PhotographicFilm = 17,
        PhotographicGlossy = 18,
        PhotographicHighGloss = 19,
        PhotographicMatte = 20,
        PhotographicSatin = 21,
        PhotographicSemiGloss = 22,
        Plain = 23,
        Screen = 24,
        ScreenPaged = 25,
        Stationery = 26,
        TabStockFull = 27,
        TabStockPreCut = 28,
        Transparency = 29,
        TShirtTransfer = 30,
        None = 31,
    };
    enum class PrintOrientation : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        Portrait = 3,
        PortraitFlipped = 4,
        Landscape = 5,
        LandscapeFlipped = 6,
    };
    enum class PrintQuality : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        Automatic = 3,
        Draft = 4,
        Fax = 5,
        High = 6,
        Normal = 7,
        Photographic = 8,
        Text = 9,
    };
    enum class PrintStaple : int32_t
    {
        Default = 0,
        NotAvailable = 1,
        PrinterCustom = 2,
        None = 3,
        StapleTopLeft = 4,
        StapleTopRight = 5,
        StapleBottomLeft = 6,
        StapleBottomRight = 7,
        StapleDualLeft = 8,
        StapleDualRight = 9,
        StapleDualTop = 10,
        StapleDualBottom = 11,
        SaddleStitch = 12,
    };
    enum class PrintTaskCompletion : int32_t
    {
        Abandoned = 0,
        Canceled = 1,
        Failed = 2,
        Submitted = 3,
    };
    struct IPrintDocumentSource;
    struct IPrintManager;
    struct IPrintManagerStatic;
    struct IPrintManagerStatic2;
    struct IPrintPageInfo;
    struct IPrintPageRange;
    struct IPrintPageRangeFactory;
    struct IPrintPageRangeOptions;
    struct IPrintTask;
    struct IPrintTask2;
    struct IPrintTaskCompletedEventArgs;
    struct IPrintTaskOptions;
    struct IPrintTaskOptions2;
    struct IPrintTaskOptionsCore;
    struct IPrintTaskOptionsCoreProperties;
    struct IPrintTaskOptionsCoreUIConfiguration;
    struct IPrintTaskProgressingEventArgs;
    struct IPrintTaskRequest;
    struct IPrintTaskRequestedDeferral;
    struct IPrintTaskRequestedEventArgs;
    struct IPrintTaskSourceRequestedArgs;
    struct IPrintTaskSourceRequestedDeferral;
    struct IPrintTaskTargetDeviceSupport;
    struct IStandardPrintTaskOptionsStatic;
    struct IStandardPrintTaskOptionsStatic2;
    struct IStandardPrintTaskOptionsStatic3;
    struct PrintManager;
    struct PrintPageInfo;
    struct PrintPageRange;
    struct PrintPageRangeOptions;
    struct PrintTask;
    struct PrintTaskCompletedEventArgs;
    struct PrintTaskOptions;
    struct PrintTaskProgressingEventArgs;
    struct PrintTaskRequest;
    struct PrintTaskRequestedDeferral;
    struct PrintTaskRequestedEventArgs;
    struct PrintTaskSourceRequestedArgs;
    struct PrintTaskSourceRequestedDeferral;
    struct StandardPrintTaskOptions;
    struct PrintPageDescription;
    struct PrintTaskSourceRequestedHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing::IPrintDocumentSource>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintManager>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintManagerStatic>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintManagerStatic2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintPageInfo>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintPageRange>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintPageRangeFactory>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintPageRangeOptions>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTask>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTask2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskOptions>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskOptions2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskOptionsCore>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskRequest>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintManager>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintPageInfo>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintPageRange>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintPageRangeOptions>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTask>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskOptions>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskProgressingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskRequest>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskRequestedDeferral>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::StandardPrintTaskOptions>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintBinding>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintBordering>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintCollation>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintColorMode>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintDuplex>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintHolePunch>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintMediaSize>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintMediaType>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintOrientation>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintQuality>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintStaple>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskCompletion>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintPageDescription>{ using type = struct_category<Windows::Foundation::Size, Windows::Foundation::Rect, uint32_t, uint32_t>; };
    template <> struct category<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintManager> = L"Windows.Graphics.Printing.PrintManager";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintPageInfo> = L"Windows.Graphics.Printing.PrintPageInfo";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintPageRange> = L"Windows.Graphics.Printing.PrintPageRange";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintPageRangeOptions> = L"Windows.Graphics.Printing.PrintPageRangeOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTask> = L"Windows.Graphics.Printing.PrintTask";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskCompletedEventArgs> = L"Windows.Graphics.Printing.PrintTaskCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskOptions> = L"Windows.Graphics.Printing.PrintTaskOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskProgressingEventArgs> = L"Windows.Graphics.Printing.PrintTaskProgressingEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskRequest> = L"Windows.Graphics.Printing.PrintTaskRequest";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskRequestedDeferral> = L"Windows.Graphics.Printing.PrintTaskRequestedDeferral";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskRequestedEventArgs> = L"Windows.Graphics.Printing.PrintTaskRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs> = L"Windows.Graphics.Printing.PrintTaskSourceRequestedArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral> = L"Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::StandardPrintTaskOptions> = L"Windows.Graphics.Printing.StandardPrintTaskOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintBinding> = L"Windows.Graphics.Printing.PrintBinding";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintBordering> = L"Windows.Graphics.Printing.PrintBordering";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintCollation> = L"Windows.Graphics.Printing.PrintCollation";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintColorMode> = L"Windows.Graphics.Printing.PrintColorMode";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintDuplex> = L"Windows.Graphics.Printing.PrintDuplex";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintHolePunch> = L"Windows.Graphics.Printing.PrintHolePunch";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintMediaSize> = L"Windows.Graphics.Printing.PrintMediaSize";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintMediaType> = L"Windows.Graphics.Printing.PrintMediaType";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintOrientation> = L"Windows.Graphics.Printing.PrintOrientation";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintQuality> = L"Windows.Graphics.Printing.PrintQuality";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintStaple> = L"Windows.Graphics.Printing.PrintStaple";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskCompletion> = L"Windows.Graphics.Printing.PrintTaskCompletion";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintPageDescription> = L"Windows.Graphics.Printing.PrintPageDescription";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintDocumentSource> = L"Windows.Graphics.Printing.IPrintDocumentSource";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintManager> = L"Windows.Graphics.Printing.IPrintManager";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintManagerStatic> = L"Windows.Graphics.Printing.IPrintManagerStatic";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintManagerStatic2> = L"Windows.Graphics.Printing.IPrintManagerStatic2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintPageInfo> = L"Windows.Graphics.Printing.IPrintPageInfo";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintPageRange> = L"Windows.Graphics.Printing.IPrintPageRange";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintPageRangeFactory> = L"Windows.Graphics.Printing.IPrintPageRangeFactory";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintPageRangeOptions> = L"Windows.Graphics.Printing.IPrintPageRangeOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTask> = L"Windows.Graphics.Printing.IPrintTask";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTask2> = L"Windows.Graphics.Printing.IPrintTask2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> = L"Windows.Graphics.Printing.IPrintTaskCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskOptions> = L"Windows.Graphics.Printing.IPrintTaskOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskOptions2> = L"Windows.Graphics.Printing.IPrintTaskOptions2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskOptionsCore> = L"Windows.Graphics.Printing.IPrintTaskOptionsCore";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> = L"Windows.Graphics.Printing.IPrintTaskProgressingEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskRequest> = L"Windows.Graphics.Printing.IPrintTaskRequest";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskRequestedDeferral> = L"Windows.Graphics.Printing.IPrintTaskRequestedDeferral";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> = L"Windows.Graphics.Printing.IPrintTaskRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> = L"Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic3";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler> = L"Windows.Graphics.Printing.PrintTaskSourceRequestedHandler";
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintDocumentSource>{ 0xDEDC0C30,0xF1EB,0x47DF,{ 0xAA,0xE6,0xED,0x54,0x27,0x51,0x1F,0x01 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintManager>{ 0xFF2A9694,0x8C99,0x44FD,{ 0xAE,0x4A,0x19,0xD9,0xAA,0x9A,0x0F,0x0A } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintManagerStatic>{ 0x58185DCD,0xE634,0x4654,{ 0x84,0xF0,0xE0,0x15,0x2A,0x82,0x17,0xAC } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintManagerStatic2>{ 0x35A99955,0xE6AB,0x4139,{ 0x9A,0xBD,0xB8,0x6A,0x72,0x9B,0x35,0x98 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintPageInfo>{ 0xDD4BE9C9,0xA6A1,0x4ADA,{ 0x93,0x0E,0xDA,0x87,0x2A,0x4F,0x23,0xD3 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintPageRange>{ 0xF8A06C54,0x6E7C,0x51C5,{ 0x57,0xFD,0x06,0x60,0xC2,0xD7,0x15,0x13 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintPageRangeFactory>{ 0x408FD45F,0xE047,0x5F85,{ 0x71,0x29,0xFB,0x08,0x5A,0x4F,0xAD,0x14 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintPageRangeOptions>{ 0xCE6DB728,0x1357,0x46B2,{ 0xA9,0x23,0x79,0xF9,0x95,0xF4,0x48,0xFC } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTask>{ 0x61D80247,0x6CF6,0x4FAD,{ 0x84,0xE2,0xA5,0xE8,0x2E,0x2D,0x4C,0xEB } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTask2>{ 0x36234877,0x3E53,0x4D9D,{ 0x8F,0x5E,0x31,0x6A,0xC8,0xDE,0xDA,0xE1 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>{ 0x5BCD34AF,0x24E9,0x4C10,{ 0x8D,0x07,0x14,0xC3,0x46,0xBA,0x3F,0xCE } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskOptions>{ 0x5A0A66BB,0xD289,0x41BB,{ 0x96,0xDD,0x57,0xE2,0x83,0x38,0xAE,0x3F } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskOptions2>{ 0xEB9B1606,0x9A36,0x4B59,{ 0x86,0x17,0xB2,0x17,0x84,0x92,0x62,0xE1 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskOptionsCore>{ 0x1BDBB474,0x4ED1,0x41EB,{ 0xBE,0x3C,0x72,0xD1,0x8E,0xD6,0x73,0x37 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>{ 0xC1B71832,0x9E93,0x4E55,{ 0x81,0x4B,0x33,0x26,0xA5,0x9E,0xFC,0xE1 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>{ 0x62E69E23,0x9A1E,0x4336,{ 0xB7,0x4F,0x3C,0xC7,0xF4,0xCF,0xF7,0x09 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>{ 0x810CD3CB,0xB410,0x4282,{ 0xA0,0x73,0x5A,0xC3,0x78,0x23,0x41,0x74 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskRequest>{ 0x6FF61E2E,0x2722,0x4240,{ 0xA6,0x7C,0xF3,0x64,0x84,0x9A,0x17,0xF3 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>{ 0xCFEFB3F0,0xCE3E,0x42C7,{ 0x94,0x96,0x64,0x80,0x0C,0x62,0x2C,0x44 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>{ 0xD0AFF924,0xA31B,0x454C,{ 0xA7,0xB6,0x5D,0x0C,0xC5,0x22,0xFC,0x16 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>{ 0xF9F067BE,0xF456,0x41F0,{ 0x9C,0x98,0x5C,0xE7,0x3E,0x85,0x14,0x10 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>{ 0x4A1560D1,0x6992,0x4D9D,{ 0x85,0x55,0x4C,0xA4,0x56,0x3F,0xB1,0x66 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>{ 0x295D70C0,0xC2CB,0x4B7D,{ 0xB0,0xEA,0x93,0x09,0x50,0x91,0xA2,0x20 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>{ 0xB4483D26,0x0DD0,0x4CD4,{ 0xBA,0xFF,0x93,0x0F,0xC7,0xD6,0xA5,0x74 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>{ 0x3BE38BF4,0x7A44,0x4269,{ 0x9A,0x52,0x81,0x26,0x1E,0x28,0x9E,0xE9 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>{ 0xBBF68E86,0x3858,0x41B3,{ 0xA7,0x99,0x55,0xDD,0x98,0x88,0xD4,0x75 } };
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>{ 0x6C109FA8,0x5CB6,0x4B3A,{ 0x86,0x63,0xF3,0x9C,0xB0,0x2D,0xC9,0xB4 } };
    template <> struct default_interface<Windows::Graphics::Printing::PrintManager>{ using type = Windows::Graphics::Printing::IPrintManager; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintPageInfo>{ using type = Windows::Graphics::Printing::IPrintPageInfo; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintPageRange>{ using type = Windows::Graphics::Printing::IPrintPageRange; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintPageRangeOptions>{ using type = Windows::Graphics::Printing::IPrintPageRangeOptions; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTask>{ using type = Windows::Graphics::Printing::IPrintTask; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskCompletedEventArgs>{ using type = Windows::Graphics::Printing::IPrintTaskCompletedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskOptions>{ using type = Windows::Graphics::Printing::IPrintTaskOptionsCore; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskProgressingEventArgs>{ using type = Windows::Graphics::Printing::IPrintTaskProgressingEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskRequest>{ using type = Windows::Graphics::Printing::IPrintTaskRequest; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskRequestedDeferral>{ using type = Windows::Graphics::Printing::IPrintTaskRequestedDeferral; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskRequestedEventArgs>{ using type = Windows::Graphics::Printing::IPrintTaskRequestedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs>{ using type = Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>{ using type = Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral; };
    template <> struct abi<Windows::Graphics::Printing::IPrintDocumentSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrintTaskRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintTaskRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintManagerStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall ShowPrintUIAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintManagerStatic2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintPageInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MediaSize(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MediaSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PageSize(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_PageSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_DpiX(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DpiX(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DpiY(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DpiY(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintPageRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FirstPageNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastPageNumber(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintPageRangeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSinglePage(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintPageRangeOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AllowAllPages(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowAllPages(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCurrentPage(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowCurrentPage(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCustomSetOfPages(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowCustomSetOfPages(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall add_Previewing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Previewing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Submitting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Submitting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Progressing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Progressing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTask2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsPreviewEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPreviewEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Completion(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Bordering(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bordering(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPagePrintTicket(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PageRangeOptions(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomPageRanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptionsCore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPageDescription(uint32_t, struct struct_Windows_Graphics_Printing_PrintPageDescription*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MediaSize(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MediaSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MediaType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MediaType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PrintQuality(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PrintQuality(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ColorMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duplex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Duplex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Collation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Collation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Staple(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Staple(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HolePunch(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HolePunch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Binding(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Binding(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinCopies(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxCopies(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_NumberOfCopies(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfCopies(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayedOptions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DocumentPageCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall CreatePrintTask(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsPrinterTargetEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPrinterTargetEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Is3DManufacturingTargetEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Is3DManufacturingTargetEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaSize(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrintQuality(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorMode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duplex(void**) noexcept = 0;
            virtual int32_t __stdcall get_Collation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Staple(void**) noexcept = 0;
            virtual int32_t __stdcall get_HolePunch(void**) noexcept = 0;
            virtual int32_t __stdcall get_Binding(void**) noexcept = 0;
            virtual int32_t __stdcall get_Copies(void**) noexcept = 0;
            virtual int32_t __stdcall get_NUp(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputBin(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bordering(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CustomPageRanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintDocumentSource
    {
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintDocumentSource>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintDocumentSource<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) PrintTaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const;
        using PrintTaskRequested_revoker = impl::event_revoker<Windows::Graphics::Printing::IPrintManager, &impl::abi_t<Windows::Graphics::Printing::IPrintManager>::remove_PrintTaskRequested>;
        [[nodiscard]] PrintTaskRequested_revoker PrintTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) PrintTaskRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintManager>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintManager<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintManagerStatic
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintManager) GetForCurrentView() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) ShowPrintUIAsync() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintManagerStatic>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintManagerStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintManagerStatic2
    {
        WINRT_IMPL_AUTO(bool) IsSupported() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintManagerStatic2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintManagerStatic2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintPageInfo
    {
        WINRT_IMPL_AUTO(void) MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintMediaSize) MediaSize() const;
        WINRT_IMPL_AUTO(void) PageSize(Windows::Foundation::Size const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) PageSize() const;
        WINRT_IMPL_AUTO(void) DpiX(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DpiX() const;
        WINRT_IMPL_AUTO(void) DpiY(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DpiY() const;
        WINRT_IMPL_AUTO(void) Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintOrientation) Orientation() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintPageInfo>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintPageInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintPageRange
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) FirstPageNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) LastPageNumber() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintPageRange>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintPageRange<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintPageRangeFactory
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintPageRange) Create(int32_t firstPage, int32_t lastPage) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintPageRange) CreateWithSinglePage(int32_t page) const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintPageRangeFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintPageRangeOptions
    {
        WINRT_IMPL_AUTO(void) AllowAllPages(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowAllPages() const;
        WINRT_IMPL_AUTO(void) AllowCurrentPage(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowCurrentPage() const;
        WINRT_IMPL_AUTO(void) AllowCustomSetOfPages(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowCustomSetOfPages() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintPageRangeOptions>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTask
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackagePropertySet) Properties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::IPrintDocumentSource) Source() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskOptions) Options() const;
        WINRT_IMPL_AUTO(winrt::event_token) Previewing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
        using Previewing_revoker = impl::event_revoker<Windows::Graphics::Printing::IPrintTask, &impl::abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Previewing>;
        [[nodiscard]] Previewing_revoker Previewing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Previewing(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
        using Submitting_revoker = impl::event_revoker<Windows::Graphics::Printing::IPrintTask, &impl::abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Submitting>;
        [[nodiscard]] Submitting_revoker Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Submitting(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Progressing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const;
        using Progressing_revoker = impl::event_revoker<Windows::Graphics::Printing::IPrintTask, &impl::abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Progressing>;
        [[nodiscard]] Progressing_revoker Progressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Progressing(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const;
        using Completed_revoker = impl::event_revoker<Windows::Graphics::Printing::IPrintTask, &impl::abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Completed(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTask>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTask<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTask2
    {
        WINRT_IMPL_AUTO(void) IsPreviewEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPreviewEnabled() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTask2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTask2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskCompletion) Completion() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskOptions
    {
        WINRT_IMPL_AUTO(void) Bordering(Windows::Graphics::Printing::PrintBordering const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintBordering) Bordering() const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStream) GetPagePrintTicket(Windows::Graphics::Printing::PrintPageInfo const& printPageInfo) const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptions>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskOptions2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintPageRangeOptions) PageRangeOptions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing::PrintPageRange>) CustomPageRanges() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptions2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskOptionsCore
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintPageDescription) GetPageDescription(uint32_t jobPageNumber) const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptionsCore>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptionsCore<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties
    {
        WINRT_IMPL_AUTO(void) MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintMediaSize) MediaSize() const;
        WINRT_IMPL_AUTO(void) MediaType(Windows::Graphics::Printing::PrintMediaType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintMediaType) MediaType() const;
        WINRT_IMPL_AUTO(void) Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintOrientation) Orientation() const;
        WINRT_IMPL_AUTO(void) PrintQuality(Windows::Graphics::Printing::PrintQuality const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintQuality) PrintQuality() const;
        WINRT_IMPL_AUTO(void) ColorMode(Windows::Graphics::Printing::PrintColorMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintColorMode) ColorMode() const;
        WINRT_IMPL_AUTO(void) Duplex(Windows::Graphics::Printing::PrintDuplex const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintDuplex) Duplex() const;
        WINRT_IMPL_AUTO(void) Collation(Windows::Graphics::Printing::PrintCollation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintCollation) Collation() const;
        WINRT_IMPL_AUTO(void) Staple(Windows::Graphics::Printing::PrintStaple const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintStaple) Staple() const;
        WINRT_IMPL_AUTO(void) HolePunch(Windows::Graphics::Printing::PrintHolePunch const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintHolePunch) HolePunch() const;
        WINRT_IMPL_AUTO(void) Binding(Windows::Graphics::Printing::PrintBinding const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintBinding) Binding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinCopies() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxCopies() const;
        WINRT_IMPL_AUTO(void) NumberOfCopies(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) NumberOfCopies() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) DisplayedOptions() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) DocumentPageCount() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Deadline() const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTask) CreatePrintTask(param::hstring const& title, Windows::Graphics::Printing::PrintTaskSourceRequestedHandler const& handler) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskRequestedDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskRequest>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskRequestedDeferral>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskRequest) Request() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Deadline() const;
        WINRT_IMPL_AUTO(void) SetSource(Windows::Graphics::Printing::IPrintDocumentSource const& source) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport
    {
        WINRT_IMPL_AUTO(void) IsPrinterTargetEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPrinterTargetEnabled() const;
        WINRT_IMPL_AUTO(void) Is3DManufacturingTargetEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Is3DManufacturingTargetEnabled() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MediaSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MediaType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Orientation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PrintQuality() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ColorMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Duplex() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Collation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Staple() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HolePunch() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Binding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Copies() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NUp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) InputBin() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Bordering() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomPageRanges() const;
    };
    template <> struct consume<Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic3<D>;
    };
    struct struct_Windows_Graphics_Printing_PrintPageDescription
    {
        Windows::Foundation::Size PageSize;
        Windows::Foundation::Rect ImageableRect;
        uint32_t DpiX;
        uint32_t DpiY;
    };
    template <> struct abi<Windows::Graphics::Printing::PrintPageDescription>
    {
        using type = struct_Windows_Graphics_Printing_PrintPageDescription;
    };
}
#endif
