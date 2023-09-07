#include "Pig.h"

// Pig class constructor (child of Animal class)
Pig::Pig() : Animal() {
    std::cout << "Pig constructor..." << std::endl;
}

// Pig class copy constructor
Pig::Pig(const Pig &rhs)
    : Animal(rhs)
{
    std::cout << "Pig copy constructor..." << std::endl;
}

// Pig class destructor
Pig::~Pig() {
    std::cout << "Pig destructor..." << std::endl;
}

// Pig class's virtual clone member function
Animal* Pig::clone() {
    return new Pig(*this);
}

// Pig class's speak method override
void Pig::speak() const {
    std::cout << "Oink!" << std::endl;
}

