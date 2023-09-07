#include "Animal.h"

#include <iostream>

// Animal class constructor (parent class)
Animal::Animal()
    : age(4)
    , weight(90)
{
    std::cout << "Animal constructor..." << std::endl;
}

// Animal class constructor (int overload)
Animal::Animal(int age)
    : age(age)
    , weight(5)
{
    std::cout << "Animal(int) constructor..." << std::endl;
}

// Animal class copy constructor
Animal::Animal(const Animal &rhs)
    :age(rhs.getAge())
{
    std::cout << "Animal copy constructor..." << std::endl;
}

// Animal class destructor (parent class)
Animal::~Animal() {
    std::cout << "Animal destructor..." << std::endl;
}

// Gets the age of the Animal object
int Animal::getAge() const {
    return age;
}

// Sets a new age for the Animal object
void Animal::setAge(int newAge) {
    int age = newAge;
}

// Gets the weight of the Animal object
int Animal::getWeight() const {
    return weight;
}

// Sets a new weight for the Animal object
void Animal::setWeight(int newWeight) {
    int weight = newWeight;
}

// Animal class's virtual clone member function
// Call with scope operator since it is not
// a member of an instance of a class.
Animal* Animal::clone() {
    return new Animal(*this);
}

// Base speak method
// Due to the methods 'virtual' keyword, the compiler will invoke
// the overridden method in the Dog class for a polymorphic object
void Animal::speak() const {
    std::cout << "Animal sound!" << std::endl;
}

// Base sleep method
void Animal::sleep() const {
    std::cout << "Shh. I'm sleeping" << std::endl;
}

// Base move method
void Animal::move() const {
    std::cout << "Animal moves one step." << std::endl;
}

// Overloaded move method
void Animal::move(int distance) const {
    std::cout << "Animal moves " << distance << " steps." << std::endl;
}
