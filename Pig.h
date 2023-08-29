#ifndef PIG_H
#define PIG_H

#include "Animal.h"

class Pig : public Animal {
 public:
    // Constructors
    Pig();
    ~Pig();

    // Additional methods
    void speak() const;
}; 

#endif // PIG_H
