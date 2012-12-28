#ifndef _CkZip_H
#define _CkZip_H
#include "Chilkat_C.h"

HCkZip CkZip_Create(void);
void CkZip_Dispose(HCkZip handle);
void CkZip_getAppendFromDir(HCkZip cHandle, HCkString retval);
void CkZip_putAppendFromDir(HCkZip cHandle, const char *newVal);
#ifdef WIN32
void CkZip_getAutoRun(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putAutoRun(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
void CkZip_getAutoRunParams(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putAutoRunParams(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
BOOL CkZip_getAutoTemp(HCkZip cHandle);
#endif
#ifdef WIN32
void CkZip_putAutoTemp(HCkZip cHandle, BOOL newVal);
#endif
BOOL CkZip_getCaseSensitive(HCkZip cHandle);
void CkZip_putCaseSensitive(HCkZip cHandle, BOOL newVal);
BOOL CkZip_getClearArchiveAttribute(HCkZip cHandle);
void CkZip_putClearArchiveAttribute(HCkZip cHandle, BOOL newVal);
BOOL CkZip_getClearReadOnlyAttr(HCkZip cHandle);
void CkZip_putClearReadOnlyAttr(HCkZip cHandle, BOOL newVal);
void CkZip_getComment(HCkZip cHandle, HCkString retval);
void CkZip_putComment(HCkZip cHandle, const char *newVal);
void CkZip_getDecryptPassword(HCkZip cHandle, HCkString retval);
void CkZip_putDecryptPassword(HCkZip cHandle, const char *newVal);
BOOL CkZip_getDiscardPaths(HCkZip cHandle);
void CkZip_putDiscardPaths(HCkZip cHandle, BOOL newVal);
long CkZip_getEncryptKeyLength(HCkZip cHandle);
void CkZip_putEncryptKeyLength(HCkZip cHandle, long newVal);
void CkZip_getEncryptPassword(HCkZip cHandle, HCkString retval);
void CkZip_putEncryptPassword(HCkZip cHandle, const char *newVal);
long CkZip_getEncryption(HCkZip cHandle);
void CkZip_putEncryption(HCkZip cHandle, long newVal);
#ifdef WIN32
void CkZip_getExeDefaultDir(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putExeDefaultDir(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
BOOL CkZip_getExeFinishNotifier(HCkZip cHandle);
#endif
#ifdef WIN32
void CkZip_putExeFinishNotifier(HCkZip cHandle, BOOL newVal);
#endif
#ifdef WIN32
void CkZip_getExeIconFile(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putExeIconFile(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
BOOL CkZip_getExeNoInterface(HCkZip cHandle);
#endif
#ifdef WIN32
void CkZip_putExeNoInterface(HCkZip cHandle, BOOL newVal);
#endif
#ifdef WIN32
BOOL CkZip_getExeSilentProgress(HCkZip cHandle);
#endif
#ifdef WIN32
void CkZip_putExeSilentProgress(HCkZip cHandle, BOOL newVal);
#endif
#ifdef WIN32
void CkZip_getExeTitle(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putExeTitle(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
void CkZip_getExeUnzipCaption(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putExeUnzipCaption(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
void CkZip_getExeUnzipDir(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putExeUnzipDir(HCkZip cHandle, const char *newVal);
#endif
#ifdef WIN32
BOOL CkZip_getExeWaitForSetup(HCkZip cHandle);
#endif
#ifdef WIN32
void CkZip_putExeWaitForSetup(HCkZip cHandle, BOOL newVal);
#endif
#ifdef WIN32
void CkZip_getExeXmlConfig(HCkZip cHandle, HCkString retval);
#endif
#ifdef WIN32
void CkZip_putExeXmlConfig(HCkZip cHandle, const char *newVal);
#endif
int CkZip_getFileCount(HCkZip cHandle);
void CkZip_getFileName(HCkZip cHandle, HCkString retval);
void CkZip_putFileName(HCkZip cHandle, const char *newVal);
BOOL CkZip_getHasZipFormatErrors(HCkZip cHandle);
BOOL CkZip_getIgnoreAccessDenied(HCkZip cHandle);
void CkZip_putIgnoreAccessDenied(HCkZip cHandle, BOOL newVal);
void CkZip_getLastErrorHtml(HCkZip cHandle, HCkString retval);
void CkZip_getLastErrorText(HCkZip cHandle, HCkString retval);
void CkZip_getLastErrorXml(HCkZip cHandle, HCkString retval);
long CkZip_getNumEntries(HCkZip cHandle);
long CkZip_getOemCodePage(HCkZip cHandle);
void CkZip_putOemCodePage(HCkZip cHandle, long newVal);
BOOL CkZip_getOverwriteExisting(HCkZip cHandle);
void CkZip_putOverwriteExisting(HCkZip cHandle, BOOL newVal);
BOOL CkZip_getPasswordProtect(HCkZip cHandle);
void CkZip_putPasswordProtect(HCkZip cHandle, BOOL newVal);
void CkZip_getPathPrefix(HCkZip cHandle, HCkString retval);
void CkZip_putPathPrefix(HCkZip cHandle, const char *newVal);
void CkZip_getProxy(HCkZip cHandle, HCkString retval);
void CkZip_putProxy(HCkZip cHandle, const char *newVal);
void CkZip_getTempDir(HCkZip cHandle, HCkString retval);
void CkZip_putTempDir(HCkZip cHandle, const char *newVal);
BOOL CkZip_getTextFlag(HCkZip cHandle);
void CkZip_putTextFlag(HCkZip cHandle, BOOL newVal);
BOOL CkZip_getUtf8(HCkZip cHandle);
void CkZip_putUtf8(HCkZip cHandle, BOOL newVal);
BOOL CkZip_getVerboseLogging(HCkZip cHandle);
void CkZip_putVerboseLogging(HCkZip cHandle, BOOL newVal);
void CkZip_getVersion(HCkZip cHandle, HCkString retval);
#ifdef WIN32
BOOL CkZip_AddEmbedded(HCkZip cHandle, const char *exeFilename, const char *resourceName, const char *zipFilename);
#endif
void CkZip_AddNoCompressExtension(HCkZip cHandle, const char *fileExtension);
HCkZipEntry CkZip_AppendBase64(HCkZip cHandle, const char *fileName, const char *data);
HCkZipEntry CkZip_AppendCompressed(HCkZip cHandle, const char *fileName, HCkByteData data);
HCkZipEntry CkZip_AppendData(HCkZip cHandle, const char *fileName, HCkByteData data);
HCkZipEntry CkZip_AppendData2(HCkZip cHandle, const char *fileName, const char *data, unsigned long dataLen);
BOOL CkZip_AppendFiles(HCkZip cHandle, const char *filePattern, BOOL recurse);
BOOL CkZip_AppendFilesEx(HCkZip cHandle, const char *filePattern, BOOL recurse, BOOL saveExtraPath, BOOL archiveOnly, BOOL includeHidden, BOOL includeSystem);
HCkZipEntry CkZip_AppendHex(HCkZip cHandle, const char *fileName, const char *data);
BOOL CkZip_AppendMultiple(HCkZip cHandle, HCkStringArray fileSpecs, BOOL recurse);
HCkZipEntry CkZip_AppendNew(HCkZip cHandle, const char *fileName);
HCkZipEntry CkZip_AppendNewDir(HCkZip cHandle, const char *dirName);
BOOL CkZip_AppendOneFileOrDir(HCkZip cHandle, const char *fileOrDirName, BOOL saveExtraPath);
HCkZipEntry CkZip_AppendString(HCkZip cHandle, const char *fileName, const char *str);
HCkZipEntry CkZip_AppendString2(HCkZip cHandle, const char *fileName, const char *str, const char *charset);
BOOL CkZip_AppendZip(HCkZip cHandle, const char *zipFileName);
void CkZip_CloseZip(HCkZip cHandle);
BOOL CkZip_DeleteEntry(HCkZip cHandle, HCkZipEntry entry);
void CkZip_ExcludeDir(HCkZip cHandle, const char *dirName);
BOOL CkZip_Extract(HCkZip cHandle, const char *dirPath);
BOOL CkZip_ExtractInto(HCkZip cHandle, const char *dirPath);
BOOL CkZip_ExtractMatching(HCkZip cHandle, const char *dirPath, const char *pattern);
BOOL CkZip_ExtractNewer(HCkZip cHandle, const char *dirPath);
HCkZipEntry CkZip_FirstEntry(HCkZip cHandle);
HCkZipEntry CkZip_FirstMatchingEntry(HCkZip cHandle, const char *pattern);
void CkZip_GetDirectoryAsXML(HCkZip cHandle, HCkString xml);
HCkZipEntry CkZip_GetEntryByID(HCkZip cHandle, long entryID);
HCkZipEntry CkZip_GetEntryByIndex(HCkZip cHandle, long index);
HCkZipEntry CkZip_GetEntryByName(HCkZip cHandle, const char *entryName);
HCkStringArray CkZip_GetExclusions(HCkZip cHandle);
#ifdef WIN32
void CkZip_GetExeConfigParam(HCkZip cHandle, const char *name, HCkString value);
#endif
HCkZipEntry CkZip_InsertNew(HCkZip cHandle, const char *fileName, long beforeIndex);
BOOL CkZip_IsNoCompressExtension(HCkZip cHandle, const char *fileExtension);
BOOL CkZip_IsPasswordProtected(HCkZip cHandle, const char *zipFilename);
BOOL CkZip_IsUnlocked(HCkZip cHandle);
BOOL CkZip_NewZip(HCkZip cHandle, const char *zipFileName);
#ifdef WIN32
BOOL CkZip_OpenEmbedded(HCkZip cHandle, const char *exeFilename, const char *resourceName);
#endif
BOOL CkZip_OpenFromByteData(HCkZip cHandle, HCkByteData byteData);
BOOL CkZip_OpenFromMemory(HCkZip cHandle, const unsigned char *zipFileInMemory, unsigned long dataLen);
BOOL CkZip_OpenFromWeb(HCkZip cHandle, const char *url);
#ifdef WIN32
BOOL CkZip_OpenMyEmbedded(HCkZip cHandle, const char *resourceName);
#endif
BOOL CkZip_OpenZip(HCkZip cHandle, const char *zipFileName);
BOOL CkZip_QuickAppend(HCkZip cHandle, const char *zipFilename);
#ifdef WIN32
BOOL CkZip_RemoveEmbedded(HCkZip cHandle, const char *exeFilename, const char *resourceName);
#endif
void CkZip_RemoveNoCompressExtension(HCkZip cHandle, const char *fileExtension);
#ifdef WIN32
BOOL CkZip_ReplaceEmbedded(HCkZip cHandle, const char *exeFilename, const char *resourceName, const char *zipFilename);
#endif
BOOL CkZip_SaveLastError(HCkZip cHandle, const char *filename);
void CkZip_SetCompressionLevel(HCkZip cHandle, int level);
void CkZip_SetExclusions(HCkZip cHandle, HCkStringArray excludePatterns);
#ifdef WIN32
void CkZip_SetExeConfigParam(HCkZip cHandle, const char *name, const char *value);
#endif
void CkZip_SetPassword(HCkZip cHandle, const char *password);
BOOL CkZip_UnlockComponent(HCkZip cHandle, const char *regCode);
int CkZip_Unzip(HCkZip cHandle, const char *dirPath);
int CkZip_UnzipInto(HCkZip cHandle, const char *dirPath);
int CkZip_UnzipMatching(HCkZip cHandle, const char *dirPath, const char *pattern, BOOL verbose);
int CkZip_UnzipMatchingInto(HCkZip cHandle, const char *dirPath, const char *pattern, BOOL verbose);
int CkZip_UnzipNewer(HCkZip cHandle, const char *dirPath);
BOOL CkZip_VerifyPassword(HCkZip cHandle);
#ifdef WIN32
BOOL CkZip_WriteExe(HCkZip cHandle, const char *filename);
#endif
#ifdef WIN32
BOOL CkZip_WriteExe2(HCkZip cHandle, const char *exeFilename, const char *outExeFilename, BOOL bAesEncrypt, int keyLength, const char *password);
#endif
#ifdef WIN32
BOOL CkZip_WriteExeToMemory(HCkZip cHandle, HCkByteData outBytes);
#endif
BOOL CkZip_WriteToMemory(HCkZip cHandle, HCkByteData bData);
BOOL CkZip_WriteZip(HCkZip cHandle);
BOOL CkZip_WriteZipAndClose(HCkZip cHandle);
const char *CkZip_appendFromDir(HCkZip cHandle);
const char *CkZip_decryptPassword(HCkZip cHandle);
const char *CkZip_encryptPassword(HCkZip cHandle);
#ifdef WIN32
const char *CkZip_autoRun(HCkZip cHandle);
const char *CkZip_autoRunParams(HCkZip cHandle);
const char *CkZip_exeDefaultDir(HCkZip cHandle);
const char *CkZip_exeIconFile(HCkZip cHandle);
const char *CkZip_exeTitle(HCkZip cHandle);
const char *CkZip_exeUnzipCaption(HCkZip cHandle);
const char *CkZip_exeUnzipDir(HCkZip cHandle);
const char *CkZip_exeXmlConfig(HCkZip cHandle);
#endif
const char *CkZip_fileName(HCkZip cHandle);
const char *CkZip_getDirectoryAsXML(HCkZip cHandle);
#ifdef WIN32
const char *CkZip_getExeConfigParam(HCkZip cHandle, const char *name);
#endif
const char *CkZip_lastErrorHtml(HCkZip cHandle);
const char *CkZip_lastErrorText(HCkZip cHandle);
const char *CkZip_lastErrorXml(HCkZip cHandle);
const char *CkZip_pathPrefix(HCkZip cHandle);
const char *CkZip_proxy(HCkZip cHandle);
const char *CkZip_tempDir(HCkZip cHandle);
const char *CkZip_version(HCkZip cHandle);
#endif
