#include "MateriaSource.hpp"
#include <unistd.h>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	this->operator=(ms);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
}

MateriaSource&		MateriaSource::operator=(const MateriaSource& ms)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
	for (int i = 0; i < 4; i++)
		this->_slots[i] = ms._slots[i]->clone();
	return *this;
}

void				MateriaSource::learnMateria(AMateria* am)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = am->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_slots[i] != NULL)
		{
			if (this->_slots[i]->getType() == type)
				return this->_slots[i]->clone();
		}
	}
	return 0;
}