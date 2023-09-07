#include "Cat.h"

// Cat class constructor (child of Animal class)
Cat::Cat() : Animal() {
    std::cout << "Cat constructor..." << std::endl;
}

// Cat class copy constructor
Cat::Cat(const Cat &rhs)
    : Animal(rhs)
{
    std::cout << "Cat copy constructor..." << std::endl;
}

// Cat class destructor
Cat::~Cat() {
    std::cout << "Cat destructor..." << std::endl;
}

// Cat class's virtual clone member function
Animal* Cat::clone() {
    return new Cat(*this);
}

// Cat class's speak method override
void Cat::speak() const {
    std::cout << "Meow!" << std::endl;
}

