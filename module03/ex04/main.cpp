#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main()
{

	SuperTrap	super("zhirnyi");
	std::cout << std::endl;
	SuperTrap	super1("Dimon");
	std::cout << std::endl;
	FragTrap	ft("Kirill");
	std::cout << std::endl;

	srand(time(nullptr));

	super.printValues();
	std::cout << std::endl;
	
	super.ninjaShoebox(ft);
	std::cout << std::endl;

	super.vaulthunter_dot_exe("Yarik");
	std::cout << std::endl;

	super.takeDamage(50);
	std::cout << std::endl;	

	return 0;
}