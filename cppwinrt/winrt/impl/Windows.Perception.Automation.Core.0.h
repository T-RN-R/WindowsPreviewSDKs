// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Automation_Core_0_H
#define WINRT_Windows_Perception_Automation_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IGetActivationFactory;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core
{
    struct ICorePerceptionAutomationStatics;
    struct CorePerceptionAutomation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ using type = interface_category; };
    template <> struct category<Windows::Perception::Automation::Core::CorePerceptionAutomation>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Perception::Automation::Core::CorePerceptionAutomation>{ L"Windows.Perception.Automation.Core.CorePerceptionAutomation" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ L"Windows.Perception.Automation.Core.ICorePerceptionAutomationStatics" };
#endif
    template <> inline constexpr guid guid_v<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ 0x0BB04541,0x4CE2,0x4923,{ 0x9A,0x76,0x81,0x87,0xEC,0xC5,0x91,0x12 } };
    template <> struct abi<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetActivationFactoryProvider(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics
    {
        auto SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider) const;
    };
    template <> struct consume<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics<D>;
    };
}
#endif
