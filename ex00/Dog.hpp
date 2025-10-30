#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog (const Dog&);
    Dog &operator=(const Dog&);
    void makeSound() const;
    std::string getType( void ) const;

};