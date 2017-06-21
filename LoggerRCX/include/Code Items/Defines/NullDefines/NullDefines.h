#ifndef _NULLDEFINES_H
#define _NULLDEFINES_H

#if defined(UNICODE) || defined(_UNICODE)
	#define NullString _T("")
#else 
	#define NullString ""
#endif // UNICODE

#endif // _NULLDEFINES_H
