#include "ScavTrap.hpp"

std::string funnyChallenges[] = {
		"I accidentally jammed the gate. can you knock them out?",
		"the frag trap used a gas attack. can you not suffocate?",
		"how many DarkSiders can you kill",
		"I bet you can't tell by the smell how much this garbage is there?",
		"Gus ukus"
	};

ScavTrap::ScavTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_meleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << "SC4V-TP " << name << " assembled" << std::endl;
	this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap& ft)
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
	std::cout << "SC4V-TP " << this->_name << " copied" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->_name << " destroyed" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ft)
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
	std::cout << "SC4V-TP " << this->_name << " copied" << std::endl;
	return *this;
}

void		ScavTrap::rangedAttack(std::string const& target) const
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const& target) const
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armorDamageReduction;
	if (amount >= this->_hitPoints)
	{
		std::cout << "SC4V-TP " << this->_name;
		std::cout << " was pokotsan on " << this->_hitPoints << " hits ";
		this->_hitPoints = 0;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << this->_name;
		std::cout << " was pokotsan on " << amount << " hits ";
		this->_hitPoints -= amount;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitPoints >= this->_maxHitPoints)
	{
		std::cout << "SC4V-TP " << this->_name;
		std::cout << " was repaired on " << this->_maxHitPoints - this->_hitPoints << " hits ";
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << this->_name;
		std::cout << " was repaired on " << amount << " hits ";
		this->_hitPoints += amount;
		std::cout << this->_hitPoints << " hit points left" << std::endl;
	}

}

void	ScavTrap::challengeNewcomer() const
{
	std::cout << funnyChallenges[rand() % 5] << std::endl;
}
