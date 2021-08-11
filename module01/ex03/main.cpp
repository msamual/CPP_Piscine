#include "ZombieHorde.hpp"
#include <sstream>

int main()
{
	int			N = 0;
	std::string	input;
	std::string	tmp;

	std::cout << "please insert size of zombie horde: ";
	while (N < 1)
	{
		std::getline(std::cin, tmp);
		std::istringstream	iss(tmp);
		iss >> N;
		if (std::cin.eof())
			exit(0);
		if (N < 1)
			std::cout << "incorrect input! insert positive number:";
	}
	std::cout << "zombies are coming...." << std::endl;
	ZombieHorde	horde(N);
	std::cout << "Horde of zombie created!" << std::endl;
	while (true)
	{
		std::cout << "do you want them to greet you, my lord? (y/n): ";
		std::cin >> input;
		if (std::cin.eof())
			exit(0);
		if (input != "y" && input != "n" && input != "Y" && input != "N")
			continue ;
		if (input == "y" || input == "Y")
			horde.announce();
			break ;
	}
	return (0);
}