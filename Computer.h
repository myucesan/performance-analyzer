//
// Created by Mustafa Yücesan on 03/02/2022.
//

#ifndef PERFORMANCE_ANALYZER_COMPUTER_H
#define PERFORMANCE_ANALYZER_COMPUTER_H


#include <iostream>

class Computer {

public:
    // CPI = Clock Cycles per Instruction (average number of clock cycles per instruction)
    double clockRateGhz; // Clock rate in GHz
    double cpiArith; // CPI of instruction class Arith
    double cpiStore; // CPI of instruction class Store (write to memory)
    double cpiLoad; // CPI of instruction class Load (load from memory)
    double cpiBranch; // CPI of instruction class Branch (conditionals)

    Computer();
    Computer(double clockRateGhz, double cpiArith, double cpiStore, double cpiLoad, double cpiBranch);
    void printStats();
    double calculateGlobalCPI();


private:






};


#endif //PERFORMANCE_ANALYZER_COMPUTER_H
