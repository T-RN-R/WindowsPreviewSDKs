// Copyright (C) Microsoft Corporation. All rights reserved.

#pragma once

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

EXTERN_C_START

#pragma warning(push)
#pragma warning(default:4820) // warn if the compiler inserted padding

DECLARE_HANDLE(NET_DATA_BUFFER_HANDLE);

typedef struct _NET_FRAGMENT_DATA_BUFFER
{
    NET_DATA_BUFFER_HANDLE
        Handle;

} NET_FRAGMENT_DATA_BUFFER;

C_ASSERT(sizeof(NET_FRAGMENT_DATA_BUFFER) == sizeof(NET_DATA_BUFFER_HANDLE));

#pragma warning(pop)

EXTERN_C_END


#define NET_FRAGMENT_EXTENSION_DATA_BUFFER_NAME L"ms_fragment_databuffer"
#define NET_FRAGMENT_EXTENSION_DATA_BUFFER_VERSION_1 1U

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

