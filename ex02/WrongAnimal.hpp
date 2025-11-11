#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal&);
    WrongAnimal &operator=(const WrongAnimal& );
    void makeSound() const;
    std::string getType() const;
};