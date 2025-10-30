#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat (const Cat&);
    Cat &operator=(const Cat&);
    void makeSound() const ;
    std::string getType( void ) const;
};