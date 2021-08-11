#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class NinjaTrap : virtual public ClapTrap
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