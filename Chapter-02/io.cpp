//#include "header.h" // In C++, it is a best practice for code files to #include their paired header file (if one exists). This allows the compiler to catch certain kinds of errors at compile time instead of link time. 
//#include <iostream>

//int doubleNumber(int x) {
//    return x*2;
//}

//int getInteger()
//{
//	std::cout << "Enter an integer: ";
//	int x{};
//	std::cin >> x;
//	return x;
//}

//void addIntegerAndPrint(int x, int y) {
//    std::cout << x << " + " << y << " is " << x + y << '\n';
//}
#include "io.h"
#include <iostream>

int readNumber() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int sum) {
    std::cout << "The sum of the two numbers is: " << sum << '\n';
}
