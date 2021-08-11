#include "Pony.hpp"

Pony::Pony (std::string name, std::string color, float height, int weight)
{
	this->name			= name;
	this->color			= color;
	this->height		= height;
	this->weight		= weight;
	this->max_speed		= 25;
	this->jump_height	= 1;
	this->jaw_strenght	= 80;
	std::cout << "pony by name " << name << " was created" << std::endl;
}

Pony::~Pony ()
{
	std::cout << "pony by name " << name << " was destroyed" << std::endl;
}
