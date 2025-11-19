#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Abstract materia "  << type << " has beed created" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& cpy)
{
	std::cout << "Abstract materia assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->_type = cpy._type;
	}
	return (*this);
}

AMateria::AMateria(const AMateria& cpy)
{
	std::cout << "Abstract materia has beed creatred from copy" << std::endl;
	*this = cpy;
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}