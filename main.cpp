#include <iostream>
#include "Computer.h"


/*
 * Course: Computer Architecture & Design
 * C++ Assignment 1.1
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    Computer c1(1,1,1,1,1);
    Computer c2(2,2,2,2,2);
    c1.printStats();
    std::cout << "Global CPI of Computer 1: " << c1.calculateGlobalCPI() << "\n";
    c2.printStats();
    std::cout <<  "Global CPI of Computer 2: " <<c2.calculateGlobalCPI() << "\n";

    return 0;
}
