#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <time.h>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& ft);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& ft);

		void	vaulthunter_dot_exe(std::string const& target);
};

#endif