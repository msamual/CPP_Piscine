#include "Value.hpp"
#include <iostream>
#include <iomanip>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Value	v(av[1]);

		v.printResult();
	}
	return 0;
}