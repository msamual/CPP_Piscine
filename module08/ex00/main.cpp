#include "easyfind.hpp"

#include <vector>
#include <list>

int main(void)
{
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(5);
	vec.push_back(5);
	vec.push_back(42);
	vec.push_back(5);

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << easyfind(vec, 42) << std::endl;

	std::list<int> lst;
	lst.push_front(9);
	lst.push_front(50);
	lst.push_front(21);
	lst.push_front(8);
	lst.push_front(21);
	lst.push_front(42);
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << easyfind(lst, 21) << std::endl;

	try
	{
		std::cout << easyfind(lst, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "can't find elem" << std::endl;
	}
	

	return 0;
}