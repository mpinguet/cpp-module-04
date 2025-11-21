#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "a Cure was constructed from default" << std::endl;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
	std::cout << "a Cure was constructed from copy" << std::endl;
}

Cure &Cure::operator=(const Cure& cpy)
{
	std::cout << "Cure assignment operator called" << std::endl;
	if (this != &cpy)
		this->_type = cpy._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "  << target.getName() << "'s wounds *" << std::endl;
}