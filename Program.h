//
// Created by Mustafa Yücesan on 05/02/2022.
//

#ifndef PERFORMANCE_ANALYZER_PROGRAM_H
#define PERFORMANCE_ANALYZER_PROGRAM_H


class Program {

public:
    Program(int numArith, int numStore, int numLoad, int numBranch);
    Program(int numTotal, double numArith, double numStore, double numLoad);

    void printStats();

private:
    // number of instructions per instruction class stored here
    int numArith; // arithmetic and logic calculations
    int numStore; // store data into memory
    int numLoad; // load data from memory
    int numBranch; // conditional and unconditional jumps
    int numTotal; // total number of instructions
};


#endif //PERFORMANCE_ANALYZER_PROGRAM_H
