#ifndef _CkFileAccess_H
#define _CkFileAccess_H
#include "Chilkat_C.h"

HCkFileAccess CkFileAccess_Create(void);
void CkFileAccess_Dispose(HCkFileAccess handle);
void CkFileAccess_getCurrentDir(HCkFileAccess cHandle, HCkString retval);
BOOL CkFileAccess_getEndOfFile(HCkFileAccess cHandle);
void CkFileAccess_getLastErrorHtml(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_getLastErrorText(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_getLastErrorXml(HCkFileAccess cHandle, HCkString retval);
BOOL CkFileAccess_getUtf8(HCkFileAccess cHandle);
void CkFileAccess_putUtf8(HCkFileAccess cHandle, BOOL newVal);
BOOL CkFileAccess_AppendAnsi(HCkFileAccess cHandle, const char *text);
BOOL CkFileAccess_AppendText(HCkFileAccess cHandle, const char *text, const char *charset);
BOOL CkFileAccess_AppendUnicodeBOM(HCkFileAccess cHandle);
BOOL CkFileAccess_AppendUtf8BOM(HCkFileAccess cHandle);
BOOL CkFileAccess_DirAutoCreate(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_DirCreate(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_DirDelete(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_DirEnsureExists(HCkFileAccess cHandle, const char *filePath);
void CkFileAccess_FileClose(HCkFileAccess cHandle);
BOOL CkFileAccess_FileCopy(HCkFileAccess cHandle, const char *existing, const char *newFilename, BOOL failIfExists);
BOOL CkFileAccess_FileDelete(HCkFileAccess cHandle, const char *filename);
BOOL CkFileAccess_FileExists(HCkFileAccess cHandle, const char *filename);
BOOL CkFileAccess_FileOpen(HCkFileAccess cHandle, const char *filename, int accessMode, int shareMode, int createDisp, int attr);
BOOL CkFileAccess_FileRead(HCkFileAccess cHandle, int numBytes, HCkByteData outBytes);
BOOL CkFileAccess_FileRename(HCkFileAccess cHandle, const char *existing, const char *newFilename);
BOOL CkFileAccess_FileSeek(HCkFileAccess cHandle, int offset, int origin);
int CkFileAccess_FileSize(HCkFileAccess cHandle, const char *filename);
BOOL CkFileAccess_FileWrite(HCkFileAccess cHandle, HCkByteData data);
BOOL CkFileAccess_GetTempFilename(HCkFileAccess cHandle, const char *dirName, const char *prefix, HCkString outStr);
BOOL CkFileAccess_ReadBinaryToEncoded(HCkFileAccess cHandle, const char *filename, const char *encoding, HCkString outStr);
BOOL CkFileAccess_ReadEntireFile(HCkFileAccess cHandle, const char *filename, HCkByteData outBytes);
BOOL CkFileAccess_ReadEntireTextFile(HCkFileAccess cHandle, const char *filename, const char *charset, HCkString strFileContents);
BOOL CkFileAccess_ReassembleFile(HCkFileAccess cHandle, const char *partsDirPath, const char *partPrefix, const char *partExtension, const char *reassembledFilename);
BOOL CkFileAccess_SaveLastError(HCkFileAccess cHandle, const char *filename);
BOOL CkFileAccess_SetCurrentDir(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_SplitFile(HCkFileAccess cHandle, const char *fileToSplit, const char *partPrefix, const char *partExtension, int partSize, const char *outputDirPath);
BOOL CkFileAccess_TreeDelete(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_WriteEntireFile(HCkFileAccess cHandle, const char *filename, HCkByteData fileData);
BOOL CkFileAccess_WriteEntireTextFile(HCkFileAccess cHandle, const char *filename, const char *fileData, const char *charset, BOOL includePreamble);
const char *CkFileAccess_currentDir(HCkFileAccess cHandle);
const char *CkFileAccess_getTempFilename(HCkFileAccess cHandle, const char *dirName, const char *prefix);
const char *CkFileAccess_lastErrorHtml(HCkFileAccess cHandle);
const char *CkFileAccess_lastErrorText(HCkFileAccess cHandle);
const char *CkFileAccess_lastErrorXml(HCkFileAccess cHandle);
const char *CkFileAccess_readBinaryToEncoded(HCkFileAccess cHandle, const char *filename, const char *encoding);
const char *CkFileAccess_readEntireTextFile(HCkFileAccess cHandle, const char *filename, const char *charset);
#endif
