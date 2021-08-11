#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>
# include <iomanip>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& ft);
		~SuperTrap();

		SuperTrap&	operator=(const SuperTrap& ft);

		void		rangedAttack(const std::string& target) const;
		void		meleeAttack(const std::string& target) const;

		void		printValues();
};

#endif