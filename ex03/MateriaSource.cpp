#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "A MateriaSource was constructed from default" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_learnInventory[i] = NULL;     
}

MateriaSource::~MateriaSource()
{
    std::cout << "a MateriaSource destructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete this->_learnInventory[i];    
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    std::cout << "MateriaSource has beed creatred from copy" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (cpy._learnInventory[i])
            this->_learnInventory[i] = cpy._learnInventory[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &cpy)
{
    std::cout << "MateriaSource assignment operator called" << std::endl;
    if (this != &cpy)
    {
        for (size_t i = 0; i < 4; i++)
        {
            delete this->_learnInventory[i];
            this->_learnInventory[i] = NULL;
        }            
        for (size_t i = 0; i < 4; i++)
        {
            if (cpy._learnInventory[i])
                this->_learnInventory[i] = cpy._learnInventory[i]->clone();
        }               
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->_learnInventory[i])
        {
            this->_learnInventory[i] = m->clone();
            break;
        }
    }
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if(!this->_learnInventory[i])
            continue;
        if (this->_learnInventory[i]->getType() == type)
            return this->_learnInventory[i]->clone();
    }
    std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
    return NULL;
}

