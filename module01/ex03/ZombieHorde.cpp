#include "ZombieHorde.hpp"
#include <unistd.h>

ZombieHorde::ZombieHorde(int N)
{
	this->horde = new Zombie[N];
	this->N = N;
	
	for(int i = 0; i < N; i++)
	{
		this->randomChump(i);
		usleep(rand() % 50000);
	}
}

ZombieHorde::~ZombieHorde()
{
	if (this->N > 0)
		delete [] this->horde;
}

void	ZombieHorde::randomChump(int i)
{
	int				index;
	int				type;
	std::string		names[10];
	
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
	this->horde[i].setName(names[index]);
	type = rand() % 10;
	this->horde[i].setType(type);
}

void	ZombieHorde::announce()
{
	for(int i = 0; i < this->N; i++)
	{
		this->horde[i].announce();
		usleep(30000);
	}
}
