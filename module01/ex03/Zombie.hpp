#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	public:

		Zombie();
		Zombie(std::string name, int type);
		~Zombie();

		void			announce();

		std::string		getName();
		int				getType();

		void			setName(std::string name);
		void			setType(int type);

	private:

		std::string		name;
		int				type;

};

#endif