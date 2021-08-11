#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <time.h>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& ft);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& ft);

		void	vaulthunter_dot_exe(std::string const& target);

	protected:
		static const unsigned int	hitPoints;
		static const unsigned int	maxHitPoints;
		static const unsigned int	energyPoints;
		static const unsigned int	maxEnergyPoints;
		static const unsigned int	level;
		static const unsigned int	meleeAttackDamage;
		static const unsigned int	rangedAttackDamage;
		static const unsigned int	armorDamageReduction;
};

#endif