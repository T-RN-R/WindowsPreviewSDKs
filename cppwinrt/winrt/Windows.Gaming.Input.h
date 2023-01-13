// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_H
#define WINRT_Windows_Gaming_Input_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200213.5"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Devices.Haptics.2.h"
#include "winrt/impl/Windows.Devices.Power.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Gaming.Input.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IArcadeStick<D>::GetButtonLabel(Windows::Gaming::Input::ArcadeStickButtons const& button) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStick)->GetButtonLabel(static_cast<uint32_t>(button), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ArcadeStickReading) consume_Windows_Gaming_Input_IArcadeStick<D>::GetCurrentReading() const
    {
        Windows::Gaming::Input::ArcadeStickReading value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStick)->GetCurrentReading(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->add_ArcadeStickAdded(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded_revoker consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
    {
        return impl::make_event_revoker<D, ArcadeStickAdded_revoker>(this, ArcadeStickAdded(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->remove_ArcadeStickAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->add_ArcadeStickRemoved(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved_revoker consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value) const
    {
        return impl::make_event_revoker<D, ArcadeStickRemoved_revoker>(this, ArcadeStickRemoved(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeStickRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->remove_ArcadeStickRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick>) consume_Windows_Gaming_Input_IArcadeStickStatics<D>::ArcadeSticks() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStickStatics)->get_ArcadeSticks(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ArcadeStick) consume_Windows_Gaming_Input_IArcadeStickStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IArcadeStickStatics2)->FromGameController(*(void**)(&gameController), &value));
        return Windows::Gaming::Input::ArcadeStick{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerSwitchKind) consume_Windows_Gaming_Input_IFlightStick<D>::HatSwitchKind() const
    {
        Windows::Gaming::Input::GameControllerSwitchKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStick)->get_HatSwitchKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IFlightStick<D>::GetButtonLabel(Windows::Gaming::Input::FlightStickButtons const& button) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStick)->GetButtonLabel(static_cast<uint32_t>(button), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::FlightStickReading) consume_Windows_Gaming_Input_IFlightStick<D>::GetCurrentReading() const
    {
        Windows::Gaming::Input::FlightStickReading value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStick)->GetCurrentReading(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStickStatics)->add_FlightStickAdded(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded_revoker consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
    {
        return impl::make_event_revoker<D, FlightStickAdded_revoker>(this, FlightStickAdded(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStickStatics)->remove_FlightStickAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStickStatics)->add_FlightStickRemoved(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved_revoker consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value) const
    {
        return impl::make_event_revoker<D, FlightStickRemoved_revoker>(this, FlightStickRemoved(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightStickRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStickStatics)->remove_FlightStickRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick>) consume_Windows_Gaming_Input_IFlightStickStatics<D>::FlightSticks() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStickStatics)->get_FlightSticks(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::FlightStick) consume_Windows_Gaming_Input_IFlightStickStatics<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IFlightStickStatics)->FromGameController(*(void**)(&gameController), &value));
        return Windows::Gaming::Input::FlightStick{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected(Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->add_HeadsetConnected(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected_revoker consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
    {
        return impl::make_event_revoker<D, HeadsetConnected_revoker>(this, HeadsetConnected(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IGameController<D>::HeadsetConnected(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->remove_HeadsetConnected(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected(Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->add_HeadsetDisconnected(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected_revoker consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const& value) const
    {
        return impl::make_event_revoker<D, HeadsetDisconnected_revoker>(this, HeadsetDisconnected(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IGameController<D>::HeadsetDisconnected(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->remove_HeadsetDisconnected(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IGameController<D>::UserChanged(Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->add_UserChanged(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IGameController<D>::UserChanged_revoker consume_Windows_Gaming_Input_IGameController<D>::UserChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, UserChanged_revoker>(this, UserChanged(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IGameController<D>::UserChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->remove_UserChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::Headset) consume_Windows_Gaming_Input_IGameController<D>::Headset() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->get_Headset(&value));
        return Windows::Gaming::Input::Headset{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Input_IGameController<D>::IsWireless() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->get_IsWireless(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::System::User) consume_Windows_Gaming_Input_IGameController<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameController)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Power::BatteryReport) consume_Windows_Gaming_Input_IGameControllerBatteryInfo<D>::TryGetBatteryReport() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGameControllerBatteryInfo)->TryGetBatteryReport(&value));
        return Windows::Devices::Power::BatteryReport{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GamepadVibration) consume_Windows_Gaming_Input_IGamepad<D>::Vibration() const
    {
        Windows::Gaming::Input::GamepadVibration value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepad)->get_Vibration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IGamepad<D>::Vibration(Windows::Gaming::Input::GamepadVibration const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepad)->put_Vibration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GamepadReading) consume_Windows_Gaming_Input_IGamepad<D>::GetCurrentReading() const
    {
        Windows::Gaming::Input::GamepadReading value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepad)->GetCurrentReading(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IGamepad2<D>::GetButtonLabel(Windows::Gaming::Input::GamepadButtons const& button) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepad2)->GetButtonLabel(static_cast<uint32_t>(button), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepadStatics)->add_GamepadAdded(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded_revoker consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
    {
        return impl::make_event_revoker<D, GamepadAdded_revoker>(this, GamepadAdded(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepadStatics)->remove_GamepadAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepadStatics)->add_GamepadRemoved(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved_revoker consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value) const
    {
        return impl::make_event_revoker<D, GamepadRemoved_revoker>(this, GamepadRemoved(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IGamepadStatics<D>::GamepadRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepadStatics)->remove_GamepadRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad>) consume_Windows_Gaming_Input_IGamepadStatics<D>::Gamepads() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepadStatics)->get_Gamepads(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::Gamepad) consume_Windows_Gaming_Input_IGamepadStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IGamepadStatics2)->FromGameController(*(void**)(&gameController), &value));
        return Windows::Gaming::Input::Gamepad{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Gaming_Input_IHeadset<D>::CaptureDeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IHeadset)->get_CaptureDeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Gaming_Input_IHeadset<D>::RenderDeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IHeadset)->get_RenderDeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Input_IRacingWheel<D>::HasClutch() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->get_HasClutch(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Input_IRacingWheel<D>::HasHandbrake() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->get_HasHandbrake(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Input_IRacingWheel<D>::HasPatternShifter() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->get_HasPatternShifter(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Gaming_Input_IRacingWheel<D>::MaxPatternShifterGear() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->get_MaxPatternShifterGear(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_Gaming_Input_IRacingWheel<D>::MaxWheelAngle() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->get_MaxWheelAngle(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor) consume_Windows_Gaming_Input_IRacingWheel<D>::WheelMotor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->get_WheelMotor(&value));
        return Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IRacingWheel<D>::GetButtonLabel(Windows::Gaming::Input::RacingWheelButtons const& button) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->GetButtonLabel(static_cast<uint32_t>(button), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::RacingWheelReading) consume_Windows_Gaming_Input_IRacingWheel<D>::GetCurrentReading() const
    {
        Windows::Gaming::Input::RacingWheelReading value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheel)->GetCurrentReading(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->add_RacingWheelAdded(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded_revoker consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
    {
        return impl::make_event_revoker<D, RacingWheelAdded_revoker>(this, RacingWheelAdded(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->remove_RacingWheelAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->add_RacingWheelRemoved(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved_revoker consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value) const
    {
        return impl::make_event_revoker<D, RacingWheelRemoved_revoker>(this, RacingWheelRemoved(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheelRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->remove_RacingWheelRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel>) consume_Windows_Gaming_Input_IRacingWheelStatics<D>::RacingWheels() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheelStatics)->get_RacingWheels(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::RacingWheel) consume_Windows_Gaming_Input_IRacingWheelStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRacingWheelStatics2)->FromGameController(*(void**)(&gameController), &value));
        return Windows::Gaming::Input::RacingWheel{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Gaming_Input_IRawGameController<D>::AxisCount() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->get_AxisCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Gaming_Input_IRawGameController<D>::ButtonCount() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->get_ButtonCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>) consume_Windows_Gaming_Input_IRawGameController<D>::ForceFeedbackMotors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->get_ForceFeedbackMotors(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Gaming_Input_IRawGameController<D>::HardwareProductId() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->get_HardwareProductId(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Gaming_Input_IRawGameController<D>::HardwareVendorId() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->get_HardwareVendorId(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Gaming_Input_IRawGameController<D>::SwitchCount() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->get_SwitchCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IRawGameController<D>::GetButtonLabel(int32_t buttonIndex) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->GetButtonLabel(buttonIndex, reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Gaming_Input_IRawGameController<D>::GetCurrentReading(array_view<bool> buttonArray, array_view<Windows::Gaming::Input::GameControllerSwitchPosition> switchArray, array_view<double> axisArray) const
    {
        uint64_t timestamp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->GetCurrentReading(buttonArray.size(), put_abi(buttonArray), switchArray.size(), put_abi(switchArray), axisArray.size(), put_abi(axisArray), &timestamp));
        return timestamp;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerSwitchKind) consume_Windows_Gaming_Input_IRawGameController<D>::GetSwitchKind(int32_t switchIndex) const
    {
        Windows::Gaming::Input::GameControllerSwitchKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController)->GetSwitchKind(switchIndex, reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsController>) consume_Windows_Gaming_Input_IRawGameController2<D>::SimpleHapticsControllers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController2)->get_SimpleHapticsControllers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsController>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Gaming_Input_IRawGameController2<D>::NonRoamableId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController2)->get_NonRoamableId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Gaming_Input_IRawGameController2<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameController2)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->add_RawGameControllerAdded(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded_revoker consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
    {
        return impl::make_event_revoker<D, RawGameControllerAdded_revoker>(this, RawGameControllerAdded(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->remove_RawGameControllerAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->add_RawGameControllerRemoved(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved_revoker consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value) const
    {
        return impl::make_event_revoker<D, RawGameControllerRemoved_revoker>(this, RawGameControllerRemoved(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllerRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->remove_RawGameControllerRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController>) consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::RawGameControllers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->get_RawGameControllers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::RawGameController) consume_Windows_Gaming_Input_IRawGameControllerStatics<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IRawGameControllerStatics)->FromGameController(*(void**)(&gameController), &value));
        return Windows::Gaming::Input::RawGameController{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::UINavigationReading) consume_Windows_Gaming_Input_IUINavigationController<D>::GetCurrentReading() const
    {
        Windows::Gaming::Input::UINavigationReading value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationController)->GetCurrentReading(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IUINavigationController<D>::GetOptionalButtonLabel(Windows::Gaming::Input::OptionalUINavigationButtons const& button) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationController)->GetOptionalButtonLabel(static_cast<uint32_t>(button), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::GameControllerButtonLabel) consume_Windows_Gaming_Input_IUINavigationController<D>::GetRequiredButtonLabel(Windows::Gaming::Input::RequiredUINavigationButtons const& button) const
    {
        Windows::Gaming::Input::GameControllerButtonLabel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationController)->GetRequiredButtonLabel(static_cast<uint32_t>(button), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->add_UINavigationControllerAdded(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded_revoker consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
    {
        return impl::make_event_revoker<D, UINavigationControllerAdded_revoker>(this, UINavigationControllerAdded(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->remove_UINavigationControllerAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->add_UINavigationControllerRemoved(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved_revoker consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value) const
    {
        return impl::make_event_revoker<D, UINavigationControllerRemoved_revoker>(this, UINavigationControllerRemoved(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllerRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->remove_UINavigationControllerRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController>) consume_Windows_Gaming_Input_IUINavigationControllerStatics<D>::UINavigationControllers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics)->get_UINavigationControllers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::UINavigationController) consume_Windows_Gaming_Input_IUINavigationControllerStatics2<D>::FromGameController(Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::IUINavigationControllerStatics2)->FromGameController(*(void**)(&gameController), &value));
        return Windows::Gaming::Input::UINavigationController{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IArcadeStick> : produce_base<D, Windows::Gaming::Input::IArcadeStick>
    {
        int32_t __stdcall GetButtonLabel(uint32_t button, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::ArcadeStickButtons const*>(&button)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentReading(struct struct_Windows_Gaming_Input_ArcadeStickReading* value) noexcept final try
        {
            zero_abi<Windows::Gaming::Input::ArcadeStickReading>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ArcadeStickReading>(this->shim().GetCurrentReading());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IArcadeStickStatics> : produce_base<D, Windows::Gaming::Input::IArcadeStickStatics>
    {
        int32_t __stdcall add_ArcadeStickAdded(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ArcadeStickAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ArcadeStickAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArcadeStickAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ArcadeStickRemoved(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ArcadeStickRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ArcadeStickRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArcadeStickRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_ArcadeSticks(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick>>(this->shim().ArcadeSticks());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IArcadeStickStatics2> : produce_base<D, Windows::Gaming::Input::IArcadeStickStatics2>
    {
        int32_t __stdcall FromGameController(void* gameController, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ArcadeStick>(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IFlightStick> : produce_base<D, Windows::Gaming::Input::IFlightStick>
    {
        int32_t __stdcall get_HatSwitchKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerSwitchKind>(this->shim().HatSwitchKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetButtonLabel(uint32_t button, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::FlightStickButtons const*>(&button)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentReading(struct struct_Windows_Gaming_Input_FlightStickReading* value) noexcept final try
        {
            zero_abi<Windows::Gaming::Input::FlightStickReading>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::FlightStickReading>(this->shim().GetCurrentReading());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IFlightStickStatics> : produce_base<D, Windows::Gaming::Input::IFlightStickStatics>
    {
        int32_t __stdcall add_FlightStickAdded(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FlightStickAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FlightStickAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlightStickAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_FlightStickRemoved(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FlightStickRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FlightStickRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlightStickRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_FlightSticks(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick>>(this->shim().FlightSticks());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromGameController(void* gameController, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::FlightStick>(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IGameController> : produce_base<D, Windows::Gaming::Input::IGameController>
    {
        int32_t __stdcall add_HeadsetConnected(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().HeadsetConnected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_HeadsetConnected(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadsetConnected(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_HeadsetDisconnected(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().HeadsetDisconnected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::Gaming::Input::Headset> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_HeadsetDisconnected(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeadsetDisconnected(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_UserChanged(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UserChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::Input::IGameController, Windows::System::UserChangedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UserChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Headset(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::Headset>(this->shim().Headset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsWireless(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWireless());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IGameControllerBatteryInfo> : produce_base<D, Windows::Gaming::Input::IGameControllerBatteryInfo>
    {
        int32_t __stdcall TryGetBatteryReport(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Power::BatteryReport>(this->shim().TryGetBatteryReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IGamepad> : produce_base<D, Windows::Gaming::Input::IGamepad>
    {
        int32_t __stdcall get_Vibration(struct struct_Windows_Gaming_Input_GamepadVibration* value) noexcept final try
        {
            zero_abi<Windows::Gaming::Input::GamepadVibration>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GamepadVibration>(this->shim().Vibration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Vibration(struct struct_Windows_Gaming_Input_GamepadVibration value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Vibration(*reinterpret_cast<Windows::Gaming::Input::GamepadVibration const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentReading(struct struct_Windows_Gaming_Input_GamepadReading* value) noexcept final try
        {
            zero_abi<Windows::Gaming::Input::GamepadReading>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GamepadReading>(this->shim().GetCurrentReading());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IGamepad2> : produce_base<D, Windows::Gaming::Input::IGamepad2>
    {
        int32_t __stdcall GetButtonLabel(uint32_t button, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::GamepadButtons const*>(&button)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IGamepadStatics> : produce_base<D, Windows::Gaming::Input::IGamepadStatics>
    {
        int32_t __stdcall add_GamepadAdded(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GamepadAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_GamepadAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GamepadAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_GamepadRemoved(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GamepadRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_GamepadRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GamepadRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Gamepads(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad>>(this->shim().Gamepads());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IGamepadStatics2> : produce_base<D, Windows::Gaming::Input::IGamepadStatics2>
    {
        int32_t __stdcall FromGameController(void* gameController, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::Gamepad>(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IHeadset> : produce_base<D, Windows::Gaming::Input::IHeadset>
    {
        int32_t __stdcall get_CaptureDeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CaptureDeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RenderDeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RenderDeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IRacingWheel> : produce_base<D, Windows::Gaming::Input::IRacingWheel>
    {
        int32_t __stdcall get_HasClutch(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasClutch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasHandbrake(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasHandbrake());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasPatternShifter(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasPatternShifter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPatternShifterGear(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxPatternShifterGear());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxWheelAngle(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxWheelAngle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WheelMotor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>(this->shim().WheelMotor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetButtonLabel(uint32_t button, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetButtonLabel(*reinterpret_cast<Windows::Gaming::Input::RacingWheelButtons const*>(&button)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentReading(struct struct_Windows_Gaming_Input_RacingWheelReading* value) noexcept final try
        {
            zero_abi<Windows::Gaming::Input::RacingWheelReading>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::RacingWheelReading>(this->shim().GetCurrentReading());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IRacingWheelStatics> : produce_base<D, Windows::Gaming::Input::IRacingWheelStatics>
    {
        int32_t __stdcall add_RacingWheelAdded(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RacingWheelAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RacingWheelAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacingWheelAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_RacingWheelRemoved(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RacingWheelRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RacingWheelRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacingWheelRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_RacingWheels(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel>>(this->shim().RacingWheels());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IRacingWheelStatics2> : produce_base<D, Windows::Gaming::Input::IRacingWheelStatics2>
    {
        int32_t __stdcall FromGameController(void* gameController, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::RacingWheel>(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IRawGameController> : produce_base<D, Windows::Gaming::Input::IRawGameController>
    {
        int32_t __stdcall get_AxisCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().AxisCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ButtonCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ButtonCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceFeedbackMotors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>>(this->shim().ForceFeedbackMotors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareProductId(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().HardwareProductId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareVendorId(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().HardwareVendorId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SwitchCount(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SwitchCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetButtonLabel(int32_t buttonIndex, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetButtonLabel(buttonIndex));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentReading(uint32_t __buttonArraySize, bool* buttonArray, uint32_t __switchArraySize, int32_t* switchArray, uint32_t __axisArraySize, double* axisArray, uint64_t* timestamp) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *timestamp = detach_from<uint64_t>(this->shim().GetCurrentReading(array_view<bool>(reinterpret_cast<bool*>(buttonArray), reinterpret_cast<bool*>(buttonArray) + __buttonArraySize), array_view<Windows::Gaming::Input::GameControllerSwitchPosition>(reinterpret_cast<Windows::Gaming::Input::GameControllerSwitchPosition*>(switchArray), reinterpret_cast<Windows::Gaming::Input::GameControllerSwitchPosition*>(switchArray) + __switchArraySize), array_view<double>(reinterpret_cast<double*>(axisArray), reinterpret_cast<double*>(axisArray) + __axisArraySize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSwitchKind(int32_t switchIndex, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerSwitchKind>(this->shim().GetSwitchKind(switchIndex));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IRawGameController2> : produce_base<D, Windows::Gaming::Input::IRawGameController2>
    {
        int32_t __stdcall get_SimpleHapticsControllers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::SimpleHapticsController>>(this->shim().SimpleHapticsControllers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NonRoamableId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NonRoamableId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IRawGameControllerStatics> : produce_base<D, Windows::Gaming::Input::IRawGameControllerStatics>
    {
        int32_t __stdcall add_RawGameControllerAdded(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RawGameControllerAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RawGameControllerAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawGameControllerAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_RawGameControllerRemoved(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RawGameControllerRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RawGameControllerRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RawGameControllerRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_RawGameControllers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController>>(this->shim().RawGameControllers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromGameController(void* gameController, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::RawGameController>(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IUINavigationController> : produce_base<D, Windows::Gaming::Input::IUINavigationController>
    {
        int32_t __stdcall GetCurrentReading(struct struct_Windows_Gaming_Input_UINavigationReading* value) noexcept final try
        {
            zero_abi<Windows::Gaming::Input::UINavigationReading>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::UINavigationReading>(this->shim().GetCurrentReading());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetOptionalButtonLabel(uint32_t button, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetOptionalButtonLabel(*reinterpret_cast<Windows::Gaming::Input::OptionalUINavigationButtons const*>(&button)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRequiredButtonLabel(uint32_t button, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GameControllerButtonLabel>(this->shim().GetRequiredButtonLabel(*reinterpret_cast<Windows::Gaming::Input::RequiredUINavigationButtons const*>(&button)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IUINavigationControllerStatics> : produce_base<D, Windows::Gaming::Input::IUINavigationControllerStatics>
    {
        int32_t __stdcall add_UINavigationControllerAdded(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UINavigationControllerAdded(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UINavigationControllerAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UINavigationControllerAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_UINavigationControllerRemoved(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UINavigationControllerRemoved(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UINavigationControllerRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UINavigationControllerRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_UINavigationControllers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController>>(this->shim().UINavigationControllers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::IUINavigationControllerStatics2> : produce_base<D, Windows::Gaming::Input::IUINavigationControllerStatics2>
    {
        int32_t __stdcall FromGameController(void* gameController, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::UINavigationController>(this->shim().FromGameController(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    constexpr auto operator|(ArcadeStickButtons const left, ArcadeStickButtons const right) noexcept
    {
        return static_cast<ArcadeStickButtons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(ArcadeStickButtons& left, ArcadeStickButtons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(ArcadeStickButtons const left, ArcadeStickButtons const right) noexcept
    {
        return static_cast<ArcadeStickButtons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(ArcadeStickButtons& left, ArcadeStickButtons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(ArcadeStickButtons const value) noexcept
    {
        return static_cast<ArcadeStickButtons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(ArcadeStickButtons const left, ArcadeStickButtons const right) noexcept
    {
        return static_cast<ArcadeStickButtons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(ArcadeStickButtons& left, ArcadeStickButtons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(FlightStickButtons const left, FlightStickButtons const right) noexcept
    {
        return static_cast<FlightStickButtons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(FlightStickButtons& left, FlightStickButtons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(FlightStickButtons const left, FlightStickButtons const right) noexcept
    {
        return static_cast<FlightStickButtons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(FlightStickButtons& left, FlightStickButtons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(FlightStickButtons const value) noexcept
    {
        return static_cast<FlightStickButtons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(FlightStickButtons const left, FlightStickButtons const right) noexcept
    {
        return static_cast<FlightStickButtons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(FlightStickButtons& left, FlightStickButtons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(GamepadButtons const left, GamepadButtons const right) noexcept
    {
        return static_cast<GamepadButtons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(GamepadButtons& left, GamepadButtons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(GamepadButtons const left, GamepadButtons const right) noexcept
    {
        return static_cast<GamepadButtons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(GamepadButtons& left, GamepadButtons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(GamepadButtons const value) noexcept
    {
        return static_cast<GamepadButtons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(GamepadButtons const left, GamepadButtons const right) noexcept
    {
        return static_cast<GamepadButtons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(GamepadButtons& left, GamepadButtons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(OptionalUINavigationButtons const left, OptionalUINavigationButtons const right) noexcept
    {
        return static_cast<OptionalUINavigationButtons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(OptionalUINavigationButtons& left, OptionalUINavigationButtons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(OptionalUINavigationButtons const left, OptionalUINavigationButtons const right) noexcept
    {
        return static_cast<OptionalUINavigationButtons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(OptionalUINavigationButtons& left, OptionalUINavigationButtons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(OptionalUINavigationButtons const value) noexcept
    {
        return static_cast<OptionalUINavigationButtons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(OptionalUINavigationButtons const left, OptionalUINavigationButtons const right) noexcept
    {
        return static_cast<OptionalUINavigationButtons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(OptionalUINavigationButtons& left, OptionalUINavigationButtons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(RacingWheelButtons const left, RacingWheelButtons const right) noexcept
    {
        return static_cast<RacingWheelButtons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(RacingWheelButtons& left, RacingWheelButtons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(RacingWheelButtons const left, RacingWheelButtons const right) noexcept
    {
        return static_cast<RacingWheelButtons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(RacingWheelButtons& left, RacingWheelButtons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(RacingWheelButtons const value) noexcept
    {
        return static_cast<RacingWheelButtons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(RacingWheelButtons const left, RacingWheelButtons const right) noexcept
    {
        return static_cast<RacingWheelButtons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(RacingWheelButtons& left, RacingWheelButtons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(RequiredUINavigationButtons const left, RequiredUINavigationButtons const right) noexcept
    {
        return static_cast<RequiredUINavigationButtons>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(RequiredUINavigationButtons& left, RequiredUINavigationButtons const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(RequiredUINavigationButtons const left, RequiredUINavigationButtons const right) noexcept
    {
        return static_cast<RequiredUINavigationButtons>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(RequiredUINavigationButtons& left, RequiredUINavigationButtons const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(RequiredUINavigationButtons const value) noexcept
    {
        return static_cast<RequiredUINavigationButtons>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(RequiredUINavigationButtons const left, RequiredUINavigationButtons const right) noexcept
    {
        return static_cast<RequiredUINavigationButtons>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(RequiredUINavigationButtons& left, RequiredUINavigationButtons const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto ArcadeStick::ArcadeStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
    {
        return impl::call_factory<ArcadeStick, IArcadeStickStatics>([&](IArcadeStickStatics const& f) { return f.ArcadeStickAdded(value); });
    }
    inline ArcadeStick::ArcadeStickAdded_revoker ArcadeStick::ArcadeStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
    {
        auto f = get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>();
        return { f, f.ArcadeStickAdded(value) };
    }
    inline auto ArcadeStick::ArcadeStickAdded(winrt::event_token const& token)
    {
        impl::call_factory<ArcadeStick, IArcadeStickStatics>([&](IArcadeStickStatics const& f) { return f.ArcadeStickAdded(token); });
    }
    inline auto ArcadeStick::ArcadeStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
    {
        return impl::call_factory<ArcadeStick, IArcadeStickStatics>([&](IArcadeStickStatics const& f) { return f.ArcadeStickRemoved(value); });
    }
    inline ArcadeStick::ArcadeStickRemoved_revoker ArcadeStick::ArcadeStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::ArcadeStick> const& value)
    {
        auto f = get_activation_factory<ArcadeStick, Windows::Gaming::Input::IArcadeStickStatics>();
        return { f, f.ArcadeStickRemoved(value) };
    }
    inline auto ArcadeStick::ArcadeStickRemoved(winrt::event_token const& token)
    {
        impl::call_factory<ArcadeStick, IArcadeStickStatics>([&](IArcadeStickStatics const& f) { return f.ArcadeStickRemoved(token); });
    }
    inline auto ArcadeStick::ArcadeSticks()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::ArcadeStick>(*)(IArcadeStickStatics const&), ArcadeStick, IArcadeStickStatics>([](IArcadeStickStatics const& f) { return f.ArcadeSticks(); });
    }
    inline auto ArcadeStick::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<ArcadeStick, IArcadeStickStatics2>([&](IArcadeStickStatics2 const& f) { return f.FromGameController(gameController); });
    }
    inline auto FlightStick::FlightStickAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
    {
        return impl::call_factory<FlightStick, IFlightStickStatics>([&](IFlightStickStatics const& f) { return f.FlightStickAdded(value); });
    }
    inline FlightStick::FlightStickAdded_revoker FlightStick::FlightStickAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
    {
        auto f = get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>();
        return { f, f.FlightStickAdded(value) };
    }
    inline auto FlightStick::FlightStickAdded(winrt::event_token const& token)
    {
        impl::call_factory<FlightStick, IFlightStickStatics>([&](IFlightStickStatics const& f) { return f.FlightStickAdded(token); });
    }
    inline auto FlightStick::FlightStickRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
    {
        return impl::call_factory<FlightStick, IFlightStickStatics>([&](IFlightStickStatics const& f) { return f.FlightStickRemoved(value); });
    }
    inline FlightStick::FlightStickRemoved_revoker FlightStick::FlightStickRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::FlightStick> const& value)
    {
        auto f = get_activation_factory<FlightStick, Windows::Gaming::Input::IFlightStickStatics>();
        return { f, f.FlightStickRemoved(value) };
    }
    inline auto FlightStick::FlightStickRemoved(winrt::event_token const& token)
    {
        impl::call_factory<FlightStick, IFlightStickStatics>([&](IFlightStickStatics const& f) { return f.FlightStickRemoved(token); });
    }
    inline auto FlightStick::FlightSticks()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::FlightStick>(*)(IFlightStickStatics const&), FlightStick, IFlightStickStatics>([](IFlightStickStatics const& f) { return f.FlightSticks(); });
    }
    inline auto FlightStick::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<FlightStick, IFlightStickStatics>([&](IFlightStickStatics const& f) { return f.FromGameController(gameController); });
    }
    inline auto Gamepad::GamepadAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
    {
        return impl::call_factory<Gamepad, IGamepadStatics>([&](IGamepadStatics const& f) { return f.GamepadAdded(value); });
    }
    inline Gamepad::GamepadAdded_revoker Gamepad::GamepadAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
    {
        auto f = get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>();
        return { f, f.GamepadAdded(value) };
    }
    inline auto Gamepad::GamepadAdded(winrt::event_token const& token)
    {
        impl::call_factory<Gamepad, IGamepadStatics>([&](IGamepadStatics const& f) { return f.GamepadAdded(token); });
    }
    inline auto Gamepad::GamepadRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
    {
        return impl::call_factory<Gamepad, IGamepadStatics>([&](IGamepadStatics const& f) { return f.GamepadRemoved(value); });
    }
    inline Gamepad::GamepadRemoved_revoker Gamepad::GamepadRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::Gamepad> const& value)
    {
        auto f = get_activation_factory<Gamepad, Windows::Gaming::Input::IGamepadStatics>();
        return { f, f.GamepadRemoved(value) };
    }
    inline auto Gamepad::GamepadRemoved(winrt::event_token const& token)
    {
        impl::call_factory<Gamepad, IGamepadStatics>([&](IGamepadStatics const& f) { return f.GamepadRemoved(token); });
    }
    inline auto Gamepad::Gamepads()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::Gamepad>(*)(IGamepadStatics const&), Gamepad, IGamepadStatics>([](IGamepadStatics const& f) { return f.Gamepads(); });
    }
    inline auto Gamepad::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<Gamepad, IGamepadStatics2>([&](IGamepadStatics2 const& f) { return f.FromGameController(gameController); });
    }
    inline auto RacingWheel::RacingWheelAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
    {
        return impl::call_factory<RacingWheel, IRacingWheelStatics>([&](IRacingWheelStatics const& f) { return f.RacingWheelAdded(value); });
    }
    inline RacingWheel::RacingWheelAdded_revoker RacingWheel::RacingWheelAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
    {
        auto f = get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>();
        return { f, f.RacingWheelAdded(value) };
    }
    inline auto RacingWheel::RacingWheelAdded(winrt::event_token const& token)
    {
        impl::call_factory<RacingWheel, IRacingWheelStatics>([&](IRacingWheelStatics const& f) { return f.RacingWheelAdded(token); });
    }
    inline auto RacingWheel::RacingWheelRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
    {
        return impl::call_factory<RacingWheel, IRacingWheelStatics>([&](IRacingWheelStatics const& f) { return f.RacingWheelRemoved(value); });
    }
    inline RacingWheel::RacingWheelRemoved_revoker RacingWheel::RacingWheelRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RacingWheel> const& value)
    {
        auto f = get_activation_factory<RacingWheel, Windows::Gaming::Input::IRacingWheelStatics>();
        return { f, f.RacingWheelRemoved(value) };
    }
    inline auto RacingWheel::RacingWheelRemoved(winrt::event_token const& token)
    {
        impl::call_factory<RacingWheel, IRacingWheelStatics>([&](IRacingWheelStatics const& f) { return f.RacingWheelRemoved(token); });
    }
    inline auto RacingWheel::RacingWheels()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RacingWheel>(*)(IRacingWheelStatics const&), RacingWheel, IRacingWheelStatics>([](IRacingWheelStatics const& f) { return f.RacingWheels(); });
    }
    inline auto RacingWheel::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<RacingWheel, IRacingWheelStatics2>([&](IRacingWheelStatics2 const& f) { return f.FromGameController(gameController); });
    }
    inline auto RawGameController::RawGameControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
    {
        return impl::call_factory<RawGameController, IRawGameControllerStatics>([&](IRawGameControllerStatics const& f) { return f.RawGameControllerAdded(value); });
    }
    inline RawGameController::RawGameControllerAdded_revoker RawGameController::RawGameControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
    {
        auto f = get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>();
        return { f, f.RawGameControllerAdded(value) };
    }
    inline auto RawGameController::RawGameControllerAdded(winrt::event_token const& token)
    {
        impl::call_factory<RawGameController, IRawGameControllerStatics>([&](IRawGameControllerStatics const& f) { return f.RawGameControllerAdded(token); });
    }
    inline auto RawGameController::RawGameControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
    {
        return impl::call_factory<RawGameController, IRawGameControllerStatics>([&](IRawGameControllerStatics const& f) { return f.RawGameControllerRemoved(value); });
    }
    inline RawGameController::RawGameControllerRemoved_revoker RawGameController::RawGameControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::RawGameController> const& value)
    {
        auto f = get_activation_factory<RawGameController, Windows::Gaming::Input::IRawGameControllerStatics>();
        return { f, f.RawGameControllerRemoved(value) };
    }
    inline auto RawGameController::RawGameControllerRemoved(winrt::event_token const& token)
    {
        impl::call_factory<RawGameController, IRawGameControllerStatics>([&](IRawGameControllerStatics const& f) { return f.RawGameControllerRemoved(token); });
    }
    inline auto RawGameController::RawGameControllers()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::RawGameController>(*)(IRawGameControllerStatics const&), RawGameController, IRawGameControllerStatics>([](IRawGameControllerStatics const& f) { return f.RawGameControllers(); });
    }
    inline auto RawGameController::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<RawGameController, IRawGameControllerStatics>([&](IRawGameControllerStatics const& f) { return f.FromGameController(gameController); });
    }
    inline auto UINavigationController::UINavigationControllerAdded(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
    {
        return impl::call_factory<UINavigationController, IUINavigationControllerStatics>([&](IUINavigationControllerStatics const& f) { return f.UINavigationControllerAdded(value); });
    }
    inline UINavigationController::UINavigationControllerAdded_revoker UINavigationController::UINavigationControllerAdded(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
    {
        auto f = get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>();
        return { f, f.UINavigationControllerAdded(value) };
    }
    inline auto UINavigationController::UINavigationControllerAdded(winrt::event_token const& token)
    {
        impl::call_factory<UINavigationController, IUINavigationControllerStatics>([&](IUINavigationControllerStatics const& f) { return f.UINavigationControllerAdded(token); });
    }
    inline auto UINavigationController::UINavigationControllerRemoved(Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
    {
        return impl::call_factory<UINavigationController, IUINavigationControllerStatics>([&](IUINavigationControllerStatics const& f) { return f.UINavigationControllerRemoved(value); });
    }
    inline UINavigationController::UINavigationControllerRemoved_revoker UINavigationController::UINavigationControllerRemoved(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Gaming::Input::UINavigationController> const& value)
    {
        auto f = get_activation_factory<UINavigationController, Windows::Gaming::Input::IUINavigationControllerStatics>();
        return { f, f.UINavigationControllerRemoved(value) };
    }
    inline auto UINavigationController::UINavigationControllerRemoved(winrt::event_token const& token)
    {
        impl::call_factory<UINavigationController, IUINavigationControllerStatics>([&](IUINavigationControllerStatics const& f) { return f.UINavigationControllerRemoved(token); });
    }
    inline auto UINavigationController::UINavigationControllers()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Input::UINavigationController>(*)(IUINavigationControllerStatics const&), UINavigationController, IUINavigationControllerStatics>([](IUINavigationControllerStatics const& f) { return f.UINavigationControllers(); });
    }
    inline auto UINavigationController::FromGameController(Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<UINavigationController, IUINavigationControllerStatics2>([&](IUINavigationControllerStatics2 const& f) { return f.FromGameController(gameController); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Gaming::Input::IArcadeStick> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IArcadeStickStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IArcadeStickStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IFlightStick> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IFlightStickStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IGameController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IGameControllerBatteryInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IGamepad> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IGamepad2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IGamepadStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IGamepadStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IHeadset> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IRacingWheel> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IRacingWheelStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IRacingWheelStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IRawGameController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IRawGameController2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IRawGameControllerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IUINavigationController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IUINavigationControllerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::IUINavigationControllerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ArcadeStick> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::FlightStick> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Gamepad> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Headset> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::RacingWheel> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::RawGameController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::UINavigationController> : winrt::impl::hash_base {};
#endif
}
#endif
