#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(std::string target) : Form("presidental pardon", 25, 5)
{
	this->_target = target;
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm& ppf) : Form(ppf)
{
	this->_target = ppf._target;
}

PresidentalPardonForm::~PresidentalPardonForm()
{}

PresidentalPardonForm&		PresidentalPardonForm::operator=(const PresidentalPardonForm& ppf)
{
	this->_target = ppf._target;
	return *this;
}

void						PresidentalPardonForm::execute(const Bureaucrat& bur) const
{
	if (bur.getGrade() > this->getReqToExec())
		throw Form::GradeTooLowException();
	else if (this->getSign() == false)
		throw Form::IsNotSignedException();
	else
	{
		std::cout << this->_target << "  has been pardoned by Zafod Beeblebrox." << std::endl;
	}
}