#include "Dog.h"
#include "Cat.h"
#include "Horse.h"
#include "Pig.h"
// #include "LinkedList.h"

#include <list>
#include <vector>
#include <algorithm>

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
    // const int numOfAnimals = 5;
    // Animal *array[5];
    // Animal *ptr;
    // int choice, i;

    // for (i = 0; i < numOfAnimals; ++i) {
    //     std::cout << "(1) dog (2) cat (3) horse (4) pig: ";
    //     std::cin >> choice;

    //     switch (choice) {
    //     case 1:
    //         ptr = new Dog;
    //         break;
    //     case 2:
    //         ptr = new Cat;
    //         break;
    //     case 3:
    //         ptr = new Horse;
    //         break;
    //     case 4:
    //         ptr = new Pig;
    //         break;
    //     default:
    //         ptr = new Animal;
    //         break;
    //     }

    //     array[i] = ptr;
    // }

    // Invoke the speak method and creates a clone of the array
    // Animal *cloneArray[numOfAnimals];
    // for (i = 0; i < numOfAnimals; ++i) {
    //     array[i]->speak();
    //     cloneArray[i] = array[i]->clone();
    // }

    // std::cout << "\nOutput of copy\n" << std::endl;

    // Calls the speak method from the clone array
    // for (i = 0; i < numOfAnimals; ++i) {
    //     cloneArray[i]->speak();
    // }

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

    // Example of doubly linked list (self-implemented)
    // LinkedList* list = new LinkedList();
    // list->pushHead(NULL, 10);
    // std::cout << list << std::endl;

    // doubly linked list example (list library)
    // std::list<int> list = { 1, 2, 3, 4, 5 };
    // list.push_front(5);
    // list.push_back(1);

    // auto iterator = std::find(list.begin(), list.end(), 3);
    // if (iterator != list.end())
    //     list.insert(iterator, 6);
 
    // for (int i : list)
    //     std::cout << i << std::endl;

    // vector example (vector library)
    // std::vector<int> vector = { 7, 8, 9, 10};
 
    // vector.push_back(11);
    // vector.push_back(12);
 
    // vector[2] = 100;
 
    // for (int i : vector)
    //     std::cout << i << ' ';

    // std::cout << '\n';

    // Animal polymorphic vector example
    std::vector<Animal*> animalVector;
    Animal *ptr;
    int choice, selection, i;

    std::cout << "How many animals in the farm?" << "\nInput an integer." << std::endl;
    std::cin >> choice;

    int numOfAnimals = choice;
    for (i = 0; i < numOfAnimals; i++) {
        std::cout << "(1) Dog (2) Cat (3) Horse (4) Pig: ";
        std::cin >> selection;

        switch (selection) {
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

        animalVector.push_back(ptr);
    }

    std::vector<Animal*> animalCloneVector;
    for (i = 0; i < animalVector.size(); ++i) {
        animalVector.at(i)->speak();
        animalCloneVector.push_back(animalVector.at(i)->clone());
    }

    std::cout << "\nOutput of copy\n" << std::endl;

    for (i = 0; i < animalVector.size(); ++i) 
        animalCloneVector.at(i)->speak();

    return 0;
}
