#ifndef _CkPrivateKey_H
#define _CkPrivateKey_H
#include "Chilkat_C.h"

HCkPrivateKey CkPrivateKey_Create(void);
void CkPrivateKey_Dispose(HCkPrivateKey handle);
void CkPrivateKey_getLastErrorHtml(HCkPrivateKey cHandle, HCkString retval);
void CkPrivateKey_getLastErrorText(HCkPrivateKey cHandle, HCkString retval);
void CkPrivateKey_getLastErrorXml(HCkPrivateKey cHandle, HCkString retval);
BOOL CkPrivateKey_getUtf8(HCkPrivateKey cHandle);
void CkPrivateKey_putUtf8(HCkPrivateKey cHandle, BOOL newVal);
BOOL CkPrivateKey_GetPkcs8(HCkPrivateKey cHandle, HCkByteData data);
BOOL CkPrivateKey_GetPkcs8Encrypted(HCkPrivateKey cHandle, const char *password, HCkByteData outBytes);
BOOL CkPrivateKey_GetPkcs8EncryptedPem(HCkPrivateKey cHandle, const char *password, HCkString outStr);
BOOL CkPrivateKey_GetPkcs8Pem(HCkPrivateKey cHandle, HCkString str);
BOOL CkPrivateKey_GetRsaDer(HCkPrivateKey cHandle, HCkByteData data);
BOOL CkPrivateKey_GetRsaPem(HCkPrivateKey cHandle, HCkString str);
BOOL CkPrivateKey_GetXml(HCkPrivateKey cHandle, HCkString str);
BOOL CkPrivateKey_LoadEncryptedPem(HCkPrivateKey cHandle, const char *pemStr, const char *password);
BOOL CkPrivateKey_LoadEncryptedPemFile(HCkPrivateKey cHandle, const char *filename, const char *password);
BOOL CkPrivateKey_LoadPem(HCkPrivateKey cHandle, const char *str);
BOOL CkPrivateKey_LoadPemFile(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_LoadPkcs8(HCkPrivateKey cHandle, HCkByteData data);
BOOL CkPrivateKey_LoadPkcs8Encrypted(HCkPrivateKey cHandle, HCkByteData data, const char *password);
BOOL CkPrivateKey_LoadPkcs8EncryptedFile(HCkPrivateKey cHandle, const char *filename, const char *password);
BOOL CkPrivateKey_LoadPkcs8File(HCkPrivateKey cHandle, const char *filename);
#ifdef WIN32
BOOL CkPrivateKey_LoadPvk(HCkPrivateKey cHandle, HCkByteData data, const char *password);
#endif
#ifdef WIN32
BOOL CkPrivateKey_LoadPvkFile(HCkPrivateKey cHandle, const char *filename, const char *password);
#endif
BOOL CkPrivateKey_LoadRsaDer(HCkPrivateKey cHandle, HCkByteData data);
BOOL CkPrivateKey_LoadRsaDerFile(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_LoadXml(HCkPrivateKey cHandle, const char *xml);
BOOL CkPrivateKey_LoadXmlFile(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_SaveLastError(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_SavePkcs8EncryptedFile(HCkPrivateKey cHandle, const char *password, const char *filename);
BOOL CkPrivateKey_SavePkcs8EncryptedPemFile(HCkPrivateKey cHandle, const char *password, const char *filename);
BOOL CkPrivateKey_SavePkcs8File(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_SavePkcs8PemFile(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_SaveRsaDerFile(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_SaveRsaPemFile(HCkPrivateKey cHandle, const char *filename);
BOOL CkPrivateKey_SaveXmlFile(HCkPrivateKey cHandle, const char *filename);
const char *CkPrivateKey_getPkcs8EncryptedPem(HCkPrivateKey cHandle, const char *password);
const char *CkPrivateKey_getPkcs8Pem(HCkPrivateKey cHandle);
const char *CkPrivateKey_getRsaPem(HCkPrivateKey cHandle);
const char *CkPrivateKey_getXml(HCkPrivateKey cHandle);
const char *CkPrivateKey_lastErrorHtml(HCkPrivateKey cHandle);
const char *CkPrivateKey_lastErrorText(HCkPrivateKey cHandle);
const char *CkPrivateKey_lastErrorXml(HCkPrivateKey cHandle);
#endif
