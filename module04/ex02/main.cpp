#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISquad*			vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	std::cout << std::endl;

	ISpaceMarine*	horde[20];
	ISquad*			squad = new Squad;
	for(int i = 0; i < 10; i++)
		horde[i] = new TacticalMarine;
	for(int i = 10; i < 20; i++)
		horde[i] = new AssaultTerminator;
	for(int i = 0; i < 20; i++)
		squad->push(horde[i]);
	
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete squad;

	return 0;
}