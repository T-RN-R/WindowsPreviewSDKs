// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Sensors_0_H
#define WINRT_Windows_Devices_Sensors_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct IAsyncOperation;
    struct IClosable;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct IMapView;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Display
{
    enum class DisplayOrientations : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Sensors
{
    enum class AccelerometerReadingType : int32_t
    {
        Standard = 0,
        Linear = 1,
        Gravity = 2,
    };
    enum class ActivitySensorReadingConfidence : int32_t
    {
        High = 0,
        Low = 1,
    };
    enum class ActivityType : int32_t
    {
        Unknown = 0,
        Idle = 1,
        Stationary = 2,
        Fidgeting = 3,
        Walking = 4,
        Running = 5,
        InVehicle = 6,
        Biking = 7,
    };
    enum class MagnetometerAccuracy : int32_t
    {
        Unknown = 0,
        Unreliable = 1,
        Approximate = 2,
        High = 3,
    };
    enum class PedometerStepKind : int32_t
    {
        Unknown = 0,
        Walking = 1,
        Running = 2,
    };
    enum class SensorOptimizationGoal : int32_t
    {
        Precision = 0,
        PowerEfficiency = 1,
    };
    enum class SensorReadingType : int32_t
    {
        Absolute = 0,
        Relative = 1,
    };
    enum class SensorType : int32_t
    {
        Accelerometer = 0,
        ActivitySensor = 1,
        Barometer = 2,
        Compass = 3,
        CustomSensor = 4,
        Gyroscope = 5,
        ProximitySensor = 6,
        Inclinometer = 7,
        LightSensor = 8,
        OrientationSensor = 9,
        Pedometer = 10,
        RelativeInclinometer = 11,
        RelativeOrientationSensor = 12,
        SimpleOrientationSensor = 13,
    };
    enum class SimpleOrientation : int32_t
    {
        NotRotated = 0,
        Rotated90DegreesCounterclockwise = 1,
        Rotated180DegreesCounterclockwise = 2,
        Rotated270DegreesCounterclockwise = 3,
        Faceup = 4,
        Facedown = 5,
    };
    struct IAccelerometer;
    struct IAccelerometer2;
    struct IAccelerometer3;
    struct IAccelerometer4;
    struct IAccelerometer5;
    struct IAccelerometerDataThreshold;
    struct IAccelerometerDeviceId;
    struct IAccelerometerReading;
    struct IAccelerometerReading2;
    struct IAccelerometerReadingChangedEventArgs;
    struct IAccelerometerShakenEventArgs;
    struct IAccelerometerStatics;
    struct IAccelerometerStatics2;
    struct IAccelerometerStatics3;
    struct IActivitySensor;
    struct IActivitySensorReading;
    struct IActivitySensorReadingChangeReport;
    struct IActivitySensorReadingChangedEventArgs;
    struct IActivitySensorStatics;
    struct IActivitySensorTriggerDetails;
    struct IAltimeter;
    struct IAltimeter2;
    struct IAltimeterReading;
    struct IAltimeterReading2;
    struct IAltimeterReadingChangedEventArgs;
    struct IAltimeterStatics;
    struct IBarometer;
    struct IBarometer2;
    struct IBarometer3;
    struct IBarometerDataThreshold;
    struct IBarometerReading;
    struct IBarometerReading2;
    struct IBarometerReadingChangedEventArgs;
    struct IBarometerStatics;
    struct IBarometerStatics2;
    struct ICompass;
    struct ICompass2;
    struct ICompass3;
    struct ICompass4;
    struct ICompassDataThreshold;
    struct ICompassDeviceId;
    struct ICompassReading;
    struct ICompassReading2;
    struct ICompassReadingChangedEventArgs;
    struct ICompassReadingHeadingAccuracy;
    struct ICompassStatics;
    struct ICompassStatics2;
    struct IGyrometer;
    struct IGyrometer2;
    struct IGyrometer3;
    struct IGyrometer4;
    struct IGyrometerDataThreshold;
    struct IGyrometerDeviceId;
    struct IGyrometerReading;
    struct IGyrometerReading2;
    struct IGyrometerReadingChangedEventArgs;
    struct IGyrometerStatics;
    struct IGyrometerStatics2;
    struct IHingeAngleReading;
    struct IHingeAngleSensor;
    struct IHingeAngleSensorReadingChangedEventArgs;
    struct IHingeAngleSensorStatics;
    struct IInclinometer;
    struct IInclinometer2;
    struct IInclinometer3;
    struct IInclinometer4;
    struct IInclinometerDataThreshold;
    struct IInclinometerDeviceId;
    struct IInclinometerReading;
    struct IInclinometerReading2;
    struct IInclinometerReadingChangedEventArgs;
    struct IInclinometerReadingYawAccuracy;
    struct IInclinometerStatics;
    struct IInclinometerStatics2;
    struct IInclinometerStatics3;
    struct IInclinometerStatics4;
    struct ILightSensor;
    struct ILightSensor2;
    struct ILightSensor3;
    struct ILightSensorDataThreshold;
    struct ILightSensorDeviceId;
    struct ILightSensorReading;
    struct ILightSensorReading2;
    struct ILightSensorReadingChangedEventArgs;
    struct ILightSensorStatics;
    struct ILightSensorStatics2;
    struct IMagnetometer;
    struct IMagnetometer2;
    struct IMagnetometer3;
    struct IMagnetometer4;
    struct IMagnetometerDataThreshold;
    struct IMagnetometerDeviceId;
    struct IMagnetometerReading;
    struct IMagnetometerReading2;
    struct IMagnetometerReadingChangedEventArgs;
    struct IMagnetometerStatics;
    struct IMagnetometerStatics2;
    struct IOrientationSensor;
    struct IOrientationSensor2;
    struct IOrientationSensor3;
    struct IOrientationSensorDeviceId;
    struct IOrientationSensorReading;
    struct IOrientationSensorReading2;
    struct IOrientationSensorReadingChangedEventArgs;
    struct IOrientationSensorReadingYawAccuracy;
    struct IOrientationSensorStatics;
    struct IOrientationSensorStatics2;
    struct IOrientationSensorStatics3;
    struct IOrientationSensorStatics4;
    struct IPedometer;
    struct IPedometer2;
    struct IPedometerDataThresholdFactory;
    struct IPedometerReading;
    struct IPedometerReadingChangedEventArgs;
    struct IPedometerStatics;
    struct IPedometerStatics2;
    struct IProximitySensor;
    struct IProximitySensorDataThresholdFactory;
    struct IProximitySensorReading;
    struct IProximitySensorReadingChangedEventArgs;
    struct IProximitySensorStatics;
    struct IProximitySensorStatics2;
    struct ISensorDataThreshold;
    struct ISensorDataThresholdTriggerDetails;
    struct ISensorQuaternion;
    struct ISensorRotationMatrix;
    struct ISimpleOrientationSensor;
    struct ISimpleOrientationSensor2;
    struct ISimpleOrientationSensorDeviceId;
    struct ISimpleOrientationSensorOrientationChangedEventArgs;
    struct ISimpleOrientationSensorStatics;
    struct ISimpleOrientationSensorStatics2;
    struct Accelerometer;
    struct AccelerometerDataThreshold;
    struct AccelerometerReading;
    struct AccelerometerReadingChangedEventArgs;
    struct AccelerometerShakenEventArgs;
    struct ActivitySensor;
    struct ActivitySensorReading;
    struct ActivitySensorReadingChangeReport;
    struct ActivitySensorReadingChangedEventArgs;
    struct ActivitySensorTriggerDetails;
    struct Altimeter;
    struct AltimeterReading;
    struct AltimeterReadingChangedEventArgs;
    struct Barometer;
    struct BarometerDataThreshold;
    struct BarometerReading;
    struct BarometerReadingChangedEventArgs;
    struct Compass;
    struct CompassDataThreshold;
    struct CompassReading;
    struct CompassReadingChangedEventArgs;
    struct Gyrometer;
    struct GyrometerDataThreshold;
    struct GyrometerReading;
    struct GyrometerReadingChangedEventArgs;
    struct HingeAngleReading;
    struct HingeAngleSensor;
    struct HingeAngleSensorReadingChangedEventArgs;
    struct Inclinometer;
    struct InclinometerDataThreshold;
    struct InclinometerReading;
    struct InclinometerReadingChangedEventArgs;
    struct LightSensor;
    struct LightSensorDataThreshold;
    struct LightSensorReading;
    struct LightSensorReadingChangedEventArgs;
    struct Magnetometer;
    struct MagnetometerDataThreshold;
    struct MagnetometerReading;
    struct MagnetometerReadingChangedEventArgs;
    struct OrientationSensor;
    struct OrientationSensorReading;
    struct OrientationSensorReadingChangedEventArgs;
    struct Pedometer;
    struct PedometerDataThreshold;
    struct PedometerReading;
    struct PedometerReadingChangedEventArgs;
    struct ProximitySensor;
    struct ProximitySensorDataThreshold;
    struct ProximitySensorDisplayOnOffController;
    struct ProximitySensorReading;
    struct ProximitySensorReadingChangedEventArgs;
    struct SensorDataThresholdTriggerDetails;
    struct SensorQuaternion;
    struct SensorRotationMatrix;
    struct SimpleOrientationSensor;
    struct SimpleOrientationSensorOrientationChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Sensors::IAccelerometer>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometer2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometer3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometer4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometer5>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAccelerometerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IActivitySensor>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IActivitySensorReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IActivitySensorStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IActivitySensorTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAltimeter>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAltimeter2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAltimeterReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAltimeterReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IAltimeterStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometer>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometer2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometer3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometerDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometerReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometerReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IBarometerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompass>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompass2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompass3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompass4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ICompassStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometer>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometer2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometer3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometer4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IGyrometerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IHingeAngleReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IHingeAngleSensor>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IHingeAngleSensorStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometer>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometer2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometer3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometer4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IInclinometerStatics4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensor>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensor2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensor3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ILightSensorStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometer>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometer2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometer3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometer4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IMagnetometerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensor>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensor2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensor3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorReading2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics3>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IOrientationSensorStatics4>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometer>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometer2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometerDataThresholdFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometerReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IPedometerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IProximitySensor>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IProximitySensorReading>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IProximitySensorStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::IProximitySensorStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISensorDataThreshold>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISensorQuaternion>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISensorRotationMatrix>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensor>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensor2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::ISimpleOrientationSensorStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Sensors::Accelerometer>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AccelerometerDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AccelerometerReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AccelerometerShakenEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ActivitySensor>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ActivitySensorReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ActivitySensorReadingChangeReport>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ActivitySensorTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Altimeter>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AltimeterReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AltimeterReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Barometer>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::BarometerDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::BarometerReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::BarometerReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Compass>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::CompassDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::CompassReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::CompassReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Gyrometer>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::GyrometerDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::GyrometerReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::GyrometerReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::HingeAngleReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::HingeAngleSensor>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::HingeAngleSensorReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Inclinometer>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::InclinometerDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::InclinometerReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::InclinometerReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::LightSensor>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::LightSensorDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::LightSensorReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::LightSensorReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Magnetometer>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::MagnetometerDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::MagnetometerReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::OrientationSensor>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::OrientationSensorReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::Pedometer>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::PedometerDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::PedometerReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::PedometerReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ProximitySensor>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ProximitySensorDataThreshold>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ProximitySensorDisplayOnOffController>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ProximitySensorReading>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::SensorQuaternion>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::SensorRotationMatrix>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::SimpleOrientationSensor>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Sensors::AccelerometerReadingType>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::ActivitySensorReadingConfidence>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::ActivityType>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::MagnetometerAccuracy>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::PedometerStepKind>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::SensorOptimizationGoal>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::SensorReadingType>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::SensorType>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Sensors::SimpleOrientation>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Accelerometer> = L"Windows.Devices.Sensors.Accelerometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AccelerometerDataThreshold> = L"Windows.Devices.Sensors.AccelerometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AccelerometerReading> = L"Windows.Devices.Sensors.AccelerometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.AccelerometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AccelerometerShakenEventArgs> = L"Windows.Devices.Sensors.AccelerometerShakenEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivitySensor> = L"Windows.Devices.Sensors.ActivitySensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivitySensorReading> = L"Windows.Devices.Sensors.ActivitySensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivitySensorReadingChangeReport> = L"Windows.Devices.Sensors.ActivitySensorReadingChangeReport";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.ActivitySensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivitySensorTriggerDetails> = L"Windows.Devices.Sensors.ActivitySensorTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Altimeter> = L"Windows.Devices.Sensors.Altimeter";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AltimeterReading> = L"Windows.Devices.Sensors.AltimeterReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> = L"Windows.Devices.Sensors.AltimeterReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Barometer> = L"Windows.Devices.Sensors.Barometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::BarometerDataThreshold> = L"Windows.Devices.Sensors.BarometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::BarometerReading> = L"Windows.Devices.Sensors.BarometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::BarometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.BarometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Compass> = L"Windows.Devices.Sensors.Compass";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::CompassDataThreshold> = L"Windows.Devices.Sensors.CompassDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::CompassReading> = L"Windows.Devices.Sensors.CompassReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::CompassReadingChangedEventArgs> = L"Windows.Devices.Sensors.CompassReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Gyrometer> = L"Windows.Devices.Sensors.Gyrometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::GyrometerDataThreshold> = L"Windows.Devices.Sensors.GyrometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::GyrometerReading> = L"Windows.Devices.Sensors.GyrometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.GyrometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::HingeAngleReading> = L"Windows.Devices.Sensors.HingeAngleReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::HingeAngleSensor> = L"Windows.Devices.Sensors.HingeAngleSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::HingeAngleSensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.HingeAngleSensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Inclinometer> = L"Windows.Devices.Sensors.Inclinometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::InclinometerDataThreshold> = L"Windows.Devices.Sensors.InclinometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::InclinometerReading> = L"Windows.Devices.Sensors.InclinometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.InclinometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::LightSensor> = L"Windows.Devices.Sensors.LightSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::LightSensorDataThreshold> = L"Windows.Devices.Sensors.LightSensorDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::LightSensorReading> = L"Windows.Devices.Sensors.LightSensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.LightSensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Magnetometer> = L"Windows.Devices.Sensors.Magnetometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::MagnetometerDataThreshold> = L"Windows.Devices.Sensors.MagnetometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::MagnetometerReading> = L"Windows.Devices.Sensors.MagnetometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.MagnetometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::OrientationSensor> = L"Windows.Devices.Sensors.OrientationSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::OrientationSensorReading> = L"Windows.Devices.Sensors.OrientationSensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.OrientationSensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::Pedometer> = L"Windows.Devices.Sensors.Pedometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::PedometerDataThreshold> = L"Windows.Devices.Sensors.PedometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::PedometerReading> = L"Windows.Devices.Sensors.PedometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::PedometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.PedometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ProximitySensor> = L"Windows.Devices.Sensors.ProximitySensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ProximitySensorDataThreshold> = L"Windows.Devices.Sensors.ProximitySensorDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ProximitySensorDisplayOnOffController> = L"Windows.Devices.Sensors.ProximitySensorDisplayOnOffController";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ProximitySensorReading> = L"Windows.Devices.Sensors.ProximitySensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.ProximitySensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails> = L"Windows.Devices.Sensors.SensorDataThresholdTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SensorQuaternion> = L"Windows.Devices.Sensors.SensorQuaternion";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SensorRotationMatrix> = L"Windows.Devices.Sensors.SensorRotationMatrix";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SimpleOrientationSensor> = L"Windows.Devices.Sensors.SimpleOrientationSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> = L"Windows.Devices.Sensors.SimpleOrientationSensorOrientationChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::AccelerometerReadingType> = L"Windows.Devices.Sensors.AccelerometerReadingType";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivitySensorReadingConfidence> = L"Windows.Devices.Sensors.ActivitySensorReadingConfidence";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ActivityType> = L"Windows.Devices.Sensors.ActivityType";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::MagnetometerAccuracy> = L"Windows.Devices.Sensors.MagnetometerAccuracy";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::PedometerStepKind> = L"Windows.Devices.Sensors.PedometerStepKind";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SensorOptimizationGoal> = L"Windows.Devices.Sensors.SensorOptimizationGoal";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SensorReadingType> = L"Windows.Devices.Sensors.SensorReadingType";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SensorType> = L"Windows.Devices.Sensors.SensorType";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::SimpleOrientation> = L"Windows.Devices.Sensors.SimpleOrientation";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometer> = L"Windows.Devices.Sensors.IAccelerometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometer2> = L"Windows.Devices.Sensors.IAccelerometer2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometer3> = L"Windows.Devices.Sensors.IAccelerometer3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometer4> = L"Windows.Devices.Sensors.IAccelerometer4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometer5> = L"Windows.Devices.Sensors.IAccelerometer5";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerDataThreshold> = L"Windows.Devices.Sensors.IAccelerometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerDeviceId> = L"Windows.Devices.Sensors.IAccelerometerDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerReading> = L"Windows.Devices.Sensors.IAccelerometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerReading2> = L"Windows.Devices.Sensors.IAccelerometerReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.IAccelerometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerShakenEventArgs> = L"Windows.Devices.Sensors.IAccelerometerShakenEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerStatics> = L"Windows.Devices.Sensors.IAccelerometerStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerStatics2> = L"Windows.Devices.Sensors.IAccelerometerStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAccelerometerStatics3> = L"Windows.Devices.Sensors.IAccelerometerStatics3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IActivitySensor> = L"Windows.Devices.Sensors.IActivitySensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IActivitySensorReading> = L"Windows.Devices.Sensors.IActivitySensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IActivitySensorReadingChangeReport> = L"Windows.Devices.Sensors.IActivitySensorReadingChangeReport";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.IActivitySensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IActivitySensorStatics> = L"Windows.Devices.Sensors.IActivitySensorStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IActivitySensorTriggerDetails> = L"Windows.Devices.Sensors.IActivitySensorTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAltimeter> = L"Windows.Devices.Sensors.IAltimeter";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAltimeter2> = L"Windows.Devices.Sensors.IAltimeter2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAltimeterReading> = L"Windows.Devices.Sensors.IAltimeterReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAltimeterReading2> = L"Windows.Devices.Sensors.IAltimeterReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs> = L"Windows.Devices.Sensors.IAltimeterReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IAltimeterStatics> = L"Windows.Devices.Sensors.IAltimeterStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometer> = L"Windows.Devices.Sensors.IBarometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometer2> = L"Windows.Devices.Sensors.IBarometer2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometer3> = L"Windows.Devices.Sensors.IBarometer3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometerDataThreshold> = L"Windows.Devices.Sensors.IBarometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometerReading> = L"Windows.Devices.Sensors.IBarometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometerReading2> = L"Windows.Devices.Sensors.IBarometerReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.IBarometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometerStatics> = L"Windows.Devices.Sensors.IBarometerStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IBarometerStatics2> = L"Windows.Devices.Sensors.IBarometerStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompass> = L"Windows.Devices.Sensors.ICompass";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompass2> = L"Windows.Devices.Sensors.ICompass2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompass3> = L"Windows.Devices.Sensors.ICompass3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompass4> = L"Windows.Devices.Sensors.ICompass4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassDataThreshold> = L"Windows.Devices.Sensors.ICompassDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassDeviceId> = L"Windows.Devices.Sensors.ICompassDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassReading> = L"Windows.Devices.Sensors.ICompassReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassReading2> = L"Windows.Devices.Sensors.ICompassReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassReadingChangedEventArgs> = L"Windows.Devices.Sensors.ICompassReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy> = L"Windows.Devices.Sensors.ICompassReadingHeadingAccuracy";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassStatics> = L"Windows.Devices.Sensors.ICompassStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ICompassStatics2> = L"Windows.Devices.Sensors.ICompassStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometer> = L"Windows.Devices.Sensors.IGyrometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometer2> = L"Windows.Devices.Sensors.IGyrometer2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometer3> = L"Windows.Devices.Sensors.IGyrometer3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometer4> = L"Windows.Devices.Sensors.IGyrometer4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerDataThreshold> = L"Windows.Devices.Sensors.IGyrometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerDeviceId> = L"Windows.Devices.Sensors.IGyrometerDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerReading> = L"Windows.Devices.Sensors.IGyrometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerReading2> = L"Windows.Devices.Sensors.IGyrometerReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.IGyrometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerStatics> = L"Windows.Devices.Sensors.IGyrometerStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IGyrometerStatics2> = L"Windows.Devices.Sensors.IGyrometerStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IHingeAngleReading> = L"Windows.Devices.Sensors.IHingeAngleReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IHingeAngleSensor> = L"Windows.Devices.Sensors.IHingeAngleSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.IHingeAngleSensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IHingeAngleSensorStatics> = L"Windows.Devices.Sensors.IHingeAngleSensorStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometer> = L"Windows.Devices.Sensors.IInclinometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometer2> = L"Windows.Devices.Sensors.IInclinometer2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometer3> = L"Windows.Devices.Sensors.IInclinometer3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometer4> = L"Windows.Devices.Sensors.IInclinometer4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerDataThreshold> = L"Windows.Devices.Sensors.IInclinometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerDeviceId> = L"Windows.Devices.Sensors.IInclinometerDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerReading> = L"Windows.Devices.Sensors.IInclinometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerReading2> = L"Windows.Devices.Sensors.IInclinometerReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.IInclinometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy> = L"Windows.Devices.Sensors.IInclinometerReadingYawAccuracy";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerStatics> = L"Windows.Devices.Sensors.IInclinometerStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerStatics2> = L"Windows.Devices.Sensors.IInclinometerStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerStatics3> = L"Windows.Devices.Sensors.IInclinometerStatics3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IInclinometerStatics4> = L"Windows.Devices.Sensors.IInclinometerStatics4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensor> = L"Windows.Devices.Sensors.ILightSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensor2> = L"Windows.Devices.Sensors.ILightSensor2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensor3> = L"Windows.Devices.Sensors.ILightSensor3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorDataThreshold> = L"Windows.Devices.Sensors.ILightSensorDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorDeviceId> = L"Windows.Devices.Sensors.ILightSensorDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorReading> = L"Windows.Devices.Sensors.ILightSensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorReading2> = L"Windows.Devices.Sensors.ILightSensorReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.ILightSensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorStatics> = L"Windows.Devices.Sensors.ILightSensorStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ILightSensorStatics2> = L"Windows.Devices.Sensors.ILightSensorStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometer> = L"Windows.Devices.Sensors.IMagnetometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometer2> = L"Windows.Devices.Sensors.IMagnetometer2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometer3> = L"Windows.Devices.Sensors.IMagnetometer3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometer4> = L"Windows.Devices.Sensors.IMagnetometer4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerDataThreshold> = L"Windows.Devices.Sensors.IMagnetometerDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerDeviceId> = L"Windows.Devices.Sensors.IMagnetometerDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerReading> = L"Windows.Devices.Sensors.IMagnetometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerReading2> = L"Windows.Devices.Sensors.IMagnetometerReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.IMagnetometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerStatics> = L"Windows.Devices.Sensors.IMagnetometerStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IMagnetometerStatics2> = L"Windows.Devices.Sensors.IMagnetometerStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensor> = L"Windows.Devices.Sensors.IOrientationSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensor2> = L"Windows.Devices.Sensors.IOrientationSensor2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensor3> = L"Windows.Devices.Sensors.IOrientationSensor3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorDeviceId> = L"Windows.Devices.Sensors.IOrientationSensorDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorReading> = L"Windows.Devices.Sensors.IOrientationSensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorReading2> = L"Windows.Devices.Sensors.IOrientationSensorReading2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.IOrientationSensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy> = L"Windows.Devices.Sensors.IOrientationSensorReadingYawAccuracy";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorStatics> = L"Windows.Devices.Sensors.IOrientationSensorStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorStatics2> = L"Windows.Devices.Sensors.IOrientationSensorStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorStatics3> = L"Windows.Devices.Sensors.IOrientationSensorStatics3";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IOrientationSensorStatics4> = L"Windows.Devices.Sensors.IOrientationSensorStatics4";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometer> = L"Windows.Devices.Sensors.IPedometer";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometer2> = L"Windows.Devices.Sensors.IPedometer2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometerDataThresholdFactory> = L"Windows.Devices.Sensors.IPedometerDataThresholdFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometerReading> = L"Windows.Devices.Sensors.IPedometerReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs> = L"Windows.Devices.Sensors.IPedometerReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometerStatics> = L"Windows.Devices.Sensors.IPedometerStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IPedometerStatics2> = L"Windows.Devices.Sensors.IPedometerStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IProximitySensor> = L"Windows.Devices.Sensors.IProximitySensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory> = L"Windows.Devices.Sensors.IProximitySensorDataThresholdFactory";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IProximitySensorReading> = L"Windows.Devices.Sensors.IProximitySensorReading";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs> = L"Windows.Devices.Sensors.IProximitySensorReadingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IProximitySensorStatics> = L"Windows.Devices.Sensors.IProximitySensorStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::IProximitySensorStatics2> = L"Windows.Devices.Sensors.IProximitySensorStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISensorDataThreshold> = L"Windows.Devices.Sensors.ISensorDataThreshold";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails> = L"Windows.Devices.Sensors.ISensorDataThresholdTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISensorQuaternion> = L"Windows.Devices.Sensors.ISensorQuaternion";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISensorRotationMatrix> = L"Windows.Devices.Sensors.ISensorRotationMatrix";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISimpleOrientationSensor> = L"Windows.Devices.Sensors.ISimpleOrientationSensor";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISimpleOrientationSensor2> = L"Windows.Devices.Sensors.ISimpleOrientationSensor2";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId> = L"Windows.Devices.Sensors.ISimpleOrientationSensorDeviceId";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs> = L"Windows.Devices.Sensors.ISimpleOrientationSensorOrientationChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISimpleOrientationSensorStatics> = L"Windows.Devices.Sensors.ISimpleOrientationSensorStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Sensors::ISimpleOrientationSensorStatics2> = L"Windows.Devices.Sensors.ISimpleOrientationSensorStatics2";
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometer>{ 0xDF184548,0x2711,0x4DA7,{ 0x80,0x98,0x4B,0x82,0x20,0x5D,0x3C,0x7D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometer2>{ 0xE8F092EE,0x4964,0x401A,{ 0xB6,0x02,0x22,0x0D,0x71,0x53,0xC6,0x0A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometer3>{ 0x87E0022A,0xED80,0x49EB,{ 0xBF,0x8A,0xA4,0xEA,0x31,0xE5,0xCD,0x84 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometer4>{ 0x1D373C4F,0x42D3,0x45B2,{ 0x81,0x44,0xAB,0x7F,0xB6,0x65,0xEB,0x59 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometer5>{ 0x7E7E7021,0xDEF4,0x53A6,{ 0xAF,0x43,0x80,0x6F,0xD5,0x38,0xED,0xF6 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerDataThreshold>{ 0xF92C1B68,0x6320,0x5577,{ 0x87,0x9E,0x99,0x42,0x62,0x1C,0x3D,0xD9 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerDeviceId>{ 0x7EAC64A9,0x97D5,0x446D,{ 0xAB,0x5A,0x91,0x7D,0xF9,0xB9,0x6A,0x2C } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerReading>{ 0xB9FE7ACB,0xD351,0x40AF,{ 0x8B,0xB6,0x7A,0xA9,0xAE,0x64,0x1F,0xB7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerReading2>{ 0x0A864AA2,0x15AE,0x4A40,{ 0xBE,0x55,0xDB,0x58,0xD7,0xDE,0x73,0x89 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>{ 0x0095C65B,0xB6AC,0x475A,{ 0x9F,0x44,0x8B,0x32,0xD3,0x5A,0x3F,0x25 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>{ 0x95FF01D1,0x4A28,0x4F35,{ 0x98,0xE8,0x81,0x78,0xAA,0xE4,0x08,0x4A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerStatics>{ 0xA5E28B74,0x5A87,0x4A2D,{ 0xBE,0xCC,0x0F,0x90,0x6E,0xA0,0x61,0xDD } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerStatics2>{ 0xC4C4842F,0xD86B,0x4685,{ 0xB2,0xD7,0x33,0x96,0xF7,0x98,0xD5,0x7B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAccelerometerStatics3>{ 0x9DE218CF,0x455D,0x4CF3,{ 0x82,0x00,0x70,0xE1,0x41,0x03,0x40,0xF8 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IActivitySensor>{ 0xCD7A630C,0xFB5F,0x48EB,{ 0xB0,0x9B,0xA2,0x70,0x8D,0x1C,0x61,0xEF } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IActivitySensorReading>{ 0x85125A96,0x1472,0x40A2,{ 0xB2,0xAE,0xE1,0xEF,0x29,0x22,0x6C,0x78 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>{ 0x4F3C2915,0xD93B,0x47BD,{ 0x96,0x0A,0xF2,0x0F,0xB2,0xF3,0x22,0xB9 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>{ 0xDE386717,0xAEB6,0x4EC7,{ 0x94,0x6A,0xD9,0xCC,0x19,0xB9,0x51,0xEC } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IActivitySensorStatics>{ 0xA71E0E9D,0xEE8B,0x45D1,{ 0xB2,0x5B,0x08,0xCC,0x0D,0xF9,0x2A,0xB6 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IActivitySensorTriggerDetails>{ 0x2C9E6612,0xB9CA,0x4677,{ 0xB2,0x63,0x24,0x32,0x97,0xF7,0x9D,0x3A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAltimeter>{ 0x72F057FD,0x8F04,0x49F1,{ 0xB4,0xA7,0xF4,0xE3,0x63,0xB7,0x01,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAltimeter2>{ 0xC9471BF9,0x2ADD,0x48F5,{ 0x9F,0x08,0x3D,0x0C,0x76,0x60,0xD9,0x38 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAltimeterReading>{ 0xFBE8EF73,0x7F5E,0x48C8,{ 0xAA,0x1A,0xF1,0xF3,0xBE,0xFC,0x11,0x44 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAltimeterReading2>{ 0x543A1BD9,0x6D0B,0x42B2,{ 0xBD,0x69,0xBC,0x8F,0xAE,0x0F,0x78,0x2C } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>{ 0x7069D077,0x446D,0x47F7,{ 0x99,0x8C,0xEB,0xC2,0x3B,0x45,0xE4,0xA2 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IAltimeterStatics>{ 0x9EB4D7C3,0xE5AC,0x47CE,{ 0x8E,0xEF,0xD3,0x71,0x81,0x68,0xC0,0x1F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometer>{ 0x934475A8,0x78BF,0x452F,{ 0xB0,0x17,0xF0,0x20,0x9C,0xE6,0xDA,0xB4 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometer2>{ 0x32BCC418,0x3EEB,0x4D04,{ 0x95,0x74,0x76,0x33,0xA8,0x78,0x1F,0x9F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometer3>{ 0x0E35F0EA,0x02B5,0x5A04,{ 0xB0,0x3D,0x82,0x20,0x84,0x86,0x3A,0x54 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometerDataThreshold>{ 0x076B952C,0xCB62,0x5A90,{ 0xA0,0xD1,0xF8,0x5E,0x4A,0x93,0x63,0x94 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometerReading>{ 0xF5B9D2E6,0x1DF6,0x4A1A,{ 0xA7,0xAD,0x32,0x1D,0x4F,0x5D,0xB2,0x47 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometerReading2>{ 0x85A244EB,0x90C5,0x4875,{ 0x89,0x1C,0x38,0x65,0xB4,0xC3,0x57,0xE7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>{ 0x3D84945F,0x037B,0x404F,{ 0x9B,0xBB,0x62,0x32,0xD6,0x95,0x43,0xC3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometerStatics>{ 0x286B270A,0x02E3,0x4F86,{ 0x84,0xFC,0xFD,0xD8,0x92,0xB5,0x94,0x0F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IBarometerStatics2>{ 0x8FC6B1E7,0x95FF,0x44AC,{ 0x87,0x8E,0xD6,0x5C,0x83,0x08,0xC3,0x4C } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompass>{ 0x292FFA94,0x1B45,0x403C,{ 0xBA,0x06,0xB1,0x06,0xDB,0xA6,0x9A,0x64 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompass2>{ 0x36F26D09,0xC7D7,0x434F,{ 0xB4,0x61,0x97,0x9D,0xDF,0xC2,0x32,0x2F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompass3>{ 0xA424801B,0xC5EA,0x4D45,{ 0xA0,0xEC,0x4B,0x79,0x1F,0x04,0x1A,0x89 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompass4>{ 0x291E7F11,0xEC32,0x5DCC,{ 0xBF,0xCB,0x0B,0xB3,0x9E,0xBA,0x57,0x74 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassDataThreshold>{ 0xD15B52B3,0xD39D,0x5EC8,{ 0xB2,0xE4,0xF1,0x93,0xE6,0xAB,0x34,0xED } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassDeviceId>{ 0xD181CA29,0xB085,0x4B1D,{ 0x87,0x0A,0x4F,0xF5,0x7B,0xA7,0x4F,0xD4 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassReading>{ 0x82911128,0x513D,0x4DC9,{ 0xB7,0x81,0x5E,0xED,0xFB,0xF0,0x2D,0x0C } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassReading2>{ 0xB13A661E,0x51BB,0x4A12,{ 0xBE,0xDD,0xAD,0x47,0xFF,0x87,0xD2,0xE8 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>{ 0x8F1549B0,0xE8BC,0x4C7E,{ 0xB0,0x09,0x4E,0x41,0xDF,0x13,0x70,0x72 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>{ 0xE761354E,0x8911,0x40F7,{ 0x9E,0x16,0x6E,0xCC,0x7D,0xAE,0xC5,0xDE } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassStatics>{ 0x9ABC97DF,0x56EC,0x4C25,{ 0xB5,0x4D,0x40,0xA6,0x8B,0xB5,0xB2,0x69 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ICompassStatics2>{ 0x0ACE0EAD,0x3BAA,0x4990,{ 0x9C,0xE4,0xBE,0x09,0x13,0x75,0x4E,0xD2 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometer>{ 0xFDB9A9C4,0x84B1,0x4CA2,{ 0x97,0x63,0x9B,0x58,0x95,0x06,0xC7,0x0C } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometer2>{ 0x63DF2443,0x8CE8,0x41C3,{ 0xAC,0x44,0x86,0x98,0x81,0x0B,0x55,0x7F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometer3>{ 0x5D6F88D5,0x8FBC,0x4484,{ 0x91,0x4B,0x52,0x8A,0xDF,0xD9,0x47,0xB1 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometer4>{ 0x0628A60C,0x4C4B,0x5096,{ 0x94,0xE6,0xC3,0x56,0xDF,0x68,0xBE,0xF7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerDataThreshold>{ 0x8648B31E,0x6E52,0x5259,{ 0xBB,0xAD,0x24,0x2A,0x69,0xDC,0x38,0xC8 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerDeviceId>{ 0x1EE5E978,0x89A2,0x4275,{ 0x9E,0x95,0x71,0x26,0xF4,0x70,0x87,0x60 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerReading>{ 0xB3D6DE5C,0x1EE4,0x456F,{ 0x9D,0xE7,0xE2,0x49,0x3B,0x5C,0x8E,0x03 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerReading2>{ 0x16AFE13C,0x2B89,0x44BB,{ 0x82,0x2B,0xD1,0xE1,0x55,0x6F,0xF0,0x9B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>{ 0x0FDF1895,0x6F9E,0x42CE,{ 0x8D,0x58,0x38,0x8C,0x0A,0xB8,0x35,0x6D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerStatics>{ 0x83B6E7C9,0xE49D,0x4B39,{ 0x86,0xE6,0xCD,0x55,0x4B,0xE4,0xC5,0xC1 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IGyrometerStatics2>{ 0xEF83F7A1,0xD700,0x4204,{ 0x96,0x13,0x79,0xC6,0xB1,0x61,0xDF,0x4E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IHingeAngleReading>{ 0xA3CD45B9,0x1BF1,0x4F65,{ 0xA7,0x04,0xE2,0xDA,0x04,0xF1,0x82,0xC0 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IHingeAngleSensor>{ 0xE9D3BE02,0xBFDF,0x437F,{ 0x8C,0x29,0x88,0xC7,0x73,0x93,0xD3,0x09 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs>{ 0x24D9558B,0xFAD0,0x42B8,{ 0xA8,0x54,0x78,0x92,0x30,0x49,0xA1,0xBA } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IHingeAngleSensorStatics>{ 0xB7B63910,0xFBB1,0x4123,{ 0x89,0xCE,0x4E,0xA3,0x4E,0xB0,0xDF,0xCA } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometer>{ 0x2648CA6F,0x2286,0x406F,{ 0x91,0x61,0xF0,0xC4,0xBD,0x80,0x6E,0xBF } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometer2>{ 0x029F3393,0x28B2,0x45F8,{ 0xBB,0x16,0x61,0xE8,0x6A,0x7F,0xAE,0x6E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometer3>{ 0x3A095004,0xD765,0x4384,{ 0xA3,0xD7,0x02,0x83,0xF3,0xAB,0xE6,0xAE } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometer4>{ 0x43852618,0x8FCA,0x548E,{ 0xBB,0xF5,0x5C,0x50,0x41,0x2B,0x6A,0xA4 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerDataThreshold>{ 0xF80A4783,0x7BFE,0x545E,{ 0xBB,0x60,0xA0,0xEB,0xC4,0x7B,0xD2,0xFB } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerDeviceId>{ 0x01E91982,0x41FF,0x4406,{ 0xAE,0x83,0x62,0x21,0x0F,0xF1,0x6F,0xE3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerReading>{ 0x9F44F055,0xB6F6,0x497F,{ 0xB1,0x27,0x1A,0x77,0x5E,0x50,0x14,0x58 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerReading2>{ 0x4F164781,0xE90B,0x4658,{ 0x89,0x15,0x01,0x03,0xE0,0x8A,0x80,0x5A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>{ 0x4AE91DC1,0xE7EB,0x4938,{ 0x85,0x11,0xAE,0x0D,0x6B,0x44,0x04,0x38 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>{ 0xB453E880,0x1FE3,0x4986,{ 0xA2,0x57,0xE6,0xEC,0xE2,0x72,0x39,0x49 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerStatics>{ 0xF22EC551,0x9C30,0x453A,{ 0x8B,0x49,0x3C,0x3E,0xEB,0x33,0xCB,0x61 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerStatics2>{ 0x043F9775,0x6A1E,0x499C,{ 0x86,0xE0,0x63,0x8C,0x1A,0x86,0x4B,0x00 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerStatics3>{ 0xBD9A4280,0xB91A,0x4829,{ 0x93,0x92,0xAB,0xC0,0xB6,0xBD,0xF2,0xB4 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IInclinometerStatics4>{ 0xE8BA96F9,0x6E85,0x4A83,{ 0xAE,0xD0,0xD7,0xCD,0xCC,0x98,0x56,0xC8 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensor>{ 0xF84C0718,0x0C54,0x47AE,{ 0x92,0x2E,0x78,0x9F,0x57,0xFB,0x03,0xA0 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensor2>{ 0x486B24E8,0xA94C,0x4090,{ 0x8F,0x48,0x09,0xF7,0x82,0xA9,0xF7,0xD5 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensor3>{ 0x4876D0FF,0x9F4C,0x5F72,{ 0xAD,0xBD,0xA3,0x47,0x1B,0x06,0x3C,0x00 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorDataThreshold>{ 0xB160AFD1,0x878F,0x5492,{ 0x9F,0x2C,0x33,0xDC,0x3A,0xE5,0x84,0xA3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorDeviceId>{ 0x7FEE49F8,0x0AFB,0x4F51,{ 0x87,0xF0,0x6C,0x26,0x37,0x5C,0xE9,0x4F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorReading>{ 0xFFDF6300,0x227C,0x4D2B,{ 0xB3,0x02,0xFC,0x01,0x42,0x48,0x5C,0x68 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorReading2>{ 0xB7512185,0x44A3,0x44C9,{ 0x81,0x90,0x9E,0xF6,0xDE,0x0A,0x8A,0x74 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>{ 0xA3A2F4CF,0x258B,0x420C,{ 0xB8,0xAB,0x8E,0xDD,0x60,0x1E,0xCF,0x50 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorStatics>{ 0x45DB8C84,0xC3A8,0x471E,{ 0x9A,0x53,0x64,0x57,0xFA,0xD8,0x7C,0x0E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ILightSensorStatics2>{ 0x0EC0A650,0xDDC6,0x40AB,{ 0xAC,0xE3,0xEC,0x33,0x59,0xD4,0x2C,0x51 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometer>{ 0x484F626E,0xD3C9,0x4111,{ 0xB3,0xF6,0x2C,0xF1,0xFA,0xA4,0x18,0xD5 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometer2>{ 0xB4656C85,0x26F6,0x444B,{ 0xA9,0xE2,0xA2,0x3F,0x96,0x6C,0xD3,0x68 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometer3>{ 0xBE93DB7C,0xA625,0x48EF,{ 0xAC,0xF7,0xFA,0xC1,0x04,0x83,0x26,0x71 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometer4>{ 0xDFB17901,0x3E0F,0x508F,{ 0xB2,0x4B,0xF2,0xBB,0x75,0x01,0x5F,0x40 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerDataThreshold>{ 0xD177CB01,0x9063,0x5FA5,{ 0xB5,0x96,0xB4,0x45,0xE9,0xDC,0x34,0x01 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerDeviceId>{ 0x58B498C2,0x7E4B,0x404C,{ 0x9F,0xC5,0x5D,0xE8,0xB4,0x0E,0xBA,0xE3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerReading>{ 0x0C2CC40D,0xEBFD,0x4E5C,{ 0xBB,0x11,0xAF,0xC2,0x9B,0x3C,0xAE,0x61 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerReading2>{ 0xD4C95C61,0x61D9,0x404B,{ 0xA3,0x28,0x06,0x6F,0x17,0x7A,0x14,0x09 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>{ 0x17EAE872,0x2EB9,0x4EE7,{ 0x8A,0xD0,0x31,0x27,0x53,0x7D,0x94,0x9B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerStatics>{ 0x853C64CC,0x0698,0x4DDA,{ 0xA6,0xDF,0x9C,0xB9,0xCC,0x4A,0xB4,0x0A } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IMagnetometerStatics2>{ 0x2C0819F0,0xFFC6,0x4F89,{ 0xA0,0x6F,0x18,0xFA,0x10,0x79,0x29,0x33 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensor>{ 0x5E354635,0xCF6B,0x4C63,{ 0xAB,0xD8,0x10,0x25,0x2B,0x0B,0xF6,0xEC } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensor2>{ 0x0D924CF9,0x2F1F,0x49C9,{ 0x80,0x42,0x4A,0x18,0x13,0xD6,0x77,0x60 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensor3>{ 0x2CCE578D,0x646B,0x48C5,{ 0xB7,0xEE,0x44,0xFD,0xC4,0xC6,0xAA,0xFD } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorDeviceId>{ 0x5A69B648,0x4C29,0x49EC,{ 0xB2,0x8F,0xEA,0x1D,0x11,0x7B,0x66,0xF0 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorReading>{ 0x4756C993,0x6595,0x4897,{ 0xBC,0xC6,0xD5,0x37,0xEE,0x75,0x75,0x64 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorReading2>{ 0x00576E5F,0x49F8,0x4C05,{ 0x9E,0x07,0x24,0xFA,0xC7,0x94,0x08,0xC3 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>{ 0x012C1186,0xC3BA,0x46BC,{ 0xAE,0x65,0x7A,0x98,0x99,0x6C,0xBF,0xB8 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>{ 0xD1AC9824,0x3F5A,0x49A2,{ 0xBC,0x7B,0x11,0x80,0xBC,0x38,0xCD,0x2B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorStatics>{ 0x10EF8712,0xFB4C,0x428A,{ 0x89,0x8B,0x27,0x65,0xE4,0x09,0xE6,0x69 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorStatics2>{ 0x59DA0D0B,0xD40A,0x4C71,{ 0x92,0x76,0x8A,0x27,0x2A,0x0A,0x66,0x19 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorStatics3>{ 0xD82CE920,0x2777,0x40FF,{ 0x9F,0x59,0xD6,0x54,0xB0,0x85,0xF1,0x2F } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IOrientationSensorStatics4>{ 0xA67FEB55,0x2C85,0x4B28,{ 0xA0,0xFE,0x58,0xC4,0xB2,0x04,0x95,0xF5 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometer>{ 0x9A1E013D,0x3D98,0x45F8,{ 0x89,0x20,0x8E,0x4E,0xCA,0xCA,0x5F,0x97 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometer2>{ 0xE5A406DF,0x2B81,0x4ADD,{ 0xB2,0xFF,0x77,0xAB,0x6C,0x98,0xBA,0x19 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometerDataThresholdFactory>{ 0xCBAD8F50,0x7A54,0x466B,{ 0x90,0x10,0x77,0xA1,0x62,0xFC,0xA5,0xD7 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometerReading>{ 0x2245DCF4,0xA8E1,0x432F,{ 0x89,0x6A,0xBE,0x0D,0xD9,0xB0,0x2D,0x24 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>{ 0xF855E47E,0xABBC,0x4456,{ 0x86,0xA8,0x25,0xCF,0x2B,0x33,0x37,0x42 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometerStatics>{ 0x82980A2F,0x4083,0x4DFB,{ 0xB4,0x11,0x93,0x8E,0xA0,0xF4,0xB9,0x46 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IPedometerStatics2>{ 0x79F5C6BB,0xCE0E,0x4133,{ 0xB4,0x7E,0x86,0x27,0xEA,0x72,0xF6,0x77 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IProximitySensor>{ 0x54C076B8,0xECFB,0x4944,{ 0xB9,0x28,0x74,0xFC,0x50,0x4D,0x47,0xEE } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>{ 0x905AC121,0x6D27,0x4AD3,{ 0x9D,0xB5,0x64,0x67,0xF2,0xA5,0xAD,0x9D } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IProximitySensorReading>{ 0x71228D59,0x132D,0x4D5F,{ 0x8F,0xF9,0x2F,0x0D,0xB8,0x75,0x1C,0xED } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>{ 0xCFC2F366,0xC3E8,0x40FD,{ 0x8C,0xC3,0x67,0xE2,0x89,0x00,0x49,0x38 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IProximitySensorStatics>{ 0x29186649,0x6269,0x4E57,{ 0xA5,0xAD,0x82,0xBE,0x80,0x81,0x33,0x92 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::IProximitySensorStatics2>{ 0xCBF473AE,0xE9CA,0x422F,{ 0xAD,0x67,0x4C,0x3D,0x25,0xDF,0x35,0x0C } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISensorDataThreshold>{ 0x54DAEC61,0xFE4B,0x4E07,{ 0xB2,0x60,0x3A,0x4C,0xDF,0xBE,0x39,0x6E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>{ 0x9106F1B7,0xE88D,0x48B1,{ 0xBC,0x90,0x61,0x9C,0x7B,0x34,0x93,0x91 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISensorQuaternion>{ 0xC9C5C827,0xC71C,0x46E7,{ 0x9D,0xA3,0x36,0xA1,0x93,0xB2,0x32,0xBC } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISensorRotationMatrix>{ 0x0A3D5A67,0x22F4,0x4392,{ 0x95,0x38,0x65,0xD0,0xBD,0x06,0x4A,0xA6 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISimpleOrientationSensor>{ 0x5FF53856,0x214A,0x4DEE,{ 0xA3,0xF9,0x61,0x6F,0x1A,0xB0,0x6F,0xFD } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISimpleOrientationSensor2>{ 0xA277A798,0x8870,0x453E,{ 0x8B,0xD6,0xB8,0xF5,0xD8,0xD7,0x94,0x1B } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>{ 0xFBC00ACB,0x3B76,0x41F6,{ 0x80,0x91,0x30,0xEF,0xE6,0x46,0xD3,0xCF } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>{ 0xBCD5C660,0x23D4,0x4B4C,{ 0xA2,0x2E,0xBA,0x81,0xAD,0xE0,0xC6,0x01 } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>{ 0x72ED066F,0x70AA,0x40C6,{ 0x9B,0x1B,0x34,0x33,0xF7,0x45,0x9B,0x4E } };
    template <> inline constexpr guid guid_v<Windows::Devices::Sensors::ISimpleOrientationSensorStatics2>{ 0x848F9C7F,0xB138,0x4E11,{ 0x89,0x10,0xA2,0xA2,0xA3,0xB5,0x6D,0x83 } };
    template <> struct default_interface<Windows::Devices::Sensors::Accelerometer>{ using type = Windows::Devices::Sensors::IAccelerometer; };
    template <> struct default_interface<Windows::Devices::Sensors::AccelerometerDataThreshold>{ using type = Windows::Devices::Sensors::IAccelerometerDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::AccelerometerReading>{ using type = Windows::Devices::Sensors::IAccelerometerReading; };
    template <> struct default_interface<Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::AccelerometerShakenEventArgs>{ using type = Windows::Devices::Sensors::IAccelerometerShakenEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::ActivitySensor>{ using type = Windows::Devices::Sensors::IActivitySensor; };
    template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorReading>{ using type = Windows::Devices::Sensors::IActivitySensorReading; };
    template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorReadingChangeReport>{ using type = Windows::Devices::Sensors::IActivitySensorReadingChangeReport; };
    template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::ActivitySensorTriggerDetails>{ using type = Windows::Devices::Sensors::IActivitySensorTriggerDetails; };
    template <> struct default_interface<Windows::Devices::Sensors::Altimeter>{ using type = Windows::Devices::Sensors::IAltimeter; };
    template <> struct default_interface<Windows::Devices::Sensors::AltimeterReading>{ using type = Windows::Devices::Sensors::IAltimeterReading; };
    template <> struct default_interface<Windows::Devices::Sensors::AltimeterReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::Barometer>{ using type = Windows::Devices::Sensors::IBarometer; };
    template <> struct default_interface<Windows::Devices::Sensors::BarometerDataThreshold>{ using type = Windows::Devices::Sensors::IBarometerDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::BarometerReading>{ using type = Windows::Devices::Sensors::IBarometerReading; };
    template <> struct default_interface<Windows::Devices::Sensors::BarometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IBarometerReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::Compass>{ using type = Windows::Devices::Sensors::ICompass; };
    template <> struct default_interface<Windows::Devices::Sensors::CompassDataThreshold>{ using type = Windows::Devices::Sensors::ICompassDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::CompassReading>{ using type = Windows::Devices::Sensors::ICompassReading; };
    template <> struct default_interface<Windows::Devices::Sensors::CompassReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::ICompassReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::Gyrometer>{ using type = Windows::Devices::Sensors::IGyrometer; };
    template <> struct default_interface<Windows::Devices::Sensors::GyrometerDataThreshold>{ using type = Windows::Devices::Sensors::IGyrometerDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::GyrometerReading>{ using type = Windows::Devices::Sensors::IGyrometerReading; };
    template <> struct default_interface<Windows::Devices::Sensors::GyrometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::HingeAngleReading>{ using type = Windows::Devices::Sensors::IHingeAngleReading; };
    template <> struct default_interface<Windows::Devices::Sensors::HingeAngleSensor>{ using type = Windows::Devices::Sensors::IHingeAngleSensor; };
    template <> struct default_interface<Windows::Devices::Sensors::HingeAngleSensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::Inclinometer>{ using type = Windows::Devices::Sensors::IInclinometer; };
    template <> struct default_interface<Windows::Devices::Sensors::InclinometerDataThreshold>{ using type = Windows::Devices::Sensors::IInclinometerDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::InclinometerReading>{ using type = Windows::Devices::Sensors::IInclinometerReading; };
    template <> struct default_interface<Windows::Devices::Sensors::InclinometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::LightSensor>{ using type = Windows::Devices::Sensors::ILightSensor; };
    template <> struct default_interface<Windows::Devices::Sensors::LightSensorDataThreshold>{ using type = Windows::Devices::Sensors::ILightSensorDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::LightSensorReading>{ using type = Windows::Devices::Sensors::ILightSensorReading; };
    template <> struct default_interface<Windows::Devices::Sensors::LightSensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::Magnetometer>{ using type = Windows::Devices::Sensors::IMagnetometer; };
    template <> struct default_interface<Windows::Devices::Sensors::MagnetometerDataThreshold>{ using type = Windows::Devices::Sensors::IMagnetometerDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::MagnetometerReading>{ using type = Windows::Devices::Sensors::IMagnetometerReading; };
    template <> struct default_interface<Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::OrientationSensor>{ using type = Windows::Devices::Sensors::IOrientationSensor; };
    template <> struct default_interface<Windows::Devices::Sensors::OrientationSensorReading>{ using type = Windows::Devices::Sensors::IOrientationSensorReading; };
    template <> struct default_interface<Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::Pedometer>{ using type = Windows::Devices::Sensors::IPedometer; };
    template <> struct default_interface<Windows::Devices::Sensors::PedometerDataThreshold>{ using type = Windows::Devices::Sensors::ISensorDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::PedometerReading>{ using type = Windows::Devices::Sensors::IPedometerReading; };
    template <> struct default_interface<Windows::Devices::Sensors::PedometerReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IPedometerReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::ProximitySensor>{ using type = Windows::Devices::Sensors::IProximitySensor; };
    template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorDataThreshold>{ using type = Windows::Devices::Sensors::ISensorDataThreshold; };
    template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorDisplayOnOffController>{ using type = Windows::Foundation::IClosable; };
    template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorReading>{ using type = Windows::Devices::Sensors::IProximitySensorReading; };
    template <> struct default_interface<Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs>{ using type = Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Sensors::SensorDataThresholdTriggerDetails>{ using type = Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails; };
    template <> struct default_interface<Windows::Devices::Sensors::SensorQuaternion>{ using type = Windows::Devices::Sensors::ISensorQuaternion; };
    template <> struct default_interface<Windows::Devices::Sensors::SensorRotationMatrix>{ using type = Windows::Devices::Sensors::ISensorRotationMatrix; };
    template <> struct default_interface<Windows::Devices::Sensors::SimpleOrientationSensor>{ using type = Windows::Devices::Sensors::ISimpleOrientationSensor; };
    template <> struct default_interface<Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs>{ using type = Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs; };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Shaken(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Shaken(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometer4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReadingType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometer5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XAxisInGForce(double*) noexcept = 0;
            virtual int32_t __stdcall put_XAxisInGForce(double) noexcept = 0;
            virtual int32_t __stdcall get_YAxisInGForce(double*) noexcept = 0;
            virtual int32_t __stdcall put_YAxisInGForce(double) noexcept = 0;
            virtual int32_t __stdcall get_ZAxisInGForce(double*) noexcept = 0;
            virtual int32_t __stdcall put_ZAxisInGForce(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AccelerationX(double*) noexcept = 0;
            virtual int32_t __stdcall get_AccelerationY(double*) noexcept = 0;
            virtual int32_t __stdcall get_AccelerationZ(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultWithAccelerometerReadingType(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAccelerometerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IActivitySensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReadingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubscribedActivities(void**) noexcept = 0;
            virtual int32_t __stdcall get_PowerInMilliwatts(double*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedActivities(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IActivitySensorReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Activity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Confidence(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IActivitySensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSystemHistoryAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetSystemHistoryWithDurationAsync(int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IActivitySensorTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAltimeter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAltimeter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAltimeterReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AltitudeChangeInMeters(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAltimeterReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IAltimeterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometerDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Hectopascals(double*) noexcept = 0;
            virtual int32_t __stdcall put_Hectopascals(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometerReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_StationPressureInHectopascals(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometerReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IBarometerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompass>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompass2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompass3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompass4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Degrees(double*) noexcept = 0;
            virtual int32_t __stdcall put_Degrees(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_HeadingMagneticNorth(double*) noexcept = 0;
            virtual int32_t __stdcall get_HeadingTrueNorth(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HeadingAccuracy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ICompassStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometer4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XAxisInDegreesPerSecond(double*) noexcept = 0;
            virtual int32_t __stdcall put_XAxisInDegreesPerSecond(double) noexcept = 0;
            virtual int32_t __stdcall get_YAxisInDegreesPerSecond(double*) noexcept = 0;
            virtual int32_t __stdcall put_YAxisInDegreesPerSecond(double) noexcept = 0;
            virtual int32_t __stdcall get_ZAxisInDegreesPerSecond(double*) noexcept = 0;
            virtual int32_t __stdcall put_ZAxisInDegreesPerSecond(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AngularVelocityX(double*) noexcept = 0;
            virtual int32_t __stdcall get_AngularVelocityY(double*) noexcept = 0;
            virtual int32_t __stdcall get_AngularVelocityZ(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IGyrometerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IHingeAngleReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AngleInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IHingeAngleSensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReadingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinReportThresholdInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall get_ReportThresholdInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReportThresholdInDegrees(double) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IHingeAngleSensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRelatedToAdjacentPanelsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReadingType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometer4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PitchInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_PitchInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_RollInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RollInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_YawInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_YawInDegrees(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PitchDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall get_RollDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall get_YawDegrees(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_YawAccuracy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultForRelativeReadings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultWithSensorReadingType(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IInclinometerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensor3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LuxPercentage(float*) noexcept = 0;
            virtual int32_t __stdcall put_LuxPercentage(float) noexcept = 0;
            virtual int32_t __stdcall get_AbsoluteLux(float*) noexcept = 0;
            virtual int32_t __stdcall put_AbsoluteLux(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IlluminanceInLux(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ILightSensorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometer4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReportThreshold(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XAxisMicroteslas(float*) noexcept = 0;
            virtual int32_t __stdcall put_XAxisMicroteslas(float) noexcept = 0;
            virtual int32_t __stdcall get_YAxisMicroteslas(float*) noexcept = 0;
            virtual int32_t __stdcall put_YAxisMicroteslas(float) noexcept = 0;
            virtual int32_t __stdcall get_ZAxisMicroteslas(float*) noexcept = 0;
            virtual int32_t __stdcall put_ZAxisMicroteslas(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MagneticFieldX(float*) noexcept = 0;
            virtual int32_t __stdcall get_MagneticFieldY(float*) noexcept = 0;
            virtual int32_t __stdcall get_MagneticFieldZ(float*) noexcept = 0;
            virtual int32_t __stdcall get_DirectionalAccuracy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IMagnetometerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReadingType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensor3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RotationMatrix(void**) noexcept = 0;
            virtual int32_t __stdcall get_Quaternion(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_YawAccuracy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultForRelativeReadings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultWithSensorReadingType(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultWithSensorReadingTypeAndSensorOptimizationGoal(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IOrientationSensorStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorWithSensorReadingTypeAndSensorOptimizationGoal(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PowerInMilliwatts(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReadings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometerDataThresholdFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometerReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StepKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CumulativeSteps(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_CumulativeStepsDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetSystemHistoryAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetSystemHistoryWithDurationAsync(int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IPedometerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetReadingsFromTriggerDetails(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IProximitySensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxDistanceInMillimeters(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinDistanceInMillimeters(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateDisplayOnOffController(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IProximitySensorReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsDetected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DistanceInMillimeters(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IProximitySensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::IProximitySensorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetReadingsFromTriggerDetails(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISensorDataThreshold>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SensorType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISensorQuaternion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_W(float*) noexcept = 0;
            virtual int32_t __stdcall get_X(float*) noexcept = 0;
            virtual int32_t __stdcall get_Y(float*) noexcept = 0;
            virtual int32_t __stdcall get_Z(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISensorRotationMatrix>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_M11(float*) noexcept = 0;
            virtual int32_t __stdcall get_M12(float*) noexcept = 0;
            virtual int32_t __stdcall get_M13(float*) noexcept = 0;
            virtual int32_t __stdcall get_M21(float*) noexcept = 0;
            virtual int32_t __stdcall get_M22(float*) noexcept = 0;
            virtual int32_t __stdcall get_M23(float*) noexcept = 0;
            virtual int32_t __stdcall get_M31(float*) noexcept = 0;
            virtual int32_t __stdcall get_M32(float*) noexcept = 0;
            virtual int32_t __stdcall get_M33(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentOrientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_OrientationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OrientationChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReadingTransform(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadingTransform(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::ISimpleOrientationSensorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometer
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::AccelerometerReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IAccelerometer, &impl::abi_t<Windows::Devices::Sensors::IAccelerometer>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Shaken(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const& handler) const;
        using Shaken_revoker = impl::event_revoker<Windows::Devices::Sensors::IAccelerometer, &impl::abi_t<Windows::Devices::Sensors::IAccelerometer>::remove_Shaken>;
        [[nodiscard]] Shaken_revoker Shaken(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Accelerometer, Windows::Devices::Sensors::AccelerometerShakenEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Shaken(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometer>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometer2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometer2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometer3
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometer3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometer4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::AccelerometerReadingType) ReadingType() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometer4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometer5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::AccelerometerDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometer5>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometer5<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) XAxisInGForce() const;
        WINRT_IMPL_AUTO(void) XAxisInGForce(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) YAxisInGForce() const;
        WINRT_IMPL_AUTO(void) YAxisInGForce(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ZAxisInGForce() const;
        WINRT_IMPL_AUTO(void) ZAxisInGForce(double value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AccelerationX() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AccelerationY() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AccelerationZ() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::AccelerometerReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerShakenEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerShakenEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerShakenEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Accelerometer) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Accelerometer) GetDefault(Windows::Devices::Sensors::AccelerometerReadingType const& readingType) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAccelerometerStatics3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Accelerometer>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(Windows::Devices::Sensors::AccelerometerReadingType const& readingType) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAccelerometerStatics3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAccelerometerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IActivitySensor
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensorReading>) GetCurrentReadingAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType>) SubscribedActivities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) PowerInMilliwatts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType>) SupportedActivities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IActivitySensor, &impl::abi_t<Windows::Devices::Sensors::IActivitySensor>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ActivitySensor, Windows::Devices::Sensors::ActivitySensorReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IActivitySensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IActivitySensorReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::ActivityType) Activity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::ActivitySensorReadingConfidence) Confidence() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IActivitySensorReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IActivitySensorReadingChangeReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::ActivitySensorReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IActivitySensorReadingChangeReport>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorReadingChangeReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IActivitySensorReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::ActivitySensorReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IActivitySensorStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor>) GetDefaultAsync() const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::ActivitySensor>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>>) GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReading>>) GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IActivitySensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IActivitySensorTriggerDetails
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivitySensorReadingChangeReport>) ReadReports() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IActivitySensorTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IActivitySensorTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAltimeter
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::AltimeterReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IAltimeter, &impl::abi_t<Windows::Devices::Sensors::IAltimeter>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Altimeter, Windows::Devices::Sensors::AltimeterReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IAltimeter>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAltimeter2
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAltimeter2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeter2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAltimeterReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AltitudeChangeInMeters() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAltimeterReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAltimeterReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAltimeterReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAltimeterReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::AltimeterReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IAltimeterStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Altimeter) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IAltimeterStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IAltimeterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometer
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::BarometerReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IBarometer, &impl::abi_t<Windows::Devices::Sensors::IBarometer>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Barometer, Windows::Devices::Sensors::BarometerReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometer>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometer2
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometer2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometer3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::BarometerDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometer3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometer3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometerDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Hectopascals() const;
        WINRT_IMPL_AUTO(void) Hectopascals(double value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometerDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometerReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) StationPressureInHectopascals() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometerReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometerReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometerReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometerReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::BarometerReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometerReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometerStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Barometer) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IBarometerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Barometer>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IBarometerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IBarometerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompass
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::CompassReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::ICompass, &impl::abi_t<Windows::Devices::Sensors::ICompass>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Compass, Windows::Devices::Sensors::CompassReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompass>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompass<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompass2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompass2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompass2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompass3
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompass3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompass3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompass4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::CompassDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompass4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompass4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Degrees() const;
        WINRT_IMPL_AUTO(void) Degrees(double value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HeadingMagneticNorth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) HeadingTrueNorth() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::CompassReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassReadingHeadingAccuracy
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerAccuracy) HeadingAccuracy() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassReadingHeadingAccuracy>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassReadingHeadingAccuracy<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Compass) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ICompassStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Compass>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::ICompassStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ICompassStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometer
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::GyrometerReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IGyrometer, &impl::abi_t<Windows::Devices::Sensors::IGyrometer>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Gyrometer, Windows::Devices::Sensors::GyrometerReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometer>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometer2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometer2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometer3
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometer3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometer3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometer4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::GyrometerDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometer4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometer4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) XAxisInDegreesPerSecond() const;
        WINRT_IMPL_AUTO(void) XAxisInDegreesPerSecond(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) YAxisInDegreesPerSecond() const;
        WINRT_IMPL_AUTO(void) YAxisInDegreesPerSecond(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ZAxisInDegreesPerSecond() const;
        WINRT_IMPL_AUTO(void) ZAxisInDegreesPerSecond(double value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AngularVelocityX() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AngularVelocityY() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AngularVelocityZ() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::GyrometerReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Gyrometer) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IGyrometerStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Gyrometer>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IGyrometerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IGyrometerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IHingeAngleReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AngleInDegrees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IHingeAngleReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IHingeAngleReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IHingeAngleSensor
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::HingeAngleReading>) GetCurrentReadingAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MinReportThresholdInDegrees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ReportThresholdInDegrees() const;
        WINRT_IMPL_AUTO(void) ReportThresholdInDegrees(double value) const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::HingeAngleSensor, Windows::Devices::Sensors::HingeAngleSensorReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IHingeAngleSensor, &impl::abi_t<Windows::Devices::Sensors::IHingeAngleSensor>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::HingeAngleSensor, Windows::Devices::Sensors::HingeAngleSensorReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IHingeAngleSensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IHingeAngleSensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IHingeAngleSensorReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::HingeAngleReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IHingeAngleSensorReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IHingeAngleSensorStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::HingeAngleSensor>) GetDefaultAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::HingeAngleSensor>) GetRelatedToAdjacentPanelsAsync(param::hstring const& firstPanelId, param::hstring const& secondPanelId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::HingeAngleSensor>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IHingeAngleSensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IHingeAngleSensorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometer
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::InclinometerReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IInclinometer, &impl::abi_t<Windows::Devices::Sensors::IInclinometer>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Inclinometer, Windows::Devices::Sensors::InclinometerReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometer>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometer2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::SensorReadingType) ReadingType() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometer2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometer3
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometer3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometer3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometer4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::InclinometerDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometer4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometer4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(float) PitchInDegrees() const;
        WINRT_IMPL_AUTO(void) PitchInDegrees(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RollInDegrees() const;
        WINRT_IMPL_AUTO(void) RollInDegrees(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) YawInDegrees() const;
        WINRT_IMPL_AUTO(void) YawInDegrees(float value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) PitchDegrees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RollDegrees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) YawDegrees() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::InclinometerReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerReadingYawAccuracy
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerAccuracy) YawAccuracy() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerReadingYawAccuracy>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerReadingYawAccuracy<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Inclinometer) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Inclinometer) GetDefaultForRelativeReadings() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerStatics3
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Inclinometer) GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IInclinometerStatics4
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Inclinometer>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IInclinometerStatics4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IInclinometerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensor
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::LightSensorReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::ILightSensor, &impl::abi_t<Windows::Devices::Sensors::ILightSensor>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::LightSensor, Windows::Devices::Sensors::LightSensorReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensor2
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensor2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensor3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::LightSensorDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensor3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensor3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(float) LuxPercentage() const;
        WINRT_IMPL_AUTO(void) LuxPercentage(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) AbsoluteLux() const;
        WINRT_IMPL_AUTO(void) AbsoluteLux(float value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) IlluminanceInLux() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::LightSensorReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::LightSensor) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ILightSensorStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::LightSensor>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::ILightSensorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ILightSensorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometer
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IMagnetometer, &impl::abi_t<Windows::Devices::Sensors::IMagnetometer>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Magnetometer, Windows::Devices::Sensors::MagnetometerReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometer>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometer2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometer2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometer3
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometer3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometer3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometer4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerDataThreshold) ReportThreshold() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometer4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometer4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerDataThreshold
    {
        [[nodiscard]] WINRT_IMPL_AUTO(float) XAxisMicroteslas() const;
        WINRT_IMPL_AUTO(void) XAxisMicroteslas(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) YAxisMicroteslas() const;
        WINRT_IMPL_AUTO(void) YAxisMicroteslas(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) ZAxisMicroteslas() const;
        WINRT_IMPL_AUTO(void) ZAxisMicroteslas(float value) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MagneticFieldX() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MagneticFieldY() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MagneticFieldZ() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerAccuracy) DirectionalAccuracy() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::Magnetometer) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IMagnetometerStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Magnetometer>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IMagnetometerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IMagnetometerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensor
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::OrientationSensorReading) GetCurrentReading() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IOrientationSensor, &impl::abi_t<Windows::Devices::Sensors::IOrientationSensor>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::OrientationSensor, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensor2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::SensorReadingType) ReadingType() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensor2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensor3
    {
        WINRT_IMPL_AUTO(void) ReportLatency(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportLatency() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensor3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensor3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::SensorRotationMatrix) RotationMatrix() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::SensorQuaternion) Quaternion() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorReading2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) PerformanceCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::OrientationSensorReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorReadingYawAccuracy
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::MagnetometerAccuracy) YawAccuracy() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorReadingYawAccuracy<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::OrientationSensor) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorStatics2
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::OrientationSensor) GetDefaultForRelativeReadings() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorStatics3
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::OrientationSensor) GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype) const;
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::OrientationSensor) GetDefault(Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics3>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IOrientationSensorStatics4
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(Windows::Devices::Sensors::SensorReadingType const& readingType, Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::OrientationSensor>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IOrientationSensorStatics4>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IOrientationSensorStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) PowerInMilliwatts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
        WINRT_IMPL_AUTO(void) ReportInterval(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IPedometer, &impl::abi_t<Windows::Devices::Sensors::IPedometer>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Pedometer, Windows::Devices::Sensors::PedometerReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometer>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometer2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<Windows::Devices::Sensors::PedometerStepKind, Windows::Devices::Sensors::PedometerReading>) GetCurrentReadings() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometer2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometer2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometerDataThresholdFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::PedometerDataThreshold) Create(Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometerDataThresholdFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerDataThresholdFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometerReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::PedometerStepKind) StepKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) CumulativeSteps() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) CumulativeStepsDuration() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometerReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometerReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::PedometerReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometerReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Pedometer>) GetDefaultAsync() const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>>) GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>>) GetSystemHistoryAsync(Windows::Foundation::DateTime const& fromTime, Windows::Foundation::TimeSpan const& duration) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IPedometerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::PedometerReading>) GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IPedometerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IPedometerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IProximitySensor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) MaxDistanceInMillimeters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) MinDistanceInMillimeters() const;
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::ProximitySensorReading) GetCurrentReading() const;
        WINRT_IMPL_AUTO(winrt::event_token) ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::IProximitySensor, &impl::abi_t<Windows::Devices::Sensors::IProximitySensor>::remove_ReadingChanged>;
        [[nodiscard]] ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::ProximitySensor, Windows::Devices::Sensors::ProximitySensorReadingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ReadingChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::ProximitySensorDisplayOnOffController) CreateDisplayOnOffController() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IProximitySensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IProximitySensorDataThresholdFactory
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::ProximitySensorDataThreshold) Create(Windows::Devices::Sensors::ProximitySensor const& sensor) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IProximitySensorDataThresholdFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorDataThresholdFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IProximitySensorReading
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDetected() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) DistanceInMillimeters() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IProximitySensorReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IProximitySensorReadingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::ProximitySensorReading) Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IProximitySensorStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::ProximitySensor) FromId(param::hstring const& sensorId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IProximitySensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_IProximitySensorStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ProximitySensorReading>) GetReadingsFromTriggerDetails(Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails) const;
    };
    template <> struct consume<Windows::Devices::Sensors::IProximitySensorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_IProximitySensorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISensorDataThreshold
    {
    };
    template <> struct consume<Windows::Devices::Sensors::ISensorDataThreshold>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISensorDataThreshold<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::SensorType) SensorType() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISensorDataThresholdTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISensorQuaternion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(float) W() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) X() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) Y() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) Z() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISensorQuaternion>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISensorQuaternion<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISensorRotationMatrix
    {
        [[nodiscard]] WINRT_IMPL_AUTO(float) M11() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M12() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M13() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M21() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M22() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M23() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M31() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M32() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) M33() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISensorRotationMatrix>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISensorRotationMatrix<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISimpleOrientationSensor
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::SimpleOrientation) GetCurrentOrientation() const;
        WINRT_IMPL_AUTO(winrt::event_token) OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const& handler) const;
        using OrientationChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::ISimpleOrientationSensor, &impl::abi_t<Windows::Devices::Sensors::ISimpleOrientationSensor>::remove_OrientationChanged>;
        [[nodiscard]] OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::SimpleOrientationSensor, Windows::Devices::Sensors::SimpleOrientationSensorOrientationChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) OrientationChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISimpleOrientationSensor2
    {
        WINRT_IMPL_AUTO(void) ReadingTransform(Windows::Graphics::Display::DisplayOrientations const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) ReadingTransform() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensor2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorDeviceId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sensors::SimpleOrientation) Orientation() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorOrientationChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Sensors::SimpleOrientationSensor) GetDefault() const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::SimpleOrientationSensor>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::ISimpleOrientationSensorStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_ISimpleOrientationSensorStatics2<D>;
    };
}
#endif
