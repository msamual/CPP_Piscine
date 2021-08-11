#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <time.h>

class FragTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& ft);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& ft);

		void		rangedAttack(std::string const& target) const;
		void		meleeAttack(std::string const& target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		vaulthunter_dot_exe(std::string const& target);
		

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