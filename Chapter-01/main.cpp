#include <iostream>

int main()
{

   std::cout << "Enter an integer: ";
   int n1;
   std::cin >> n1;
   std::cout << "Enter another integer: ";
   int n2;
   std::cin >> n2;
   std::cout << n1 << " + " << n2 << " = " << n1 + n2 << ".\n";
   std::cout << n1 << " - " << n2 << " = " << n1 - n2 << ".\n";
   std::cout << n1 << " * " << n2 << " = " << n1 * n2 << ".\n";
   std::cout << n1 << " / " << n2 << " = " << n1 / n2 << ".\n";


   return 0;
}
