#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{}

const	std::string& Weapon::getType()
{
	const std::string& ref = this->_type;
	return ref;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}