#include "Animal.h"

#include <iostream>

// Animal class constructor (parent class)
Animal::Animal()
    : age(4)
    , weight(90)
{
    // std::cout << "Animal constructor..." << std::endl;
}

// Animal class constructor (int overload)
Animal::Animal(int age)
    : age(age)
    , weight(5)
{
    // std::cout << "Animal(int) constructor..." << std::endl;
}

// Animal class destructor (parent class)
Animal::~Animal() {
    // std::cout << "Animal destructor..." << std::endl;
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

void Animal::speak() const {
    std::cout << "Animal sound!" << std::endl;
}

void Animal::sleep() const {
    std::cout << "Shh. I'm sleeping" << std::endl;
}

void Animal::move() const {
    std::cout << "Animal moves one step." << std::endl;
}

void Animal::move(int distance) const {
    std::cout << "Animal moves " << distance << " steps." << std::endl;
}
