#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>
#include <string>

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    Individual * newPtr = new Individual(1);
    *newPtr = mPtr->mutate(* indPtr, k);
    return newPtr;
}

int main() {
    /*BitFlip bf;
    Mutator * mPtr1;
    mPtr1 = &bf;

    Rearrange ra;
    Mutator * mPtr2;
    mPtr2 = &ra;

    string binaryString1;
    string binaryString2;
    int k1;
    int k2;

    cin >> binaryString1;
    cin >> k1;
    cin >> binaryString2;
    cin >> k2;

    Individual parent1(binaryString1);
    Individual * iPtr1 = &parent1;
    Individual parent2(binaryString2);
    Individual * iPtr2 = &parent2;
    
    
    Individual * newString1 = execute(iPtr1, mPtr1, k1);
    Individual * newString2 = execute(iPtr2, mPtr2, k2);

    string s1 = newString1->getString();
    string s2 = newString2->getString();
    int ones = newString2->getMaxOnes();
    cout << s1 << " " << s2 << " " << ones << endl;*/

    string binaryString = "01101110";
    Individual dna1(binaryString);
    string s1 = dna1.getString();
    cout<<s1<<endl;
    dna1.flipBit(4);
    int n = dna1.getBit(4);
    cout<<n<<endl;
    int ones = dna1.getMaxOnes();
    int length = dna1.getLength();
    cout<<ones<<" "<<length<<endl;

    BitFlip bf;
    Individual dna2 = bf.mutate(dna1, 5);
    string s2 = dna2.getString();
    cout<<s2<<endl;
    /*Rearrange r;
    Individual dna3 = r.mutate(dna2, 3);
    string s3 = dna3.getString();
    cout<<s3<<endl;*/
    Individual dna4(10);
    BitFlipProb bfp(0.5);
    Individual dna5 = bfp.mutate(dna4, 1);
    string s5 = dna5.getString();
    cout<<s5<<endl;

    return 0;
}