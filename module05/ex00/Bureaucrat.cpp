#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bur) : _name(bur._name), _grade(bur._grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat&			Bureaucrat::operator=(const Bureaucrat& bur)
{
	this->_grade = bur._grade;
	return *this;
}

std::string const&	Bureaucrat::getName()
{
	return this->_name;
}

int					Bureaucrat::getGrade()
{
	return this->_grade;
}

void				Bureaucrat::raiseGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void				Bureaucrat::dounGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade cannot be higher 1";
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade cannot be lower 150";
}