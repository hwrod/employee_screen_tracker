// CkCertChain.h: interface for the CkCertChain class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CKCERTCHAIN_H__CB7CF92E_A9AC_469E_B628_C76FAA866AB7__INCLUDED_)
#define AFX_CKCERTCHAIN_H__CB7CF92E_A9AC_469E_B628_C76FAA866AB7__INCLUDED_


class CkCert;
class CkCertCollection;
#include "CkObject.h"
#include "CkString.h"

/*
    IMPORTANT: Objects returned by methods as non-const pointers must be deleted
    by the calling application. 

  */

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCertChain
class CkCertChain  : public CkObject
{
    private:
	void *m_impl;
	bool m_utf8;	// If true, all input "const char *" parameters are utf-8, otherwise they are ANSI strings.

	// Don't allow assignment or copying these objects.
	CkCertChain(const CkCertChain &) { } 
	CkCertChain &operator=(const CkCertChain &) { return *this; }
	CkCertChain(void *impl) : m_impl(impl) { }

    public:
	CkCertChain();
	virtual ~CkCertChain();

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	// BEGIN PUBLIC INTERFACE
	bool get_Utf8(void) const;
	void put_Utf8(bool b);

	bool BuildChain(const CkCert &cert, CkCertCollection *extraCerts);

	CkCert *GetCert(int index);

	int get_NumCerts(void) const;

	// Error log retrieval and saving (these methods are common to all Chilkat VC++ classes.)
	bool SaveLastError(const char *filename);
        void LastErrorXml(CkString &str);
        void LastErrorHtml(CkString &str);
        void LastErrorText(CkString &str);

	// CK_INSERT_POINT

	// END PUBLIC INTERFACE

	// The following methods should not be called by an application.
	// They for internal use only.
	void setLastErrorProgrammingLanguage(int v);

	void *getImpl(void) const { return m_impl; } 

};
#ifndef __sun__
#pragma pack (pop)
#endif


#endif // !defined(AFX_CKCERTCHAIN_H__CB7CF92E_A9AC_469E_B628_C76FAA866AB7__INCLUDED_)

