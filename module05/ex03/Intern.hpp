#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& intern);
		virtual ~Intern();

		Intern&		operator=(const Intern& intern);

		Form*		makeForm(std::string name, std::string target) const;

		class formDoesNotExistExeption : public std::exception
	{
		const char* what() const throw();
	};
};

#endif