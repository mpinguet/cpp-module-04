// main.cpp
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Basic polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // should call Cat::makeSound
    j->makeSound(); // should call Dog::makeSound
    meta->makeSound(); // Animal sound

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "=== Array of animals (polymorphism) ===" << std::endl;
    const Animal* animals[4];
    for (int k = 0; k < 4; ++k)
    {
        if (k % 2 == 0)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    for (int k = 0; k < 4; ++k)
    {
        std::cout << "[" << k << "] type: " << animals[k]->getType() << " -> ";
        animals[k]->makeSound();
    }

    for (int k = 0; k < 4; ++k)
        delete animals[k];

    std::cout << std::endl << "=== Wrong classes: no virtual => wrong behavior ===" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();

    std::cout << wcat->getType() << " " << std::endl;
    wcat->makeSound(); // WILL call WrongAnimal::makeSound because not virtual
    wmeta->makeSound();

    // Deleting via base pointer: WrongCat destructor WILL NOT be called if WrongAnimal::~WrongAnimal is not virtual
    delete wcat;
    delete wmeta;

    return 0;
}

