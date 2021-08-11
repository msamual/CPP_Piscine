#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) 
	:	_hitPoints(100),
		_maxHitPoints(100),
		_energyPoints(100),
		_maxEnergyPoints(100),
		_level(1),
		_meleeAttackDamage(30),
		_rangedAttackDamage(20),
		_armorDamageReduction(5),
		type("CL4P-TP")
{
	std::cout << type << " " << name << " assembled" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& ft)
{
	this->operator=(ft);
	std::cout << this->type << " " << this->_name << " copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->type << " " << this->_name << " destroyed" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ft)
{
	this->_name					= ft._name;
	this->_hitPoints			= ft._hitPoints;
	this->_maxHitPoints			= ft._maxHitPoints;
	this->_energyPoints			= ft._energyPoints;
	this->_maxEnergyPoints		= ft._maxEnergyPoints;
	this->_level				= ft._level;
	this->_meleeAttackDamage	= ft._meleeAttackDamage;
	this->_rangedAttackDamage	= ft._rangedAttackDamage;
	this->_armorDamageReduction	= ft._armorDamageReduction;
	this->type					= ft.type;
	std::cout << type << " " << this->_name << " copied" << std::endl;
	return *this;
}

void		ClapTrap::rangedAttack(std::string const& target) const
{
	std::cout << type << " " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const& target) const
{
	std::cout << type << " " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armorDamageReduction;
	if (amount >= this->_hitPoints)
	{
		std::cout << type << " " << this->_name;
		std::cout << " was pokotsan on " << this->_hitPoints << " hits ";
		this->_hitPoints = 0;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
	else
	{
		std::cout << type << " " << this->_name;
		std::cout << " was pokotsan on " << amount << " hits ";
		this->_hitPoints -= amount;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitPoints >= this->_maxHitPoints)
	{
		std::cout << type << " " << this->_name;
		std::cout << " was repaired on " << this->_maxHitPoints - this->_hitPoints << " hits ";
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
	else
	{
		std::cout << type << " " << this->_name;
		std::cout << " was repaired on " << amount << " hits ";
		this->_hitPoints += amount;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
}