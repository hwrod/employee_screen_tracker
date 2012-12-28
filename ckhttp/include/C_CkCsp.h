#ifdef WIN32

#ifndef _CkCsp_H
#define _CkCsp_H
#include "Chilkat_C.h"

HCkCsp CkCsp_Create(void);
void CkCsp_Dispose(HCkCsp handle);
void CkCsp_getEncryptAlgorithm(HCkCsp cHandle, HCkString retval);
long CkCsp_getEncryptAlgorithmID(HCkCsp cHandle);
long CkCsp_getEncryptNumBits(HCkCsp cHandle);
void CkCsp_getHashAlgorithm(HCkCsp cHandle, HCkString retval);
long CkCsp_getHashAlgorithmID(HCkCsp cHandle);
long CkCsp_getHashNumBits(HCkCsp cHandle);
void CkCsp_getKeyContainer(HCkCsp cHandle, HCkString retval);
void CkCsp_putKeyContainer(HCkCsp cHandle, const char *newVal);
void CkCsp_getLastErrorHtml(HCkCsp cHandle, HCkString retval);
void CkCsp_getLastErrorText(HCkCsp cHandle, HCkString retval);
void CkCsp_getLastErrorXml(HCkCsp cHandle, HCkString retval);
BOOL CkCsp_getMachineKeyset(HCkCsp cHandle);
void CkCsp_putMachineKeyset(HCkCsp cHandle, BOOL newVal);
long CkCsp_getNumEncryptAlgorithms(HCkCsp cHandle);
long CkCsp_getNumHashAlgorithms(HCkCsp cHandle);
long CkCsp_getNumKeyContainers(HCkCsp cHandle);
long CkCsp_getNumKeyExchangeAlgorithms(HCkCsp cHandle);
long CkCsp_getNumSignatureAlgorithms(HCkCsp cHandle);
void CkCsp_getProviderName(HCkCsp cHandle, HCkString retval);
void CkCsp_putProviderName(HCkCsp cHandle, const char *newVal);
long CkCsp_getProviderType(HCkCsp cHandle);
BOOL CkCsp_getUtf8(HCkCsp cHandle);
void CkCsp_putUtf8(HCkCsp cHandle, BOOL newVal);
BOOL CkCsp_GetEncryptionAlgorithm(HCkCsp cHandle, long index, HCkString name);
long CkCsp_GetEncryptionNumBits(HCkCsp cHandle, long index);
BOOL CkCsp_GetHashAlgorithmName(HCkCsp cHandle, long index, HCkString name);
long CkCsp_GetHashNumBits(HCkCsp cHandle, long index);
BOOL CkCsp_GetKeyContainerName(HCkCsp cHandle, long index, HCkString name);
HCkStringArray CkCsp_GetKeyContainerNames(HCkCsp cHandle);
BOOL CkCsp_GetKeyExchangeAlgorithm(HCkCsp cHandle, long index, HCkString name);
long CkCsp_GetKeyExchangeNumBits(HCkCsp cHandle, long index);
BOOL CkCsp_GetSignatureAlgorithm(HCkCsp cHandle, long index, HCkString name);
long CkCsp_GetSignatureNumBits(HCkCsp cHandle, long index);
BOOL CkCsp_HasEncryptAlgorithm(HCkCsp cHandle, const char *name, long numBits);
BOOL CkCsp_HasHashAlgorithm(HCkCsp cHandle, const char *name, long numBits);
BOOL CkCsp_SaveLastError(HCkCsp cHandle, const char *filename);
long CkCsp_SetEncryptAlgorithm(HCkCsp cHandle, const char *name);
long CkCsp_SetHashAlgorithm(HCkCsp cHandle, const char *name);
BOOL CkCsp_SetProviderMicrosoftBase(HCkCsp cHandle);
BOOL CkCsp_SetProviderMicrosoftEnhanced(HCkCsp cHandle);
BOOL CkCsp_SetProviderMicrosoftRsaAes(HCkCsp cHandle);
BOOL CkCsp_SetProviderMicrosoftStrong(HCkCsp cHandle);
const char *CkCsp_encryptAlgorithm(HCkCsp cHandle);
const char *CkCsp_getEncryptionAlgorithm(HCkCsp cHandle, long index);
const char *CkCsp_getHashAlgorithmName(HCkCsp cHandle, long index);
const char *CkCsp_getKeyContainerName(HCkCsp cHandle, long index);
const char *CkCsp_getKeyExchangeAlgorithm(HCkCsp cHandle, long index);
const char *CkCsp_getSignatureAlgorithm(HCkCsp cHandle, long index);
const char *CkCsp_hashAlgorithm(HCkCsp cHandle);
const char *CkCsp_keyContainer(HCkCsp cHandle);
const char *CkCsp_lastErrorHtml(HCkCsp cHandle);
const char *CkCsp_lastErrorText(HCkCsp cHandle);
const char *CkCsp_lastErrorXml(HCkCsp cHandle);
const char *CkCsp_providerName(HCkCsp cHandle);
#endif

#endif // WIN32 (entire file)
