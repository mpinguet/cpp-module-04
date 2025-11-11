#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "A cat was constructed from default" << std::endl;
    type = "Cat";
	this->brain = new Brain;
}
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "A cat was constructed from copy" << std::endl;
    this->type = copy.type;
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = new Brain();
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &src)
	{
        this->type = src.type;
		if (this->brain)
			delete this->brain;
		if (src.brain)
			this->brain = new Brain(*src.brain);
		else
			this->brain = new Brain();
	}
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}

Brain *Cat::GetBrain(void) const
{
	return (this->brain);
}
