#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() : _name("Vasiliy")
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& tm)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	this->operator=(tm);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine&			TacticalMarine::operator=(const TacticalMarine& tm)
{
	this->_name = tm._name;
	return *this;
}

ISpaceMarine*			TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

void					TacticalMarine::battleCry() const
{
	std::cout <<  "For the holy PLOT!" << std::endl;
}

void					TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void					TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}