
#include <iostream>
#include <bitset>

int main(){
        long long n{};
        std::cin >> n; // lets say n =2 given 

        long long y{1};
        for (long long i{1}; i <= n; ++i){ // formula copied from my bitstrings code
        y =(y*2); // this should be 4 since n was 2
        }

        std::bitset<n> bits{};     // comments with assumption n=2
        std::cout << bits << "\n"; // this will print 00
        std::bitset<2> original{bits};
        for (long long i{1}; i <=n; ++i){ // this will loop until all half the amount of bitstring combinations are printed
            
            bits.flip(n-i);
            std::cout << bits << "\n"; // this should print 01, 11
            // probably something to modify each bit? 
            // this should run 4 times given n = 2, each time flipping a bit or something
            // i need to print 00, 01, 11, 10 
            // given n, there are 0 to n-1 positions in the bit 
            // first run simply print bits \n
            // second run bits.flip(n-1) print bits \n
            // third run bits.flip(n-2) print bits \n
            // if n-2 hits 0 then flip the n-1 position again and end code

            // i{1}; i<=n; ++i // runs until i=n 
            // to scale this up, run bits.flip n-i 
            // then
            // i{n-1}; i>=0; --i // starts at last position, flips and prints everything until it hits first position?
            // bits.flip i 
        }
        for (long long i{n}; i>=0; --i){ // this should print 10, and when it comes to try to print 00 then itll break
            bits.flip(i);
            if (bits != original){
                std::cout << bits << "\n";
            }
            else {
                break; // final result would be 00, 01, 11, 10?
            }
        }
    }
