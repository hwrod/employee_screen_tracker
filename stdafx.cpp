#include "stdafx.h"

char* datePad(int num) {
    char* unpadded   = new char[3];
    char* padded     = new char[3];
    char* unpadbegin = NULL;
    int   unpadlength;
	itoa(num,unpadded,10);
	unpadlength = strlen(unpadded);
    unpadbegin = unpadded;
    memset((void*)padded, '0', 2 - unpadlength);
    padded[2 - unpadlength] = '\0';
    strcat(padded,unpadbegin);
    delete [] unpadded;
	return padded;
}