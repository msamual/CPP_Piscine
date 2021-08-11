#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : _name("Stepan")
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& at)
{
	std::cout << "* teleports from space *" << std::endl;
	this->operator=(at);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator&			AssaultTerminator::operator=(const AssaultTerminator& at)
{
	this->_name = at._name;
	return *this;
}

ISpaceMarine*			AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void					AssaultTerminator::battleCry() const
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}