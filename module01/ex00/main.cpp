#include "Pony.hpp"

Pony	*ponyOnTheHeap(std::string name, std::string color, float height, int weight)
{
	Pony	*pony = new Pony(name, color, height, weight);
	return pony;
}

void	ponyOnTheStack(std::string name, std::string color, float height, int weight)
{
	Pony	pony_on_stack(name, color, height, weight);
}

int main()
{
	Pony	*pony_on_heap = ponyOnTheHeap("myrka", "violet", 1.2, 60);
	
	ponyOnTheStack("stack", "blue", 1.1, 55);
	delete pony_on_heap;
	return (0);
}