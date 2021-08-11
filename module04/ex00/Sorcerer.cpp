#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
	this->operator=(sorcerer);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& sorcerer)
{
	this->_name		= sorcerer._name;
	this->_title	= sorcerer._title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return *this;
}

void				Sorcerer::introduce() const
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

std::ostream&		Sorcerer::introduce(std::ostream& stream) const
{
	stream << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
	return stream;
}

void				Sorcerer::polymorph(Victim const & vt) const
{
	vt.getPolymorphed();
}

void			Sorcerer::polymorph(Peon const & pn) const
{
	pn.getPolymorphed();
}

void			Sorcerer::polymorph(Child const & cd) const
{
	cd.getPolymorphed();
}

void			Sorcerer::polymorph(Dog const & dg) const
{
	dg.getPolymorphed();
}

std::ostream&		operator<<(std::ostream& stream, const Sorcerer& sc)
{
	return sc.introduce(stream);
}