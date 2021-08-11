#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
	public:

		Human();
		~Human();

		const Brain &getBrain() const;

		std::string identify() const;
		
	private:

		const Brain _brain;
};

#endif