#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>
#include <vector>

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    Individual * newPtr = new Individual(1);
    *newPtr = mPtr->mutate(* indPtr, k);
    return newPtr;
}

int main() {
    BitFlip bf;
    Mutator * mPtr1;
    mPtr1 = &bf;

    Rearrange ra;
    Mutator * mPtr2;
    mPtr2 = &ra;

    vector<int> binaryString1 = {0,0,0,0,0,0};
    vector<int> binaryString2 = {0,1,1,1};
    int k1 = 2;
    int k2 = 2;

    Individual parent1(binaryString1);
    Individual * iPtr1 = &parent1;
    Individual parent2(binaryString2);
    Individual * iPtr2 = &parent2;
    
    
    Individual * newString1 = execute(iPtr1, mPtr1, k1);
    Individual * newString2 = execute(iPtr2, mPtr2, k2);

    string s1 = newString1->getString();
    string s2 = newString2->getString();
    int ones = newString2->getMaxOnes();
    cout << s1 << " " << s2 << " " << ones << endl;

    return 0;
}