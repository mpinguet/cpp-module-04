#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& cpy);
	Cure &operator=(const Cure&);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};