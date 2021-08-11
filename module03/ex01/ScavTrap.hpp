#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <time.h>

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ft);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& ft);

		void		rangedAttack(std::string const& target) const;
		void		meleeAttack(std::string const& target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		challengeNewcomer() const;

	private:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

};

#endif