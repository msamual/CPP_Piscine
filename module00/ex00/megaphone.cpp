#include <iostream>
#include <string>

int    main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
    		std::string	str = av[i];
    		int			len = str.length();
    		for (int j = 0; j < len; j++)
				std::cout << (char)std::toupper(str[j]);
		}
	}
	std::cout << std::endl;
}
