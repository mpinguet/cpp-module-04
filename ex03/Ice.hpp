#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& cpy);
	Ice &operator=(const Ice&);
	~Ice();
};