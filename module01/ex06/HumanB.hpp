#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public:
		
		HumanB(std::string name);
		~HumanB();

		void		attack();

		Weapon&		getWeapon();
		std::string	getName();

		void		setWeapon(Weapon& weapon);
		void		setName(std::string name);

	private:

		Weapon*			_weapon;
		std::string		_name;
};

#endif