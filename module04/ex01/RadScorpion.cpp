#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80,  "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& rs) : Enemy(170,  "Super Mutant")
{
	this->operator=(rs);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& rs)
{
	this->_hp	= rs._hp;
	this->_type	= rs._type;
	return *this;
}

