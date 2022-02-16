//
// Created by Mustafa Yücesan on 03/02/2022.
//

#ifndef PERFORMANCE_ANALYZER_COMPUTER_H
#define PERFORMANCE_ANALYZER_COMPUTER_H


#include <iostream>
#include "Program.h"

class Computer {

public:
    /*
     * CPI = Clock Cycles per Instruction (average number of clock cycles per instruction)
     * CPI = CPU Clock Cycles / Instruction Count
     * CPU Clock Cycles = Instructions for a program * Average clock cycles per instruction
     **/
    double clockRateGhz; // Clock rate in GHz
    double cpiArith; // CPI of instruction class Arith
    double cpiStore; // CPI of instruction class Store (write to memory)
    double cpiLoad; // CPI of instruction class Load (load from memory)
    double cpiBranch; // CPI of instruction class Branch (conditionals)

    Computer();
    Computer(double clockRateGhz, double cpiArith, double cpiStore, double cpiLoad, double cpiBranch);
    void printStats();
    double calculateGlobalCPI(); // add all the CPI values
    double calculateExecutionTime (Program);
    double calculateMIPS (void);
    double calculateMips(Program);


private:






};


#endif //PERFORMANCE_ANALYZER_COMPUTER_H
