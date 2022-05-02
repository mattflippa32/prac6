#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(double prob) {
    p = prob;
}

Individual BitFlipProb::mutate(Individual parent, int k) {
    Individual offspring = parent;

    int length = offspring.getLength();
    double result = 0;
    for (int i = 0; i < length; i++) {
        result = (double)rand() / (double)RAND_MAX;
        if (p > result) {
            offspring.flipBit(i);
        }
    }

    return offspring;
}