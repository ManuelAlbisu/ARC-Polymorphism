#include "Cat.h"

// Cat class constructor (child of Animal class)
Cat::Cat() : Animal() {
    
}

// Cat class destructor
Cat::~Cat() {
    
}

// Cat class's speak method override
void Cat::speak() const {
    std::cout << "Meow!" << std::endl;
}
