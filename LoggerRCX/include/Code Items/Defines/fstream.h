#ifndef _FSTREAM_H
#define _FSTREAM_H

// C runtime header files
#ifndef _FSTREAM_ 
	#include <fstream>
#endif // _FSTREAM_

#if UNICODE
	#define tofstream wofstream
#else
	#define tofstream ofstream
#endif // UNICODE


#endif // _FSTREAM_H
