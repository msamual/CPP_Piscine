#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& scf);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm&		operator=(const ShrubberyCreationForm& scf);

		virtual void				execute(const Bureaucrat& bur) const;

	private:

		std::string		_target;
};

#endif