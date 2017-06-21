#ifndef _STRING_H
#define _STRING_H

// C runtime Includes 
#ifndef _STRING_
	#include <string>
#endif // _STRING_

#ifndef _INC_TCHAR 
	#include <tchar.h>
#endif // _INC_TCHAR

#if defined(UNICODE) || defined(_UNICODE)
	#define tstring string
	#define TOTSTRING(value) to_string(value)
#else 
	#define tstring wstring 
	#define TOTSTRING(value) to_wstring(value)
#endif // UNICODE
	

#endif // _STRING_H
