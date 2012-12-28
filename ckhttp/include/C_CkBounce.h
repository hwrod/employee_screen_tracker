#ifndef _CkBounce_H
#define _CkBounce_H
#include "Chilkat_C.h"

HCkBounce CkBounce_Create(void);
void CkBounce_Dispose(HCkBounce handle);
void CkBounce_getBounceAddress(HCkBounce cHandle, HCkString retval);
void CkBounce_getBounceData(HCkBounce cHandle, HCkString retval);
int CkBounce_getBounceType(HCkBounce cHandle);
void CkBounce_getLastErrorHtml(HCkBounce cHandle, HCkString retval);
void CkBounce_getLastErrorText(HCkBounce cHandle, HCkString retval);
void CkBounce_getLastErrorXml(HCkBounce cHandle, HCkString retval);
BOOL CkBounce_getUtf8(HCkBounce cHandle);
void CkBounce_putUtf8(HCkBounce cHandle, BOOL newVal);
void CkBounce_getVersion(HCkBounce cHandle, HCkString retval);
BOOL CkBounce_ExamineEmail(HCkBounce cHandle, HCkEmail email);
BOOL CkBounce_ExamineEml(HCkBounce cHandle, const char *emlFilename);
BOOL CkBounce_ExamineMime(HCkBounce cHandle, HCkString mimeString);
BOOL CkBounce_SaveLastError(HCkBounce cHandle, const char *filename);
BOOL CkBounce_UnlockComponent(HCkBounce cHandle, const char *unlockCode);
const char *CkBounce_bounceAddress(HCkBounce cHandle);
const char *CkBounce_bounceData(HCkBounce cHandle);
const char *CkBounce_lastErrorHtml(HCkBounce cHandle);
const char *CkBounce_lastErrorText(HCkBounce cHandle);
const char *CkBounce_lastErrorXml(HCkBounce cHandle);
const char *CkBounce_version(HCkBounce cHandle);
#endif
