#include "ScavTrap.hpp"

std::string funnyChallenges[] = {
		"I accidentally jammed the gate. can you knock them out?",
		"the frag trap used a gas attack. can you not suffocate?",
		"how many DarkSiders can you kill",
		"I bet you can't tell by the smell how much this garbage is there?",
		"Gus ukus"
	};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->type					= "SC4V-TP";
	this->_energyPoints			= 50;
	this->_maxEnergyPoints		= 50;
	this->_meleeAttackDamage	= 20;
	this->_rangedAttackDamage	= 15;
	this->_armorDamageReduction	= 3;
	std::cout << this->type << " " << name << " assembled" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{}

ScavTrap::~ScavTrap()
{}

ScavTrap&	ScavTrap::operator=(const ScavTrap& st)
{
	this->_name					= st._name;
	this->_hitPoints			= st._hitPoints;
	this->_maxHitPoints			= st._maxHitPoints;
	this->_energyPoints			= st._energyPoints;
	this->_maxEnergyPoints		= st._maxEnergyPoints;
	this->_level				= st._level;
	this->_meleeAttackDamage	= st._meleeAttackDamage;
	this->_rangedAttackDamage	= st._rangedAttackDamage;
	this->_armorDamageReduction	= st._armorDamageReduction;
	this->type					= st.type;
	std::cout << type << " " << this->_name << " copied" << std::endl;
	return *this;
}

void	ScavTrap::challengeNewcomer() const
{
	std::cout << funnyChallenges[rand() % 5] << std::endl;
}
