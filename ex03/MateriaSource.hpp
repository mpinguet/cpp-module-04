#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria	*_learnInventory[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource &operator=(const MateriaSource&);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};