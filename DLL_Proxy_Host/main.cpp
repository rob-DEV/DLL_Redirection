#include <iostream>
#include "exports.h"

int main() {

	std::cout << "Calling DLL function from Target\n";

	//marshall and call dll

	std::cout << "Answer: " << add(3,5) << "\n";
	std::cout << "Regular sub function answer: " << (uint32_t)sub(3, 5) << "\n";



	system("PAUSE");

}