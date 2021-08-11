#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		std::string	const	_name;
		int					_grade;

	public:

		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(const Bureaucrat& bur);
		virtual ~Bureaucrat();

		Bureaucrat&			operator=(const Bureaucrat& bur);
		
		std::string const&	getName() const;
		int					getGrade() const;

		void				raiseGrade();
		void				dounGrade();

		void				signForm(Form& form);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

#endif