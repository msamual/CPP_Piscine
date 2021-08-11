#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("rrf", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) : Form(rrf)
{
	this->_target = rrf._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm&		RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf)
{
	this->_target = rrf._target;
	return *this;
}

void						RobotomyRequestForm::execute(const Bureaucrat& bur) const
{
	if (bur.getGrade() > this->getReqToExec())
		throw Form::GradeTooLowException();
	else if (this->getSign() == false)
		throw Form::IsNotSignedException();
	else
	{
		std::cout << "brrrr....." << std::endl;
		if (rand() % 2)
			std::cout << this->_target << "  has been robotomized successfully" << std::endl;
		else
			std::cout << "it's a failure" << std::endl;
	}
}