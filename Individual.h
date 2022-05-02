#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <vector>
#include <string>

class Individual {
    public:
        Individual(int length);
        Individual(std::vector<int> binS);

        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();

    private:
        std::vector<int> binaryString;
};
#endif //INDIVIDUAL_H