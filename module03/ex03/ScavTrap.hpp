#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <time.h>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ft);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& ft);

		void	challengeNewcomer() const;
};

#endif