#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "FR4G-TP " << name << " assembled" << std::endl;
	this->_name = name;
}

FragTrap::FragTrap(const FragTrap& ft)
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
	std::cout << "FR4G-TP " << this->_name << " copied" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << " destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ft)
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
	std::cout << "FR4G-TP " << this->_name << " copied" << std::endl;
	return *this;
}

void		FragTrap::rangedAttack(std::string const& target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const& target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armorDamageReduction;
	if (amount >= this->_hitPoints)
	{
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " was pokotsan on " << this->_hitPoints << " hits ";
		this->_hitPoints = 0;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " was pokotsan on " << amount << " hits ";
		this->_hitPoints -= amount;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitPoints >= this->_maxHitPoints)
	{
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " was repaired on " << this->_maxHitPoints - this->_hitPoints << " hits ";
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " was repaired on " << amount << " hits ";
		this->_hitPoints += amount;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	std::string funnyAttacks[] = {
		"Dumpling jump on the face",
		"Gas attack",
		"Сrabpult attack",
		"Ticle to dead",
		"Gus ukus"
	};
	if (this->_energyPoints < 25)
		std::cout << "FR4G-TP " << this->_name << "Not enough energy points" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " apply '" << funnyAttacks[rand() % 5] << "' on " << target;
		this->_energyPoints -= 25;
		std::cout << " " << this->_energyPoints << " energy points left" << std::endl;
	}
}