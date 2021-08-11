#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Character.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria*		_slots[4];

	public:

		MateriaSource();
		MateriaSource(const MateriaSource& ms);
		virtual ~MateriaSource();

		MateriaSource&		operator=(const MateriaSource& ms);
		
		virtual void		learnMateria(AMateria* am);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif