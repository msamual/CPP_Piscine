#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& rrf);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm&		operator=(const RobotomyRequestForm& rrf);

		virtual void		execute(const Bureaucrat& bur) const;
	
	private:

		std::string		_target;
};

#endif