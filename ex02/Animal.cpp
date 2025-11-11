#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "A Animal was constructed from default" << std::endl;
    type = "Animal";
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "A Animal was constructed from copy" << std::endl;
    this->type = copy.type;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "... generic animal sound ..." << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}