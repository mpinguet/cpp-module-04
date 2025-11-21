#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[4];
public:
    Character();
    Character(std::string const & name);
    virtual ~Character();
    Character(const Character&);
    Character &operator=(const Character &);


    virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);    
};