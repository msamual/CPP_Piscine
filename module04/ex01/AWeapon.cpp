#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{}

AWeapon::AWeapon(const AWeapon& weap)
{
	AWeapon::operator=(weap);
}

AWeapon::~AWeapon()
{}

AWeapon&		AWeapon::operator=(const AWeapon& weap)
{
	this->_name		= weap._name;
	this->_apcost	= weap._apcost;
	this->_damage	= weap._damage;
	return *this;
}

std::string const&		AWeapon::getName() const
{
	return this->_name;
}

int				AWeapon::getAPCost() const
{
	return this->_apcost;
}

int				AWeapon::getDamage() const
{
	return this->_damage;
}

void			AWeapon::setName(std::string name)
{
	this->_name = name;
}

void			AWeapon::setDamage(int damage)
{
	this->_damage = damage;
}

void			AWeapon::setAPCost(int apcost)
{
	this->_apcost = apcost;
}

void			AWeapon::attack() const
{
	std::cout << "ATTACK" << std::endl;
}