#ifndef _CkSFtpDir_H
#define _CkSFtpDir_H
#include "Chilkat_C.h"

HCkSFtpDir CkSFtpDir_Create(void);
void CkSFtpDir_Dispose(HCkSFtpDir handle);
void CkSFtpDir_getLastErrorHtml(HCkSFtpDir cHandle, HCkString retval);
void CkSFtpDir_getLastErrorText(HCkSFtpDir cHandle, HCkString retval);
void CkSFtpDir_getLastErrorXml(HCkSFtpDir cHandle, HCkString retval);
int CkSFtpDir_getNumFilesAndDirs(HCkSFtpDir cHandle);
void CkSFtpDir_getOriginalPath(HCkSFtpDir cHandle, HCkString retval);
BOOL CkSFtpDir_getUtf8(HCkSFtpDir cHandle);
void CkSFtpDir_putUtf8(HCkSFtpDir cHandle, BOOL newVal);
HCkSFtpFile CkSFtpDir_GetFileObject(HCkSFtpDir cHandle, int index);
BOOL CkSFtpDir_GetFilename(HCkSFtpDir cHandle, int index, HCkString outStr);
BOOL CkSFtpDir_SaveLastError(HCkSFtpDir cHandle, const char *filename);
const char *CkSFtpDir_getFilename(HCkSFtpDir cHandle, int index);
const char *CkSFtpDir_lastErrorHtml(HCkSFtpDir cHandle);
const char *CkSFtpDir_lastErrorText(HCkSFtpDir cHandle);
const char *CkSFtpDir_lastErrorXml(HCkSFtpDir cHandle);
const char *CkSFtpDir_originalPath(HCkSFtpDir cHandle);
#endif
