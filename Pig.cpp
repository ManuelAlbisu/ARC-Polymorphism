#include "Pig.h"

// Pig class constructor (child of Animal class)
Pig::Pig() : Animal() {
    
}

// Pig class destructor
Pig::~Pig() {
    
}

// Pig class's speak method override
void Pig::speak() const {
    std::cout << "Oink!" << std::endl;
}
