#include "BitFlip.h"

BitFlip::BitFlip() {}

Individual BitFlip::mutate(Individual parent, int k) {
    int length = parent.getLength();
    k = ((k - 1) % length) + 1;

    Individual offspring = parent;
    offspring.flipBit(k);

    return offspring;
}