#ifndef DOG_HPP
# define DOG_HPP

# include "Victim.hpp"

class Dog : public Victim
{
	public:

		Dog(std::string name);
		Dog(const Dog& dg);
		virtual ~Dog();

		Dog&	operator=(const Dog& dg);
		void	getPolymorphed() const;
};

#endif