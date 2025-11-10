#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "A cat was constructed from default" << std::endl;
    type = "Cat";
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "A cat was constructed from copy" << std::endl;
    this->type = copy.type;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}