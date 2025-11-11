#pragma once

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain&);
	Brain& operator=(const Brain &);
	std::string getIdeas(int) const;
	void setIdeas(int, const std::string&);
};