#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170,  "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& sm) : Enemy(170,  "Super Mutant")
{
	this->operator=(sm);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& sm)
{
	this->_hp	= sm._hp;
	this->_type	= sm._type;
	return *this;
}

void			SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	if (this->_hp <= 0)
		return ;
	if (amount >= this->_hp)
	{
		this->_hp = 0;
		delete this;
	} 
	else
		this->_hp -= amount;
}

