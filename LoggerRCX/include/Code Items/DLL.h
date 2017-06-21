#ifndef _DLL_H_
#define _DLL_H_

#if defined(_EXPORT_)
	#define LOGGERTARGET __declspec(dllexport)
#else 
	#define LOGGERTARGET __declspec(dllimport)
#endif // _EXPORT_

#endif // _DLL_H_
