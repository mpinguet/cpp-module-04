#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "A Dog was constructed from default" << std::endl;
    type = "Dog";
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "A Dog was constructed from copy" << std::endl;
    this->type = copy.type;
}

Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string Dog::getType( void ) const
{
	return (this->type);
}
void Dog::makeSound() const
{
    std::cout << "Ouaf" << std::endl;
}