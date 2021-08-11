#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

void	human_a()
{
	Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}

void	human_b()
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int		main()
{
	std::cout << "HumanA :" << std::endl;
	human_a();
	std::cout << "HumanB :" << std::endl;
	human_b();
	return (0);
}