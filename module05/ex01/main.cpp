#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	Bureaucrat	ivan("Ivan", 40);
	Bureaucrat	egor("Egor", 1);

	Form		f1("f1", 20, 20);
	Form		f2("f2", 1, 40);

	ivan.signForm(f1);
	egor.signForm(f1);

	ivan.signForm(f2);
	egor.signForm(f2);
	while (1) ;
	return(0);
}