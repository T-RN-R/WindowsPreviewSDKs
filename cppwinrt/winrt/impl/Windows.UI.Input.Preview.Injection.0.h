// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Preview_Injection_0_H
#define WINRT_Windows_UI_Input_Preview_Injection_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    enum class GamepadButtons : uint32_t;
    struct GamepadReading;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection
{
    enum class InjectedInputButtonChangeKind : int32_t
    {
        None = 0,
        FirstButtonDown = 1,
        FirstButtonUp = 2,
        SecondButtonDown = 3,
        SecondButtonUp = 4,
        ThirdButtonDown = 5,
        ThirdButtonUp = 6,
        FourthButtonDown = 7,
        FourthButtonUp = 8,
        FifthButtonDown = 9,
        FifthButtonUp = 10,
    };
    enum class InjectedInputKeyOptions : uint32_t
    {
        None = 0,
        ExtendedKey = 0x1,
        KeyUp = 0x2,
        ScanCode = 0x8,
        Unicode = 0x4,
    };
    enum class InjectedInputMouseOptions : uint32_t
    {
        None = 0,
        Move = 0x1,
        LeftDown = 0x2,
        LeftUp = 0x4,
        RightDown = 0x8,
        RightUp = 0x10,
        MiddleDown = 0x20,
        MiddleUp = 0x40,
        XDown = 0x80,
        XUp = 0x100,
        Wheel = 0x800,
        HWheel = 0x1000,
        MoveNoCoalesce = 0x2000,
        VirtualDesk = 0x4000,
        Absolute = 0x8000,
    };
    enum class InjectedInputPenButtons : uint32_t
    {
        None = 0,
        Barrel = 0x1,
        Inverted = 0x2,
        Eraser = 0x4,
    };
    enum class InjectedInputPenParameters : uint32_t
    {
        None = 0,
        Pressure = 0x1,
        Rotation = 0x2,
        TiltX = 0x4,
        TiltY = 0x8,
    };
    enum class InjectedInputPointerOptions : uint32_t
    {
        None = 0,
        New = 0x1,
        InRange = 0x2,
        InContact = 0x4,
        FirstButton = 0x10,
        SecondButton = 0x20,
        Primary = 0x2000,
        Confidence = 0x4000,
        Canceled = 0x8000,
        PointerDown = 0x10000,
        Update = 0x20000,
        PointerUp = 0x40000,
        CaptureChanged = 0x200000,
    };
    enum class InjectedInputShortcut : int32_t
    {
        Back = 0,
        Start = 1,
        Search = 2,
    };
    enum class InjectedInputTouchParameters : uint32_t
    {
        None = 0,
        Contact = 0x1,
        Orientation = 0x2,
        Pressure = 0x4,
    };
    enum class InjectedInputVisualizationMode : int32_t
    {
        None = 0,
        Default = 1,
        Indirect = 2,
    };
    struct IInjectedInputGamepadInfo;
    struct IInjectedInputGamepadInfoFactory;
    struct IInjectedInputKeyboardInfo;
    struct IInjectedInputMouseInfo;
    struct IInjectedInputPenInfo;
    struct IInjectedInputTouchInfo;
    struct IInputInjector;
    struct IInputInjector2;
    struct IInputInjectorStatics;
    struct IInputInjectorStatics2;
    struct InjectedInputGamepadInfo;
    struct InjectedInputKeyboardInfo;
    struct InjectedInputMouseInfo;
    struct InjectedInputPenInfo;
    struct InjectedInputTouchInfo;
    struct InputInjector;
    struct InjectedInputPoint;
    struct InjectedInputPointerInfo;
    struct InjectedInputRectangle;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InputInjector>{ using type = class_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputShortcut>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPoint>{ using type = struct_category<int32_t, int32_t>; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>{ using type = struct_category<uint32_t, Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions, Windows::UI::Input::Preview::Injection::InjectedInputPoint, uint32_t, uint64_t>; };
    template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>{ using type = struct_category<int32_t, int32_t, int32_t, int32_t>; };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo> = L"Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> = L"Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> = L"Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo> = L"Windows.UI.Input.Preview.Injection.InjectedInputPenInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> = L"Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InputInjector> = L"Windows.UI.Input.Preview.Injection.InputInjector";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind> = L"Windows.UI.Input.Preview.Injection.InjectedInputButtonChangeKind";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions> = L"Windows.UI.Input.Preview.Injection.InjectedInputKeyOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions> = L"Windows.UI.Input.Preview.Injection.InjectedInputMouseOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons> = L"Windows.UI.Input.Preview.Injection.InjectedInputPenButtons";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters> = L"Windows.UI.Input.Preview.Injection.InjectedInputPenParameters";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions> = L"Windows.UI.Input.Preview.Injection.InjectedInputPointerOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputShortcut> = L"Windows.UI.Input.Preview.Injection.InjectedInputShortcut";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters> = L"Windows.UI.Input.Preview.Injection.InjectedInputTouchParameters";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode> = L"Windows.UI.Input.Preview.Injection.InjectedInputVisualizationMode";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputPoint> = L"Windows.UI.Input.Preview.Injection.InjectedInputPoint";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> = L"Windows.UI.Input.Preview.Injection.InjectedInputPointerInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::InjectedInputRectangle> = L"Windows.UI.Input.Preview.Injection.InjectedInputRectangle";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> = L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> = L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> = L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> = L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInputInjector> = L"Windows.UI.Input.Preview.Injection.IInputInjector";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInputInjector2> = L"Windows.UI.Input.Preview.Injection.IInputInjector2";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInputInjectorStatics> = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics2";
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>{ 0x20AE9A3F,0xDF11,0x4572,{ 0xA9,0xAB,0xD7,0x5B,0x8A,0x5E,0x48,0xAD } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>{ 0x59596876,0x6C39,0x4EC4,{ 0x8B,0x2A,0x29,0xEF,0x7D,0xE1,0x8A,0xCA } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ 0x4B46D140,0x2B6A,0x5FFA,{ 0x7E,0xAE,0xBD,0x07,0x7B,0x05,0x2A,0xCD } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ 0x96F56E6B,0xE47A,0x5CF4,{ 0x41,0x8D,0x8A,0x5F,0xB9,0x67,0x0C,0x7D } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ 0x6B40AD03,0xCA1E,0x5527,{ 0x7E,0x02,0x28,0x28,0x54,0x0B,0xB1,0xD4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ 0x224FD1DF,0x43E8,0x5EF5,{ 0x51,0x0A,0x69,0xCA,0x8C,0x9B,0x4C,0x28 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInputInjector>{ 0x8EC26F84,0x0B02,0x4BD2,{ 0xAD,0x7A,0x3D,0x46,0x58,0xBE,0x3E,0x18 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInputInjector2>{ 0x8E7A905D,0x1453,0x43A7,{ 0x9B,0xCB,0x06,0xD6,0xD7,0xB3,0x05,0xF7 } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ 0xDEAE6943,0x7402,0x4141,{ 0xA5,0xC6,0x0C,0x01,0xAA,0x57,0xB1,0x6A } };
    template <> inline constexpr guid guid_v<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>{ 0xA4DB38FB,0xDD8C,0x414F,{ 0x95,0xEA,0xF8,0x7E,0xF4,0xC0,0xAE,0x6C } };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo; };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo; };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo; };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo; };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo; };
    template <> struct default_interface<Windows::UI::Input::Preview::Injection::InputInjector>{ using type = Windows::UI::Input::Preview::Injection::IInputInjector; };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Buttons(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Buttons(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_LeftThumbstickX(double*) noexcept = 0;
            virtual int32_t __stdcall put_LeftThumbstickX(double) noexcept = 0;
            virtual int32_t __stdcall get_LeftThumbstickY(double*) noexcept = 0;
            virtual int32_t __stdcall put_LeftThumbstickY(double) noexcept = 0;
            virtual int32_t __stdcall get_LeftTrigger(double*) noexcept = 0;
            virtual int32_t __stdcall put_LeftTrigger(double) noexcept = 0;
            virtual int32_t __stdcall get_RightThumbstickX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RightThumbstickX(double) noexcept = 0;
            virtual int32_t __stdcall get_RightThumbstickY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RightThumbstickY(double) noexcept = 0;
            virtual int32_t __stdcall get_RightTrigger(double*) noexcept = 0;
            virtual int32_t __stdcall put_RightTrigger(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceFromGamepadReading(struct struct_Windows_Gaming_Input_GamepadReading, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScanCode(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScanCode(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_VirtualKey(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_VirtualKey(uint16_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MouseOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MouseOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MouseData(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MouseData(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeltaY(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DeltaY(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DeltaX(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DeltaX(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TimeOffsetInMilliseconds(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TimeOffsetInMilliseconds(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo*) noexcept = 0;
            virtual int32_t __stdcall put_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo) noexcept = 0;
            virtual int32_t __stdcall get_PenButtons(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PenButtons(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_PenParameters(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PenParameters(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pressure(double) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(double*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(double) noexcept = 0;
            virtual int32_t __stdcall get_TiltX(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TiltX(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TiltY(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TiltY(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Contact(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle*) noexcept = 0;
            virtual int32_t __stdcall put_Contact(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo*) noexcept = 0;
            virtual int32_t __stdcall put_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pressure(double) noexcept = 0;
            virtual int32_t __stdcall get_TouchParameters(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TouchParameters(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InjectKeyboardInput(void*) noexcept = 0;
            virtual int32_t __stdcall InjectMouseInput(void*) noexcept = 0;
            virtual int32_t __stdcall InitializeTouchInjection(int32_t) noexcept = 0;
            virtual int32_t __stdcall InjectTouchInput(void*) noexcept = 0;
            virtual int32_t __stdcall UninitializeTouchInjection() noexcept = 0;
            virtual int32_t __stdcall InitializePenInjection(int32_t) noexcept = 0;
            virtual int32_t __stdcall InjectPenInput(void*) noexcept = 0;
            virtual int32_t __stdcall UninitializePenInjection() noexcept = 0;
            virtual int32_t __stdcall InjectShortcut(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall InitializeGamepadInjection() noexcept = 0;
            virtual int32_t __stdcall InjectGamepadInput(void*) noexcept = 0;
            virtual int32_t __stdcall UninitializeGamepadInjection() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreate(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateForAppBroadcastOnly(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::Input::GamepadButtons) Buttons() const;
        WINRT_IMPL_AUTO(void) Buttons(Windows::Gaming::Input::GamepadButtons const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LeftThumbstickX() const;
        WINRT_IMPL_AUTO(void) LeftThumbstickX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LeftThumbstickY() const;
        WINRT_IMPL_AUTO(void) LeftThumbstickY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LeftTrigger() const;
        WINRT_IMPL_AUTO(void) LeftTrigger(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RightThumbstickX() const;
        WINRT_IMPL_AUTO(void) RightThumbstickX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RightThumbstickY() const;
        WINRT_IMPL_AUTO(void) RightThumbstickY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RightTrigger() const;
        WINRT_IMPL_AUTO(void) RightTrigger(double value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo) CreateInstance(Windows::Gaming::Input::GamepadReading const& reading) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions) KeyOptions() const;
        WINRT_IMPL_AUTO(void) KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) ScanCode() const;
        WINRT_IMPL_AUTO(void) ScanCode(uint16_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) VirtualKey() const;
        WINRT_IMPL_AUTO(void) VirtualKey(uint16_t value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions) MouseOptions() const;
        WINRT_IMPL_AUTO(void) MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MouseData() const;
        WINRT_IMPL_AUTO(void) MouseData(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) DeltaY() const;
        WINRT_IMPL_AUTO(void) DeltaY(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) DeltaX() const;
        WINRT_IMPL_AUTO(void) DeltaX(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) TimeOffsetInMilliseconds() const;
        WINRT_IMPL_AUTO(void) TimeOffsetInMilliseconds(uint32_t value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo) PointerInfo() const;
        WINRT_IMPL_AUTO(void) PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons) PenButtons() const;
        WINRT_IMPL_AUTO(void) PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters) PenParameters() const;
        WINRT_IMPL_AUTO(void) PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Pressure() const;
        WINRT_IMPL_AUTO(void) Pressure(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Rotation() const;
        WINRT_IMPL_AUTO(void) Rotation(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TiltX() const;
        WINRT_IMPL_AUTO(void) TiltX(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TiltY() const;
        WINRT_IMPL_AUTO(void) TiltY(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputRectangle) Contact() const;
        WINRT_IMPL_AUTO(void) Contact(Windows::UI::Input::Preview::Injection::InjectedInputRectangle const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Orientation() const;
        WINRT_IMPL_AUTO(void) Orientation(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo) PointerInfo() const;
        WINRT_IMPL_AUTO(void) PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Pressure() const;
        WINRT_IMPL_AUTO(void) Pressure(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters) TouchParameters() const;
        WINRT_IMPL_AUTO(void) TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const& value) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjector
    {
        WINRT_IMPL_AUTO(void) InjectKeyboardInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const& input) const;
        WINRT_IMPL_AUTO(void) InjectMouseInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const& input) const;
        WINRT_IMPL_AUTO(void) InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const;
        WINRT_IMPL_AUTO(void) InjectTouchInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const& input) const;
        WINRT_IMPL_AUTO(void) UninitializeTouchInjection() const;
        WINRT_IMPL_AUTO(void) InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const;
        WINRT_IMPL_AUTO(void) InjectPenInput(Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const& input) const;
        WINRT_IMPL_AUTO(void) UninitializePenInjection() const;
        WINRT_IMPL_AUTO(void) InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut const& shortcut) const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjector2
    {
        WINRT_IMPL_AUTO(void) InitializeGamepadInjection() const;
        WINRT_IMPL_AUTO(void) InjectGamepadInput(Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const& input) const;
        WINRT_IMPL_AUTO(void) UninitializeGamepadInjection() const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjector2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InputInjector) TryCreate() const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2
    {
        WINRT_IMPL_AUTO(Windows::UI::Input::Preview::Injection::InputInjector) TryCreateForAppBroadcastOnly() const;
    };
    template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2<D>;
    };
    struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPoint
    {
        int32_t PositionX;
        int32_t PositionY;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::InjectedInputPoint>
    {
        using type = struct_Windows_UI_Input_Preview_Injection_InjectedInputPoint;
    };
    struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo
    {
        uint32_t PointerId;
        uint32_t PointerOptions;
        struct{ int32_t PositionX; int32_t PositionY; } PixelLocation;
        uint32_t TimeOffsetInMilliseconds;
        uint64_t PerformanceCount;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>
    {
        using type = struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo;
    };
    struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle
    {
        int32_t Left;
        int32_t Top;
        int32_t Bottom;
        int32_t Right;
    };
    template <> struct abi<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>
    {
        using type = struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle;
    };
}
#endif
