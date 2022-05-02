#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>

using namespace std;

int main() {
    vector<int> binaryString = {0,1,1,0,1,1,1,0};
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
    Rearrange r;
    Individual dna2 = bf.mutate(dna1, 5);
    string s2 = dna2.getString();
    cout<<s2<<endl;
    Individual dna3 = r.mutate(dna2, 3);
    string s3 = dna3.getString();
    cout<<s3<<endl;
    Individual dna4(10);
    BitFlipProb bfp(0.5);
    Individual dna5 = bfp.mutate(dna4, 1);
    string s5 = dna5.getString();
    cout<<s5<<endl;

    return 0;
}