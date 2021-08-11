#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <time.h>

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& nt);
		~NinjaTrap();

		NinjaTrap&	operator=(const NinjaTrap& nt);

		void	ninjaShoebox(NinjaTrap& nt);
		void	ninjaShoebox(ClapTrap& ct);
		void	ninjaShoebox(FragTrap& ft);
		void	ninjaShoebox(ScavTrap& st);
};

#endif