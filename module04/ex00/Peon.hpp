#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:

		Peon(std::string name);
		Peon(const Peon& pn);
		virtual ~Peon();

		Peon&	operator=(const Peon& pn);
		void	getPolymorphed() const;
};

#endif