#include "Character.hpp"

Character::Character()
{
    std::cout << "a Character was constructed from default" << std::endl;
    this->_name = "default";
    for (size_t i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::~Character()
{
    std::cout << "a Character destructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete(this->_inventory[i]);
    
}

Character::Character(std::string const & name): _name(name)
{
    std::cout << "a Character " << name << " was constructed" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character &Character::operator=(const Character &cpy)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &cpy)
    {
        this->_name = cpy._name;
        for (size_t i = 0; i < 4; i++)
        {
            delete(this->_inventory[i]);
            this->_inventory[i] = NULL;
        }
        for (size_t i = 0; i < 4; i++)
        {
            if(cpy._inventory[i])
                this->_inventory[i] = (cpy._inventory[i])->clone();
        }
                
    }
    return (*this);
}

Character::Character(const Character& cpy)
{
    std::cout << "Character has beed creatred from copy" << std::endl;
    this->_name = cpy._name;
    for (size_t i = 0; i < 4; i++)
    {
        if(cpy._inventory[i])
            this->_inventory[i] = (cpy._inventory[i])->clone();
    }
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << this->_name << " tried to equip nothing and it did nothing" << std::endl;
        return;
    }
    int i;
    for (i = 0; i < 4; i++)
    {
        if (!(this->_inventory[i]))
        {
            this->_inventory[i] = m;
            std::cout << this->_name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
            return ;
        }
    }
    std::cout << this->_name << " can't equip more than 4 Materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << this->_name << " tried to unequip nothing at slot " << idx << " and it did nothing" << std::endl;
        return ;
    }
    if (this->_inventory[idx])
    {
        std::cout << "Unequipped " << this->_inventory[idx]->getType() << " from " << this->_name << "'s inventory at index " << idx << std::endl;
        this->_inventory[idx] = NULL;
        return ;
    }
    std::cout << this->_name << " has nothing equipped at slot " << idx << " so he can't unequip it\n";
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Cannot use materia, invalid index " << idx << std::endl;
        return ;
    }
    if(this->_inventory[idx])
    {
        (this->_inventory[idx])->use(target);
        return ;
    }
    std::cout << "Cannot use materia, index " << idx << " is empty!" << std::endl;
}    

