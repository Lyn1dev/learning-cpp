#include <iostream>
#include <string>

int main(){

    std::cout << "Enter your full name:  ";
    std::string something{};
    std::getline(std::cin >> std::ws, something);

    std::cout << "Enter your age:  ";
    int age{};
    std::cin >> age;

    std::cout << "Your age + length of name is:  " << std::ssize(something) + age  << "\n";
                          // or static_cast<int>(something.length()) + age
}
