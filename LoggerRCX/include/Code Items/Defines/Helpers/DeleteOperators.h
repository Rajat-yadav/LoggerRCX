#ifndef _DELETEOPERATORS_H
#define _DELETEOPERATORS_H

#define SafeDelete(x) { if(x) { delete x; x = nullptr; }}
#define SafeRelease(x) { if(x) { x = nullptr; } }
#define SafeRelease2(x) { x = nullptr; }

#endif // _DELETEOPERATORS_H
