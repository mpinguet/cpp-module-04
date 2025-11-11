#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia has beed created\n";
}

AMateria::AMateria(std::string const & _type) : type(_type)
{
	std::cout << "Abstract materia has beed destroyed with " << type << std::endl;
}