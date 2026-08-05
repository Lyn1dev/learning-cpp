#include <iostream> // this is a library we are telling the compiler to include. It is a standard library that allows us to use input and output streams. In this case we are using it for outputting text to the console.

int main() // int here means that the function will return an integer value. why is it an integer value when its outputting text to the console? well, the main function is a special function that is called when the program starts. it returns an integer value to the operating system to indicate whether the program ran successfully or not. a return value of 0 typically indicates success, while a non-zero value indicates an error or abnormal termination. the 0 here is the integer value that is returned to the operating system when the program finishes executing. it is a way for the program to communicate its success or failure back to the operating system. if the program runs successfully, it will return 0, indicating that everything went well. if there is an error or abnormal termination, it will return a non-zero value, indicating that something went wrong. this allows the operating system to handle the program's execution and take appropriate action based on the return value.
{
   std::cout << "Hello world!\n"; // \n is line break very cool. also cout is character output and << means output to console

   std::cout << "hello world 2 electric boogaloo\n"; 

    int x = 2*8; 
    std::cout << x << "\n" << "hi lol\n"; // you can have multiple << in one line huh? 

    int width { 5 };
    std::cout << width << "\n";
    width = 2*width;
    std::cout << width << "\n";


    /* you can also do
    multi line comments
    but i dont really see a point in that. */

   return 0; // this surprisingly can be omitted in only the main function. It is a good practice to include it though.
}
