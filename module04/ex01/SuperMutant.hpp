#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:

		SuperMutant();
		SuperMutant(const SuperMutant& sm);
		virtual ~SuperMutant();

		SuperMutant&		operator=(const SuperMutant& sm);

		virtual void		takeDamage(int amount);

};

#endif