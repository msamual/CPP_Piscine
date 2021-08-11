#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	public:

		Brain(std::string name);
		~Brain();

		std::string identify() const;

	private:

		std::string		name;
		float			weight;

};

#endif