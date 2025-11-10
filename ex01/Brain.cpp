#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	std::cout << "Brain was constructed from default" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &src)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain was constructed from copy" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::GetIdeas(int index) const
{
	if (index >= 0 && index <= 99)
		return (this->ideas[index]);
	return "";
}

void Brain::SetIdeas(int index, const std::string& src)
{
	if (index >= 0 && index <= 99)
		this->ideas[index] = src;
}




