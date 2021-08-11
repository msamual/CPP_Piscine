#ifndef CHILD_HPP
# define CHILD_HPP

# include "Victim.hpp"

class Child : public Victim
{
	public:

		Child(std::string name);
		Child(const Child& cd);
		virtual ~Child();

		Child&	operator=(const Child& cd);
		void	getPolymorphed() const;
};

#endif