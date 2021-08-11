#include "Brain.hpp"
#include <sstream>

Brain::Brain(std::string name)
{
	this->weight = 1.4;
	this->name = name;
}

Brain::~Brain()
{}

std::string	Brain::identify() const
{
	std::ostringstream	stream;
	stream << this;

	return stream.str();
}