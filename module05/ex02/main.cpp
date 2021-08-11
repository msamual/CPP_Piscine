#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"
#include <iostream>

int	main()
{
	Bureaucrat	ivan("Ivan", 40);
	Bureaucrat	egor("Egor", 1);

	Form*		tree = new ShrubberyCreationForm("Dmitri");
	Form*		robo = new RobotomyRequestForm("Yaroslav");
	Form*		pres = new PresidentalPardonForm("Aleksandr");

	srand(time(NULL));

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