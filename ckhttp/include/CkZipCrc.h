// CkZipCrc.h: interface for the CkZipCrc class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKZIPCRC_H
#define _CKZIPCRC_H




class CkByteData;
#include "CkString.h"
#include "CkObject.h"

#ifdef WIN32
#pragma warning( disable : 4068 )
#pragma unmanaged
#endif


/*
    IMPORTANT: Objects returned by methods as non-const pointers must be deleted
    by the calling application. 

  */

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

#ifndef WIN32
#include <stdint.h>
#endif

// CLASS: CkZipCrc
class CkZipCrc  : public CkObject
{
    public:
	CkZipCrc();
	virtual ~CkZipCrc();

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	// BEGIN PUBLIC INTERFACE
	bool get_Utf8(void) const;
	void put_Utf8(bool b);

	void ToHex(unsigned long crc, CkString &outStr) const;

#ifdef WIN32
	unsigned long FileCrc(const char *filename);
	unsigned long CalculateCrc(CkByteData &byteData);
	unsigned long EndStream(void);
#else
	uint32_t FileCrc(const char *filename);
	uint32_t CalculateCrc(CkByteData &byteData);
	uint32_t EndStream(void);
#endif
	void MoreData(CkByteData &byteData);
	void BeginStream(void);

	CkString m_resultString;
	const char *toHex(unsigned long crc);

	// CK_INSERT_POINT

	// END PUBLIC INTERFACE


    // For internal use only.
    private:
	void *m_impl;
	bool m_utf8;	// If true, all input "const char *" parameters are utf-8, otherwise they are ANSI strings.

	// Don't allow assignment or copying these objects.
	CkZipCrc(const CkZipCrc &) { } 
	CkZipCrc &operator=(const CkZipCrc &) { return *this; }

    public:
	void *getImpl(void) const { return m_impl; } 

	CkZipCrc(void *impl);


};
#ifndef __sun__
#pragma pack (pop)
#endif



#endif


