#ifndef _CkHtmlToXml_H
#define _CkHtmlToXml_H
#include "Chilkat_C.h"

HCkHtmlToXml CkHtmlToXml_Create(void);
void CkHtmlToXml_Dispose(HCkHtmlToXml handle);
BOOL CkHtmlToXml_getDropCustomTags(HCkHtmlToXml cHandle);
void CkHtmlToXml_putDropCustomTags(HCkHtmlToXml cHandle, BOOL newVal);
void CkHtmlToXml_getHtml(HCkHtmlToXml cHandle, HCkString retval);
void CkHtmlToXml_putHtml(HCkHtmlToXml cHandle, const char *newVal);
void CkHtmlToXml_getLastErrorHtml(HCkHtmlToXml cHandle, HCkString retval);
void CkHtmlToXml_getLastErrorText(HCkHtmlToXml cHandle, HCkString retval);
void CkHtmlToXml_getLastErrorXml(HCkHtmlToXml cHandle, HCkString retval);
long CkHtmlToXml_getNbsp(HCkHtmlToXml cHandle);
void CkHtmlToXml_putNbsp(HCkHtmlToXml cHandle, long newVal);
BOOL CkHtmlToXml_getUtf8(HCkHtmlToXml cHandle);
void CkHtmlToXml_putUtf8(HCkHtmlToXml cHandle, BOOL newVal);
void CkHtmlToXml_getVersion(HCkHtmlToXml cHandle, HCkString retval);
void CkHtmlToXml_getXmlCharset(HCkHtmlToXml cHandle, HCkString retval);
void CkHtmlToXml_putXmlCharset(HCkHtmlToXml cHandle, const char *newVal);
BOOL CkHtmlToXml_ConvertFile(HCkHtmlToXml cHandle, const char *inHtmlFilename, const char *outXmlFilename);
void CkHtmlToXml_DropTagType(HCkHtmlToXml cHandle, const char *tagName);
void CkHtmlToXml_DropTextFormattingTags(HCkHtmlToXml cHandle);
BOOL CkHtmlToXml_IsUnlocked(HCkHtmlToXml cHandle);
BOOL CkHtmlToXml_ReadFileToString(HCkHtmlToXml cHandle, const char *filename, const char *srcCharset, HCkString str);
BOOL CkHtmlToXml_SaveLastError(HCkHtmlToXml cHandle, const char *filename);
void CkHtmlToXml_SetHtmlBytes(HCkHtmlToXml cHandle, HCkByteData inData);
BOOL CkHtmlToXml_SetHtmlFromFile(HCkHtmlToXml cHandle, const char *filename);
BOOL CkHtmlToXml_ToXml(HCkHtmlToXml cHandle, HCkString str);
void CkHtmlToXml_UndropTagType(HCkHtmlToXml cHandle, const char *tagName);
void CkHtmlToXml_UndropTextFormattingTags(HCkHtmlToXml cHandle);
BOOL CkHtmlToXml_UnlockComponent(HCkHtmlToXml cHandle, const char *code);
BOOL CkHtmlToXml_WriteStringToFile(HCkHtmlToXml cHandle, const char *str, const char *filename, const char *charset);
BOOL CkHtmlToXml_Xml(HCkHtmlToXml cHandle, HCkString str);
const char *CkHtmlToXml_html(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_lastErrorHtml(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_lastErrorText(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_lastErrorXml(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_readFileToString(HCkHtmlToXml cHandle, const char *filename, const char *srcCharset);
const char *CkHtmlToXml_toXml(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_version(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_xml(HCkHtmlToXml cHandle);
const char *CkHtmlToXml_xmlCharset(HCkHtmlToXml cHandle);
#endif
