#include <iostream>

void fizzbuzz(long long y){

    for(long long i{1}; i<=y; ++i){
        if (i%3==0 && i%5==0 && i%7==0){
            std::cout << "fizzbuzzpop" << "\n";
        }
        else if (i%3==0 && i){
            std::cout << "fizzpop" << "\n";
        }
        else if (i%3==0){
            std::cout << "fizzpop" << "\n";
        }
        else if (i%3==0){
            std::cout << "fizz" << "\n";
        }
        else if (i%5==0){
            std::cout << "buzz" << "\n";
        }
        else if (i%7==0) {
            std::cout << "pop" << "\n";
        }
        else {
            std::cout << i << "\n";
        }
    }

}

int main() {

    long long x{};
    std::cin >> x;
    fizzbuzz(x);

}
