#ifndef PONY_H
# define PONY_H

# include <string>
# include <iostream>

class Pony
{
	public:

		Pony (std::string name, std::string color, float height, int weight);
		~Pony();
		std::string		name;
		std::string		color;
		float			height;
		int				weight;

	private:

		int				max_speed;
		int				jump_height;
		int				jaw_strenght;

};

#endif