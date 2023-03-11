#include <iostream>
#include <termcolor/termcolor.hpp>

int main(int, char**) {
    std::cout << termcolor::green << "Hello, ";                   // 16 colors
    std::cout << termcolor::red << "Colorful ";
    std::cout << termcolor::blue << "World";
    //std::cout << termcolor::color<100> << "Colorful ";          // 256 colors
    //std::cout << termcolor::color<211, 54, 130> << "World!";    // true colors
    std::cout << std::endl;
}
