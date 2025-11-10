#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "A WrongCat was constructed from default" << std::endl;
    type = "WrongCat";
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "A WrongCat was constructed from copy" << std::endl;
    this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Miaou" << std::endl;
}

std::string WrongCat::getType( void ) const
{
	return (this->type);
}