#ifndef _CkMailboxes_H
#define _CkMailboxes_H
#include "Chilkat_C.h"

HCkMailboxes CkMailboxes_Create(void);
void CkMailboxes_Dispose(HCkMailboxes handle);
long CkMailboxes_getCount(HCkMailboxes cHandle);
BOOL CkMailboxes_getUtf8(HCkMailboxes cHandle);
void CkMailboxes_putUtf8(HCkMailboxes cHandle, BOOL newVal);
BOOL CkMailboxes_GetName(HCkMailboxes cHandle, long index, HCkString strName);
BOOL CkMailboxes_HasInferiors(HCkMailboxes cHandle, long index);
BOOL CkMailboxes_IsMarked(HCkMailboxes cHandle, long index);
BOOL CkMailboxes_IsSelectable(HCkMailboxes cHandle, long index);
const char *CkMailboxes_getName(HCkMailboxes cHandle, long index);
#endif
