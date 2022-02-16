#include <iostream>
#include "Computer.h"
#include "Program.h"


/*
 * Course: Computer Architecture & Design
 * C++ Assignment 1.1
 */
int main() {
    Program p1(1,2,3,4);
    p1.printStats();
    Program p2(100, 39.0/100.0, 21.0/100.0, 8.0/100.0);
    p2.printStats();
    return 0;
}
