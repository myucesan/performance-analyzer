//
// Created by Mustafa Yücesan on 05/02/2022.
//

#include <iostream>
#include "Program.h"

Program::Program(int numArith, int numStore, int numLoad, int numBranch) : numArith(numArith),
                                                                                         numStore(numStore),
                                                                                         numLoad(numLoad),
                                                                                         numBranch(numBranch){
    this->numTotal = this->numArith + this->numStore + this->numLoad + this->numBranch;
}

void Program::printStats() {
    std::cout << "******NUMBER OF INSTRUCTIONS OF PROGRAM******" << "\n";
    std::cout << "Number of arithmetic instructions: " << this->numArith << "\n";
    std::cout << "Number of store instructions: " << this->numStore << "\n";
    std::cout << "Number of load instructions: " << this->numLoad << "\n";
    std::cout << "Number of branch instructions: " << this->numBranch << "\n";
    std::cout << "Number of total instructions: " << this->numTotal << "\n";

}

Program::Program(int numTotal, double numArith, double numStore, double numLoad) {
    this->numTotal = numTotal;
    this->numArith = this->numTotal * numArith;
    this->numStore = this->numTotal *numStore;
    this->numLoad = this->numTotal * numLoad;
    this->numBranch = this->numTotal - (this->numArith + this->numStore + this->numLoad);
}
