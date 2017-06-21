// Initialization flag
#define _EXPORT_

#include "Logger/Main/LoggerRCXmain.h"

BOOL APIENTRY DllMain(_In_ void* _DllHandle, _In_ unsigned long _Reason, _In_opt_ void* _Reserved)
{
	switch (_Reason)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	default:
		break;
	}
	return TRUE;
}

bool SetLoggerInitialized(Logger* logger) 
{ 
	if (logger->Initialize())
	return true; 
	else return false;
}
bool SetLoggerInitialized(Logger& logger) 
{
	if (logger.Initialize())
	return true; 
	else return false;
}
bool CheckLoggerIsInitialized(Logger* logger) 
{ 
	if (logger->IsLoggerInitialized == true)
	return true; 
	else return false;
}
bool CheckLoggerIsInitialized(Logger& logger) 
{ 
	if (logger.IsLoggerInitialized == true)
	return true; 
	else return false;
}

bool ShutDownLogger(Logger* logger) 
{
	SafeDelete(logger);
	return true;
}

