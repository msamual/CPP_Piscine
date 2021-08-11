#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : Form(scf)
{
	this->_target = scf._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	this->_target = scf._target;
	return *this;
}

void						ShrubberyCreationForm::execute(const Bureaucrat& bur) const
{
	if (bur.getGrade() > this->getReqToExec())
		throw Form::GradeTooLowException();
	else if (this->getSign() == false)
		throw Form::IsNotSignedException();
	else
	{
		std::ofstream	file;

		file.open(this->_target + "_shrubbery");
		std::string tree = "        ccee88oo\n \
    C8O8O8Q8PoOb o8oo\n \
 dOB69QO8PdUOpugoO9bD\n \
CgggbU8OU qOp qOdoUOdcb\n \
    6OuU  /p u gcoUodpP\n \
      \\\\//  /douUP\n \
        \\\\////\n \
         |||/\\\n \
         |||\\/\n \
         |||||\n \
   .....//||||\\....";
	file << tree << std::endl;
	}
}