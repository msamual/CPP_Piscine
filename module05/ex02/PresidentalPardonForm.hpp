#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

# include "Form.hpp"
# include <fstream>

class PresidentalPardonForm : public Form
{
	public:

		PresidentalPardonForm(std::string target);
		PresidentalPardonForm(const PresidentalPardonForm& ppf);
		virtual ~PresidentalPardonForm();

		PresidentalPardonForm&		operator=(const PresidentalPardonForm& ppf);

		virtual void		execute(const Bureaucrat& bur) const;
	
	private:

		std::string		_target;
};

#endif