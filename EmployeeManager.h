#pragma once
#include "resource.h"
#define MAX_LOADSTRING 100
#define MINUTESPERSCREENSHOT 3
#define TIMEADJUST -14350
using std::string;

// See "ftphost" below for details on setting up your ftp

string EMPLOYER;
string CLIENT;
string CLIENTREMOTEFOLDER;
bool isJustForSupport = false;
bool clientAuthorized = false;
string CODE("http://www.yoursite.com/validator/?code="); // validator service on your webhost
string MAXU("18275928375934275"); // username credential for validator service
string MAXP("72987529836276285252"); // password credential
string appDir;

bool setEmployer();
bool authorizeClient();
string generateScreenshotPrefix(string location);
string generateFilename(string prefix);
bool uploadQueuedScreenshots();
bool saveAndUploadScreenshot();
string getAppName();
string XOR(string value,string key);

char ftphostc[] = {13,17,9,22,4,29,8,15,36,20,0}; 	// XORed value for ftphost (to prevent hex snooping on the EXE)
char ftpuserc[] = {18,8,27,6,11,2,0}; 			// XORed value for ftpuser
char ftppassc[] = {11,81,23,24,34,63,35,54,30,28,99,0}; // XORed value for ftppass
string ftphost=XOR(ftphostc,string("key"));
string ftpuser=XOR(ftpuserc,string("key"));
string ftppass=XOR(ftppassc,string("key"));

// Global Variables:
HINSTANCE hInst;			// current instance
TCHAR szTitle[MAX_LOADSTRING];		// The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];	// the main window class name

// Declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);

ATOM MyRegisterClass(HINSTANCE hInstance) {
	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_EMPLOYEEMANAGER));
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_EMPLOYEEMANAGER);
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));
	return RegisterClassEx(&wcex);
}

bool convertLPWSTRToString(std::string& str, const LPWSTR wStr) {
    bool b = false;
    char* p = 0;
    int bSize;    
    // get the required buffer size in bytes
    bSize = WideCharToMultiByte(CP_UTF8,
        0,
        wStr,-1,
        0,0,
        NULL,NULL);     
    if (bSize > 0) {
        p = new char[bSize];
        int rc = WideCharToMultiByte(CP_UTF8,
            0,
            wStr,-1,
            p,bSize,
            NULL,NULL);
        if (rc != 0) {
            p[bSize-1] = '\0';
            str = p;
            b = true;
        }
    }
    delete [] p;
    return b;
}

int atou(const char* SomeAsciiStr, wchar_t* SomeUnicodeStr) {
	return MultiByteToWideChar(CP_ACP, 0, SomeAsciiStr, -1, SomeUnicodeStr, 1024);
}
