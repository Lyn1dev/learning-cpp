#include <iostream>

int getInteger()
{
    int value{};
    std::cout << "Enter an integer: ";
    std::cin >> value;
    return value;
}

int main()
{
	int x{ getInteger() };

	int y{ getInteger() };

	std::cout << x << " + " << y << " = " << x + y << '\n';

	return 0;
}
