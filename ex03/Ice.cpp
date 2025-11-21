#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "a Ice was constructed from default" << std::endl;
}

Ice::Ice(const Ice &cpy) : AMateria(cpy)
{
	std::cout << "a Ice was constructed from copy" << std::endl;
}

Ice &Ice::operator=(const Ice& cpy)
{
	std::cout << "Ice assignment operator called" << std::endl;
	if (this != &cpy)
		this->_type = cpy._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "  << target.getName() << " *" << std::endl;
}