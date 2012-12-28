#ifndef _CkRss_H
#define _CkRss_H
#include "Chilkat_C.h"

HCkRss CkRss_Create(void);
void CkRss_Dispose(HCkRss handle);
void CkRss_getLastErrorHtml(HCkRss cHandle, HCkString retval);
void CkRss_getLastErrorText(HCkRss cHandle, HCkString retval);
void CkRss_getLastErrorXml(HCkRss cHandle, HCkString retval);
int CkRss_getNumChannels(HCkRss cHandle);
int CkRss_getNumItems(HCkRss cHandle);
BOOL CkRss_getUtf8(HCkRss cHandle);
void CkRss_putUtf8(HCkRss cHandle, BOOL newVal);
HCkRss CkRss_AddNewChannel(HCkRss cHandle);
HCkRss CkRss_AddNewImage(HCkRss cHandle);
HCkRss CkRss_AddNewItem(HCkRss cHandle);
BOOL CkRss_DownloadRss(HCkRss cHandle, const char *url);
BOOL CkRss_GetAttr(HCkRss cHandle, const char *tag, const char *attrName, HCkString outStr);
HCkRss CkRss_GetChannel(HCkRss cHandle, int index);
int CkRss_GetCount(HCkRss cHandle, const char *tag);
BOOL CkRss_GetDate(HCkRss cHandle, const char *tag, SYSTEMTIME *sysTime);
HCkRss CkRss_GetImage(HCkRss cHandle);
int CkRss_GetInt(HCkRss cHandle, const char *tag);
HCkRss CkRss_GetItem(HCkRss cHandle, int index);
BOOL CkRss_GetString(HCkRss cHandle, const char *tag, HCkString outStr);
BOOL CkRss_LoadRssFile(HCkRss cHandle, const char *filename);
BOOL CkRss_LoadRssString(HCkRss cHandle, const char *rssString);
BOOL CkRss_MGetAttr(HCkRss cHandle, const char *tag, int index, const char *attrName, HCkString outStr);
BOOL CkRss_MGetString(HCkRss cHandle, const char *tag, int index, HCkString outStr);
BOOL CkRss_MSetAttr(HCkRss cHandle, const char *tag, int index, const char *attrName, const char *value);
BOOL CkRss_MSetString(HCkRss cHandle, const char *tag, int index, const char *value);
void CkRss_NewRss(HCkRss cHandle);
void CkRss_Remove(HCkRss cHandle, const char *tag);
BOOL CkRss_SaveLastError(HCkRss cHandle, const char *filename);
void CkRss_SetAttr(HCkRss cHandle, const char *tag, const char *attrName, const char *value);
void CkRss_SetDate(HCkRss cHandle, const char *tag, SYSTEMTIME *d);
void CkRss_SetDateNow(HCkRss cHandle, const char *tag);
void CkRss_SetInt(HCkRss cHandle, const char *tag, int value);
void CkRss_SetString(HCkRss cHandle, const char *tag, const char *value);
BOOL CkRss_ToXmlString(HCkRss cHandle, HCkString outStr);
const char *CkRss_getAttr(HCkRss cHandle, const char *tag, const char *attrName);
const char *CkRss_getString(HCkRss cHandle, const char *tag);
const char *CkRss_lastErrorHtml(HCkRss cHandle);
const char *CkRss_lastErrorText(HCkRss cHandle);
const char *CkRss_lastErrorXml(HCkRss cHandle);
const char *CkRss_mGetAttr(HCkRss cHandle, const char *tag, int index, const char *attrName);
const char *CkRss_mGetString(HCkRss cHandle, const char *tag, int index);
const char *CkRss_toXmlString(HCkRss cHandle);
#endif
