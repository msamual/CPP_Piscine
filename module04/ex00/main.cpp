#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Dog.hpp"
#include "Child.hpp"

int	main()
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Child		tim("tim");
	Dog			dog("Bobik");


	std::cout << robert << jim << joe << tim << dog;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tim);
	robert.polymorph(dog);
	
	return 0;
}