#pragma once
std::string wget(std::string url);
bool filenameQualifiesForUpload(std::string filename);
bool upload(const char* server, const char* user, const char* pass, std::string localF, std::string remoteF);
bool download(const char* server, const char* user, const char* pass, std::string localF, std::string remoteF);