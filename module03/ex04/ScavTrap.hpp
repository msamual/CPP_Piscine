#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <time.h>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ft);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& ft);

		void	challengeNewcomer() const;

	protected:
		static unsigned int	hitPoints;
		static unsigned int	maxHitPoints;
		static unsigned int	energyPoints;
		static unsigned int	maxEnergyPoints;
		static unsigned int	level;
		static unsigned int	meleeAttackDamage;
		static unsigned int	rangedAttackDamage;
		static unsigned int	armorDamageReduction;
};

#endif