#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	std::cout << std::endl;

	ScavTrap st("Dimon");

	st.rangedAttack("Vasya");
	st.meleeAttack("Kirill");
	std::cout << std::endl;

	st.takeDamage(20);
	st.takeDamage(85);
	st.takeDamage(50);
	std::cout << std::endl;
	
	st.beRepaired(30);
	st.beRepaired(30);
	st.beRepaired(50);
	std::cout << std::endl;

	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	std::cout << std::endl;

	return 0;
}