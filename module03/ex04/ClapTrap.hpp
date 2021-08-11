#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <time.h>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& ft);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& ft);

		void			rangedAttack(std::string const& target) const;
		void			meleeAttack(std::string const& target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName();

		void			setName(std::string name);
		

	protected:
		
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		unsigned int		_level;
		unsigned int		_meleeAttackDamage;
		unsigned int		_rangedAttackDamage;
		unsigned int		_armorDamageReduction;
		
		std::string			type;
		
};

#endif