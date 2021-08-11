#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"

class Character
{
	private:
		Character();

		std::string	_name;
		AWeapon*	_weap;
		int			_AP;
	
	public:
		Character(std::string const & name);
		Character(const Character& ch);
		virtual ~Character();
		
		Character&			operator=(const Character& ch);

		void 				recoverAP();
		void 				equip(AWeapon* weap);
		void 				attack(Enemy* enemy);
		
		std::string const&	getName() const;
		std::string const&	getWeaponType() const;
		int					getAP() const;

		bool				isArmed() const;
};

std::ostream&		operator<<(std::ostream& stream, const Character& ch);

#endif