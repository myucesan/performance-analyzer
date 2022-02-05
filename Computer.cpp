//
// Created by Mustafa Yücesan on 03/02/2022.
//

#include "Computer.h"

Computer::Computer() {};
Computer::Computer(double clockRateGhz, double cpiArith, double cpiStore, double cpiLoad, double cpiBranch)
        : clockRateGhz(clockRateGhz), cpiArith(cpiArith), cpiStore(cpiStore), cpiLoad(cpiLoad), cpiBranch(cpiBranch) {}

void Computer::printStats() {
    std::cout << "Clock rate in GHz: " << this->clockRateGhz << "\n";
    std::cout << "CPI of instruction class Arith: " << this->cpiArith << "\n";
    std::cout << "CPI of instruction class Store: " << this->cpiStore << "\n";
    std::cout << "CPI of instruction class Load: " << this->cpiLoad << "\n";
    std::cout << "CPI of instruction class Branch: " << this->cpiBranch << "\n";


}

double Computer::calculateGlobalCPI() {
    return this->cpiArith + this->cpiStore + this->cpiLoad + this->cpiBranch;
}
