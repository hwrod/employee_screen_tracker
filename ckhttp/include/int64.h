
#if !defined(WIN32) && !defined(WINCE)
#ifndef CHILKATSWIG
		
#ifndef _INT64_H_INCLUDED
#define _INT64_H_INCLUDED
	
#ifndef TEST_NO_WIN32
#include <inttypes.h>
	
typedef int64_t __int64;	
typedef uint64_t ulong64;	
#endif

#endif

#endif // CHILKATSWIG
#endif // WIN32
