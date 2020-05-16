#include "exports.h"

#pragma comment(linker, "/export:sub=DLL_Proxy_Target_ori.dll.sub")

//dll export implementations

int add(int a, int b) {
	return 0xDEADC0DE;
}
