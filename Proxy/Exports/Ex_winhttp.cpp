#include "../Core.h"

extern "C" FARPROC OriginalFuncs_winhttp[65];
FARPROC OriginalFuncs_winhttp[65];
const char* ExportNames_winhttp[] = {
	"Private1",
	"SvchostPushServiceGlobals",
	"WinHttpAddRequestHeaders",
	"WinHttpAutoProxySvcMain",
	"WinHttpCheckPlatform",
	"WinHttpCloseHandle",
	"WinHttpConnect",
	"WinHttpConnectionDeletePolicyEntries",
	"WinHttpConnectionDeleteProxyInfo",
	"WinHttpConnectionFreeNameList",
	"WinHttpConnectionFreeProxyInfo",
	"WinHttpConnectionFreeProxyList",
	"WinHttpConnectionGetNameList",
	"WinHttpConnectionGetProxyInfo",
	"WinHttpConnectionGetProxyList",
	"WinHttpConnectionSetPolicyEntries",
	"WinHttpConnectionSetProxyInfo",
	"WinHttpConnectionUpdateIfIndexTable",
	"WinHttpCrackUrl",
	"WinHttpCreateProxyResolver",
	"WinHttpCreateUrl",
	"WinHttpDetectAutoProxyConfigUrl",
	"WinHttpFreeProxyResult",
	"WinHttpFreeProxyResultEx",
	"WinHttpFreeProxySettings",
	"WinHttpGetDefaultProxyConfiguration",
	"WinHttpGetIEProxyConfigForCurrentUser",
	"WinHttpGetProxyForUrl",
	"WinHttpGetProxyForUrlEx",
	"WinHttpGetProxyForUrlEx2",
	"WinHttpGetProxyForUrlHvsi",
	"WinHttpGetProxyResult",
	"WinHttpGetProxyResultEx",
	"WinHttpGetProxySettingsVersion",
	"WinHttpGetTunnelSocket",
	"WinHttpOpen",
	"WinHttpOpenRequest",
	"WinHttpPacJsWorkerMain",
	"WinHttpProbeConnectivity",
	"WinHttpQueryAuthSchemes",
	"WinHttpQueryDataAvailable",
	"WinHttpQueryHeaders",
	"WinHttpQueryOption",
	"WinHttpReadData",
	"WinHttpReadProxySettings",
	"WinHttpReadProxySettingsHvsi",
	"WinHttpReceiveResponse",
	"WinHttpResetAutoProxy",
	"WinHttpSaveProxyCredentials",
	"WinHttpSendRequest",
	"WinHttpSetCredentials",
	"WinHttpSetDefaultProxyConfiguration",
	"WinHttpSetOption",
	"WinHttpSetStatusCallback",
	"WinHttpSetTimeouts",
	"WinHttpTimeFromSystemTime",
	"WinHttpTimeToSystemTime",
	"WinHttpWebSocketClose",
	"WinHttpWebSocketCompleteUpgrade",
	"WinHttpWebSocketQueryCloseStatus",
	"WinHttpWebSocketReceive",
	"WinHttpWebSocketSend",
	"WinHttpWebSocketShutdown",
	"WinHttpWriteData",
	"WinHttpWriteProxySettings"
};

void Core::LoadExports_winhttp(HMODULE originaldll)
{
	for (int i = 0; i < (sizeof(ExportNames_winhttp) / sizeof(ExportNames_winhttp[0])); i++)
		OriginalFuncs_winhttp[i] = GetProcAddress(originaldll, ExportNames_winhttp[i]);
}