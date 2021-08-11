#include "Child.hpp"

Child::Child(std::string name) : Victim(name)
{
	std::cout << "Agu agu." << std::endl;
}

Child::Child(const Child& cd) : Victim(cd._name)
{
	this->operator=(cd);
}

Child::~Child()
{
	std::cout << "Aaaaaaaaargh..." << std::endl;
}

Child&	Child::operator=(const Child& cd)
{
	this->_name = cd._name;
	return *this;
}

void	Child::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a GODZILLA!" << std::endl;
}