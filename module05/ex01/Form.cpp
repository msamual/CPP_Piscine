#include "Form.hpp"

Form::Form(std::string name, int reqToSign, int reqToExec)
:	_name(name),
	_signed(false),
	_reqToSign(reqToSign),
	_reqToExec(reqToExec)
{
	if (reqToSign < 1 || reqToExec < 1)
		throw Form::GradeTooHighException();
	else if (reqToSign > 150 || reqToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& form)
:	_name(form._name),
	_signed(form._signed),
	_reqToSign(form._reqToSign),
	_reqToExec(form._reqToExec)
{}

Form::~Form()
{}

Form&				Form::operator=(const Form& form)
{
	this->_name		= form._name;
	this->_signed	= form._signed;
	return *this;
}

std::ostream& 		operator<<(std::ostream& stream, const Form& form)
{
	stream << std::setw(20) << std::left <<  "name" << ":" << form.getName() << std::endl;
	stream << std::setw(20) << std::left <<  "signed" << ":" << form.getSign() << std::endl;
	stream << std::setw(20) << std::left <<  "rquired to sign" << ":" << form.getReqToSign() << std::endl;
	stream << std::setw(20) << std::left <<  "required to execute" << ":" << form.getReqToExec() << std::endl;
	return stream;
}

std::string const&	Form::getName() const
{
	return this->_name;
}

bool				Form::getSign() const
{
	return this->_signed;
}

int					Form::getReqToSign() const
{
	return this->_reqToSign;
}

int					Form::getReqToExec() const
{
	return this->_reqToExec;
}

void				Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->_reqToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char*			Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*			Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}