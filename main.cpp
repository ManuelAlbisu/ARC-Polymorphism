#include "Dog.h"
#include "Cat.h"
#include "Horse.h"
#include "Pig.h"

int main() {
    // Dog doma;
    // Dog menchi(7);
    // Dog oscar(10, 8);
    // Dog rocky(15, Animal::MUTT);
    // Dog tiger(8, 100, Animal::BULLDOG);
    // Animal someAnimal;

    // Example of a polymorphic dog object
    // Animal *pDog = new Dog;

    // pDog->move();
    // pDog->speak();

    // Another example of polymorphism
    Animal *array[5];
    Animal *ptr;
    int choice, i;

    for (i = 0; i < 5; i++) {
        std::cout << "(1) dog (2) cat (3) horse (4) pig: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            ptr = new Dog;
            break;
        case 2:
            ptr = new Cat;
            break;
        case 3:
            ptr = new Horse;
            break;
        case 4:
            ptr = new Pig;
            break;
        default:
            ptr = new Animal;
            break;
        }

        array[i] = ptr;
    }

    for (i = 0; i < 5; i++) {
        array[i]->speak();
    }

    // Example of method overloading
    // someAnimal.move(2);

    // Examples of method overriding
    // menchi.speak();
    // doma.move(); // Causes the move method to be hidden

    // Example of child class using its base class's method
    // doma.Animal::move(6);

    // someAnimal.speak();
    // rocky.wagTail();

    // std::cout << "Doma is " << doma.getAge() << " years old." << std::endl;
    // std::cout << "Tiger weighs " << tiger.getWeight() << " pounds." << std::endl;

    return 0;
}
