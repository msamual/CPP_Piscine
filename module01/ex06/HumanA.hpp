#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public:
		
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void		attack();

		Weapon&		getWeapon();
		std::string	getName();

		void		setWeapon(Weapon& weapon);
		void		setName(std::string name);

	private:

		Weapon&			_weapon;
		std::string		_name;
};

#endif