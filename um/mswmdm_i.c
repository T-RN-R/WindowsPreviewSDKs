

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0624 */
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWMDMMetaData,0xEC3B0663,0x0951,0x460a,0x9A,0x80,0x0D,0xCE,0xED,0x3C,0x04,0x3C);


MIDL_DEFINE_GUID(IID, IID_IWMDeviceManager,0x1DCB3A00,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDeviceManager2,0x923E5249,0x8731,0x4c5b,0x9B,0x1C,0xB8,0xB6,0x0B,0x6E,0x46,0xAF);


MIDL_DEFINE_GUID(IID, IID_IWMDeviceManager3,0xaf185c41,0x100d,0x46ed,0xbe,0x2e,0x9c,0xe8,0xc4,0x45,0x94,0xef);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageGlobals,0x1DCB3A07,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage,0x1DCB3A06,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage2,0x1ED5A144,0x5CD5,0x4683,0x9E,0xFF,0x72,0xCB,0xDB,0x2D,0x95,0x33);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage3,0x97717EEA,0x926A,0x464e,0x96,0xA4,0x24,0x7B,0x02,0x16,0x02,0x6E);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage4,0xc225bac5,0xa03a,0x40b8,0x9a,0x23,0x91,0xcf,0x47,0x8c,0x64,0xa6);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperation,0x1DCB3A0B,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperation2,0x33445B48,0x7DF7,0x425c,0xAD,0x8F,0x0F,0xC6,0xD8,0x2F,0x9F,0x75);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperation3,0xd1f9b46a,0x9ca8,0x46d8,0x9d,0x0f,0x1e,0xc9,0xba,0xe5,0x49,0x19);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgress,0x1DCB3A0C,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgress2,0x3A43F550,0xB383,0x4e92,0xB0,0x4A,0xE6,0xBB,0xC6,0x60,0xFE,0xFC);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgress3,0x21DE01CB,0x3BB4,0x4929,0xB2,0x1A,0x17,0xAF,0x3F,0x80,0xF6,0x58);


MIDL_DEFINE_GUID(IID, IID_IWMDMDevice,0x1DCB3A02,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMDevice2,0xE34F3D37,0x9D67,0x4fc1,0x92,0x52,0x62,0xD2,0x8B,0x2F,0x8B,0x55);


MIDL_DEFINE_GUID(IID, IID_IWMDMDevice3,0x6c03e4fe,0x05db,0x4dda,0x9e,0x3c,0x06,0x23,0x3a,0x6d,0x5d,0x65);


MIDL_DEFINE_GUID(IID, IID_IWMDMDeviceSession,0x82af0a65,0x9d96,0x412c,0x83,0xe5,0x3c,0x43,0xe4,0xb0,0x6c,0xc7);


MIDL_DEFINE_GUID(IID, IID_IWMDMEnumDevice,0x1DCB3A01,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMDeviceControl,0x1DCB3A04,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMEnumStorage,0x1DCB3A05,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageControl,0x1DCB3A08,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageControl2,0x972C2E88,0xBD6C,0x4125,0x8E,0x09,0x84,0xF8,0x37,0xE6,0x37,0xB6);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageControl3,0xB3266365,0xD4F3,0x4696,0x8D,0x53,0xBD,0x27,0xEC,0x60,0x99,0x3A);


MIDL_DEFINE_GUID(IID, IID_IWMDMObjectInfo,0x1DCB3A09,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMRevoked,0xEBECCEDB,0x88EE,0x4e55,0xB6,0xA4,0x8D,0x9F,0x07,0xD6,0x96,0xAA);


MIDL_DEFINE_GUID(IID, IID_IWMDMNotification,0x3F5E95C0,0x0F43,0x4ed4,0x93,0xD2,0xC8,0x9A,0x45,0xD5,0x9B,0x81);


MIDL_DEFINE_GUID(IID, IID_IMDServiceProvider,0x1DCB3A10,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDServiceProvider2,0xB2FA24B7,0xCDA3,0x4694,0x98,0x62,0x41,0x3A,0xE1,0xA3,0x48,0x19);


MIDL_DEFINE_GUID(IID, IID_IMDServiceProvider3,0x4ed13ef3,0xa971,0x4d19,0x9f,0x51,0x0e,0x18,0x26,0xb2,0xda,0x57);


MIDL_DEFINE_GUID(IID, IID_IMDSPEnumDevice,0x1DCB3A11,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPDevice,0x1DCB3A12,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPDevice2,0x420D16AD,0xC97D,0x4e00,0x82,0xAA,0x00,0xE9,0xF4,0x33,0x5D,0xDD);


MIDL_DEFINE_GUID(IID, IID_IMDSPDevice3,0x1a839845,0xfc55,0x487c,0x97,0x6f,0xee,0x38,0xac,0x0e,0x8c,0x4e);


MIDL_DEFINE_GUID(IID, IID_IMDSPDeviceControl,0x1DCB3A14,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPEnumStorage,0x1DCB3A15,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPStorage,0x1DCB3A16,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPStorage2,0x0A5E07A5,0x6454,0x4451,0x9C,0x36,0x1C,0x6A,0xE7,0xE2,0xB1,0xD6);


MIDL_DEFINE_GUID(IID, IID_IMDSPStorage3,0x6C669867,0x97ED,0x4a67,0x97,0x06,0x1C,0x55,0x29,0xD2,0xA4,0x14);


MIDL_DEFINE_GUID(IID, IID_IMDSPStorage4,0x3133b2c4,0x515c,0x481b,0xb1,0xce,0x39,0x32,0x7e,0xcb,0x4f,0x74);


MIDL_DEFINE_GUID(IID, IID_IMDSPStorageGlobals,0x1DCB3A17,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPObjectInfo,0x1DCB3A19,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPObject,0x1DCB3A18,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IMDSPObject2,0x3f34cd3e,0x5907,0x4341,0x9a,0xf9,0x97,0xf4,0x18,0x7c,0x3a,0xa5);


MIDL_DEFINE_GUID(IID, IID_IMDSPDirectTransfer,0xc2fe57a8,0x9304,0x478c,0x9e,0xe4,0x47,0xe3,0x97,0xb9,0x12,0xd7);


MIDL_DEFINE_GUID(IID, IID_IMDSPRevoked,0xA4E8F2D4,0x3F31,0x464d,0xB5,0x3D,0x4F,0xC3,0x35,0x99,0x81,0x84);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureAuthenticate,0x1DCB3A0F,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureAuthenticate2,0xB580CFAE,0x1672,0x47e2,0xAC,0xAA,0x44,0xBB,0xEC,0xBC,0xAE,0x5B);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureQuery,0x1DCB3A0D,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureQuery2,0xEBE17E25,0x4FD7,0x4632,0xAF,0x46,0x6D,0x93,0xD4,0xFC,0xC7,0x2E);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureExchange,0x1DCB3A0E,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureExchange2,0x6C62FC7B,0x2690,0x483F,0x9D,0x44,0x0A,0x20,0xCB,0x35,0x57,0x7C);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureExchange3,0xab4e77e4,0x8908,0x4b17,0xbd,0x2a,0xb1,0xdb,0xe6,0xdd,0x69,0xe1);


MIDL_DEFINE_GUID(IID, IID_ISCPSession,0x88a3e6ed,0xeee4,0x4619,0xbb,0xb3,0xfd,0x4f,0xb6,0x27,0x15,0xd1);


MIDL_DEFINE_GUID(IID, IID_ISCPSecureQuery3,0xB7EDD1A2,0x4DAB,0x484b,0xB3,0xC5,0xAD,0x39,0xB8,0xB4,0xC0,0xB1);


MIDL_DEFINE_GUID(IID, IID_IComponentAuthenticate,0xA9889C00,0x6D2B,0x11d3,0x84,0x96,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, LIBID_MSWMDMLib,0x6EC6C744,0x355F,0x11D3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaDevMgrClassFactory,0x50040C1D,0xBDBF,0x4924,0xB8,0x73,0xF1,0x4D,0x6C,0x5B,0xFD,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_MediaDevMgr,0x25BAAD81,0x3560,0x11D3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_WMDMDevice,0x807B3CDF,0x357A,0x11d3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_WMDMStorage,0x807B3CE0,0x357A,0x11d3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_WMDMStorageGlobal,0x807B3CE1,0x357A,0x11d3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_WMDMDeviceEnum,0x430E35AF,0x3971,0x11D3,0x84,0x74,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_WMDMStorageEnum,0xEB401A3B,0x3AF7,0x11d3,0x84,0x74,0x00,0xC0,0x4F,0x79,0xDB,0xC0);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



