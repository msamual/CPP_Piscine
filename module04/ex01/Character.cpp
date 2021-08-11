#include "Character.hpp"

Character::Character(std::string const& name) : _name(name), _weap(0), _AP(40)
{}

Character::Character(const Character& ch)
{
	this->operator=(ch);
}

Character::~Character()
{}

Character&			Character::operator=(const Character& ch)
{
	this->_name	= ch._name;
	this->_weap	= ch._weap;
	this->_AP	= ch._AP;
	return *this;
}

void				Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void				Character::equip(AWeapon* weap)
{
	this->_weap = weap;
}

void				Character::attack(Enemy* enemy)
{
	if (this->_weap && this->_AP >= this->_weap->getAPCost())
	{
		this->_AP -= this->_weap->getAPCost();
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weap->getName() << std::endl;
		this->_weap->attack();
		enemy->takeDamage(this->_weap->getDamage());
	}
}

std::string const&	Character::getName() const
{
	return this->_name;
}

std::string const&	Character::getWeaponType() const
{
	return this->_weap->getName();
}

int					Character::getAP() const
{
	return this->_AP;
}

bool				Character::isArmed() const
{
	if (this->_weap)
		return true;
	return false;
}


std::ostream&		operator<<(std::ostream& stream, const Character& ch)
{
	if (ch.isArmed())
		stream << ch.getName() << " has " << ch.getAP() << " AP and wields a " << ch.getWeaponType() << std::endl;
	else
		stream << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
	return stream;
}
