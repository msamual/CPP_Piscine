#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> arr(10);

	for (int i = 0; i < 10; i++)
		arr[i] = i;

	std::cout << "arr : ";
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;

	arr[3] = 50;
	std::cout << "arr : ";
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;

	Array<float> farr(10);
	for (int i = 0; i < farr.size(); i++)
		farr[i] = 0.5 + i;
	
	std::cout << "farr : ";
	for (int i = 0; i < farr.size(); i++)
		std::cout << farr[i] << ' ';
	std::cout << std::endl;

	Array<float> farr_copy = farr;
	std::cout << "farr_copy : ";
	for (int i = 0; i < farr.size(); i++)
		std::cout << farr[i] << ' ';
	std::cout << std::endl;

	try
	{
		std::cout << arr[100] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "index out of range" << std::endl;
	}
	
	return 0;
}