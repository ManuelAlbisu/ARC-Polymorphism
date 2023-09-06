#include "Pig.h"

// Pig class constructor (child of Animal class)
Pig::Pig() : Animal() {
    
}

// Pig class copy constructor
Pig::Pig(const Pig &rhs)
    : Animal(rhs)
{
    std::cout << "Pig copy constructor..." << std::endl;
}

// Pig class destructor
Pig::~Pig() {
    
}

// Pig class's speak method override
void Pig::speak() const {
    std::cout << "Oink!" << std::endl;
}

Animal* clone() {
    return new Pig(*this);
}
