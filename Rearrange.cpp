#include "Rearrange.h"

Rearrange::Rearrange() {}

Individual Rearrange::mutate(Individual parent, int k) {
    int length = parent.getLength();
    k = k % length;
    int index = k - 1;

    std::string copy;
    for (int i = 0; i < (length - index); i++) {
        copy[i] = parent.getBit(i + index + 1);
    }
    for (int i = length - index; i < length; i++) {
        copy[i] = parent.getBit(i - (length - index) + 1);
    }
    Individual offspring(copy);

    return offspring;
}