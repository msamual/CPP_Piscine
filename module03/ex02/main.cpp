#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap ct("Yulia");

	srand(time(nullptr));
	
	ct.rangedAttack("Dimon");
	ct.meleeAttack("Kirill");
	std::cout << std::endl;
	
	ct.takeDamage(20);
	ct.takeDamage(85);
	ct.takeDamage(50);
	std::cout << std::endl;
	
	ct.beRepaired(50);
	ct.beRepaired(50);
	ct.beRepaired(50);
	std::cout << std::endl;


	FragTrap ft("Yarik");

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