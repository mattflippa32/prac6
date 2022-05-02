#include "BitFlip.h"

BitFlip::BitFlip() {}

Individual BitFlip::mutate(Individual parent, int k) {
    int length = parent.getLength();
    k = k % length;

    Individual offspring = parent;
    offspring.flipBit(k);

    return offspring;
}