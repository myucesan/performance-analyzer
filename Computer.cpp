//
// Created by Mustafa Yücesan on 03/02/2022.
//

#include "Computer.h"

Computer::Computer() {};
Computer::Computer(double clockRateGhz, double cpiArith, double cpiStore, double cpiLoad, double cpiBranch)
        : clockRateGhz(clockRateGhz), cpiArith(cpiArith), cpiStore(cpiStore), cpiLoad(cpiLoad), cpiBranch(cpiBranch) {}

void Computer::printStats() {
    std::cout << "configuration printed placeholder\n";
}

double calculateGlobalCPI() {
    return 0;
}
