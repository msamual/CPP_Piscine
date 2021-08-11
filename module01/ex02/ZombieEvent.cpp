#include "ZombieEvent.hpp"
#include <time.h>

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

void	ZombieEvent::setZombieType(int type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name, this->type);
	return zombie;
}

Zombie*	ZombieEvent::randomChump()
{
	int				index;
	std::string		names[10];
	Zombie*			zombie;
	
	names[0] = "Bart";
	names[1] = "Nikolay";
	names[2] = "Volodya";
	names[3] = "Homer";
	names[4] = "Marge";
	names[5] = "Liza";
	names[6] = "Dimon";
	names[7] = "Spyke";
	names[8] = "Maggie";
	names[9] = "Moue";
	
	index = rand() % 10;
	zombie = this->newZombie(names[index]);
	zombie->announce();
	return zombie;
}