#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : public Animal {
 public:
    // Constructors
    Horse();
    Horse(const Horse &rhs);
    virtual ~Horse(); // Ensures to invoke actual object destructor

    // Additional methods
    void speak() const;
    virtual Animal* clone();
};

#endif // CAT_H
