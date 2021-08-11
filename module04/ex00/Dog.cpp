#include "Dog.hpp"

Dog::Dog(std::string name) : Victim(name)
{
	std::cout << "Gav Gav." << std::endl;
}

Dog::Dog(const Dog& dg) : Victim(dg._name)
{
	this->operator=(dg);
}

Dog::~Dog()
{
	std::cout << "uiuiuiui..." << std::endl;
}

Dog&	Dog::operator=(const Dog& dg)
{
	this->_name = dg._name;
	return *this;
}

void	Dog::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a human!" << std::endl;
}