#include "Individual.h"

#include <sstream>
#include <iterator>

Individual::Individual(int length) {
    binaryString.assign(length, '0');
}

Individual::Individual(std::string binS) {
    binaryString = binS;
}

std::string Individual::getString() {
    return binaryString;
}

int Individual::getBit(int pos) {
    int length = binaryString.size();
    if (length < pos) {
        return -1;
    }
    if (pos < 1) {
        return -1;
    }
    char cBit = binaryString.at(pos - 1);
    int value = cBit - '0';
    return value;
}

void Individual::flipBit(int pos) {
    int length = binaryString.size();
    if (length < pos) {
        return;
    }
    if (pos < 1) {
        return;
    }

    if (binaryString.at(pos - 1) == '0') {
        binaryString[pos - 1] = '1';
        return;
    }
    binaryString[pos - 1] = '0';
    return;
}

int Individual::getMaxOnes() {
    int max = 0;
    int current = 0;
    int length = binaryString.size();
    for (int i = 0; i < length; i++) {
        if (binaryString[i] == '1') {
            current++;
            if (current > max) {
                max = current;
            }
        }
        else {
            current = 0;
        }
    }
    return max;
}

int Individual::getLength() {
    int length = binaryString.size();
    return length;
}