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

double Computer::getClockRateGhz() const {
    return clockRateGhz;
}

double Computer::getCpiArith() const {
    return cpiArith;
}

double Computer::getCpiStore() const {
    return cpiStore;
}

double Computer::getCpiLoad() const {
    return cpiLoad;
}

double Computer::getCpiBranch() const {
    return cpiBranch;
}

double Computer::calculateExecutionTime (Program p) {
    // Cpu/execution time = (instruction count * CPI / clock rate)
    double clockRate =  getClockRateGhz() * std::pow(10, 9);
    double arithExecutionTime = (p.getNumArith() * getCpiArith()) / clockRate;
    double storeExecutionTime = (p.getNumStore() * getCpiStore()) / clockRate;
    double loadExecutionTime = (p.getNumLoad() * getCpiLoad()) / clockRate;
    double branchExecutionTime = (p.getNumBranch() * getCpiBranch()) / clockRate;
    return (arithExecutionTime + storeExecutionTime + loadExecutionTime + branchExecutionTime);
}
double Computer::calculateMIPS (void) {
// clock rate / (CPI 8 10^6)

double clockRate = getClockRateGhz() * std::pow(10, 9);
double mipsArith  = clockRate / getCpiArith() * std::pow(10, 6);
double mipsStore  = clockRate / getCpiStore() * std::pow(10, 6);
double mipsLoad  = clockRate / getCpiLoad() * std::pow(10, 6);
double mipsBranch  = clockRate / getCpiBranch() * std::pow(10, 6);

return mipsArith + mipsStore + mipsLoad + mipsBranch;

}
double Computer::calculateMIPS(Program p) {
    // todo 1.3
    // instruction count / (execution time * 10^6)
    double executionTime = this->calculateExecutionTime(p);
    double instructionCount = p.getNumTotal();
    return instructionCount/(executionTime * std::pow(10, 6));

}
