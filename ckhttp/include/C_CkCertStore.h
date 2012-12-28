#ifndef _CkCertStore_H
#define _CkCertStore_H
#include "Chilkat_C.h"

HCkCertStore CkCertStore_Create(void);
void CkCertStore_Dispose(HCkCertStore handle);
void CkCertStore_getLastErrorHtml(HCkCertStore cHandle, HCkString retval);
void CkCertStore_getLastErrorText(HCkCertStore cHandle, HCkString retval);
void CkCertStore_getLastErrorXml(HCkCertStore cHandle, HCkString retval);
long CkCertStore_getNumCertificates(HCkCertStore cHandle);
BOOL CkCertStore_getUtf8(HCkCertStore cHandle);
void CkCertStore_putUtf8(HCkCertStore cHandle, BOOL newVal);
BOOL CkCertStore_getVerboseLogging(HCkCertStore cHandle);
void CkCertStore_putVerboseLogging(HCkCertStore cHandle, BOOL newVal);
void CkCertStore_getVersion(HCkCertStore cHandle, HCkString retval);
HCkCert CkCertStore_FindCertByRfc822Name(HCkCertStore cHandle, const char *name);
HCkCert CkCertStore_FindCertBySerial(HCkCertStore cHandle, const char *serialNumber);
HCkCert CkCertStore_FindCertBySha1Thumbprint(HCkCertStore cHandle, const char *str);
HCkCert CkCertStore_FindCertBySubject(HCkCertStore cHandle, const char *subject);
HCkCert CkCertStore_FindCertBySubjectCN(HCkCertStore cHandle, const char *commonName);
HCkCert CkCertStore_FindCertBySubjectE(HCkCertStore cHandle, const char *emailAddress);
HCkCert CkCertStore_FindCertBySubjectO(HCkCertStore cHandle, const char *organization);
HCkCert CkCertStore_GetCertificate(HCkCertStore cHandle, long index);
BOOL CkCertStore_LoadPfxData(HCkCertStore cHandle, HCkByteData pfxData, const char *password);
BOOL CkCertStore_LoadPfxData2(HCkCertStore cHandle, const unsigned char *buf, unsigned long bufLen, const char *password);
BOOL CkCertStore_LoadPfxFile(HCkCertStore cHandle, const char *filename, const char *password);
BOOL CkCertStore_SaveLastError(HCkCertStore cHandle, const char *filename);
const char *CkCertStore_lastErrorHtml(HCkCertStore cHandle);
const char *CkCertStore_lastErrorText(HCkCertStore cHandle);
const char *CkCertStore_lastErrorXml(HCkCertStore cHandle);
const char *CkCertStore_version(HCkCertStore cHandle);
#endif
