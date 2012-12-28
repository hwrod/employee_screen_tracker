#include "stdafx.h"
#include <wininet.h>
#include "ckhttp\include\CkHttp.h"
#include "ckhttp\include\CkString.h"
#pragma comment(lib, "wininet.lib")
using std::string;

string wget(string url) {
	CkHttp http;
	bool success;
	success = http.UnlockComponent("Start trial");
	if (success != true) { return string("error"); }

	CkString html;
	html = http.quickGetStr(url.c_str());
	return string(html.getString());
}

bool upload(const char* server, const char* user, const char* pass, string localF, std::string remoteF){
	HINTERNET hInternet = InternetOpen(NULL,INTERNET_OPEN_TYPE_DIRECT,NULL,NULL,0);
	HINTERNET hFtpSession = InternetConnectA(hInternet,(LPCSTR)server,INTERNET_DEFAULT_FTP_PORT, (LPCSTR)user,(LPCSTR)pass,INTERNET_SERVICE_FTP, 0,0 );
	if(FtpPutFileA(hFtpSession, (LPCSTR)localF.c_str(), (LPCSTR)remoteF.c_str(), FTP_TRANSFER_TYPE_BINARY, 0)) {
		InternetCloseHandle(hFtpSession);
		InternetCloseHandle(hInternet);
		return true;
	} else {
		InternetCloseHandle(hFtpSession);
		InternetCloseHandle(hInternet);	
		return false;
	}
}

bool download(const char* server, const char* user, const char* pass, std::string localF, std::string remoteF){
	HINTERNET hInternet = InternetOpen(NULL,INTERNET_OPEN_TYPE_DIRECT,NULL,NULL,0);
	HINTERNET hFtpSession = InternetConnectA(hInternet,(LPCSTR)server,INTERNET_DEFAULT_FTP_PORT, (LPCSTR)user,(LPCSTR)pass,INTERNET_SERVICE_FTP, 0,0 );
	if(FtpGetFileA(hFtpSession, (LPCSTR)remoteF.c_str(), (LPCSTR)localF.c_str(), false, 0, FTP_TRANSFER_TYPE_BINARY, 0)) {
		InternetCloseHandle(hFtpSession);
		InternetCloseHandle(hInternet);
		return true;
	} else {
		InternetCloseHandle(hFtpSession);
		InternetCloseHandle(hInternet);	
		return false;
	}
}

bool filenameQualifiesForUpload(string filename) {
	size_t l = filename.length();
	if (filename[l-3] == 'j' && filename[l-2] == 'p' && filename[l-1] == 'g' && filename[l-1] == 'g' 
		&& filename[l-7] == '-' && filename[l-9] == '-' && filename[l-11] == '-' && filename[l-13] == '-' && filename[l-15] == '-'
		&& filename[l-20] == '-')
		return true;
	return false;
}
