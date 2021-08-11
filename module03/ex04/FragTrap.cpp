#include "FragTrap.hpp"

std::string funnyAttacks[] = {
		"Dumpling jump on the face",
		"Gas attack",
		"Сrabpult attack",
		"Ticle to dead",
		"Gus ukus"
	};

const unsigned int	FragTrap::hitPoints				= 100;
const unsigned int	FragTrap::maxHitPoints			= 100;
const unsigned int	FragTrap::energyPoints			= 100;
const unsigned int	FragTrap::maxEnergyPoints		= 100;
const unsigned int	FragTrap::level					= 1;
const unsigned int	FragTrap::meleeAttackDamage		= 30;
const unsigned int	FragTrap::rangedAttackDamage	= 20;
const unsigned int	FragTrap::armorDamageReduction	= 5;

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints			= hitPoints;
	this->_maxHitPoints			= maxHitPoints;
	this->_energyPoints			= energyPoints;
	this->_maxEnergyPoints		= maxEnergyPoints;
	this->_level				= level;
	this->_meleeAttackDamage	= meleeAttackDamage;
	this->_rangedAttackDamage	= rangedAttackDamage;
	this->_armorDamageReduction	= armorDamageReduction;
	this->type = "FR4G-TP";
	std::cout << type << " " << name << " assembled" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap(ft)
{}

FragTrap::~FragTrap()
{}

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
	this->type					= ft.type;
	std::cout << type << " " << this->_name << " copied" << std::endl;
	return *this;
}


void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	if (this->_energyPoints < 25)
		std::cout << type << " " << this->_name << "Not enough energy points" << std::endl;
	else
	{
		std::cout << type << " " << this->_name;
		std::cout << " apply '" << funnyAttacks[rand() % 5] << "' on " << target;
		this->_energyPoints -= 25;
		std::cout << " " << this->_energyPoints << " energy points left" << std::endl;
	}
}