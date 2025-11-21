#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& cpy);
	Ice &operator=(const Ice&);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};