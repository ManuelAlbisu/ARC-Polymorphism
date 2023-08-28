#include "Dog.h"

// Dog class constructor (child of Animal class)
Dog::Dog()
    : Animal()
    , breed(ROTTWEILER)
{
    // std::cout << "Dog constructor..." << std::endl;
}

// Dog class constructor (int overload)
Dog::Dog(int age)
    : Animal(age)
    , breed(ROTTWEILER)
{
    // std::cout << "Dog(int) constructor..." << std::endl;
}

// Dog class constructor (int, int overload)
Dog::Dog(int age, int newWeight)
    : Animal(age)
    , breed(ROTTWEILER)
{
    weight = newWeight;
    // std::cout << "Dog(int, int) constructor..." << std::endl;
}

// Dog class constructor (int, int, BREED overload)
Dog::Dog(int age, int newWeight, BREED breed)
    : Animal(age)
    , breed(breed)
{
    weight = newWeight;
    // std::cout << "Dog(int, int, BREED) constructor..." << std::endl;
}

// Dog class constructor (int, BREED overload)
Dog::Dog(int age, BREED newBreed)
    : Animal(age)
    , breed(newBreed)
{
    // std::cout << "Dog(int, BREED) constructor..." << std::endl;
}

// Dog class destructor (child of Animal class)
Dog::~Dog() {
    // std::cout << "Dog destructor..." << std::endl;
}

// Gets breed of the dog object
Animal::BREED Dog::getBreed() const {
    return breed;
}

// Sets a new breed for the dog object
void Dog::setBreed(BREED newBreed) {
    BREED breed = newBreed;
}

void Dog::wagTail() {
    std::cout << "Tail wagging..." << std::endl;
}

void Dog::begForFood() {
    std::cout << "Begging for food..." << std::endl;
}

void Dog::speak() const {
    std::cout << "Woof!" << std::endl;
}

void Dog::move() const {
    std::cout << "Dog moves..." << std::endl;
    Animal::move(3);
}
