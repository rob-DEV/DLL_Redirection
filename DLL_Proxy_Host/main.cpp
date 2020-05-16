#include <iostream>
#include "exports.h"

int main() {

	std::cout << "Calling DLL function from Target\n";

	//marshall and call dll

	std::cout << "Answer: " << std::hex << (uint32_t)add(3,5) << "\n";
	std::cout << "Regular sub function answer: " << std::dec << (uint32_t)sub(3, 5) << "\n";



	system("PAUSE");

}