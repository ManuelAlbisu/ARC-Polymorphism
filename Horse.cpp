#include "Horse.h"

// Horse class constructor (child of Animal class)
Horse::Horse() : Animal() {
    
}

// Horse class copy constructor
Horse::Horse(const Horse &rhs)
    : Animal(rhs)
{
    std::cout << "Horse copy constructor..." << std::endl;
}
        
// Horse class destructor
Horse::~Horse() {
    
}

// Horse class's speak method override
void Horse::speak() const {
    std::cout << "Neigh!" << std::endl;
}

Animal* clone() {
    return new Horse(*this);
}

