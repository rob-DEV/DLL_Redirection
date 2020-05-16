#ifndef _DLL_EXPORTS_
#define _DLL_EXPORTS_


#ifdef TARGETLIBRARY_EXPORTS
#define TARGET_API __declspec(dllexport)
#else
#define TARGET_API __declspec(dllimport)
#endif

//dll exports

extern "C" TARGET_API int add(int a, int b);

extern "C" TARGET_API int sub(int a, int b);


#endif
