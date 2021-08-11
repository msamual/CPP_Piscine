# include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->_hitPoints			= FragTrap::hitPoints;
	this->_maxHitPoints			= FragTrap::maxHitPoints;
	this->_energyPoints			= NinjaTrap::energyPoints;
	this->_maxEnergyPoints		= NinjaTrap::maxEnergyPoints;
	this->_meleeAttackDamage	= NinjaTrap::meleeAttackDamage;
	this->_rangedAttackDamage	= FragTrap::rangedAttackDamage;
	this->_armorDamageReduction	= FragTrap::armorDamageReduction;
	this->type					= "SUPR-TP";
	std::cout << this->type << " " << name << " assembled" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& super) : ClapTrap(super), FragTrap(super), NinjaTrap(super)
{
	this->operator=(super);
}

SuperTrap::~SuperTrap()
{}

SuperTrap&	SuperTrap::operator=(const SuperTrap& super)
{
	this->_name					= super._name;
	this->_hitPoints			= super._hitPoints;
	this->_maxHitPoints			= super._maxHitPoints;
	this->_energyPoints			= super._energyPoints;
	this->_maxEnergyPoints		= super._maxEnergyPoints;
	this->_level				= super._level;
	this->_meleeAttackDamage	= super._meleeAttackDamage;
	this->_rangedAttackDamage	= super._rangedAttackDamage;
	this->_armorDamageReduction	= super._armorDamageReduction;
	std::cout << type << " " << this->_name << " copied" << std::endl;
	return *this;
}

void SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::printValues()
{
	std::cout << std::setw(20) << "name" << " : " << this->_name << std::endl;
	std::cout << std::setw(20) << "hitPoints" << " : " << this->_hitPoints << std::endl;
	std::cout << std::setw(20) << "maxHitPoints" << " : " << this->_maxHitPoints << std::endl;
	std::cout << std::setw(20) << "energyPoints" << " : " << this->_energyPoints << std::endl;
	std::cout << std::setw(20) << "maxHitPoints" << " : " << this->_maxEnergyPoints << std::endl;
	std::cout << std::setw(20) << "level" << " : " << this->_level << std::endl;
	std::cout << std::setw(20) << "meleeAttackDamage" << " : " << this->_meleeAttackDamage << std::endl;
	std::cout << std::setw(20) << "rangedAttackDamage" << " : " << this->_rangedAttackDamage << std::endl;
	std::cout << std::setw(20) << "armorDamageReduction" << " : " << this->_armorDamageReduction << std::endl;
}