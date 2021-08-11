#include "PowerFist.hpp"

const std::string	PowerFist::_baseName	= "Power Fist";
const int			PowerFist::_baseDamage	= 50;
const int			PowerFist::_baseAPCost	= 8;

PowerFist::PowerFist() : AWeapon(_baseName, _baseAPCost, _baseDamage)
{}

PowerFist::PowerFist(const PowerFist& pf) : AWeapon(_baseName, _baseAPCost, _baseDamage)
{
	this->operator=(pf);
}

PowerFist::~PowerFist()
{}

PowerFist&	PowerFist::operator=(const PowerFist& pf)
{
	this->setName(pf.getName());
	this->setDamage(pf.getDamage());
	this->setAPCost(pf.getAPCost());
	return *this;
}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}