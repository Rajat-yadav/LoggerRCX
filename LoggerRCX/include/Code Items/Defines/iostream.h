#ifndef _IOSTREAM_H
#define _IOSTREAM_H

// C runtime Header Includes
#ifndef _IOSTREAM_
	#include <iostream>
#endif // _IOSTREAM_

#if defined(UNICODE) || defined(_UNICODE)
	#define tcout wcout
#else 
	#define tcout cout
#endif // UNICODE

#endif // _IOSTREAM_H
