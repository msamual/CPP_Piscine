#include "iter.hpp"

template <typename T>
void	print_elem(T& elem)
{
	std::cout << elem << ' ';
}

template <typename T>
void	power(T& elem)
{
	elem = elem * elem;
}

int main (void)
{
	int		arr[] = {0,1,2,3,4,5,6,7,8,9};

	iter(arr, 10, print_elem);
	std::cout << std::endl;

	iter(arr, 10, power);
	iter(arr, 10, print_elem);
	std::cout << std::endl;
	std::cout << std::endl;

	double	arrd[] = {2.3, 3.6, 6.5, 8.1};

	iter(arrd, 4, print_elem);
	std::cout << std::endl;

	iter(arrd, 4, power);
	iter(arrd, 4, print_elem);
	std::cout << std::endl;


	return (0); 
}