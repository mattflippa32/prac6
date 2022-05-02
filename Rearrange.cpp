#include "Rearrange.h"

Rearrange::Rearrange() {}

Individual Rearrange::mutate(Individual parent, int k) {
    int length = parent.getLength();
    k = k % length;
    int index = k - 1;

    std::string copy = parent.getString();
    std::string temp = copy;
    temp.erase(index , length - index);
    copy.erase(0, index);
    copy.append(temp);
    
    Individual offspring(copy);

    return offspring;
}