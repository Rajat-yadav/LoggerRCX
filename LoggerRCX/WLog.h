#ifndef _WLOG_H
#define _WLOG_H

#include "Logger\Logger.h"

// Additional include files 
#ifndef _DLL_H 
	#include "Code Items/DLL.h"
#endif // _DLL_H

#ifndef _WINPLATFORMSDK_H
	#include "Code Items/Defines/WinPlatformSDK.h"
#endif // _WINPLATFORMSDK_H

#ifndef _COLOURITEMS_H
	#include "Log Desgin/ColourItems.h"
#endif // _COLOURITEMS_H

#ifndef _IOSTREAM_H 
	#include "Code Items/Defines/iostream.h"
#endif // _IOSTREAM_H

#ifndef _STRING_H 
	#include "Code Items/Defines/string.h"
#endif // _STRING_H

class WLog 
	: public Logger
{
public:
	WLog();
	~WLog();

	void Log(std::tstring LogErrorCode, std::tstring LogObject, std::tstring LogMessage, std::tstring LogFunctionName, std::tstring LogFileName, int LogLineNum, LogType logtype);


	void Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFunctionName, std::tstring LogFileName, int LogLineNum, LogType logtype);


	bool Initialize() ;


	bool ShutDown() ;


    void Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFileName, int LogLineNum, LogType logtype);


	void Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFileName, LogType logtype);

};




#endif // _WLOG_H
