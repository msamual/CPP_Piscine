#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		Bureaucrat	nikolay("Nikolay", 0);
		std::cout << "My name is " << nikolay.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	alex("Alexey", 151);
		std::cout << "My name is " << alex.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	ivan("Ivan", 40);
		std::cout << "My name is " << ivan.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	pavel("Pavel", 1);
	try
	{
		pavel.raiseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for(int i = 0; i < 152; i++)
	{
		try
		{
			pavel.dounGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "My name is " << pavel.getName() << std::endl;
	std::cout << "My grade is " << pavel.getGrade() << std::endl;
	return(0);
}