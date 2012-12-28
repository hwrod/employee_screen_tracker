// CkTarProgress.h: interface for the CkTarProgress class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKTARROGRESS_H
#define _CKTARPROGRESS_H



#ifndef WIN32
#include "int64.h"
#endif

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

class CkTarProgress  
{
    public:
	CkTarProgress() { }
	virtual ~CkTarProgress() { }

	// pathInTar 
	virtual void ProgressInfo(const char *name, const char *value) { }

	// Called periodically to check to see if the method call should be aborted.
	virtual void AbortCheck(bool *abort) { }

	// Called just before appending to TAR when writing a .tar, and just before
	// extracting during untar.
	virtual void NextTarFile(const char *fileName, 
	    __int64 fileSize,
	    bool bIsDirectory, 
	    bool *skip) { }

};
#ifndef __sun__
#pragma pack (pop)
#endif


#endif
