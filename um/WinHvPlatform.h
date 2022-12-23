/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    WinHvPlatform.ext

Abstract:

    ApiSet contract for the Windows Hypervisor User-Mode Platform APIs.

--*/

#ifndef _WINHVAPI_H_
#define _WINHVAPI_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <WinHvPlatformDefs.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Platform capabilities
//

HRESULT
WINAPI
WHvGetCapability(
    _In_ WHV_CAPABILITY_CODE CapabilityCode,
    _Out_writes_bytes_to_(CapabilityBufferSizeInBytes, *WrittenSizeInBytes) VOID* CapabilityBuffer,
    _In_ UINT32 CapabilityBufferSizeInBytes,
    _Out_opt_ UINT32* WrittenSizeInBytes
    );

HRESULT
WINAPI
WHvCreatePartition(
    _Out_ WHV_PARTITION_HANDLE* Partition
    );

HRESULT
WINAPI
WHvSetupPartition(
    _In_ WHV_PARTITION_HANDLE Partition
    );

HRESULT
WINAPI
WHvDeletePartition(
    _In_ WHV_PARTITION_HANDLE Partition
    );

HRESULT
WINAPI
WHvGetPartitionProperty(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_PARTITION_PROPERTY_CODE PropertyCode,
    _Out_writes_bytes_to_(PropertyBufferSizeInBytes, *WrittenSizeInBytes) VOID* PropertyBuffer,
    _In_ UINT32 PropertyBufferSizeInBytes,
    _Out_opt_ UINT32* WrittenSizeInBytes
    );

HRESULT
WINAPI
WHvSetPartitionProperty(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_PARTITION_PROPERTY_CODE PropertyCode,
    _In_reads_bytes_(PropertyBufferSizeInBytes) const VOID* PropertyBuffer,
    _In_ UINT32 PropertyBufferSizeInBytes
    );

HRESULT
WINAPI
WHvSuspendPartitionTime(
    _In_ WHV_PARTITION_HANDLE Partition
    );

HRESULT
WINAPI
WHvResumePartitionTime(
    _In_ WHV_PARTITION_HANDLE Partition
    );

//
// Memory Management
//

HRESULT
WINAPI
WHvMapGpaRange(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ VOID* SourceAddress,
    _In_ WHV_GUEST_PHYSICAL_ADDRESS GuestAddress,
    _In_ UINT64 SizeInBytes,
    _In_ WHV_MAP_GPA_RANGE_FLAGS Flags
    );

HRESULT
WINAPI
WHvUnmapGpaRange(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_GUEST_PHYSICAL_ADDRESS GuestAddress,
    _In_ UINT64 SizeInBytes
    );

HRESULT
WINAPI
WHvTranslateGva(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ WHV_GUEST_VIRTUAL_ADDRESS Gva,
    _In_ WHV_TRANSLATE_GVA_FLAGS TranslateFlags,
    _Out_ WHV_TRANSLATE_GVA_RESULT* TranslationResult,
    _Out_ WHV_GUEST_PHYSICAL_ADDRESS* Gpa
    );

//
// Virtual Processors
//

HRESULT
WINAPI
WHvCreateVirtualProcessor(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ UINT32 Flags
    );

HRESULT
WINAPI
WHvDeleteVirtualProcessor(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex
    );

HRESULT
WINAPI
WHvRunVirtualProcessor(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _Out_writes_bytes_(ExitContextSizeInBytes) VOID* ExitContext,
    _In_ UINT32 ExitContextSizeInBytes
    );

HRESULT
WINAPI
WHvCancelRunVirtualProcessor(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ UINT32 Flags
    );

HRESULT
WINAPI
WHvGetVirtualProcessorRegisters(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_reads_(RegisterCount) const WHV_REGISTER_NAME* RegisterNames,
    _In_ UINT32 RegisterCount,
    _Out_writes_(RegisterCount) WHV_REGISTER_VALUE* RegisterValues
    );

HRESULT
WINAPI
WHvSetVirtualProcessorRegisters(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_reads_(RegisterCount) const WHV_REGISTER_NAME* RegisterNames,
    _In_ UINT32 RegisterCount,
    _In_reads_(RegisterCount) const WHV_REGISTER_VALUE* RegisterValues
    );

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)
#pragma deprecated("WHvGetVirtualProcessorInterruptControllerState is deprecated; use WHvGetVirtualProcessorInterruptControllerState2")
#endif

HRESULT
WINAPI
WHvGetVirtualProcessorInterruptControllerState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _Out_writes_bytes_to_(StateSize, *WrittenSize) VOID* State,
    _In_ UINT32 StateSize,
    _Out_opt_ UINT32* WrittenSize
    );

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)
#pragma deprecated("WHvSetVirtualProcessorInterruptControllerState is deprecated; use WHvSetVirtualProcessorInterruptControllerState2")
#endif

HRESULT
WINAPI
WHvSetVirtualProcessorInterruptControllerState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_reads_bytes_(StateSize) const VOID* State,
    _In_ UINT32 StateSize
    );

HRESULT
WINAPI
WHvRequestInterrupt(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ const WHV_INTERRUPT_CONTROL* Interrupt,
    _In_ UINT32 InterruptControlSize
    );

HRESULT
WINAPI
WHvGetVirtualProcessorXsaveState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _Out_writes_bytes_to_(BufferSizeInBytes, *BytesWritten) VOID* Buffer,
    _In_ UINT32 BufferSizeInBytes,
    _Out_ UINT32* BytesWritten
    );

HRESULT
WINAPI
WHvSetVirtualProcessorXsaveState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_reads_bytes_(BufferSizeInBytes) const VOID* Buffer,
    _In_ UINT32 BufferSizeInBytes
    );

HRESULT
WINAPI
WHvQueryGpaRangeDirtyBitmap(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_GUEST_PHYSICAL_ADDRESS GuestAddress,
    _In_ UINT64 RangeSizeInBytes,
    _Out_writes_bytes_to_opt_(BitmapSizeInBytes, RangeSizeInBytes / 4096 / 64) UINT64* Bitmap,
    _In_ UINT32 BitmapSizeInBytes
    );

HRESULT
WINAPI
WHvGetPartitionCounters(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_PARTITION_COUNTER_SET CounterSet,
    _Out_writes_bytes_to_(BufferSizeInBytes, *BytesWritten) VOID* Buffer,
    _In_ UINT32 BufferSizeInBytes,
    _Out_opt_ UINT32* BytesWritten
    );

HRESULT
WINAPI
WHvGetVirtualProcessorCounters(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ WHV_PROCESSOR_COUNTER_SET CounterSet,
    _Out_writes_bytes_to_(BufferSizeInBytes, *BytesWritten) VOID* Buffer,
    _In_ UINT32 BufferSizeInBytes,
    _Out_opt_ UINT32* BytesWritten
    );

HRESULT
WINAPI
WHvGetVirtualProcessorInterruptControllerState2(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _Out_writes_bytes_to_(StateSize, *WrittenSize) VOID* State,
    _In_ UINT32 StateSize,
    _Out_opt_ UINT32* WrittenSize
    );

HRESULT
WINAPI
WHvSetVirtualProcessorInterruptControllerState2(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_reads_bytes_(StateSize) const VOID* State,
    _In_ UINT32 StateSize
    );

HRESULT
WINAPI
WHvRegisterPartitionDoorbellEvent(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ const WHV_DOORBELL_MATCH_DATA* MatchData,
    _In_ HANDLE EventHandle
    );

HRESULT
WINAPI
WHvUnregisterPartitionDoorbellEvent(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ const WHV_DOORBELL_MATCH_DATA* MatchData
    );

HRESULT
WINAPI
WHvAdviseGpaRange(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_reads_(GpaRangesCount) const WHV_MEMORY_RANGE_ENTRY* GpaRanges,
    _In_ UINT32 GpaRangesCount,
    _In_ WHV_ADVISE_GPA_RANGE_CODE Advice,
    _In_reads_bytes_(AdviceBufferSizeInBytes) const VOID* AdviceBuffer,
    _In_ UINT32 AdviceBufferSizeInBytes
    );

HRESULT
WINAPI
WHvReadGpaRange(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ WHV_GUEST_PHYSICAL_ADDRESS GuestAddress,
    _In_ WHV_ACCESS_GPA_CONTROLS Controls,
    _In_ UINT32 DataSizeInBytes,
    _Out_writes_bytes_(SizeInBytes) PVOID Data
    );

HRESULT
WINAPI
WHvWriteGpaRange(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ WHV_GUEST_PHYSICAL_ADDRESS GuestAddress,
    _In_ WHV_ACCESS_GPA_CONTROLS Controls,
    _In_ UINT32 DataSizeInBytes,
    _In_reads_bytes_(SizeInBytes) const VOID* Data
    );

HRESULT
WINAPI
WHvSignalSynicEvent(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_SYNIC_EVENT_PARAMETERS SynicEvent,
    _Out_opt_ BOOL* NewlySignaled
    );

HRESULT
WINAPI
WHvGetVirtualProcessorState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ WHV_VIRTUAL_PROCESSOR_STATE_TYPE StateType,
    _Out_writes_bytes_to_(BufferSizeInBytes, *BytesWritten) VOID* Buffer,
    _In_ UINT32 BufferSizeInBytes,
    _Out_opt_ UINT32* BytesWritten
    );

HRESULT
WINAPI
WHvSetVirtualProcessorState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT32 VpIndex,
    _In_ WHV_VIRTUAL_PROCESSOR_STATE_TYPE StateType,
    _In_reads_bytes_(BufferSizeInBytes) const VOID* Buffer,
    _In_ UINT32 BufferSizeInBytes
    );

//
// Virtual PCI
//

HRESULT
WINAPI
WHvAllocateVpciResource(
    _In_opt_ const GUID* ProviderId,
    _In_ WHV_ALLOCATE_VPCI_RESOURCE_FLAGS Flags,
    _In_ UINT32 ResourceDescriptorSizeInBytes,
    _In_reads_opt_(ResourceDescriptorSizeInBytes) const VOID* ResourceDescriptor,
    _Out_ HANDLE* VpciResource,
    _Outptr_opt_result_maybenull_ LPCWSTR* ResourcePath
    );

HRESULT
WINAPI
WHvCreateVpciDevice(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ HANDLE VpciResource,
    _In_ WHV_CREATE_VPCI_DEVICE_FLAGS Flags,
    _In_opt_ PWHV_PCI_DEVICE_NOTIFICATION_CALLBACK NotificationCallback,
    _In_opt_ VOID* NotificationCallbackContext
    );

HRESULT
WINAPI
WHvDeleteVpciDevice(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId
    );

HRESULT
WINAPI
WHvGetVpciDeviceProperty(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ WHV_VPCI_DEVICE_PROPERTY_CODE PropertyCode,
    _Out_writes_bytes_to_(PropertyBufferSizeInBytes, *WrittenSizeInBytes) VOID* PropertyBuffer,
    _In_ UINT32 PropertyBufferSizeInBytes,
    _Out_opt_ UINT32* WrittenSizeInBytes
    );

HRESULT
WINAPI
WHvMapVpciDeviceMmioRanges(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _Out_ UINT32* MappingCount,
    _Outptr_result_buffer_(*MappingCount) WHV_VPCI_MMIO_MAPPING** Mappings
    );

HRESULT
WINAPI
WHvUnmapVpciDeviceMmioRanges(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId
    );

HRESULT
WINAPI
WHvSetVpciDevicePowerState(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ DEVICE_POWER_STATE PowerState
    );

HRESULT
WINAPI
WHvReadVpciDeviceRegister(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ const WHV_VPCI_DEVICE_REGISTER* Register,
    _Out_writes_bytes_(Register->SizeInBytes) VOID* Data
    );

HRESULT
WINAPI
WHvWriteVpciDeviceRegister(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ const WHV_VPCI_DEVICE_REGISTER* Register,
    _In_reads_bytes_(Register->SizeInBytes) const VOID* Data
    );

HRESULT
WINAPI
WHvMapVpciDeviceInterrupt(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ UINT32 Index,
    _In_ UINT32 MultiMessageNumber,
    _In_ const WHV_VPCI_INTERRUPT_TARGET* Target,
    _Out_ UINT64* MsiAddress,
    _Out_ UINT32* MsiData
    );

HRESULT
WINAPI
WHvUnmapVpciDeviceInterrupt(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ UINT32 Index
    );

HRESULT
WINAPI
WHvRetargetVpciDeviceInterrupt(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ UINT64 MsiAddress,
    _In_ UINT32 MsiData,
    _In_ const WHV_VPCI_INTERRUPT_TARGET* Target
    );

HRESULT
WINAPI
WHvRequestVpciDeviceInterrupt(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ UINT64 MsiAddress,
    _In_ UINT32 MsiData
    );

HRESULT
WINAPI
WHvGetVpciDeviceInterruptTarget(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ UINT64 LogicalDeviceId,
    _In_ UINT32 Index,
    _In_ UINT32 MultiMessageNumber,
    _In_ UINT32 TargetSizeInBytes,
    _Out_writes_bytes_to_(TargetSizeInBytes, *BytesWritten) WHV_VPCI_INTERRUPT_TARGET* Target,
    _Out_opt_ UINT32* BytesWritten
    );

//
// Trigger
//

HRESULT
WINAPI
WHvCreateTrigger(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ const WHV_TRIGGER_PARAMETERS* Parameters,
    _Out_ WHV_TRIGGER_HANDLE* TriggerHandle,
    _Out_ HANDLE* EventHandle
    );

HRESULT
WINAPI
WHvUpdateTriggerParameters(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ const WHV_TRIGGER_PARAMETERS* Parameters,
    _In_ WHV_TRIGGER_HANDLE TriggerHandle
    );

HRESULT
WINAPI
WHvDeleteTrigger(
    _In_ WHV_PARTITION_HANDLE Partition,
    _In_ WHV_TRIGGER_HANDLE TriggerHandle
    );

#ifdef __cplusplus
}
#endif

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#endif // _WINHVAPI_H_

#ifndef ext_ms_win_hyperv_hvplatform_l1_1_4_query_routines
#define ext_ms_win_hyperv_hvplatform_l1_1_4_query_routines

//
//Private Extension API Query Routines
//

#ifdef __cplusplus
extern "C" {
#endif

BOOLEAN
__stdcall
IsWHvGetCapabilityPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvCreatePartitionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetupPartitionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvDeletePartitionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetPartitionPropertyPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetPartitionPropertyPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSuspendPartitionTimePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvResumePartitionTimePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvMapGpaRangePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvUnmapGpaRangePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvTranslateGvaPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvCreateVirtualProcessorPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvDeleteVirtualProcessorPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvRunVirtualProcessorPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvCancelRunVirtualProcessorPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVirtualProcessorRegistersPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetVirtualProcessorRegistersPresent(
    VOID
    );

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)

#endif

BOOLEAN
__stdcall
IsWHvGetVirtualProcessorInterruptControllerStatePresent(
    VOID
    );

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)

#endif

BOOLEAN
__stdcall
IsWHvSetVirtualProcessorInterruptControllerStatePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvRequestInterruptPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVirtualProcessorXsaveStatePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetVirtualProcessorXsaveStatePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvQueryGpaRangeDirtyBitmapPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetPartitionCountersPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVirtualProcessorCountersPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVirtualProcessorInterruptControllerState2Present(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetVirtualProcessorInterruptControllerState2Present(
    VOID
    );

BOOLEAN
__stdcall
IsWHvRegisterPartitionDoorbellEventPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvUnregisterPartitionDoorbellEventPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvAdviseGpaRangePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvReadGpaRangePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvWriteGpaRangePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSignalSynicEventPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVirtualProcessorStatePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetVirtualProcessorStatePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvAllocateVpciResourcePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvCreateVpciDevicePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvDeleteVpciDevicePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVpciDevicePropertyPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvMapVpciDeviceMmioRangesPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvUnmapVpciDeviceMmioRangesPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvSetVpciDevicePowerStatePresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvReadVpciDeviceRegisterPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvWriteVpciDeviceRegisterPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvMapVpciDeviceInterruptPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvUnmapVpciDeviceInterruptPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvRetargetVpciDeviceInterruptPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvRequestVpciDeviceInterruptPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvGetVpciDeviceInterruptTargetPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvCreateTriggerPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvUpdateTriggerParametersPresent(
    VOID
    );

BOOLEAN
__stdcall
IsWHvDeleteTriggerPresent(
    VOID
    );

#ifdef __cplusplus
}
#endif

#endif // endof guard

