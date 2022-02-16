#include <iostream>
#include "Computer.h"
#include "Program.h"


/*
 * Course: Computer Architecture & Design
 * C++ Assignment 1.3
 */
int main() {
    Computer c1(1, 2, 2, 3, 4);
    Computer c2(1.2, 2, 3, 4, 3);
    Computer c3(2, 2, 2, 4, 6);
    Program A(2000, 100, 100, 50);
    Program B(2000, 10.0/100.0, 40.0/100.0, 25.0/100.0);
    Program C(500, 100, 2000, 200);

    return 0;
}
