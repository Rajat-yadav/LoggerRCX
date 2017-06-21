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

#ifndef _EXPORTINF_H 
	#include "Code Items/Exports/ExportInf.h"
#endif // _EXPORTINF_H


class Logger
{
public:
	LOGGERTARGET Logger();
	LOGGERTARGET ~Logger();

	LOGGERTARGET void Log(std::tstring LogObject,std::tstring LogFunctionName,std::tstring LogFileName,std::tstring LogMeassage,LogType );
	LOGGERTARGET void Log();
	LOGGERTARGET void Log();
private:

};

#endif // _LOGGER_H

