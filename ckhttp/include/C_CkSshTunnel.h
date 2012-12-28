#ifndef _CkSshTunnel_H
#define _CkSshTunnel_H
#include "Chilkat_C.h"

HCkSshTunnel CkSshTunnel_Create(void);
void CkSshTunnel_Dispose(HCkSshTunnel handle);
void CkSshTunnel_getConnectLog(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putConnectLog(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getConnectTimeoutMs(HCkSshTunnel cHandle);
void CkSshTunnel_putConnectTimeoutMs(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getDestHostname(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putDestHostname(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getDestPort(HCkSshTunnel cHandle);
void CkSshTunnel_putDestPort(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getHttpProxyAuthMethod(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putHttpProxyAuthMethod(HCkSshTunnel cHandle, const char *newVal);
void CkSshTunnel_getHttpProxyHostname(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putHttpProxyHostname(HCkSshTunnel cHandle, const char *newVal);
void CkSshTunnel_getHttpProxyPassword(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putHttpProxyPassword(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getHttpProxyPort(HCkSshTunnel cHandle);
void CkSshTunnel_putHttpProxyPort(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getHttpProxyUsername(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putHttpProxyUsername(HCkSshTunnel cHandle, const char *newVal);
BOOL CkSshTunnel_getIsAccepting(HCkSshTunnel cHandle);
void CkSshTunnel_getLastErrorHtml(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_getLastErrorText(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_getLastErrorXml(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_getListenBindIpAddress(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putListenBindIpAddress(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getListenPort(HCkSshTunnel cHandle);
int CkSshTunnel_getMaxPacketSize(HCkSshTunnel cHandle);
void CkSshTunnel_putMaxPacketSize(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getOutboundBindIpAddress(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putOutboundBindIpAddress(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getOutboundBindPort(HCkSshTunnel cHandle);
void CkSshTunnel_putOutboundBindPort(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getSocksHostname(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putSocksHostname(HCkSshTunnel cHandle, const char *newVal);
void CkSshTunnel_getSocksPassword(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putSocksPassword(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getSocksPort(HCkSshTunnel cHandle);
void CkSshTunnel_putSocksPort(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getSocksUsername(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putSocksUsername(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getSocksVersion(HCkSshTunnel cHandle);
void CkSshTunnel_putSocksVersion(HCkSshTunnel cHandle, int newVal);
void CkSshTunnel_getSshHostname(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putSshHostname(HCkSshTunnel cHandle, const char *newVal);
void CkSshTunnel_getSshLogin(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putSshLogin(HCkSshTunnel cHandle, const char *newVal);
void CkSshTunnel_getSshPassword(HCkSshTunnel cHandle, HCkString retval);
void CkSshTunnel_putSshPassword(HCkSshTunnel cHandle, const char *newVal);
int CkSshTunnel_getSshPort(HCkSshTunnel cHandle);
void CkSshTunnel_putSshPort(HCkSshTunnel cHandle, int newVal);
BOOL CkSshTunnel_getTcpNoDelay(HCkSshTunnel cHandle);
void CkSshTunnel_putTcpNoDelay(HCkSshTunnel cHandle, BOOL newVal);
BOOL CkSshTunnel_getUtf8(HCkSshTunnel cHandle);
void CkSshTunnel_putUtf8(HCkSshTunnel cHandle, BOOL newVal);
BOOL CkSshTunnel_BeginAccepting(HCkSshTunnel cHandle, int listenPort);
BOOL CkSshTunnel_GetTunnelsXml(HCkSshTunnel cHandle, HCkString outStr);
BOOL CkSshTunnel_SaveLastError(HCkSshTunnel cHandle, const char *filename);
BOOL CkSshTunnel_SetSshAuthenticationKey(HCkSshTunnel cHandle, HCkSshKey key);
BOOL CkSshTunnel_StopAccepting(HCkSshTunnel cHandle);
BOOL CkSshTunnel_StopAllTunnels(HCkSshTunnel cHandle, int maxWaitMs);
BOOL CkSshTunnel_UnlockComponent(HCkSshTunnel cHandle, const char *unlockCode);
const char *CkSshTunnel_connectLog(HCkSshTunnel cHandle);
const char *CkSshTunnel_destHostname(HCkSshTunnel cHandle);
const char *CkSshTunnel_getTunnelsXml(HCkSshTunnel cHandle);
const char *CkSshTunnel_httpProxyAuthMethod(HCkSshTunnel cHandle);
const char *CkSshTunnel_httpProxyHostname(HCkSshTunnel cHandle);
const char *CkSshTunnel_httpProxyPassword(HCkSshTunnel cHandle);
const char *CkSshTunnel_httpProxyUsername(HCkSshTunnel cHandle);
const char *CkSshTunnel_lastErrorHtml(HCkSshTunnel cHandle);
const char *CkSshTunnel_lastErrorText(HCkSshTunnel cHandle);
const char *CkSshTunnel_lastErrorXml(HCkSshTunnel cHandle);
const char *CkSshTunnel_listenBindIpAddress(HCkSshTunnel cHandle);
const char *CkSshTunnel_outboundBindIpAddress(HCkSshTunnel cHandle);
const char *CkSshTunnel_socksHostname(HCkSshTunnel cHandle);
const char *CkSshTunnel_socksPassword(HCkSshTunnel cHandle);
const char *CkSshTunnel_socksUsername(HCkSshTunnel cHandle);
const char *CkSshTunnel_sshHostname(HCkSshTunnel cHandle);
const char *CkSshTunnel_sshLogin(HCkSshTunnel cHandle);
const char *CkSshTunnel_sshPassword(HCkSshTunnel cHandle);
#endif