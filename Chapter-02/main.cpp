// #include "header.h" // Insert contents of header.h at this point.  Note use of double quotes here.
// #include <iostream>

// so all our functions are declared in header.h, we can now remove the function prototypes from this file

// int main() {
//	int x{ getInteger() };
//	int y{ getInteger() };

//	addIntegerAndPrint(x, y);
//    std::cout << doubleNumber(4);
//}

#include "io.h"
#include <iostream>


int main() {
    int x{ readNumber() };
    int y{ readNumber() };

    //int z{x+y};

    writeAnswer(x+y); // i originally had writeAnswer(z); but I realized I could just do the addition in the function call instead of creating a new variable

    return 0;
}
