#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
		
		std::string const&	getName();
		int					getGrade();

		void				raiseGrade();
		void				dounGrade();

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

#endif