#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
	
		AWeapon();

		std::string _name;
		int			_apcost;
		int			_damage;
	
	public:
		
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon& weap);
		virtual ~AWeapon();

		AWeapon&			operator=(const AWeapon& weap);
		
		std::string const&	getName() const;
		int					getAPCost() const;
		int					getDamage() const;

		void				setName(std::string name);
		void				setAPCost(int apcost);
		void				setDamage(int damage);
		
		virtual void		attack() const = 0;
};

#endif