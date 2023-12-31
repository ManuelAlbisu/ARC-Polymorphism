#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
 public:
    // Constructors
    Cat();
    Cat(const Cat &rhs);
    virtual ~Cat(); // Ensures to invoke actual object destructor

    // Additional methods
    void speak() const;
    virtual Animal* clone();
};

#endif // CAT_H
