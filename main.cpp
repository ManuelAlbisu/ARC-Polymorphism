#include "Dog.h"

int main() {
    Dog doma;
    Dog menchi(7);
    Dog oscar(10, 8);
    Dog rocky(15, Animal::MUTT);
    Dog tiger(8, 100, Animal::BULLDOG);
    Animal someAnimal;

    someAnimal.move(2);
    doma.Animal::move(6);
    doma.move();
    someAnimal.speak();
    menchi.speak();
    rocky.wagTail();

    std::cout << "Doma is " << doma.getAge() << " years old." << std::endl;
    std::cout << "Tiger weighs " << tiger.getWeight() << " pounds." << std::endl;

    return 0;
}
