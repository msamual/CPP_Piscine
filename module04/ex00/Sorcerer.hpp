#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"
# include "Child.hpp"
# include "Dog.hpp"

class Sorcerer
{
	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& sorcerer);
		virtual ~Sorcerer();

		Sorcerer&		operator=(const Sorcerer& sorcerer);

		void			introduce() const;
		std::ostream&	introduce(std::ostream& stream) const;

		void			polymorph(Victim const & vt) const;
		void			polymorph(Peon const & pn) const;
		void			polymorph(Child const & cd) const;
		void			polymorph(Dog const & dg) const;

	private:

		Sorcerer();

		std::string	_name;
		std::string	_title;
};

std::ostream&		operator<<(std::ostream& stream, const Sorcerer& sc);

#endif