#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "A WrongAnimal was constructed from default" << std::endl;
    type = "WrongAnimal";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "A WrongAnimal was constructed from copy" << std::endl;
    this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "... generic WrongAnimal sound ..." << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}