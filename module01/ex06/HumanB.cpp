#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name	= name;
}

HumanB::~HumanB()
{}

std::string	HumanB::getName()
{
	return this->_name;
}

Weapon&	HumanB::getWeapon()
{
	return *this->_weapon;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() << std::endl;
}