#include <iostream>
#include <string>

// void memoryLeak()
// {
// std::string* panther = new std::string("String panther");
// std::cout << *panther << std::endl;
// }

void memoryLeak()
{
	std::string panther = "String panther";
	std::cout << panther << std::endl;
}

int main()
{
	memoryLeak();
	// while (1) ;
	return (0);
}