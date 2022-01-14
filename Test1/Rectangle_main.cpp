#include "Rectangle.h"
#include <iostream>
#include <array>

int main(void) {
	Rectangle r(0, 0, 0, 0);
	Rectangle s(2, 4, 7, 7);

	std::cout << r << std::endl;
	if (r < s) {
		std::cout << "Changed Square : " << r << std::endl;
	}
	else {
		std::cout << "Unchanged Square : " << r << std::endl;
	}
	
}
