

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windowtabmanagerinterop_h__
#define __windowtabmanagerinterop_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWindowTabManagerInterop_FWD_DEFINED__
#define __IWindowTabManagerInterop_FWD_DEFINED__
typedef interface IWindowTabManagerInterop IWindowTabManagerInterop;

#endif 	/* __IWindowTabManagerInterop_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windowtabmanagerinterop_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#if (NTDDI_VERSION >= NTDDI_WIN10_MN)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


extern RPC_IF_HANDLE __MIDL_itf_windowtabmanagerinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowtabmanagerinterop_0000_0000_v0_0_s_ifspec;

#ifndef __IWindowTabManagerInterop_INTERFACE_DEFINED__
#define __IWindowTabManagerInterop_INTERFACE_DEFINED__

/* interface IWindowTabManagerInterop */
/* [object][uuid] */ 


EXTERN_C const IID IID_IWindowTabManagerInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A1247E54-9B5C-49F5-BD51-EA35C12ED655")
    IWindowTabManagerInterop : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetForWindow( 
            /* [in] */ __RPC__in HWND appWindow,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][retval][out] */ __RPC__deref_out_opt void **WindowTabManager) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowTabManagerInteropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWindowTabManagerInterop * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWindowTabManagerInterop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWindowTabManagerInterop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )( 
            __RPC__in IWindowTabManagerInterop * This,
            /* [in] */ __RPC__in HWND appWindow,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][retval][out] */ __RPC__deref_out_opt void **WindowTabManager);
        
        END_INTERFACE
    } IWindowTabManagerInteropVtbl;

    interface IWindowTabManagerInterop
    {
        CONST_VTBL struct IWindowTabManagerInteropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowTabManagerInterop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowTabManagerInterop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowTabManagerInterop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowTabManagerInterop_GetForWindow(This,appWindow,riid,WindowTabManager)	\
    ( (This)->lpVtbl -> GetForWindow(This,appWindow,riid,WindowTabManager) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowTabManagerInterop_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windowtabmanagerinterop_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#endif //(NTDDI_VERSION >= NTDDI_WIN10_MN)


extern RPC_IF_HANDLE __MIDL_itf_windowtabmanagerinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowtabmanagerinterop_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     __RPC__in unsigned long *, __RPC__in HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


