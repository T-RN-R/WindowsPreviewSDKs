// Copyright (C) Microsoft Corporation. All rights reserved.

#pragma once

#pragma region App Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

EXTERN_C_START

typedef PVOID NDIS_HANDLE, *PNDIS_HANDLE;

typedef _Return_type_success_(return >= 0) int NDIS_STATUS, *PNDIS_STATUS; // note default size

EXTERN_C_END

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma endregion

