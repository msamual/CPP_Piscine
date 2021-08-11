#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	public:

		Victim(std::string name);
		Victim(const Victim& vt);
		virtual ~Victim();

		Victim&			operator=(const Victim& vt);

		void			introduce() const;
		std::ostream&	introduce(std::ostream& stream) const;

		void			getPolymorphed() const;
		
	protected:

		std::string		_name;
};

std::ostream&			operator<<(std::ostream& stream, const Victim& vt);

#endif