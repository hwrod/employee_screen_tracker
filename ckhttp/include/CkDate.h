// CkDate.h: interface for the CkDate class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKDATE_H
#define _CKDATE_H



#include "CkString.h"
#include "SystemTime.h"

#include "CkObject.h"

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkDate
class CkDate  : public CkObject
{
    private:

	void *m_impl;
	
	// Don't allow assignment or copying these objects.
	CkDate(const CkDate &) { } 
	CkDate &operator=(const CkDate &) { return *this; }
	CkDate(void *impl) : m_impl(impl) { }

    public:
    	
	void *getImpl(void) const { return m_impl; } 

	CkDate();
	virtual ~CkDate();

	// BEGIN PUBLIC INTERFACE
	
	bool fromSystemTime(SYSTEMTIME &sysTime);
	void toSystemTime(SYSTEMTIME &sysTime);

	// Number of seconds since January 1, 1970
	double toSecondsSince1970(void);
	void fromSecondsSince1970(double numSec);


	// DATE_INSERT_POINT

	// END PUBLIC INTERFACE

	


};
#ifndef __sun__
#pragma pack (pop)
#endif



#endif


