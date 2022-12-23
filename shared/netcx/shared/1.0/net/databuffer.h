// Copyright (C) Microsoft Corporation. All rights reserved.

#pragma once

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#include <net/databuffertypes.h>

#include <net/ring.h>

EXTERN_C_START

inline
NET_FRAGMENT_DATA_BUFFER*
NetExtensionGetFragmentDataBuffer(
    NET_EXTENSION const * Extension,
    UINT32 Index
)
{
    return (NET_FRAGMENT_DATA_BUFFER*) NetExtensionGetData(Extension, Index);
}

inline
SIZE_T 
NetDataBufferFetch(
    _In_ NET_RING* BufferRing,
    _In_ UINT32 BufferCount,
    _Out_ NET_DATA_BUFFER_HANDLE* Buffer
)
{
    UINT32 avaiableBufferCount = 
        NetRingGetRangeCount(BufferRing, BufferRing->EndIndex, BufferRing->NextIndex);

    UINT32 count = min(avaiableBufferCount, BufferCount);

    for (UINT32 i = 0; i < count; i++)
    {
        Buffer[i] = *((NET_DATA_BUFFER_HANDLE*) NetRingGetElementAtIndex(BufferRing, BufferRing->NextIndex));
        BufferRing->NextIndex = NetRingIncrementIndex(BufferRing, BufferRing->NextIndex);
    }

    return count;
}

inline
void
NetDataBufferReturn(
    _In_ NET_RING* BufferRing,
    _In_ UINT32 BufferCount
)
{
    UINT32 usedBufferCount = 
        NetRingGetRangeCount(BufferRing, BufferRing->NextIndex, BufferRing->BeginIndex);

    UINT32 count = min(usedBufferCount, BufferCount);

    for (UINT32 i = 0; i < count; i++)
    {
        BufferRing->BeginIndex = NetRingIncrementIndex(BufferRing, BufferRing->BeginIndex);
    }

    return;
}

inline
UINT64
NetDataBufferGetLogicalAddress(
    _In_ NET_RING* BufferRing,
    _In_ NET_DATA_BUFFER_HANDLE BufferHandle
)
{
    UINT64* lookupTableLA = (UINT64*) BufferRing->OSReserved2[2];
    return lookupTableLA[(SIZE_T) BufferHandle];
}

inline
void* 
NetDataBufferGetVirtualAddress(
    _In_ NET_RING* BufferRing,
    _In_ NET_DATA_BUFFER_HANDLE BufferHandle
)
{
    void** lookupTableVA = (void**) BufferRing->OSReserved2[3];
    return lookupTableVA[(SIZE_T) BufferHandle];
}

EXTERN_C_END

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

