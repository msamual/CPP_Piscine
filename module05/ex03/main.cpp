#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main()
{
	srand(time(NULL));
	Bureaucrat	ivan("Ivan", 40);
	Bureaucrat	egor("Egor", 1);
	Intern		intern;

	
	Form*		tree = intern.makeForm("presidental pardon", "Dmitri");
	Form*		robo = intern.makeForm("robotomy request", "Yaroslav");
	Form*		pres = intern.makeForm("shrubbery creation", "Aleksandr");

	try
	{
		Form*		fail = intern.makeForm("shrubberycreation", "Aleksandr");
		ivan.executeForm(*fail);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	ivan.executeForm(*tree);
	ivan.executeForm(*robo);
	ivan.executeForm(*pres);
	egor.executeForm(*pres);

	ivan.signForm(*tree);
	ivan.signForm(*robo);
	ivan.signForm(*pres);
	egor.signForm(*pres);

	ivan.executeForm(*tree);
	ivan.executeForm(*robo);
	ivan.executeForm(*pres);
	egor.executeForm(*pres);

	return(0);
}