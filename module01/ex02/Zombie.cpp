#include "Zombie.hpp"
#include <string>

Zombie::Zombie(std::string name, int type)
{
	this->name = name;
	this->type = type;

	std::cout << "Zombie " << name << " climbed out of the grave" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " was destroyed" << std::endl;
}

void    Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string		Zombie::getName()
{
	return this->name;
}

int				Zombie::getType()
{
	return this->type;
}

void			Zombie::setName(std::string name)
{
	this->name = name;
}

void			Zombie::setType(int type)
{
	this->type = type;
}