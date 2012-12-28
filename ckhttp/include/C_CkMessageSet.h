#ifndef _CkMessageSet_H
#define _CkMessageSet_H
#include "Chilkat_C.h"

HCkMessageSet CkMessageSet_Create(void);
void CkMessageSet_Dispose(HCkMessageSet handle);
long CkMessageSet_getCount(HCkMessageSet cHandle);
BOOL CkMessageSet_getHasUids(HCkMessageSet cHandle);
void CkMessageSet_putHasUids(HCkMessageSet cHandle, BOOL newVal);
BOOL CkMessageSet_getUtf8(HCkMessageSet cHandle);
void CkMessageSet_putUtf8(HCkMessageSet cHandle, BOOL newVal);
BOOL CkMessageSet_ContainsId(HCkMessageSet cHandle, long id);
BOOL CkMessageSet_FromCompactString(HCkMessageSet cHandle, const char *str);
long CkMessageSet_GetId(HCkMessageSet cHandle, long index);
void CkMessageSet_InsertId(HCkMessageSet cHandle, long id);
void CkMessageSet_RemoveId(HCkMessageSet cHandle, long id);
void CkMessageSet_ToCompactString(HCkMessageSet cHandle, HCkString str);
void CkMessageSet_ToString(HCkMessageSet cHandle, HCkString str);
const char *CkMessageSet_toCompactString(HCkMessageSet cHandle);
const char *CkMessageSet_toString(HCkMessageSet cHandle);
#endif
