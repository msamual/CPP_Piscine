#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& intern)
{
	operator=(intern);
}

Intern::~Intern()
{}

Intern&		Intern::operator=(const Intern& intern)
{
	(void)intern;
	return *this;
}

const char*			Intern::formDoesNotExistExeption::what() const throw()
{
	return "Form does not exist";
}

Form*		Intern::makeForm(std::string name, std::string target) const
{
	Form*	result = NULL;
	Form*	array[] = 
	{
		new PresidentalPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};
	for(int i = 0; i < 3; i++)
	{
		if (array[i]->getName() == name)
			result = array[i];
		else
			delete array[i];
	}
	if (result)
	{
		std::cout << "Intern creates " << result->getName() << std::endl;
		return (result);
	}
	throw Intern::formDoesNotExistExeption();
}