#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde
{
	public:

		ZombieHorde(int N);
		~ZombieHorde();

		void	announce();

	private:

		int		N;
		Zombie  *horde;

		void	randomChump(int i);
};

#endif