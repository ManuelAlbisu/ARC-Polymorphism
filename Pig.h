#ifndef PIG_H
#define PIG_H

#include "Animal.h"

class Pig : public Animal {
 public:
    // Constructors
    Pig();
    Pig(const Pig &rhs);
    virtual ~Pig();

    // Additional methods
    void speak() const;
    virtual Animal* clone();
}; 

#endif // PIG_H
