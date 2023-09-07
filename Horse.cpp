#include "Horse.h"

// Horse class constructor (child of Animal class)
Horse::Horse() : Animal() {
    std::cout << "Horse constructor..." << std::endl;
}

// Horse class copy constructor
Horse::Horse(const Horse &rhs)
    : Animal(rhs)
{
    std::cout << "Horse copy constructor..." << std::endl;
}
        
// Horse class destructor
Horse::~Horse() {
    std::cout << "Horse destructor..." << std::endl;
}

// Horse class's virtual clone member function
Animal* Horse::clone() {
    return new Horse(*this);
}

// Horse class's speak method override
void Horse::speak() const {
    std::cout << "Neigh!" << std::endl;
}

