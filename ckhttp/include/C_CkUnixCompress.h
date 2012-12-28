#ifndef _CkUnixCompress_H
#define _CkUnixCompress_H
#include "Chilkat_C.h"

HCkUnixCompress CkUnixCompress_Create(void);
void CkUnixCompress_Dispose(HCkUnixCompress handle);
void CkUnixCompress_getLastErrorHtml(HCkUnixCompress cHandle, HCkString retval);
void CkUnixCompress_getLastErrorText(HCkUnixCompress cHandle, HCkString retval);
void CkUnixCompress_getLastErrorXml(HCkUnixCompress cHandle, HCkString retval);
BOOL CkUnixCompress_getUtf8(HCkUnixCompress cHandle);
void CkUnixCompress_putUtf8(HCkUnixCompress cHandle, BOOL newVal);
BOOL CkUnixCompress_CompressFile(HCkUnixCompress cHandle, const char *inFilename, const char *outFilename);
BOOL CkUnixCompress_CompressFileToMem(HCkUnixCompress cHandle, const char *inFilename, HCkByteData db);
BOOL CkUnixCompress_CompressMemToFile(HCkUnixCompress cHandle, HCkByteData db, const char *outFilename);
BOOL CkUnixCompress_CompressMemory(HCkUnixCompress cHandle, HCkByteData dbIn, HCkByteData dbOut);
BOOL CkUnixCompress_CompressString(HCkUnixCompress cHandle, const char *inStr, const char *outCharset, HCkByteData outBytes);
BOOL CkUnixCompress_CompressStringToFile(HCkUnixCompress cHandle, const char *inStr, const char *outCharset, const char *outFilename);
BOOL CkUnixCompress_IsUnlocked(HCkUnixCompress cHandle);
BOOL CkUnixCompress_SaveLastError(HCkUnixCompress cHandle, const char *filename);
BOOL CkUnixCompress_UnTarZ(HCkUnixCompress cHandle, const char *zFilename, const char *destDir, BOOL bNoAbsolute);
BOOL CkUnixCompress_UncompressFile(HCkUnixCompress cHandle, const char *inFilename, const char *outFilename);
BOOL CkUnixCompress_UncompressFileToMem(HCkUnixCompress cHandle, const char *inFilename, HCkByteData db);
BOOL CkUnixCompress_UncompressFileToString(HCkUnixCompress cHandle, const char *inFilename, const char *inCharset, HCkString outStr);
BOOL CkUnixCompress_UncompressMemToFile(HCkUnixCompress cHandle, HCkByteData db, const char *outFilename);
BOOL CkUnixCompress_UncompressMemory(HCkUnixCompress cHandle, HCkByteData dbIn, HCkByteData dbOut);
BOOL CkUnixCompress_UncompressString(HCkUnixCompress cHandle, HCkByteData inData, const char *inCharset, HCkString outStr);
BOOL CkUnixCompress_UnlockComponent(HCkUnixCompress cHandle, const char *unlockCode);
const char *CkUnixCompress_lastErrorHtml(HCkUnixCompress cHandle);
const char *CkUnixCompress_lastErrorText(HCkUnixCompress cHandle);
const char *CkUnixCompress_lastErrorXml(HCkUnixCompress cHandle);
const char *CkUnixCompress_uncompressFileToString(HCkUnixCompress cHandle, const char *inFilename, const char *inCharset);
const char *CkUnixCompress_uncompressString(HCkUnixCompress cHandle, HCkByteData inData, const char *inCharset);
#endif
