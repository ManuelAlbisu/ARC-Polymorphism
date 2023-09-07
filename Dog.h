#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    // Constructors
    Dog();
    Dog(int age);
    Dog(int age, int weight);
    Dog(int age, BREED breed);
    Dog(int age, int weight, BREED breed);
    Dog(const Dog &rhs);
    virtual ~Dog(); // Ensures to invoke actual object destructor

    // Accessors
    BREED getBreed() const;
    void setBreed(BREED newBreed);

    // Additional methods
    void wagTail();
    void begForFood();
    void speak() const;
    virtual Animal* clone();
    void move() const;

private:
    BREED breed;
};

#endif // DOG_H
