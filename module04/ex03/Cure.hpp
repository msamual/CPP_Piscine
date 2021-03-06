#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:

		Cure();
		Cure(const Cure& Cure);
		virtual ~Cure();

		Cure&		operator=(const Cure& Cure);

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif