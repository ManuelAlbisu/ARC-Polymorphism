#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
 public:
    // Constructors
    Cat();
    ~Cat();

    // Additional methods
    void speak() const;
};

#endif // CAT_H
