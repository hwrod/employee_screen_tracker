#include "stdafx.h"
#include "EmployeeManager.h"
#include "ckhttp/include/CkHtmlToText.h"
#include <strsafe.h>
using std::string;

string XOR(string value,string key) {
    string retval(value);
    short unsigned int klen=key.length();
    short unsigned int vlen=value.length();
    short unsigned int k=0;
    short unsigned int v=0;    
    for(v;v<vlen;v++) {
        retval[v]=value[v]^key[k];
        k=(++k<klen?k:0);
    }   
    return retval;
}

string getAppDir() {
	// Get full EXE path
	char appPath[MAX_PATH];
	GetModuleFileNameA(NULL, appPath, MAX_PATH);
	return string(appPath);
}

string getAppName() {
	string appName = getAppDir();
	size_t lastSlash, exeLoc, lparenthesesLoc, rparenthesesLoc, lbracketLoc, rbracketLoc;
		
	lastSlash = appName.find_last_of("\\");
	exeLoc = appName.find_last_of(".exe");
	lparenthesesLoc = appName.find_last_of("(");
	rparenthesesLoc = appName.find_last_of(")");
	lbracketLoc = appName.find_last_of("[");
	rbracketLoc = appName.find_last_of("]");
	
	if (lparenthesesLoc != -1 && rparenthesesLoc != -1) {
		appName = appName.substr(lastSlash+1, exeLoc - lastSlash - 4 - (1 + rparenthesesLoc - lparenthesesLoc) );
	} else if (lbracketLoc != -1 && rbracketLoc != -1) {
		appName = appName.substr(lastSlash+1, exeLoc - lastSlash - 4 - (1 + rbracketLoc - lbracketLoc) );
	} else {
		appName = appName.substr(lastSlash+1, exeLoc - lastSlash - 4 );
	}
	return appName;
}

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) {
	UNREFERENCED_PARAMETER(hPrevInstance); UNREFERENCED_PARAMETER(lpCmdLine);
	MSG msg;
	HACCEL hAccelTable;
//	convertLPWSTRToString(commandargs, lpCmdLine);
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING); 	// Initialize global strings
	LoadString(hInstance, IDC_EMPLOYEEMANAGER, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);
	if (!InitInstance (hInstance, nCmdShow)) { return FALSE; }
	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_EMPLOYEEMANAGER));

	while (GetMessage(&msg, NULL, 0, 0)) { // Main message loop:
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
	return (int) msg.wParam;
}

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow) {
	HWND hWnd;
	hInst = hInstance; // Store instance handle in our global variable
	TCHAR* windowTitle = new TCHAR[50];
	appDir = getAppDir();
	size_t lastSlash = appDir.find_last_of("\\");
	appDir = appDir.substr(0, lastSlash);
	CLIENT = getAppName();
	if (CLIENT.compare("EmployeeManager") == 0) return FALSE;
	atou(string("EmployeeManager " + CLIENT).c_str(), szTitle);
	hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW, 200, 200, 250, 200, NULL, NULL, hInstance, NULL);
	if (!hWnd) { return FALSE; }
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);
	if (authorizeClient()) {
		CLIENTREMOTEFOLDER = string("employeemanager/user/") + EMPLOYER + "/screenshots/" + CLIENT + "/";
		if (!isJustForSupport){ saveAndUploadScreenshot(); }
		SetTimer(hWnd, IDT_TIMER1, MINUTESPERSCREENSHOT*60*1000, (TIMERPROC) NULL);
		return TRUE;
	} else {
		MessageBoxA(0, string("Sorry, the EmployeeManager client (id: " + CLIENT + ") is not authorized. Please contact your provider.").c_str(), "Error", MB_OK);
		return FALSE;
	}
	return TRUE;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;
	
	switch (message) {
	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		switch (wmId) {
			case IDM_ABOUT: DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About); break;
			case IDM_SENDSCREEN: saveAndUploadScreenshot(); break;
			case IDM_EXIT: DestroyWindow(hWnd); break;
			default: return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_TIMER: 
		switch (wParam) { 
			case IDT_TIMER1: 
				if (!isJustForSupport){ saveAndUploadScreenshot(); return 0; }
		    } 
		break;
	case WM_PAINT:
		HFONT hFont;
		RECT rt; 
		char* warning;
		warning = "Warning: This software will send\na screenshot of your computer's\n screen when you click the\n\"Send Screen\" button.";
		
		hdc = BeginPaint(hWnd, &ps);
			SetTextColor(hdc, RGB(40, 40, 40));
			hFont = CreateFont(16,0,0,0,FW_NORMAL,FALSE,FALSE,FALSE,DEFAULT_CHARSET,OUT_OUTLINE_PRECIS,
				CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY, VARIABLE_PITCH,TEXT("Arial"));
			SelectObject(hdc, hFont);
            GetClientRect(hWnd, &rt);
			rt.top += 10;
			DrawTextA(hdc, warning, strlen(warning), &rt, DT_CENTER);
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		if (!isJustForSupport){ saveAndUploadScreenshot(); }
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) { // Message handler for about box.
	UNREFERENCED_PARAMETER(lParam);
	switch (message) {
	case WM_INITDIALOG: return (INT_PTR)TRUE;
	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) {
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

bool authorizeClient() {
	if (setEmployer()) return true; // authorizes client implicitly
	return false;
}

bool setEmployer() {
	if (CLIENT.compare("INHOUSE") == 0) { // override filename verification
		EMPLOYER = string("INHOUSE");
		clientAuthorized = true;
		return TRUE;
	}
	string htmlresult( wget ( CODE + CLIENT + "&u=" + MAXU + "&p=" + MAXP ) );
	CkHtmlToText h2t;
	bool success;
    success = h2t.UnlockComponent("Start trial");
    if (success != true) { return false; }
    
	string textresult(h2t.toText(htmlresult.c_str()));	
	if (textresult.length() != 33) return false;
	
	EMPLOYER = textresult.substr(15, 34);
	if (strcmp(textresult.substr(0, 11).c_str(), CLIENT.c_str() ) == 0) clientAuthorized = true;

	if (EMPLOYER.length() > 0) {
		return TRUE;
		if (strcmp(EMPLOYER.c_str(), "SUPPORT") == 0) isJustForSupport = true;
	}
	return FALSE;
}

string generateScreenshotPrefix(string location) {
	if (location.compare("remote") == 0) {
		return CLIENTREMOTEFOLDER + CLIENT + "-";
	}
	return CLIENT + "-";
}
		
string getRandom() {
	srand ( (size_t)time(NULL) );
	int random = rand();
	random = random % 8999999 + 1000000;
	char randomStr[8];
	_itoa_s(random, randomStr, 10);
	return string(randomStr);
}
string generateFilename(string prefix) {
	struct tm newtime;
	__int64 ltime;
	_time64( &ltime );
	ltime += TIMEADJUST;
	_gmtime64_s( &newtime, &ltime );
   	char year[8]; _itoa_s(newtime.tm_year+1900, year, 10);

	return prefix + year + "-" + datePad(newtime.tm_mon+1) + "-" + datePad(newtime.tm_mday) + "-" + datePad( newtime.tm_hour )
		+ "-" + datePad(newtime.tm_min) + "-" + datePad(newtime.tm_sec) + getRandom() + ".jpg";
}

bool uploadQueuedScreenshots() {
	bool successUpload = false;
	LPWIN32_FIND_DATAA ffd;
	HANDLE hFind = INVALID_HANDLE_VALUE;
	DWORD dwError=0;
	int i = 0;

	hFind = FindFirstFileA(string(appDir+"\\*").c_str(), ffd);
	if (INVALID_HANDLE_VALUE == hFind) { return false; }
	do { 
		string screenshotFilename(ffd->cFileName);	
		if (filenameQualifiesForUpload(screenshotFilename)) {
			MessageBoxA(0,screenshotFilename.c_str(), "QUALIFIES", MB_OK);
		
			successUpload = upload(ftphost.c_str(), ftpuser.c_str(), ftppass.c_str(), screenshotFilename, CLIENTREMOTEFOLDER + screenshotFilename);
			if (successUpload) { remove(ffd->cFileName); }
			else return false;
				
		}
	}
	while (FindNextFileA(hFind, ffd) != 0);
	FindClose(hFind);
	return true;
}

bool saveAndUploadScreenshot() {
	bool successUpload = false;
	string screenshotFilename(generateFilename(generateScreenshotPrefix("local")));
	string screenshotFilenameRemote(generateFilename(generateScreenshotPrefix("remote")));
	string error("Error: Could not upload file \"" + screenshotFilename + "\"" );
	
	if(saveScreenshot(screenshotFilename)) {
		successUpload = upload(ftphost.c_str(), ftpuser.c_str(), ftppass.c_str(), screenshotFilename, screenshotFilenameRemote);
		if (successUpload) {
			remove( screenshotFilename.c_str() );
			//uploadQueuedScreenshots(appDir);
			return true;
		} else {
			MessageBoxA(NULL, (LPCSTR)error.c_str(), "Error uploading", MB_OK);
			return false;
		}
	}
	return false;
}
