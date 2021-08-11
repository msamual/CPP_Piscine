#include "Squad.hpp"

Squad::Squad() : _units(new ISpaceMarine*[1000]), _count(0)
{
	this->_units[0] = 0;
}

Squad::Squad(const Squad& squad)
{
	this->operator=(squad);
}

Squad::~Squad()
{
	int size = this->getCount();
	for(int i = 0; i < size; i++)
		delete this->_units[i];
}

Squad&			Squad::operator=(const Squad& squad)
{
	int size = this->getCount();

	if (this == &squad)
		return *this;
	for(int i = 0; i < size; i++)
		delete this->_units[i];
	size = squad.getCount();
	for(int i = 0; i < size; i++)
		this->push(squad.getUnit(i));
	return *this;
}

int				Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n >= this->_count)
		return (0);
	return this->_units[n];
}

int				Squad::push(ISpaceMarine* sm)
{
	if (!sm)
		return this->_count;
	for(int i = 0; i < this->_count; i++)
	{
		if (this->_units[i] == sm)
			return this->_count;
	}
	this->_units[this->_count] = sm;
	this->_count++;
	this->_units[this->_count] = 0;
	return this->_count;
}

