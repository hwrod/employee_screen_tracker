// CkCharset.h: interface for the CkCharset class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKCHARSET_H
#define _CKCHARSET_H




class CkByteData;
#include "CkObject.h"
#include "CkString.h"

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCharset
class CkCharset  : public CkObject
{
    private:
	void *m_impl;
	bool m_utf8;	// If true, all input "const char *" parameters are utf-8, otherwise they are ANSI strings.

	// Don't allow assignment or copying these objects.
	CkCharset(const CkCharset &) { } 
	CkCharset &operator=(const CkCharset &) { return *this; }

    public:
	CkCharset();
	virtual ~CkCharset();

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	bool ConvertData2(const char *inData, unsigned long inDataLen, CkByteData &outData);
	bool GetHtmlCharset2(const char *htmlData, unsigned long htmlDataLen, CkString &outCharset);
	bool ConvertHtml2(const char *htmlIn, unsigned long htmlInLen, CkByteData &outHtml);
	bool WriteFile2(const char *filename, const char *data, unsigned long dataLen);
	bool ConvertFromUnicode2(const char *data, unsigned long dataLen, CkByteData &outMbData);
	bool ConvertToUnicode2(const char *data, unsigned long dataLen, CkByteData &outUniData);
	void SetErrorBytes(const char *data, unsigned long dataLen);
	const char *getHtmlCharset2(const char *htmlData, unsigned long htmlDataLen);

	bool ConvertHtml3(const unsigned char *htmlIn, unsigned long htmlInLen, CkByteData &outHtml);
	bool GetHtmlCharset3(const unsigned char *htmlData, unsigned long htmlDataLen, CkString &outCharset);
	bool WriteFile3(const char *filename, const unsigned char *data, unsigned long dataLen);
	bool ConvertData3(const unsigned char *inData, unsigned long inDataLen, CkByteData &outData);
	bool ConvertFromUnicode3(const unsigned char *data, unsigned long dataLen, CkByteData &outMbData);
	bool ConvertToUnicode3(const unsigned char *data, unsigned long dataLen, CkByteData &outUniData);
	const char *getHtmlCharset3(const unsigned char *htmlData, unsigned long htmlDataLen);


	// Convert byte data into the memory buffer you provide. outDataLen is set
	// to the size of the output buffer 
	bool ConvertData4(const unsigned char *inData, unsigned long inDataLen,unsigned char *outData, unsigned long *outDataLen);


	// BEGIN PUBLIC INTERFACE
	bool get_Utf8(void) const;
	void put_Utf8(bool b);

	const char *upperCase(const char *inStr);
	const char *lowerCase(const char *inStr);
	void UpperCase(const char *inStr, CkString &outStr);
	void LowerCase(const char *inStr, CkString &outStr);

	bool GetHtmlFileCharset(const char *htmlFilename, CkString &outCharset);
	bool GetHtmlCharset(const CkByteData &htmlData, CkString &outCharset);
	bool ConvertHtmlFile(const char *inFilename, const char *outFilename);
	bool ConvertHtml(const CkByteData &htmlIn, CkByteData &outHtml);

	void get_LastOutputAsQP(CkString &str);
	void get_LastInputAsQP(CkString &str);
	void get_LastOutputAsHex(CkString &str);
	void get_LastInputAsHex(CkString &str);
	void put_SaveLast(bool value);
	bool get_SaveLast(void);

	bool WriteFile(const char *filename, const CkByteData &dataBuf);
	bool ReadFile(const char *filename, CkByteData &outData);

	bool ConvertFromUnicode(const CkByteData &uniData, CkByteData &outMbData);
	bool ConvertToUnicode(const CkByteData &mbData, CkByteData &outUniData);

	bool VerifyFile(const char *charset, const char *filename);
	bool VerifyData(const char *charset, const CkByteData &charData);

	bool ConvertFile(const char *inFilename, const char *outFilename);

	bool HtmlEntityDecode(CkByteData &inData, CkByteData &outData);
	bool HtmlDecodeToStr(const char *str, CkString &outStr);
	bool HtmlEntityDecodeFile(const char *inFilename, const char *outFilename);

	void EntityEncodeHex(const char *inStr, CkString &outStr);
	void EntityEncodeDec(const char *inStr, CkString &outStr);
	const char *entityEncodeHex(const char *inStr);
	const char *entityEncodeDec(const char *inStr);

	bool ConvertData(const CkByteData &inData, CkByteData &outData);

	void get_ToCharset(CkString &str);
	void put_ToCharset(const char *charset);
	void get_FromCharset(CkString &str);
	void put_FromCharset(const char *charset);
	void get_Version(CkString &str);

	bool UnlockComponent(const char *unlockCode);
	bool IsUnlocked(void) const;

	// Error log retrieval and saving (these methods are common to all Chilkat VC++ classes.)
	bool SaveLastError(const char *filename);
        void LastErrorXml(CkString &str);
        void LastErrorHtml(CkString &str);
        void LastErrorText(CkString &str);

	int CharsetToCodePage(const char *charsetName);
	bool CodePageToCharset(int codePage, CkString &outCharset);

	// Error actions:
	// 0: drop error character.
	// 1: substitute default bytes
	// 2: hex numeric escape &#xXXXX;          
	// 3: RESERVED
	// 4: RESERVED
	// 5: RESERVED
	// 6: use alternate To charset
	// 7: pass through non-convertable bytes unchanged.
	int get_ErrorAction(void);
	void put_ErrorAction(int val);

	void get_AltToCharset(CkString &str);
	void put_AltToCharset(const char *charsetName);

	void SetErrorBytes(const unsigned char *data, unsigned long dataLen);
	void SetErrorString(const char *str);

	CkString m_resultString;
        const char *lastErrorText(void);
        const char *lastErrorXml(void);
        const char *lastErrorHtml(void);

	const char *getHtmlFileCharset(const char *htmlFilename);
	const char *getHtmlCharset(const CkByteData &htmlData);
	const char *lastOutputAsQP(void);
	const char *lastInputAsQP(void);
	const char *lastOutputAsHex(void);
	const char *lastInputAsHex(void);
	const char *htmlDecodeToStr(const char *str);
	const char *toCharset(void);
	const char *fromCharset(void);
	const char *version(void);
	const char *codePageToCharset(int codePage);
	const char *altToCharset(void);
	// URLDECODESTR_BEGIN
	bool UrlDecodeStr(const char *inStr, CkString &outStr);
	const char *urlDecodeStr(const char *inStr);
	// URLDECODESTR_END
	// CONVERTFILENOPREAMBLE_BEGIN
	bool ConvertFileNoPreamble(const char *inFilename, const char *outFilename);
	// CONVERTFILENOPREAMBLE_END

	// CHARSET_INSERT_POINT

	// END PUBLIC INTERFACE


	// The following methods should not be called by an application.
	// They for internal use only.
	void setLastErrorProgrammingLanguage(int v);


};
#ifndef __sun__
#pragma pack (pop)
#endif


#endif
