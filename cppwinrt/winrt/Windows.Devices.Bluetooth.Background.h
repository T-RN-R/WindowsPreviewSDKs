// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Bluetooth_Background_H
#define WINRT_Windows_Devices_Bluetooth_Background_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.191023.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.Bluetooth.h"
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Status() const
    {
        Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails2<D>::SelectedTransmitPowerLevelInDBm() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails2)->get_SelectedTransmitPowerLevelInDBm(&value));
        return Windows::Foundation::IReference<int16_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Advertisements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails)->get_Advertisements(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::SignalStrengthFilter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails)->get_SignalStrengthFilter(&value));
        return Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails<D>::Characteristic() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails)->get_Characteristic(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails)->get_Value(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>::EventTriggeringMode() const
    {
        Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2)->get_EventTriggeringMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>::ValueChangedEvents() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2)->get_ValueChangedEvents(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>::TriggerId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection)->get_TriggerId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>::Service() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection)->get_Service(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection)->Start());
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics<D>::AllServices() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics)->get_AllServices(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails<D>::Connection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails)->get_Connection(&value));
        return Windows::Devices::Bluetooth::Background::GattServiceProviderConnection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>::Socket() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails)->get_Socket(&value));
        return Windows::Networking::Sockets::StreamSocket{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>::Incoming() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails)->get_Incoming(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>::RemoteDevice() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails)->get_RemoteDevice(&value));
        return Windows::Devices::Bluetooth::BluetoothDevice{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::SdpRecord() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->get_SdpRecord(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::SdpRecord(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->put_SdpRecord(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::LocalServiceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->get_LocalServiceId(&value));
        return Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::LocalServiceId(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->put_LocalServiceId(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::ServiceCapabilities() const
    {
        Windows::Devices::Bluetooth::BluetoothServiceCapabilities value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->get_ServiceCapabilities(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->put_ServiceCapabilities(static_cast<uint32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation<D>::RemoteServiceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation)->get_RemoteServiceId(&value));
        return Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation<D>::RemoteServiceId(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation)->put_RemoteServiceId(*(void**)(&value)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails2> : produce_base<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails2>
    {
        int32_t __stdcall get_SelectedTransmitPowerLevelInDBm(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<int16_t>>(this->shim().SelectedTransmitPowerLevelInDBm());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>
    {
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Advertisements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>>(this->shim().Advertisements());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SignalStrengthFilter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>(this->shim().SignalStrengthFilter());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>
    {
        int32_t __stdcall get_Characteristic(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>(this->shim().Characteristic());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
    {
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EventTriggeringMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>(this->shim().EventTriggeringMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValueChangedEvents(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>>(this->shim().ValueChangedEvents());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>
    {
        int32_t __stdcall get_TriggerId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Service(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>(this->shim().Service());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>
    {
        int32_t __stdcall get_AllServices(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>>(this->shim().AllServices());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>
    {
        int32_t __stdcall get_Connection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>(this->shim().Connection());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>
    {
        int32_t __stdcall get_Socket(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocket>(this->shim().Socket());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Incoming(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Incoming());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteDevice(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothDevice>(this->shim().RemoteDevice());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation> : produce_base<D, Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>
    {
        int32_t __stdcall get_SdpRecord(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().SdpRecord());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SdpRecord(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SdpRecord(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalServiceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(this->shim().LocalServiceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LocalServiceId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalServiceId(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceCapabilities(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>(this->shim().ServiceCapabilities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ServiceCapabilities(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceCapabilities(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothServiceCapabilities const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation> : produce_base<D, Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>
    {
        int32_t __stdcall get_RemoteServiceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(this->shim().RemoteServiceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RemoteServiceId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteServiceId(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background
{
    inline auto GattServiceProviderConnection::AllServices()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>(*)(IGattServiceProviderConnectionStatics const&), GattServiceProviderConnection, IGattServiceProviderConnectionStatics>([](IGattServiceProviderConnectionStatics const& f) { return f.AllServices(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation> : winrt::impl::hash_base {};
#endif
}
#endif
