#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& pn) : Victim(pn._name)
{
	this->operator=(pn);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator=(const Peon& pn)
{
	this->_name = pn._name;
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}