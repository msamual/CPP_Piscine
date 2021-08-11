#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <iomanip>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		std::string		_name;
		bool			_signed;
		int const		_reqToSign;
		int const		_reqToExec;

	public:

		Form(std::string name, int reqToSign, int reqToExec);
		Form(const Form& form);
		virtual ~Form();

		Form&					operator=(const Form& form);

		std::string const& 		getName() const;
		bool					getSign() const;
		int 					getReqToSign() const;
		int 					getReqToExec() const;

		void					beSigned(const Bureaucrat& bur);

	class GradeTooHighException : public std::exception
	{
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
			const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& stream, const Form& form);

#endif