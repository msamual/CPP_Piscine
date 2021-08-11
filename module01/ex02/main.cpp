#include "ZombieEvent.hpp"
#include <unistd.h>

void	ZombieOnStack(std::string name, int type)
{
	Zombie	zombie(name, type);
	zombie.announce();
}

int	main()
{
	int			count = 0;
	ZombieEvent event;
	Zombie		*zombie_on_heap;
	Zombie		zombie_on_stack("Charlz", 2);

	zombie_on_stack.announce();
	zombie_on_heap = event.newZombie("Mike");
	zombie_on_heap->announce();
	delete zombie_on_heap;

	std::cout << "\nhow many zombies do you want to raise from the graves?: ";
	std::cin >> count;

	Zombie		*zombies[count];
	
	for (int i = 0; i < count; i++)
	{
		event.setZombieType(rand() % 5);
		zombies[i] = event.randomChump();
		usleep(1000000);
	}
	for (int j = 0; j < count; j++)
		delete zombies[j];

	return 0;
}