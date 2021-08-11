#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	this->_name		= name;
}

HumanA::~HumanA()
{}

std::string	HumanA::getName()
{
	return this->_name;
}

Weapon&	HumanA::getWeapon()
{
	return this->_weapon;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void		HumanA::setWeapon(Weapon& weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}