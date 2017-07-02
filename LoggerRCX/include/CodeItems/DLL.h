#ifndef _DLL_H
#define _DLL_H

#ifdef _EXPORT_
	#define API __declspec(dllexport)
#else
	#define API __declspec(dllimport)
#endif 

#endif // _DLL_H
