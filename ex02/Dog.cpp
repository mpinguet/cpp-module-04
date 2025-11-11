#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "A Dog was constructed from default" << std::endl;
    type = "Dog";
	this->brain = new Brain;
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete(this->brain);
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "A Dog was constructed from copy" << std::endl;
    this->type = copy.type;
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = new Brain();
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called" << std::endl;
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

std::string Dog::getType( void ) const
{
	return (this->type);
}
void Dog::makeSound() const
{
    std::cout << "Ouaf" << std::endl;
}

Brain *Dog::GetBrain(void) const
{
	return (this->brain);
}
