#ifndef _CkHtmlToText_H
#define _CkHtmlToText_H
#include "Chilkat_C.h"

HCkHtmlToText CkHtmlToText_Create(void);
void CkHtmlToText_Dispose(HCkHtmlToText handle);
void CkHtmlToText_getLastErrorHtml(HCkHtmlToText cHandle, HCkString retval);
void CkHtmlToText_getLastErrorText(HCkHtmlToText cHandle, HCkString retval);
void CkHtmlToText_getLastErrorXml(HCkHtmlToText cHandle, HCkString retval);
int CkHtmlToText_getRightMargin(HCkHtmlToText cHandle);
void CkHtmlToText_putRightMargin(HCkHtmlToText cHandle, int newVal);
BOOL CkHtmlToText_getUtf8(HCkHtmlToText cHandle);
void CkHtmlToText_putUtf8(HCkHtmlToText cHandle, BOOL newVal);
BOOL CkHtmlToText_IsUnlocked(HCkHtmlToText cHandle);
BOOL CkHtmlToText_ReadFileToString(HCkHtmlToText cHandle, const char *filename, const char *srcCharset, HCkString str);
BOOL CkHtmlToText_SaveLastError(HCkHtmlToText cHandle, const char *filename);
BOOL CkHtmlToText_ToText(HCkHtmlToText cHandle, const char *html, HCkString outStr);
BOOL CkHtmlToText_UnlockComponent(HCkHtmlToText cHandle, const char *code);
BOOL CkHtmlToText_WriteStringToFile(HCkHtmlToText cHandle, const char *str, const char *filename, const char *charset);
const char *CkHtmlToText_lastErrorHtml(HCkHtmlToText cHandle);
const char *CkHtmlToText_lastErrorText(HCkHtmlToText cHandle);
const char *CkHtmlToText_lastErrorXml(HCkHtmlToText cHandle);
const char *CkHtmlToText_readFileToString(HCkHtmlToText cHandle, const char *filename, const char *srcCharset);
const char *CkHtmlToText_toText(HCkHtmlToText cHandle, const char *html);
#endif
