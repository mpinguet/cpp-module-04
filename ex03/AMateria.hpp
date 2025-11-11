
#pragma once

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria& cpy);
	virtual ~AMateria();
	AMateria(std::string const &);
	AMateria& operator=(const AMateria& cpy);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};