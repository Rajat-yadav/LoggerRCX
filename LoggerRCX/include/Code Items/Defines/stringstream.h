#ifndef _STRINGSTREAM_H
#define _STRINGSTREAM_H

// C runtime header includes
#ifndef _SSTREAM_ 
	#include <sstream>
#endif // _SSTREAM_

#if UNICODE
	#define tstringstream wstringstream
#else
	#define tstringstream stringstream
#endif // UNICODE

#endif // _STRINGSTREAM_H
