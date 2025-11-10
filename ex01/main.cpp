#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    std::cout << "----- TEST 1: construction & makeSound -----" << std::endl;
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << dog->getType() << " says: ";
    dog->makeSound();

    std::cout << cat->getType() << " says: ";
    cat->makeSound();

    delete dog;
    delete cat;

    std::cout << "\n----- TEST 2: deep copy Brain -----" << std::endl;
    Cat* c1 = new Cat();
    c1->GetBrain()->SetIdeas(0, "I want fish");
    c1->GetBrain()->SetIdeas(1, "I want sleep");

    Cat* c2 = new Cat(*c1); // copy constructor (deep copy)
    c1->GetBrain()->SetIdeas(0, "Changed idea");

    std::cout << "c1 idea 0: " << c1->GetBrain()->GetIdeas(0) << std::endl;
    std::cout << "c2 idea 0: " << c2->GetBrain()->GetIdeas(0) << std::endl;

    delete c1;
    delete c2;

    std::cout << "\n----- TEST 3: tableau d'Animal* -----" << std::endl;
    const int SIZE = 4;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < SIZE; ++i) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < SIZE; ++i)
        delete animals[i];

    return 0;
}
