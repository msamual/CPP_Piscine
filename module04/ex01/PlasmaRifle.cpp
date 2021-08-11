#include "PlasmaRifle.hpp"

const std::string	PlasmaRifle::_baseName		= "Plasma Rifle";
const int			PlasmaRifle::_baseDamage	= 21;
const int			PlasmaRifle::_baseAPCost	= 5;

PlasmaRifle::PlasmaRifle() : AWeapon(_baseName, _baseAPCost, _baseDamage)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& pr) : AWeapon(_baseName, _baseAPCost, _baseDamage)
{
	this->operator=(pr);
}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& pr)
{
	this->setName(pr.getName());
	this->setDamage(pr.getDamage());
	this->setAPCost(pr.getAPCost());
	return *this;
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}