#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"

class Mutator {
    public:
        Mutator();
        virtual Individual mutate(Individual parent, int k);

};
#endif //MUTATOR_H