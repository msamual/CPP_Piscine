#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		std::string		_name;
		AMateria*		_slots[4];
			
	public:

		Character(std::string name);
		Character(const Character& ch);
		virtual ~Character();

		Character&					operator=(const Character& ch);

		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif