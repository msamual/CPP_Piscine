#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& vc)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	this->operator=(vc);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim&				Victim::operator=(const Victim& vc)
{
	this->_name = vc._name;
	return *this;
}

void				Victim::introduce() const
{
	std::cout << "Im " << this->_name << " and I like otters!" << std::endl;
}

std::ostream&		Victim::introduce(std::ostream& stream) const
{
	stream << "Im " << this->_name << " and I like otters!" << std::endl;
	return stream;
}

void				Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&		operator<<(std::ostream& stream, const Victim& vt)
{
	return vt.introduce(stream);
}