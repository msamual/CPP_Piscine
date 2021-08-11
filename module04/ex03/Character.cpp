#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(const Character& ch)
{
	this->operator=(ch);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
}

Character&			Character::operator=(const Character& ch)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
	for (int i = 0; i < 4; i++)
		this->_slots[i] = ch._slots[i]->clone();
	this->_name = ch.getName();
	return *this;
}

std::string const&	Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && this->_slots[idx])
		this->_slots[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (this->_slots[idx])
		this->_slots[idx]->use(target);
}


