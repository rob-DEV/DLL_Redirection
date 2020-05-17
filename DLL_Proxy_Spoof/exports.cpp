#include "exports.h"
#include <iostream>


#pragma comment(linker, "/export:sub=DLL_Proxy_Target_ori.dll.sub")
#pragma comment(linker, "/export:??0testclass@@QAE@HH@Z=DLL_Proxy_Target_ori.dll.??0testclass@@QAE@HH@Z")



//dll export implementations

int add(int a, int b) {
	return 0xDEADC0DE;
}


//cracked class method spoof
void testclass::print() {
	std::cout << "Running spoofed class method\n";
}