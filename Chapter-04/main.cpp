#include <iostream>


int readNumber1() {
    std::cout << "Enter the first number: ";
    int x{};
    std::cin >> x;
    return x;
}

int readNumber2() {
    std::cout << "Enter the second number: ";
    int x{};
    std::cin >> x;
    return x;
}


char readOperator() { // this is probably what i should use right? a char so i can store a single operator 
    std::cout << "Enter an operator:  ";
    char x{};
    std::cin >> x;
    return x;
}

int main(){
    int x { readNumber1() };
    char operator { readOperator() };
    int y { readNumber1() };

    if (operator = "*")
        std::cout << "Your answer is: " << x*y << ".\n";

    if (operator = "-")
        std::cout << "Your answer is: " << x-y << ".\n";

    if (operator = "+")
        std::cout << "Your answer is: " << x+y << ".\n";

    if (operator = "/")
        std::cout << "Your answer is: " << x/y << ". (Fractional part redacted)\n";
}
