#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure& Cure) : AMateria(Cure)
{}

Cure::~Cure()
{}

Cure&		Cure::operator=(const Cure& Cure)
{
	this->setType(Cure.getType());
	this->setXP(Cure.getXP());
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}