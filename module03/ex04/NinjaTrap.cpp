#include "NinjaTrap.hpp"

const unsigned int	NinjaTrap::hitPoints			= 60;
const unsigned int	NinjaTrap::maxHitPoints			= 60;
const unsigned int	NinjaTrap::energyPoints			= 120;
const unsigned int	NinjaTrap::maxEnergyPoints		= 120;
const unsigned int	NinjaTrap::level				= 1;
const unsigned int	NinjaTrap::meleeAttackDamage	= 60;
const unsigned int	NinjaTrap::rangedAttackDamage	= 5;
const unsigned int	NinjaTrap::armorDamageReduction	= 0;

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints			= hitPoints;
	this->_maxHitPoints			= maxHitPoints;
	this->_energyPoints			= energyPoints;
	this->_maxEnergyPoints		= maxEnergyPoints;
	this->_level				= level;
	this->_meleeAttackDamage	= meleeAttackDamage;
	this->_rangedAttackDamage	= rangedAttackDamage;
	this->_armorDamageReduction	= armorDamageReduction;
	this->type					= "NNJA-TP";
	std::cout << this->type << " " << name << " assembled" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& nt) : ClapTrap(nt)
{}

NinjaTrap::~NinjaTrap()
{}

void	NinjaTrap::ninjaShoebox(NinjaTrap& nt)
{
	std::cout << this->type << " Attacking NNJA-TP " << nt.getName() << " with melee attack" << std::endl;
	std::cout << "my kung fu is stronger than yours kung fu..." << std::endl;
	nt.takeDamage(this->_meleeAttackDamage);
}

void	NinjaTrap::ninjaShoebox(ClapTrap& ct)
{
	std::cout << this->type << " Attacking CL4P-TP " << ct.getName() << " with ranged attack" << std::endl;
	std::cout << "piu piu piu..." << std::endl;
	ct.takeDamage(this->_rangedAttackDamage);
}

void	NinjaTrap::ninjaShoebox(FragTrap& ft)
{
	std::cout << this->type << " Attacking FR4G-TP " << ft.getName() << " with melee attack" << std::endl;
	std::cout << "Chiaaaaaaaaa.........." << std::endl;
	ft.takeDamage(this->_meleeAttackDamage);
}

void	NinjaTrap::ninjaShoebox(ScavTrap& st)
{
	std::cout << this->type << " Attacking SC4V-TP " << st.getName() << " with ranged attack" << std::endl;
	std::cout << "poluchai..." << std::endl;
	st.takeDamage(this->_rangedAttackDamage);
}