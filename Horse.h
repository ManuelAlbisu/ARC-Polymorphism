#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : public Animal {
 public:
    // Constructors
    Horse();
    ~Horse();

    // Additional methods
    void speak() const;
};

#endif // CAT_H
