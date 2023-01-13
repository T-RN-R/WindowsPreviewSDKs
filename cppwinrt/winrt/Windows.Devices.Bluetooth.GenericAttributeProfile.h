// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_H
#define WINRT_Windows_Devices_Bluetooth_GenericAttributeProfile_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200213.5"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.Bluetooth.h"
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::GetDescriptors(winrt::guid const& descriptorUuid) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->GetDescriptors(impl::bind_in(descriptorUuid), &value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::CharacteristicProperties() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_CharacteristicProperties(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_ProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->put_ProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::UserDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_UserDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::Uuid() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_Uuid(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::AttributeHandle() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_AttributeHandle(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::PresentationFormats() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_PresentationFormats(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ReadValueAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->ReadValueAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->ReadValueWithCacheModeAsync(static_cast<int32_t>(cacheMode), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::WriteValueAsync(Windows::Storage::Streams::IBuffer const& value) const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->WriteValueAsync(*(void**)(&value), &asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::WriteValueAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const& writeOption) const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->WriteValueWithOptionAsync(*(void**)(&value), static_cast<int32_t>(writeOption), &asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ReadClientCharacteristicConfigurationDescriptorAsync() const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->ReadClientCharacteristicConfigurationDescriptorAsync(&asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const& clientCharacteristicConfigurationDescriptorValue) const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->WriteClientCharacteristicConfigurationDescriptorAsync(static_cast<int32_t>(clientCharacteristicConfigurationDescriptorValue), &asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const& valueChangedHandler) const
    {
        winrt::event_token valueChangedEventCookie{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->add_ValueChanged(*(void**)(&valueChangedHandler), put_abi(valueChangedEventCookie)));
        return valueChangedEventCookie;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const& valueChangedHandler) const
    {
        return impl::make_event_revoker<D, ValueChanged_revoker>(this, ValueChanged(valueChangedHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged(winrt::event_token const& valueChangedEventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->remove_ValueChanged(impl::bind_in(valueChangedEventCookie)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2<D>::Service() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2)->get_Service(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2<D>::GetAllDescriptors() const
    {
        void* descriptors{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2)->GetAllDescriptors(&descriptors));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>{ descriptors, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsWithCacheModeAsync(static_cast<int32_t>(cacheMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsForUuidAsync(winrt::guid const& descriptorUuid) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsForUuidAsync(impl::bind_in(descriptorUuid), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsForUuidAsync(winrt::guid const& descriptorUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsForUuidWithCacheModeAsync(impl::bind_in(descriptorUuid), static_cast<int32_t>(cacheMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->WriteValueWithResultAsync(*(void**)(&value), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const& writeOption) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->WriteValueWithResultAndOptionAsync(*(void**)(&value), static_cast<int32_t>(writeOption), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::WriteClientCharacteristicConfigurationDescriptorWithResultAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const& clientCharacteristicConfigurationDescriptorValue) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->WriteClientCharacteristicConfigurationDescriptorWithResultAsync(static_cast<int32_t>(clientCharacteristicConfigurationDescriptorValue), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
    {
        winrt::guid characteristicUuid{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics)->ConvertShortIdToUuid(shortId, put_abi(characteristicUuid)));
        return characteristicUuid;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BatteryLevel() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BatteryLevel(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BloodPressureFeature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BloodPressureFeature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BloodPressureMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BloodPressureMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BodySensorLocation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BodySensorLocation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::CscFeature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_CscFeature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::CscMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_CscMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::GlucoseFeature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_GlucoseFeature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_GlucoseMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurementContext() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_GlucoseMeasurementContext(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::HeartRateControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_HeartRateControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::HeartRateMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_HeartRateMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::IntermediateCuffPressure() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_IntermediateCuffPressure(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::IntermediateTemperature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_IntermediateTemperature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::MeasurementInterval() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_MeasurementInterval(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::RecordAccessControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_RecordAccessControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::RscFeature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_RscFeature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::RscMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_RscMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::SCControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_SCControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::SensorLocation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_SensorLocation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::TemperatureMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_TemperatureMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::TemperatureType() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_TemperatureType(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertCategoryId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertCategoryId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertCategoryIdBitMask() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertCategoryIdBitMask(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertLevel() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertLevel(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertNotificationControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertNotificationControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertStatus() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertStatus(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapAppearance() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapAppearance(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::BootKeyboardInputReport() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_BootKeyboardInputReport(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::BootKeyboardOutputReport() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_BootKeyboardOutputReport(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::BootMouseInputReport() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_BootMouseInputReport(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CurrentTime() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CurrentTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerFeature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerFeature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerMeasurement() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerMeasurement(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerVector() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerVector(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DateTime() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DateTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DayDateTime() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DayDateTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DayOfWeek() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DayOfWeek(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapDeviceName() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapDeviceName(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DstOffset() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DstOffset(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ExactTime256() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ExactTime256(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::FirmwareRevisionString() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_FirmwareRevisionString(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::HardwareRevisionString() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_HardwareRevisionString(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::HidControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_HidControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::HidInformation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_HidInformation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::Ieee1107320601RegulatoryCertificationDataList() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_Ieee1107320601RegulatoryCertificationDataList(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LnControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LnControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LnFeature() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LnFeature(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LocalTimeInformation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LocalTimeInformation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LocationAndSpeed() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LocationAndSpeed(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ManufacturerNameString() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ManufacturerNameString(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ModelNumberString() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ModelNumberString(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::Navigation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_Navigation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::NewAlert() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_NewAlert(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPreferredConnectionParameters() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapPeripheralPreferredConnectionParameters(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPrivacyFlag() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapPeripheralPrivacyFlag(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::PnpId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_PnpId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::PositionQuality() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_PositionQuality(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ProtocolMode() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ProtocolMode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapReconnectionAddress() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapReconnectionAddress(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ReferenceTimeInformation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ReferenceTimeInformation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::Report() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_Report(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ReportMap() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ReportMap(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::RingerControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_RingerControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::RingerSetting() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_RingerSetting(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ScanIntervalWindow() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ScanIntervalWindow(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ScanRefresh() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ScanRefresh(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SerialNumberString() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SerialNumberString(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GattServiceChanged() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GattServiceChanged(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SoftwareRevisionString() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SoftwareRevisionString(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SupportedNewAlertCategory() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SupportedNewAlertCategory(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SupportUnreadAlertCategory() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SupportUnreadAlertCategory(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SystemId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SystemId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeAccuracy() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeAccuracy(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeSource() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeSource(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeUpdateControlPoint() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeUpdateControlPoint(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeUpdateState() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeUpdateState(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeWithDst() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeWithDst(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeZone() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeZone(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TxPowerLevel() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TxPowerLevel(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::UnreadAlertStatus() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_UnreadAlertStatus(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>::Characteristics() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult)->get_Characteristics(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>::SubscribedClient() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult)->get_SubscribedClient(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult2<D>::BytesSent() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2)->get_BytesSent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->get_ProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->put_ProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::Uuid() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->get_Uuid(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::AttributeHandle() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->get_AttributeHandle(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ReadValueAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->ReadValueAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->ReadValueWithCacheModeAsync(static_cast<int32_t>(cacheMode), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::WriteValueAsync(Windows::Storage::Streams::IBuffer const& value) const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->WriteValueAsync(*(void**)(&value), &action));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>{ action, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor2<D>::WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2)->WriteValueWithResultAsync(*(void**)(&value), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
    {
        winrt::guid descriptorUuid{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics)->ConvertShortIdToUuid(shortId, put_abi(descriptorUuid)));
        return descriptorUuid;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicAggregateFormat() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicAggregateFormat(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicExtendedProperties() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicExtendedProperties(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicPresentationFormat() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicPresentationFormat(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicUserDescription() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicUserDescription(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::ClientCharacteristicConfiguration() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_ClientCharacteristicConfiguration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::ServerCharacteristicConfiguration() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_ServerCharacteristicConfiguration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>::Descriptors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult)->get_Descriptors(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::GetCharacteristics(winrt::guid const& characteristicUuid) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->GetCharacteristics(impl::bind_in(characteristicUuid), &value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::GetIncludedServices(winrt::guid const& serviceUuid) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->GetIncludedServices(impl::bind_in(serviceUuid), &value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::Uuid() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->get_Uuid(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::AttributeHandle() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->get_AttributeHandle(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothLEDevice) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::Device() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->get_Device(&value));
        return Windows::Devices::Bluetooth::BluetoothLEDevice{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::ParentServices() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->get_ParentServices(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::GetAllCharacteristics() const
    {
        void* characteristics{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->GetAllCharacteristics(&characteristics));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>{ characteristics, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::GetAllIncludedServices() const
    {
        void* includedServices{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->GetAllIncludedServices(&includedServices));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>{ includedServices, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceAccessInformation) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::DeviceAccessInformation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->get_DeviceAccessInformation(&value));
        return Windows::Devices::Enumeration::DeviceAccessInformation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->get_Session(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::SharingMode() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->get_SharingMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::RequestAccessAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->RequestAccessAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::OpenAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->OpenAsync(static_cast<int32_t>(sharingMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsWithCacheModeAsync(static_cast<int32_t>(cacheMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsForUuidAsync(winrt::guid const& characteristicUuid) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsForUuidAsync(impl::bind_in(characteristicUuid), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsForUuidAsync(winrt::guid const& characteristicUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsForUuidWithCacheModeAsync(impl::bind_in(characteristicUuid), static_cast<int32_t>(cacheMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesWithCacheModeAsync(static_cast<int32_t>(cacheMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesForUuidAsync(winrt::guid const& serviceUuid) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesForUuidAsync(impl::bind_in(serviceUuid), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesForUuidAsync(winrt::guid const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesForUuidWithCacheModeAsync(impl::bind_in(serviceUuid), static_cast<int32_t>(cacheMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->FromIdAsync(*(void**)(&deviceId), &asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromUuid(winrt::guid const& serviceUuid) const
    {
        void* selector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->GetDeviceSelectorFromUuid(impl::bind_in(serviceUuid), &selector));
        return hstring{ selector, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromShortId(uint16_t serviceShortId) const
    {
        void* selector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->GetDeviceSelectorFromShortId(serviceShortId, &selector));
        return hstring{ selector, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
    {
        winrt::guid serviceUuid{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->ConvertShortIdToUuid(shortId, put_abi(serviceUuid)));
        return serviceUuid;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->FromIdWithSharingModeAsync(*(void**)(&deviceId), static_cast<int32_t>(sharingMode), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceId(*(void**)(&bluetoothDeviceId), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(*(void**)(&bluetoothDeviceId), static_cast<int32_t>(cacheMode), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceIdAndUuid(*(void**)(&bluetoothDeviceId), impl::bind_in(serviceUuid), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(*(void**)(&bluetoothDeviceId), impl::bind_in(serviceUuid), static_cast<int32_t>(cacheMode), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>::Services() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult)->get_Services(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::Uuid() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_Uuid(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::StaticValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_StaticValue(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::CharacteristicProperties() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_CharacteristicProperties(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_ReadProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_WriteProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::CreateDescriptorAsync(winrt::guid const& descriptorUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters const& parameters) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->CreateDescriptorAsync(impl::bind_in(descriptorUuid), *(void**)(&parameters), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::Descriptors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_Descriptors(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::UserDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_UserDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::PresentationFormats() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_PresentationFormats(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClients() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_SubscribedClients(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->add_SubscribedClientsChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, SubscribedClientsChanged_revoker>(this, SubscribedClientsChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->remove_SubscribedClientsChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->add_ReadRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ReadRequested_revoker>(this, ReadRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->remove_ReadRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->add_WriteRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, WriteRequested_revoker>(this, WriteRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->remove_WriteRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::NotifyValueAsync(Windows::Storage::Streams::IBuffer const& value) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->NotifyValueAsync(*(void**)(&value), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::NotifyValueAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient const& subscribedClient) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->NotifyValueForSubscribedClientAsync(*(void**)(&value), *(void**)(&subscribedClient), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::StaticValue(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_StaticValue(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::StaticValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_StaticValue(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_CharacteristicProperties(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::CharacteristicProperties() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_CharacteristicProperties(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_ReadProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::ReadProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_ReadProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_WriteProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::WriteProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_WriteProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::UserDescription(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_UserDescription(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::UserDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_UserDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::PresentationFormats() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_PresentationFormats(&value));
        return Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult<D>::Characteristic() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult)->get_Characteristic(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::Uuid() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_Uuid(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::StaticValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_StaticValue(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_ReadProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_WriteProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->add_ReadRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ReadRequested_revoker>(this, ReadRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->remove_ReadRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->add_WriteRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, WriteRequested_revoker>(this, WriteRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->remove_WriteRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::StaticValue(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->put_StaticValue(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::StaticValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->get_StaticValue(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->put_ReadProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::ReadProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->get_ReadProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->put_WriteProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::WriteProtectionLevel() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->get_WriteProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult<D>::Descriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult)->get_Descriptor(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>::Uuid() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService)->get_Uuid(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>::CreateCharacteristicAsync(winrt::guid const& characteristicUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters const& parameters) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService)->CreateCharacteristicAsync(impl::bind_in(characteristicUuid), *(void**)(&parameters), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>::Characteristics() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService)->get_Characteristics(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::FormatType() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_FormatType(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Exponent() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Exponent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Unit() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Unit(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Namespace() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Namespace(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Description() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Description(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics<D>::BluetoothSigAssignedNumbers() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics)->get_BluetoothSigAssignedNumbers(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics2<D>::FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2)->FromParts(formatType, exponent, unit, namespaceId, description, &result));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Boolean() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Boolean(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Bit2() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Bit2(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Nibble() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Nibble(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt8() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt8(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt12() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt12(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt16() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt16(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt24() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt24(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt32() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt32(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt48() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt48(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt64() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt64(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt128() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt128(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt8() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt8(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt12() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt12(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt16() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt16(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt24() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt24(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt32() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt32(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt48() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt48(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt64() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt64(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt128() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt128(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Float32() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Float32(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Float64() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Float64(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SFloat() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SFloat(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Float() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Float(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::DUInt16() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_DUInt16(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Utf8() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Utf8(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Utf16() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Utf16(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Struct() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Struct(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidHandle() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidHandle(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::ReadNotPermitted() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_ReadNotPermitted(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::WriteNotPermitted() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_WriteNotPermitted(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidPdu() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidPdu(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientAuthentication() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientAuthentication(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::RequestNotSupported() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_RequestNotSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidOffset() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidOffset(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientAuthorization() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientAuthorization(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::PrepareQueueFull() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_PrepareQueueFull(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::AttributeNotFound() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_AttributeNotFound(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::AttributeNotLong() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_AttributeNotLong(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientEncryptionKeySize() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientEncryptionKeySize(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidAttributeValueLength() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidAttributeValueLength(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::UnlikelyError() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_UnlikelyError(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientEncryption() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientEncryption(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::UnsupportedGroupType() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_UnsupportedGroupType(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint8_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientResources() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientResources(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::ClientCharacteristicConfigurationDescriptor() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult)->get_ClientCharacteristicConfigurationDescriptor(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult2<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::Offset() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->get_Offset(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::Length() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->get_Length(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::State() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->add_StateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->remove_StateChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::RespondWithValue(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->RespondWithValue(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::RespondWithProtocolError(uint8_t protocolError) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->RespondWithProtocolError(protocolError));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs)->get_Session(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs)->GetDeferral(&value));
        return Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>::GetRequestAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs)->GetRequestAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult)->get_Value(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult2<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction<D>::WriteValue(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction)->WriteValue(*(void**)(&characteristic), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction<D>::CommitAsync() const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction)->CommitAsync(&asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction2<D>::CommitWithResultAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2)->CommitWithResultAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs<D>::State() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::Service() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->get_Service(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatus() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->get_AdvertisementStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->add_AdvertisementStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AdvertisementStatusChanged_revoker>(this, AdvertisementStatusChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->remove_AdvertisementStatusChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::StartAdvertising() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->StartAdvertising());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::StartAdvertising(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& parameters) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->StartAdvertisingWithParameters(*(void**)(&parameters)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::StopAdvertising() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->StopAdvertising());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsConnectable(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->put_IsConnectable(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsConnectable() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->get_IsConnectable(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsDiscoverable(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->put_IsDiscoverable(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsDiscoverable() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->get_IsDiscoverable(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters2<D>::ServiceData(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2)->put_ServiceData(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters2<D>::ServiceData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2)->get_ServiceData(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult<D>::ServiceProvider() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult)->get_ServiceProvider(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderStatics<D>::CreateAsync(winrt::guid const& serviceUuid) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics)->CreateAsync(impl::bind_in(serviceUuid), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::Battery() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_Battery(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::BloodPressure() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_BloodPressure(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::CyclingSpeedAndCadence() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_CyclingSpeedAndCadence(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::GenericAccess() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_GenericAccess(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::GenericAttribute() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_GenericAttribute(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::Glucose() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_Glucose(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::HealthThermometer() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_HealthThermometer(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::HeartRate() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_HeartRate(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::RunningSpeedAndCadence() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_RunningSpeedAndCadence(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::AlertNotification() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_AlertNotification(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::CurrentTime() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_CurrentTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::CyclingPower() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_CyclingPower(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::DeviceInformation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_DeviceInformation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::HumanInterfaceDevice() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_HumanInterfaceDevice(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::ImmediateAlert() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_ImmediateAlert(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::LinkLoss() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_LinkLoss(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::LocationAndNavigation() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_LocationAndNavigation(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::NextDstChange() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_NextDstChange(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::PhoneAlertStatus() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_PhoneAlertStatus(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::ReferenceTimeUpdate() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_ReferenceTimeUpdate(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::ScanParameters() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_ScanParameters(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::TxPower() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_TxPower(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothDeviceId) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_DeviceId(&value));
        return Windows::Devices::Bluetooth::BluetoothDeviceId{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::CanMaintainConnection() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_CanMaintainConnection(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaintainConnection(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->put_MaintainConnection(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaintainConnection() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_MaintainConnection(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSize() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_MaxPduSize(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatus() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_SessionStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->add_MaxPduSizeChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, MaxPduSizeChanged_revoker>(this, MaxPduSizeChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->remove_MaxPduSizeChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->add_SessionStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SessionStatusChanged_revoker>(this, SessionStatusChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->remove_SessionStatusChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatics<D>::FromDeviceIdAsync(Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics)->FromDeviceIdAsync(*(void**)(&deviceId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs<D>::Error() const
    {
        Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->get_Session(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint16_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSize() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->get_MaxNotificationSize(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->add_MaxNotificationSizeChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, MaxNotificationSizeChanged_revoker>(this, MaxNotificationSizeChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->remove_MaxNotificationSizeChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs<D>::CharacteristicValue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs)->get_CharacteristicValue(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs<D>::Timestamp() const
    {
        Windows::Foundation::DateTime timestamp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs)->get_Timestamp(put_abi(timestamp)));
        return timestamp;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_Value(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Offset() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_Offset(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Option() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_Option(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::State() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->add_StateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged_revoker consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->remove_StateChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Respond() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->Respond());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::RespondWithProtocolError(uint8_t protocolError) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->RespondWithProtocolError(protocolError));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs)->get_Session(&value));
        return Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs)->GetDeferral(&value));
        return Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>::GetRequestAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs)->GetRequestAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult<D>::Status() const
    {
        Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint8_t>) consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult<D>::ProtocolError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult)->get_ProtocolError(&value));
        return Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
    {
        int32_t __stdcall GetDescriptors(winrt::guid descriptorUuid, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>>(this->shim().GetDescriptors(*reinterpret_cast<winrt::guid const*>(&descriptorUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacteristicProperties(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>(this->shim().CharacteristicProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().ProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uuid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Uuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributeHandle(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AttributeHandle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PresentationFormats(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>>(this->shim().PresentationFormats());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadValueAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>>(this->shim().ReadValueAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadValueWithCacheModeAsync(int32_t cacheMode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>>(this->shim().ReadValueAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteValueAsync(void* value, void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>>(this->shim().WriteValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteValueWithOptionAsync(void* value, int32_t writeOption, void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>>(this->shim().WriteValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const*>(&writeOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadClientCharacteristicConfigurationDescriptorAsync(void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>>(this->shim().ReadClientCharacteristicConfigurationDescriptorAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteClientCharacteristicConfigurationDescriptorAsync(int32_t clientCharacteristicConfigurationDescriptorValue, void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>>(this->shim().WriteClientCharacteristicConfigurationDescriptorAsync(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const*>(&clientCharacteristicConfigurationDescriptorValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ValueChanged(void* valueChangedHandler, winrt::event_token* valueChangedEventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(valueChangedEventCookie);
            typename D::abi_guard guard(this->shim());
            *valueChangedEventCookie = detach_from<winrt::event_token>(this->shim().ValueChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const*>(&valueChangedHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ValueChanged(winrt::event_token valueChangedEventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueChanged(*reinterpret_cast<winrt::event_token const*>(&valueChangedEventCookie));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
    {
        int32_t __stdcall get_Service(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>(this->shim().Service());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAllDescriptors(void** descriptors) noexcept final try
        {
            clear_abi(descriptors);
            typename D::abi_guard guard(this->shim());
            *descriptors = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>>(this->shim().GetAllDescriptors());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
    {
        int32_t __stdcall GetDescriptorsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>>(this->shim().GetDescriptorsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDescriptorsWithCacheModeAsync(int32_t cacheMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>>(this->shim().GetDescriptorsAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDescriptorsForUuidAsync(winrt::guid descriptorUuid, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>>(this->shim().GetDescriptorsForUuidAsync(*reinterpret_cast<winrt::guid const*>(&descriptorUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDescriptorsForUuidWithCacheModeAsync(winrt::guid descriptorUuid, int32_t cacheMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>>(this->shim().GetDescriptorsForUuidAsync(*reinterpret_cast<winrt::guid const*>(&descriptorUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteValueWithResultAsync(void* value, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>>(this->shim().WriteValueWithResultAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteValueWithResultAndOptionAsync(void* value, int32_t writeOption, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>>(this->shim().WriteValueWithResultAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const*>(&writeOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteClientCharacteristicConfigurationDescriptorWithResultAsync(int32_t clientCharacteristicConfigurationDescriptorValue, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>>(this->shim().WriteClientCharacteristicConfigurationDescriptorWithResultAsync(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const*>(&clientCharacteristicConfigurationDescriptorValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
    {
        int32_t __stdcall ConvertShortIdToUuid(uint16_t shortId, winrt::guid* characteristicUuid) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *characteristicUuid = detach_from<winrt::guid>(this->shim().ConvertShortIdToUuid(shortId));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
    {
        int32_t __stdcall get_BatteryLevel(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BatteryLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BloodPressureFeature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BloodPressureFeature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BloodPressureMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BloodPressureMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BodySensorLocation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BodySensorLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CscFeature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CscFeature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CscMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CscMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlucoseFeature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GlucoseFeature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlucoseMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GlucoseMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlucoseMeasurementContext(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GlucoseMeasurementContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HeartRateControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HeartRateControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HeartRateMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HeartRateMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IntermediateCuffPressure(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().IntermediateCuffPressure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IntermediateTemperature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().IntermediateTemperature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MeasurementInterval(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().MeasurementInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RecordAccessControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().RecordAccessControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RscFeature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().RscFeature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RscMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().RscMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SCControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SCControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SensorLocation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SensorLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TemperatureMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TemperatureMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TemperatureType(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TemperatureType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
    {
        int32_t __stdcall get_AlertCategoryId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AlertCategoryId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlertCategoryIdBitMask(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AlertCategoryIdBitMask());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlertLevel(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AlertLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlertNotificationControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AlertNotificationControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlertStatus(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AlertStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GapAppearance(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GapAppearance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BootKeyboardInputReport(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BootKeyboardInputReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BootKeyboardOutputReport(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BootKeyboardOutputReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BootMouseInputReport(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BootMouseInputReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentTime(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CurrentTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CyclingPowerControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CyclingPowerControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CyclingPowerFeature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CyclingPowerFeature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CyclingPowerMeasurement(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CyclingPowerMeasurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CyclingPowerVector(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CyclingPowerVector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DateTime(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().DateTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DayDateTime(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().DayDateTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DayOfWeek(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().DayOfWeek());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GapDeviceName(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GapDeviceName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DstOffset(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().DstOffset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExactTime256(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ExactTime256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FirmwareRevisionString(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().FirmwareRevisionString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareRevisionString(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HardwareRevisionString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HidControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HidControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HidInformation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HidInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ieee1107320601RegulatoryCertificationDataList(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Ieee1107320601RegulatoryCertificationDataList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LnControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LnControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LnFeature(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LnFeature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalTimeInformation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LocalTimeInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocationAndSpeed(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LocationAndSpeed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ManufacturerNameString(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ManufacturerNameString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ModelNumberString(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ModelNumberString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Navigation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Navigation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewAlert(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().NewAlert());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GapPeripheralPreferredConnectionParameters(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GapPeripheralPreferredConnectionParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GapPeripheralPrivacyFlag(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GapPeripheralPrivacyFlag());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PnpId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().PnpId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PositionQuality(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().PositionQuality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolMode(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ProtocolMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GapReconnectionAddress(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GapReconnectionAddress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReferenceTimeInformation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ReferenceTimeInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Report(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Report());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReportMap(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ReportMap());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RingerControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().RingerControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RingerSetting(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().RingerSetting());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScanIntervalWindow(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ScanIntervalWindow());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScanRefresh(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ScanRefresh());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SerialNumberString(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SerialNumberString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GattServiceChanged(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GattServiceChanged());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SoftwareRevisionString(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SoftwareRevisionString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedNewAlertCategory(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SupportedNewAlertCategory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportUnreadAlertCategory(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SupportUnreadAlertCategory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SystemId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeAccuracy(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TimeAccuracy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeSource(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TimeSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeUpdateControlPoint(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TimeUpdateControlPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeUpdateState(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TimeUpdateState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeWithDst(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TimeWithDst());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimeZone(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TimeZone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TxPowerLevel(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TxPowerLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UnreadAlertStatus(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().UnreadAlertStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Characteristics(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>>(this->shim().Characteristics());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
    {
        int32_t __stdcall get_SubscribedClient(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>(this->shim().SubscribedClient());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2>
    {
        int32_t __stdcall get_BytesSent(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().BytesSent());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
    {
        int32_t __stdcall get_ProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().ProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uuid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Uuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributeHandle(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AttributeHandle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadValueAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>>(this->shim().ReadValueAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadValueWithCacheModeAsync(int32_t cacheMode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>>(this->shim().ReadValueAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteValueAsync(void* value, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>>(this->shim().WriteValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
    {
        int32_t __stdcall WriteValueWithResultAsync(void* value, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>>(this->shim().WriteValueWithResultAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
    {
        int32_t __stdcall ConvertShortIdToUuid(uint16_t shortId, winrt::guid* descriptorUuid) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *descriptorUuid = detach_from<winrt::guid>(this->shim().ConvertShortIdToUuid(shortId));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
    {
        int32_t __stdcall get_CharacteristicAggregateFormat(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CharacteristicAggregateFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacteristicExtendedProperties(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CharacteristicExtendedProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacteristicPresentationFormat(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CharacteristicPresentationFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacteristicUserDescription(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CharacteristicUserDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ClientCharacteristicConfiguration(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ClientCharacteristicConfiguration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCharacteristicConfiguration(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ServerCharacteristicConfiguration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Descriptors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>>(this->shim().Descriptors());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
    {
        int32_t __stdcall GetCharacteristics(winrt::guid characteristicUuid, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>>(this->shim().GetCharacteristics(*reinterpret_cast<winrt::guid const*>(&characteristicUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIncludedServices(winrt::guid serviceUuid, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>>(this->shim().GetIncludedServices(*reinterpret_cast<winrt::guid const*>(&serviceUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uuid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Uuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributeHandle(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AttributeHandle());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
    {
        int32_t __stdcall get_Device(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothLEDevice>(this->shim().Device());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ParentServices(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>>(this->shim().ParentServices());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAllCharacteristics(void** characteristics) noexcept final try
        {
            clear_abi(characteristics);
            typename D::abi_guard guard(this->shim());
            *characteristics = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>>(this->shim().GetAllCharacteristics());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAllIncludedServices(void** includedServices) noexcept final try
        {
            clear_abi(includedServices);
            typename D::abi_guard guard(this->shim());
            *includedServices = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>>(this->shim().GetAllIncludedServices());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
    {
        int32_t __stdcall get_DeviceAccessInformation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceAccessInformation>(this->shim().DeviceAccessInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SharingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode>(this->shim().SharingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenAsync(int32_t sharingMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>>(this->shim().OpenAsync(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const*>(&sharingMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCharacteristicsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>>(this->shim().GetCharacteristicsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCharacteristicsWithCacheModeAsync(int32_t cacheMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>>(this->shim().GetCharacteristicsAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCharacteristicsForUuidAsync(winrt::guid characteristicUuid, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>>(this->shim().GetCharacteristicsForUuidAsync(*reinterpret_cast<winrt::guid const*>(&characteristicUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCharacteristicsForUuidWithCacheModeAsync(winrt::guid characteristicUuid, int32_t cacheMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>>(this->shim().GetCharacteristicsForUuidAsync(*reinterpret_cast<winrt::guid const*>(&characteristicUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIncludedServicesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>>(this->shim().GetIncludedServicesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIncludedServicesWithCacheModeAsync(int32_t cacheMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>>(this->shim().GetIncludedServicesAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIncludedServicesForUuidAsync(winrt::guid serviceUuid, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>>(this->shim().GetIncludedServicesForUuidAsync(*reinterpret_cast<winrt::guid const*>(&serviceUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIncludedServicesForUuidWithCacheModeAsync(winrt::guid serviceUuid, int32_t cacheMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>>(this->shim().GetIncludedServicesForUuidAsync(*reinterpret_cast<winrt::guid const*>(&serviceUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
    {
        int32_t __stdcall FromIdAsync(void* deviceId, void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorFromUuid(winrt::guid serviceUuid, void** selector) noexcept final try
        {
            clear_abi(selector);
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetDeviceSelectorFromUuid(*reinterpret_cast<winrt::guid const*>(&serviceUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorFromShortId(uint16_t serviceShortId, void** selector) noexcept final try
        {
            clear_abi(selector);
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetDeviceSelectorFromShortId(serviceShortId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConvertShortIdToUuid(uint16_t shortId, winrt::guid* serviceUuid) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *serviceUuid = detach_from<winrt::guid>(this->shim().ConvertShortIdToUuid(shortId));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
    {
        int32_t __stdcall FromIdWithSharingModeAsync(void* deviceId, int32_t sharingMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const*>(&sharingMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorForBluetoothDeviceId(void* bluetoothDeviceId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelectorForBluetoothDeviceId(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(void* bluetoothDeviceId, int32_t cacheMode, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelectorForBluetoothDeviceId(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorForBluetoothDeviceIdAndUuid(void* bluetoothDeviceId, winrt::guid serviceUuid, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelectorForBluetoothDeviceIdAndUuid(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId), *reinterpret_cast<winrt::guid const*>(&serviceUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(void* bluetoothDeviceId, winrt::guid serviceUuid, int32_t cacheMode, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelectorForBluetoothDeviceIdAndUuid(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId), *reinterpret_cast<winrt::guid const*>(&serviceUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Services(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>>(this->shim().Services());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
    {
        int32_t __stdcall get_Uuid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Uuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StaticValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().StaticValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacteristicProperties(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>(this->shim().CharacteristicProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReadProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().ReadProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().WriteProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateDescriptorAsync(winrt::guid descriptorUuid, void* parameters, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>>(this->shim().CreateDescriptorAsync(*reinterpret_cast<winrt::guid const*>(&descriptorUuid), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters const*>(&parameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Descriptors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>>(this->shim().Descriptors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PresentationFormats(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>>(this->shim().PresentationFormats());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubscribedClients(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>>(this->shim().SubscribedClients());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_SubscribedClientsChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SubscribedClientsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SubscribedClientsChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubscribedClientsChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ReadRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ReadRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ReadRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_WriteRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().WriteRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_WriteRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall NotifyValueAsync(void* value, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>>>(this->shim().NotifyValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyValueForSubscribedClientAsync(void* value, void* subscribedClient, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>>(this->shim().NotifyValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient const*>(&subscribedClient)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
    {
        int32_t __stdcall put_StaticValue(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StaticValue(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StaticValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().StaticValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CharacteristicProperties(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacteristicProperties(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CharacteristicProperties(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>(this->shim().CharacteristicProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReadProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReadProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().ReadProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WriteProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().WriteProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserDescription(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDescription(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PresentationFormats(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>>(this->shim().PresentationFormats());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
    {
        int32_t __stdcall get_Characteristic(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>(this->shim().Characteristic());
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
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
    {
        int32_t __stdcall get_Uuid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Uuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StaticValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().StaticValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReadProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().ReadProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().WriteProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ReadRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ReadRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ReadRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_WriteRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().WriteRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_WriteRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
    {
        int32_t __stdcall put_StaticValue(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StaticValue(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StaticValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().StaticValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReadProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReadProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().ReadProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WriteProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>(this->shim().WriteProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
    {
        int32_t __stdcall get_Descriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>(this->shim().Descriptor());
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
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
    {
        int32_t __stdcall get_Uuid(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Uuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCharacteristicAsync(winrt::guid characteristicUuid, void* parameters, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>>(this->shim().CreateCharacteristicAsync(*reinterpret_cast<winrt::guid const*>(&characteristicUuid), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters const*>(&parameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Characteristics(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>>(this->shim().Characteristics());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
    {
        int32_t __stdcall get_FormatType(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().FormatType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Exponent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Exponent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Unit(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Unit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Namespace(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Namespace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
    {
        int32_t __stdcall get_BluetoothSigAssignedNumbers(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().BluetoothSigAssignedNumbers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
    {
        int32_t __stdcall FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>(this->shim().FromParts(formatType, exponent, unit, namespaceId, description));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
    {
        int32_t __stdcall get_Boolean(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Boolean());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bit2(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Bit2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Nibble(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Nibble());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt8(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt8());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt12(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt12());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt16(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt16());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt24(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt24());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt32(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt32());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt48(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt48());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt64(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt64());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UInt128(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UInt128());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt8(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt8());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt12(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt12());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt16(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt16());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt24(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt24());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt32(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt32());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt48(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt48());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt64(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt64());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SInt128(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SInt128());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Float32(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Float32());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Float64(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Float64());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SFloat(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SFloat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Float(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Float());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DUInt16(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().DUInt16());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Utf8(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Utf8());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Utf16(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Utf16());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Struct(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Struct());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
    {
        int32_t __stdcall get_InvalidHandle(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InvalidHandle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReadNotPermitted(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ReadNotPermitted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteNotPermitted(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().WriteNotPermitted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidPdu(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InvalidPdu());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InsufficientAuthentication(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InsufficientAuthentication());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestNotSupported(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().RequestNotSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidOffset(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InvalidOffset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InsufficientAuthorization(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InsufficientAuthorization());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrepareQueueFull(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PrepareQueueFull());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributeNotFound(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().AttributeNotFound());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributeNotLong(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().AttributeNotLong());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InsufficientEncryptionKeySize(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InsufficientEncryptionKeySize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidAttributeValueLength(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InvalidAttributeValueLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UnlikelyError(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UnlikelyError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InsufficientEncryption(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InsufficientEncryption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UnsupportedGroupType(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().UnsupportedGroupType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InsufficientResources(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InsufficientResources());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ClientCharacteristicConfigurationDescriptor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue>(this->shim().ClientCharacteristicConfigurationDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
    {
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
    {
        int32_t __stdcall get_Offset(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Offset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Length(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall RespondWithValue(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithValue(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RespondWithProtocolError(uint8_t protocolError) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithProtocolError(protocolError);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRequestAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>>(this->shim().GetRequestAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
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
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
    {
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
    {
        int32_t __stdcall WriteValue(void* characteristic, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteValue(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const*>(&characteristic), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CommitAsync(void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>>(this->shim().CommitAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
    {
        int32_t __stdcall CommitWithResultAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>>(this->shim().CommitWithResultAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
    {
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>(this->shim().State());
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
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
    {
        int32_t __stdcall get_Service(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>(this->shim().Service());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdvertisementStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>(this->shim().AdvertisementStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AdvertisementStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AdvertisementStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AdvertisementStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall StartAdvertising() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartAdvertisingWithParameters(void* parameters) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const*>(&parameters));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopAdvertising() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAdvertising();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
    {
        int32_t __stdcall put_IsConnectable(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsConnectable(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsConnectable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsConnectable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsDiscoverable(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDiscoverable(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDiscoverable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDiscoverable());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2>
    {
        int32_t __stdcall put_ServiceData(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceData(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ServiceData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
    {
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>(this->shim().ServiceProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
    {
        int32_t __stdcall CreateAsync(winrt::guid serviceUuid, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>>(this->shim().CreateAsync(*reinterpret_cast<winrt::guid const*>(&serviceUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
    {
        int32_t __stdcall get_Battery(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Battery());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BloodPressure(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().BloodPressure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CyclingSpeedAndCadence(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CyclingSpeedAndCadence());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GenericAccess(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GenericAccess());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GenericAttribute(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().GenericAttribute());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Glucose(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Glucose());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HealthThermometer(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HealthThermometer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HeartRate(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HeartRate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RunningSpeedAndCadence(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().RunningSpeedAndCadence());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
    {
        int32_t __stdcall get_AlertNotification(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AlertNotification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentTime(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CurrentTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CyclingPower(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().CyclingPower());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceInformation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().DeviceInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HumanInterfaceDevice(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().HumanInterfaceDevice());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImmediateAlert(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ImmediateAlert());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LinkLoss(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LinkLoss());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocationAndNavigation(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LocationAndNavigation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NextDstChange(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().NextDstChange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhoneAlertStatus(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().PhoneAlertStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReferenceTimeUpdate(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ReferenceTimeUpdate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScanParameters(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ScanParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TxPower(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TxPower());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothDeviceId>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanMaintainConnection(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanMaintainConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaintainConnection(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaintainConnection(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaintainConnection(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MaintainConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPduSize(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().MaxPduSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>(this->shim().SessionStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_MaxPduSizeChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MaxPduSizeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MaxPduSizeChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPduSizeChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SessionStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SessionStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SessionStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
    {
        int32_t __stdcall FromDeviceIdAsync(void* deviceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>>(this->shim().FromDeviceIdAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
    {
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxNotificationSize(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().MaxNotificationSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_MaxNotificationSizeChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MaxNotificationSizeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MaxNotificationSizeChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxNotificationSizeChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
    {
        int32_t __stdcall get_CharacteristicValue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().CharacteristicValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timestamp(int64_t* timestamp) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(timestamp);
            typename D::abi_guard guard(this->shim());
            *timestamp = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
    {
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Offset(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Offset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Option(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption>(this->shim().Option());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall Respond() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Respond();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RespondWithProtocolError(uint8_t protocolError) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithProtocolError(protocolError);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRequestAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>>(this->shim().GetRequestAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    constexpr auto operator|(GattCharacteristicProperties const left, GattCharacteristicProperties const right) noexcept
    {
        return static_cast<GattCharacteristicProperties>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(GattCharacteristicProperties& left, GattCharacteristicProperties const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(GattCharacteristicProperties const left, GattCharacteristicProperties const right) noexcept
    {
        return static_cast<GattCharacteristicProperties>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(GattCharacteristicProperties& left, GattCharacteristicProperties const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(GattCharacteristicProperties const value) noexcept
    {
        return static_cast<GattCharacteristicProperties>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(GattCharacteristicProperties const left, GattCharacteristicProperties const right) noexcept
    {
        return static_cast<GattCharacteristicProperties>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(GattCharacteristicProperties& left, GattCharacteristicProperties const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto GattCharacteristic::ConvertShortIdToUuid(uint16_t shortId)
    {
        return impl::call_factory<GattCharacteristic, IGattCharacteristicStatics>([&](IGattCharacteristicStatics const& f) { return f.ConvertShortIdToUuid(shortId); });
    }
    inline auto GattCharacteristicUuids::BatteryLevel()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.BatteryLevel(); });
    }
    inline auto GattCharacteristicUuids::BloodPressureFeature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.BloodPressureFeature(); });
    }
    inline auto GattCharacteristicUuids::BloodPressureMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.BloodPressureMeasurement(); });
    }
    inline auto GattCharacteristicUuids::BodySensorLocation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.BodySensorLocation(); });
    }
    inline auto GattCharacteristicUuids::CscFeature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.CscFeature(); });
    }
    inline auto GattCharacteristicUuids::CscMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.CscMeasurement(); });
    }
    inline auto GattCharacteristicUuids::GlucoseFeature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.GlucoseFeature(); });
    }
    inline auto GattCharacteristicUuids::GlucoseMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.GlucoseMeasurement(); });
    }
    inline auto GattCharacteristicUuids::GlucoseMeasurementContext()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.GlucoseMeasurementContext(); });
    }
    inline auto GattCharacteristicUuids::HeartRateControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.HeartRateControlPoint(); });
    }
    inline auto GattCharacteristicUuids::HeartRateMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.HeartRateMeasurement(); });
    }
    inline auto GattCharacteristicUuids::IntermediateCuffPressure()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.IntermediateCuffPressure(); });
    }
    inline auto GattCharacteristicUuids::IntermediateTemperature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.IntermediateTemperature(); });
    }
    inline auto GattCharacteristicUuids::MeasurementInterval()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.MeasurementInterval(); });
    }
    inline auto GattCharacteristicUuids::RecordAccessControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.RecordAccessControlPoint(); });
    }
    inline auto GattCharacteristicUuids::RscFeature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.RscFeature(); });
    }
    inline auto GattCharacteristicUuids::RscMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.RscMeasurement(); });
    }
    inline auto GattCharacteristicUuids::SCControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.SCControlPoint(); });
    }
    inline auto GattCharacteristicUuids::SensorLocation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.SensorLocation(); });
    }
    inline auto GattCharacteristicUuids::TemperatureMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.TemperatureMeasurement(); });
    }
    inline auto GattCharacteristicUuids::TemperatureType()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics>([](IGattCharacteristicUuidsStatics const& f) { return f.TemperatureType(); });
    }
    inline auto GattCharacteristicUuids::AlertCategoryId()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.AlertCategoryId(); });
    }
    inline auto GattCharacteristicUuids::AlertCategoryIdBitMask()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.AlertCategoryIdBitMask(); });
    }
    inline auto GattCharacteristicUuids::AlertLevel()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.AlertLevel(); });
    }
    inline auto GattCharacteristicUuids::AlertNotificationControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.AlertNotificationControlPoint(); });
    }
    inline auto GattCharacteristicUuids::AlertStatus()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.AlertStatus(); });
    }
    inline auto GattCharacteristicUuids::GapAppearance()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.GapAppearance(); });
    }
    inline auto GattCharacteristicUuids::BootKeyboardInputReport()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.BootKeyboardInputReport(); });
    }
    inline auto GattCharacteristicUuids::BootKeyboardOutputReport()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.BootKeyboardOutputReport(); });
    }
    inline auto GattCharacteristicUuids::BootMouseInputReport()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.BootMouseInputReport(); });
    }
    inline auto GattCharacteristicUuids::CurrentTime()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.CurrentTime(); });
    }
    inline auto GattCharacteristicUuids::CyclingPowerControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.CyclingPowerControlPoint(); });
    }
    inline auto GattCharacteristicUuids::CyclingPowerFeature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.CyclingPowerFeature(); });
    }
    inline auto GattCharacteristicUuids::CyclingPowerMeasurement()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.CyclingPowerMeasurement(); });
    }
    inline auto GattCharacteristicUuids::CyclingPowerVector()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.CyclingPowerVector(); });
    }
    inline auto GattCharacteristicUuids::DateTime()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.DateTime(); });
    }
    inline auto GattCharacteristicUuids::DayDateTime()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.DayDateTime(); });
    }
    inline auto GattCharacteristicUuids::DayOfWeek()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.DayOfWeek(); });
    }
    inline auto GattCharacteristicUuids::GapDeviceName()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.GapDeviceName(); });
    }
    inline auto GattCharacteristicUuids::DstOffset()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.DstOffset(); });
    }
    inline auto GattCharacteristicUuids::ExactTime256()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ExactTime256(); });
    }
    inline auto GattCharacteristicUuids::FirmwareRevisionString()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.FirmwareRevisionString(); });
    }
    inline auto GattCharacteristicUuids::HardwareRevisionString()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.HardwareRevisionString(); });
    }
    inline auto GattCharacteristicUuids::HidControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.HidControlPoint(); });
    }
    inline auto GattCharacteristicUuids::HidInformation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.HidInformation(); });
    }
    inline auto GattCharacteristicUuids::Ieee1107320601RegulatoryCertificationDataList()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.Ieee1107320601RegulatoryCertificationDataList(); });
    }
    inline auto GattCharacteristicUuids::LnControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.LnControlPoint(); });
    }
    inline auto GattCharacteristicUuids::LnFeature()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.LnFeature(); });
    }
    inline auto GattCharacteristicUuids::LocalTimeInformation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.LocalTimeInformation(); });
    }
    inline auto GattCharacteristicUuids::LocationAndSpeed()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.LocationAndSpeed(); });
    }
    inline auto GattCharacteristicUuids::ManufacturerNameString()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ManufacturerNameString(); });
    }
    inline auto GattCharacteristicUuids::ModelNumberString()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ModelNumberString(); });
    }
    inline auto GattCharacteristicUuids::Navigation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.Navigation(); });
    }
    inline auto GattCharacteristicUuids::NewAlert()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.NewAlert(); });
    }
    inline auto GattCharacteristicUuids::GapPeripheralPreferredConnectionParameters()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.GapPeripheralPreferredConnectionParameters(); });
    }
    inline auto GattCharacteristicUuids::GapPeripheralPrivacyFlag()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.GapPeripheralPrivacyFlag(); });
    }
    inline auto GattCharacteristicUuids::PnpId()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.PnpId(); });
    }
    inline auto GattCharacteristicUuids::PositionQuality()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.PositionQuality(); });
    }
    inline auto GattCharacteristicUuids::ProtocolMode()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ProtocolMode(); });
    }
    inline auto GattCharacteristicUuids::GapReconnectionAddress()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.GapReconnectionAddress(); });
    }
    inline auto GattCharacteristicUuids::ReferenceTimeInformation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ReferenceTimeInformation(); });
    }
    inline auto GattCharacteristicUuids::Report()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.Report(); });
    }
    inline auto GattCharacteristicUuids::ReportMap()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ReportMap(); });
    }
    inline auto GattCharacteristicUuids::RingerControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.RingerControlPoint(); });
    }
    inline auto GattCharacteristicUuids::RingerSetting()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.RingerSetting(); });
    }
    inline auto GattCharacteristicUuids::ScanIntervalWindow()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ScanIntervalWindow(); });
    }
    inline auto GattCharacteristicUuids::ScanRefresh()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.ScanRefresh(); });
    }
    inline auto GattCharacteristicUuids::SerialNumberString()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.SerialNumberString(); });
    }
    inline auto GattCharacteristicUuids::GattServiceChanged()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.GattServiceChanged(); });
    }
    inline auto GattCharacteristicUuids::SoftwareRevisionString()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.SoftwareRevisionString(); });
    }
    inline auto GattCharacteristicUuids::SupportedNewAlertCategory()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.SupportedNewAlertCategory(); });
    }
    inline auto GattCharacteristicUuids::SupportUnreadAlertCategory()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.SupportUnreadAlertCategory(); });
    }
    inline auto GattCharacteristicUuids::SystemId()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.SystemId(); });
    }
    inline auto GattCharacteristicUuids::TimeAccuracy()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TimeAccuracy(); });
    }
    inline auto GattCharacteristicUuids::TimeSource()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TimeSource(); });
    }
    inline auto GattCharacteristicUuids::TimeUpdateControlPoint()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TimeUpdateControlPoint(); });
    }
    inline auto GattCharacteristicUuids::TimeUpdateState()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TimeUpdateState(); });
    }
    inline auto GattCharacteristicUuids::TimeWithDst()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TimeWithDst(); });
    }
    inline auto GattCharacteristicUuids::TimeZone()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TimeZone(); });
    }
    inline auto GattCharacteristicUuids::TxPowerLevel()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.TxPowerLevel(); });
    }
    inline auto GattCharacteristicUuids::UnreadAlertStatus()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattCharacteristicUuidsStatics2 const&), GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>([](IGattCharacteristicUuidsStatics2 const& f) { return f.UnreadAlertStatus(); });
    }
    inline auto GattDescriptor::ConvertShortIdToUuid(uint16_t shortId)
    {
        return impl::call_factory<GattDescriptor, IGattDescriptorStatics>([&](IGattDescriptorStatics const& f) { return f.ConvertShortIdToUuid(shortId); });
    }
    inline auto GattDescriptorUuids::CharacteristicAggregateFormat()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattDescriptorUuidsStatics const&), GattDescriptorUuids, IGattDescriptorUuidsStatics>([](IGattDescriptorUuidsStatics const& f) { return f.CharacteristicAggregateFormat(); });
    }
    inline auto GattDescriptorUuids::CharacteristicExtendedProperties()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattDescriptorUuidsStatics const&), GattDescriptorUuids, IGattDescriptorUuidsStatics>([](IGattDescriptorUuidsStatics const& f) { return f.CharacteristicExtendedProperties(); });
    }
    inline auto GattDescriptorUuids::CharacteristicPresentationFormat()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattDescriptorUuidsStatics const&), GattDescriptorUuids, IGattDescriptorUuidsStatics>([](IGattDescriptorUuidsStatics const& f) { return f.CharacteristicPresentationFormat(); });
    }
    inline auto GattDescriptorUuids::CharacteristicUserDescription()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattDescriptorUuidsStatics const&), GattDescriptorUuids, IGattDescriptorUuidsStatics>([](IGattDescriptorUuidsStatics const& f) { return f.CharacteristicUserDescription(); });
    }
    inline auto GattDescriptorUuids::ClientCharacteristicConfiguration()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattDescriptorUuidsStatics const&), GattDescriptorUuids, IGattDescriptorUuidsStatics>([](IGattDescriptorUuidsStatics const& f) { return f.ClientCharacteristicConfiguration(); });
    }
    inline auto GattDescriptorUuids::ServerCharacteristicConfiguration()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattDescriptorUuidsStatics const&), GattDescriptorUuids, IGattDescriptorUuidsStatics>([](IGattDescriptorUuidsStatics const& f) { return f.ServerCharacteristicConfiguration(); });
    }
    inline auto GattDeviceService::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics>([&](IGattDeviceServiceStatics const& f) { return f.FromIdAsync(deviceId); });
    }
    inline auto GattDeviceService::GetDeviceSelectorFromUuid(winrt::guid const& serviceUuid)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics>([&](IGattDeviceServiceStatics const& f) { return f.GetDeviceSelectorFromUuid(serviceUuid); });
    }
    inline auto GattDeviceService::GetDeviceSelectorFromShortId(uint16_t serviceShortId)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics>([&](IGattDeviceServiceStatics const& f) { return f.GetDeviceSelectorFromShortId(serviceShortId); });
    }
    inline auto GattDeviceService::ConvertShortIdToUuid(uint16_t shortId)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics>([&](IGattDeviceServiceStatics const& f) { return f.ConvertShortIdToUuid(shortId); });
    }
    inline auto GattDeviceService::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics2>([&](IGattDeviceServiceStatics2 const& f) { return f.FromIdAsync(deviceId, sharingMode); });
    }
    inline auto GattDeviceService::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics2>([&](IGattDeviceServiceStatics2 const& f) { return f.GetDeviceSelectorForBluetoothDeviceId(bluetoothDeviceId); });
    }
    inline auto GattDeviceService::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics2>([&](IGattDeviceServiceStatics2 const& f) { return f.GetDeviceSelectorForBluetoothDeviceId(bluetoothDeviceId, cacheMode); });
    }
    inline auto GattDeviceService::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics2>([&](IGattDeviceServiceStatics2 const& f) { return f.GetDeviceSelectorForBluetoothDeviceIdAndUuid(bluetoothDeviceId, serviceUuid); });
    }
    inline auto GattDeviceService::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, winrt::guid const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode)
    {
        return impl::call_factory<GattDeviceService, IGattDeviceServiceStatics2>([&](IGattDeviceServiceStatics2 const& f) { return f.GetDeviceSelectorForBluetoothDeviceIdAndUuid(bluetoothDeviceId, serviceUuid, cacheMode); });
    }
    inline GattLocalCharacteristicParameters::GattLocalCharacteristicParameters() :
        GattLocalCharacteristicParameters(impl::call_factory_cast<GattLocalCharacteristicParameters(*)(Windows::Foundation::IActivationFactory const&), GattLocalCharacteristicParameters>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GattLocalCharacteristicParameters>(); }))
    {
    }
    inline GattLocalDescriptorParameters::GattLocalDescriptorParameters() :
        GattLocalDescriptorParameters(impl::call_factory_cast<GattLocalDescriptorParameters(*)(Windows::Foundation::IActivationFactory const&), GattLocalDescriptorParameters>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GattLocalDescriptorParameters>(); }))
    {
    }
    inline auto GattPresentationFormat::BluetoothSigAssignedNumbers()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatStatics const&), GattPresentationFormat, IGattPresentationFormatStatics>([](IGattPresentationFormatStatics const& f) { return f.BluetoothSigAssignedNumbers(); });
    }
    inline auto GattPresentationFormat::FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description)
    {
        return impl::call_factory<GattPresentationFormat, IGattPresentationFormatStatics2>([&](IGattPresentationFormatStatics2 const& f) { return f.FromParts(formatType, exponent, unit, namespaceId, description); });
    }
    inline auto GattPresentationFormatTypes::Boolean()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Boolean(); });
    }
    inline auto GattPresentationFormatTypes::Bit2()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Bit2(); });
    }
    inline auto GattPresentationFormatTypes::Nibble()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Nibble(); });
    }
    inline auto GattPresentationFormatTypes::UInt8()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt8(); });
    }
    inline auto GattPresentationFormatTypes::UInt12()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt12(); });
    }
    inline auto GattPresentationFormatTypes::UInt16()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt16(); });
    }
    inline auto GattPresentationFormatTypes::UInt24()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt24(); });
    }
    inline auto GattPresentationFormatTypes::UInt32()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt32(); });
    }
    inline auto GattPresentationFormatTypes::UInt48()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt48(); });
    }
    inline auto GattPresentationFormatTypes::UInt64()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt64(); });
    }
    inline auto GattPresentationFormatTypes::UInt128()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.UInt128(); });
    }
    inline auto GattPresentationFormatTypes::SInt8()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt8(); });
    }
    inline auto GattPresentationFormatTypes::SInt12()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt12(); });
    }
    inline auto GattPresentationFormatTypes::SInt16()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt16(); });
    }
    inline auto GattPresentationFormatTypes::SInt24()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt24(); });
    }
    inline auto GattPresentationFormatTypes::SInt32()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt32(); });
    }
    inline auto GattPresentationFormatTypes::SInt48()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt48(); });
    }
    inline auto GattPresentationFormatTypes::SInt64()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt64(); });
    }
    inline auto GattPresentationFormatTypes::SInt128()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SInt128(); });
    }
    inline auto GattPresentationFormatTypes::Float32()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Float32(); });
    }
    inline auto GattPresentationFormatTypes::Float64()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Float64(); });
    }
    inline auto GattPresentationFormatTypes::SFloat()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.SFloat(); });
    }
    inline auto GattPresentationFormatTypes::Float()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Float(); });
    }
    inline auto GattPresentationFormatTypes::DUInt16()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.DUInt16(); });
    }
    inline auto GattPresentationFormatTypes::Utf8()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Utf8(); });
    }
    inline auto GattPresentationFormatTypes::Utf16()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Utf16(); });
    }
    inline auto GattPresentationFormatTypes::Struct()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattPresentationFormatTypesStatics const&), GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>([](IGattPresentationFormatTypesStatics const& f) { return f.Struct(); });
    }
    inline auto GattProtocolError::InvalidHandle()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InvalidHandle(); });
    }
    inline auto GattProtocolError::ReadNotPermitted()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.ReadNotPermitted(); });
    }
    inline auto GattProtocolError::WriteNotPermitted()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.WriteNotPermitted(); });
    }
    inline auto GattProtocolError::InvalidPdu()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InvalidPdu(); });
    }
    inline auto GattProtocolError::InsufficientAuthentication()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InsufficientAuthentication(); });
    }
    inline auto GattProtocolError::RequestNotSupported()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.RequestNotSupported(); });
    }
    inline auto GattProtocolError::InvalidOffset()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InvalidOffset(); });
    }
    inline auto GattProtocolError::InsufficientAuthorization()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InsufficientAuthorization(); });
    }
    inline auto GattProtocolError::PrepareQueueFull()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.PrepareQueueFull(); });
    }
    inline auto GattProtocolError::AttributeNotFound()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.AttributeNotFound(); });
    }
    inline auto GattProtocolError::AttributeNotLong()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.AttributeNotLong(); });
    }
    inline auto GattProtocolError::InsufficientEncryptionKeySize()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InsufficientEncryptionKeySize(); });
    }
    inline auto GattProtocolError::InvalidAttributeValueLength()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InvalidAttributeValueLength(); });
    }
    inline auto GattProtocolError::UnlikelyError()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.UnlikelyError(); });
    }
    inline auto GattProtocolError::InsufficientEncryption()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InsufficientEncryption(); });
    }
    inline auto GattProtocolError::UnsupportedGroupType()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.UnsupportedGroupType(); });
    }
    inline auto GattProtocolError::InsufficientResources()
    {
        return impl::call_factory_cast<uint8_t(*)(IGattProtocolErrorStatics const&), GattProtocolError, IGattProtocolErrorStatics>([](IGattProtocolErrorStatics const& f) { return f.InsufficientResources(); });
    }
    inline GattReliableWriteTransaction::GattReliableWriteTransaction() :
        GattReliableWriteTransaction(impl::call_factory_cast<GattReliableWriteTransaction(*)(Windows::Foundation::IActivationFactory const&), GattReliableWriteTransaction>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GattReliableWriteTransaction>(); }))
    {
    }
    inline auto GattServiceProvider::CreateAsync(winrt::guid const& serviceUuid)
    {
        return impl::call_factory<GattServiceProvider, IGattServiceProviderStatics>([&](IGattServiceProviderStatics const& f) { return f.CreateAsync(serviceUuid); });
    }
    inline GattServiceProviderAdvertisingParameters::GattServiceProviderAdvertisingParameters() :
        GattServiceProviderAdvertisingParameters(impl::call_factory_cast<GattServiceProviderAdvertisingParameters(*)(Windows::Foundation::IActivationFactory const&), GattServiceProviderAdvertisingParameters>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GattServiceProviderAdvertisingParameters>(); }))
    {
    }
    inline auto GattServiceUuids::Battery()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.Battery(); });
    }
    inline auto GattServiceUuids::BloodPressure()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.BloodPressure(); });
    }
    inline auto GattServiceUuids::CyclingSpeedAndCadence()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.CyclingSpeedAndCadence(); });
    }
    inline auto GattServiceUuids::GenericAccess()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.GenericAccess(); });
    }
    inline auto GattServiceUuids::GenericAttribute()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.GenericAttribute(); });
    }
    inline auto GattServiceUuids::Glucose()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.Glucose(); });
    }
    inline auto GattServiceUuids::HealthThermometer()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.HealthThermometer(); });
    }
    inline auto GattServiceUuids::HeartRate()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.HeartRate(); });
    }
    inline auto GattServiceUuids::RunningSpeedAndCadence()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics const&), GattServiceUuids, IGattServiceUuidsStatics>([](IGattServiceUuidsStatics const& f) { return f.RunningSpeedAndCadence(); });
    }
    inline auto GattServiceUuids::AlertNotification()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.AlertNotification(); });
    }
    inline auto GattServiceUuids::CurrentTime()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.CurrentTime(); });
    }
    inline auto GattServiceUuids::CyclingPower()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.CyclingPower(); });
    }
    inline auto GattServiceUuids::DeviceInformation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.DeviceInformation(); });
    }
    inline auto GattServiceUuids::HumanInterfaceDevice()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.HumanInterfaceDevice(); });
    }
    inline auto GattServiceUuids::ImmediateAlert()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.ImmediateAlert(); });
    }
    inline auto GattServiceUuids::LinkLoss()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.LinkLoss(); });
    }
    inline auto GattServiceUuids::LocationAndNavigation()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.LocationAndNavigation(); });
    }
    inline auto GattServiceUuids::NextDstChange()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.NextDstChange(); });
    }
    inline auto GattServiceUuids::PhoneAlertStatus()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.PhoneAlertStatus(); });
    }
    inline auto GattServiceUuids::ReferenceTimeUpdate()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.ReferenceTimeUpdate(); });
    }
    inline auto GattServiceUuids::ScanParameters()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.ScanParameters(); });
    }
    inline auto GattServiceUuids::TxPower()
    {
        return impl::call_factory_cast<winrt::guid(*)(IGattServiceUuidsStatics2 const&), GattServiceUuids, IGattServiceUuidsStatics2>([](IGattServiceUuidsStatics2 const& f) { return f.TxPower(); });
    }
    inline auto GattSession::FromDeviceIdAsync(Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId)
    {
        return impl::call_factory<GattSession, IGattSessionStatics>([&](IGattSessionStatics const& f) { return f.FromDeviceIdAsync(deviceId); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> : winrt::impl::hash_base {};
#endif
}
#endif
