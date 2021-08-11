#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
	public:

		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(int type);
		
		Zombie*	newZombie(std::string name);
		Zombie*	randomChump();


	private:

		int		type;


};

#endif