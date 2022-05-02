#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator {
    public:
        BitFlipProb(double prob);
        Individual mutate(Individual parent, int k);
    
    private:
        double p;

};
#endif //BITFLIPPROB_H