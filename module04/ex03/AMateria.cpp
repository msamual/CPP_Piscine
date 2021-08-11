#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type), _xp(0)
{}

AMateria::AMateria(const AMateria& am)
{
	AMateria::operator=(am);
}

AMateria::~AMateria()
{}

AMateria&		AMateria::operator=(const AMateria& am)
{
	this->_type = am._type;
	this->_xp	= am._xp;
	return *this;
}

std::string const&	AMateria::getType() const
{
	return this->_type;
}

unsigned int		AMateria::getXP() const
{
	return this->_xp;
}

void				AMateria::setType(std::string const& type)
{
	this->_type = type;
}

void				AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	setXP(getXP() + 10);
}