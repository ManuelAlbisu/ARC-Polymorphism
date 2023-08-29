#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public: 
    // Constructors
    Animal();
    Animal(int age);
    ~Animal();

    // Accessors
    int getAge() const;
    void setAge(int newAge);
    int getWeight() const;
    void setWeight(int newWeight);

    // Additional methods
    virtual void speak() const;
    void sleep() const;
    void move() const;
    void move(int distance) const;

    enum BREED { BULLDOG, LABRADOR, MUTT, ROTTWEILER, SHETLAND, DOBERMAN, GOLDEN };

protected:
    int age;
    int weight;
};

#endif // ANIMAL_H
