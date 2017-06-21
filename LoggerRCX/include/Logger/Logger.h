#ifndef _LOGGER_H
#define _LOGGER_H

//Headers files
#ifndef _DLL_H
	#include "Code Items/DLL.h"
#endif // _DLL_H

#ifndef _IOSTREAM_H
	#include "Code Items/Defines/iostream.h"
#endif // _IOSTREAM_H

#ifndef _FSTREAM_H
	#include "Code Items/Defines/fstream.h"
#endif // _FSTREAM_H

#ifndef _STRING_H 
	#include "Code Items/Defines/string.h"
#endif // _STRING_H

#ifndef _STRINGSTREAM_H 
	#include "Code Items/Defines/stringstream.h"
#endif // _STRINGSTREAM_H

#ifndef _WINPLATFORMSDK_H 
	#include "Code Items/Defines/WinPlatformSDK.h"
#endif // _WINPLATFORMSDK_H

#ifndef _LOGCOMPONENTS_H 
	#include "Code Items/Log Desgin/LogCompenents.h"
#endif // _LOGCOMPONENTS_H

#ifndef _COLOURITEMS_H
	#include "Code Items/Log Desgin/ColourItems.h"
#endif // _COLOURITEMS_H

#ifndef _DELETEOPERATORS_H 
	#include "Code Items/Defines/Helpers/DeleteOperators.h"
#endif // _DELETEOPERATORS_H

class Logger
{
public:
	LOGGERTARGET Logger();
	LOGGERTARGET ~Logger();

	LOGGERTARGET virtual void Log(std::tstring LogErrorCode, std::tstring LogObject, std::tstring LogMessage, std::tstring LogFunctionName,
								  std::tstring LogFileName, int LogLineNum, LogType logtype);
	LOGGERTARGET virtual void Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFunctionName,
								  std::tstring LogFileName, int LogLineNum, LogType logtype);
	LOGGERTARGET virtual bool Initialize();
	LOGGERTARGET virtual bool ShutDown();

	LOGGERTARGET virtual void Log(std::tstring LogObject, std::tstring LogMessage,
		                          std::tstring LogFileName,int LogLineNum, LogType logtype);
	LOGGERTARGET virtual void Log(std::tstring LogObject,std::tstring LogMessage,std::tstring LogFileName,LogType logtype);
protected:
	std::tstring RCX_LogData_LogErrorCode;
	std::tstring RCX_LogData_LogObject;
	std::tstring RCX_LogData_LogMessage;
	std::tstring RCX_LogData_LogFunctionName;
	std::tstring RCX_LogData_LogFileName;
	int RCX_LogData_LogLineNum;
	
	bool IsLoggerInitialized;
	bool IsLoggerShuttedDown;

	friend bool LOGGERTARGET SetLoggerInitialized(Logger* logger);
	friend bool LOGGERTARGET SetLoggerInitialized(Logger& logger);
	friend bool LOGGERTARGET ShutDownLogger(Logger* logger);
	friend bool LOGGERTARGET CheckLoggerIsInitialized(Logger* logger);
	friend bool LOGGERTARGET CheckLoggerIsInitialized(Logger& logger);
};
#endif // _LOGGER_H
