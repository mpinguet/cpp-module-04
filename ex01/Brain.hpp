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
	std::string GetIdeas(int) const;
	void SetIdeas(int, const std::string&);
};