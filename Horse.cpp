#include "Horse.h"

// Horse class constructor (child of Animal class)
Horse::Horse() : Animal() {
    
}
        
// Horse class destructor
Horse::~Horse() {
    
}

// Horse class's speak method override
void Horse::speak() const {
    std::cout << "Neigh!" << std::endl;
}
