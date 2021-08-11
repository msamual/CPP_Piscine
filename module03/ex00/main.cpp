#include "FragTrap.hpp"

int	main()
{
	FragTrap ft("Yarik");

	srand(time(nullptr));
	ft.rangedAttack("Dimon");
	ft.meleeAttack("Kirill");
	std::cout << std::endl;
	
	ft.takeDamage(20);
	ft.takeDamage(85);
	ft.takeDamage(50);
	std::cout << std::endl;
	
	ft.beRepaired(50);
	ft.beRepaired(50);
	ft.beRepaired(50);
	std::cout << std::endl;
	
	ft.vaulthunter_dot_exe("Sanya");
	ft.vaulthunter_dot_exe("Sanya");
	ft.vaulthunter_dot_exe("Sanya");
	ft.vaulthunter_dot_exe("Sanya");
	return 0;
}