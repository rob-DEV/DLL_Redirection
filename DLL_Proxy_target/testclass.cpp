#include "exports.h"
#include <iostream>

testclass::testclass(int a, int b) {
	this->x = a;
	this->y = b;
	std::cout << "Using the original constructor!\n";
}

void testclass::print() {
	std::cout << "X is: " << this->x << " Y is: " << this->y << "\n";
}