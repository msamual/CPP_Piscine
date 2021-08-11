#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main()
{
	Character* Yarik = new Character("Yarik");
	Character* Dimon = new Character("Dimon");
	
	std::cout << *Yarik << std::endl;
	std::cout << *Dimon << std::endl;
	
	Enemy* a = new RadScorpion();
	Enemy* b = new SuperMutant();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	Yarik->equip(pr);
	std::cout << *Yarik;
	Dimon->equip(pf);
	std::cout << *Dimon << std::endl;
	
	Yarik->equip(pf);
	Dimon->equip(pr);
	Yarik->attack(a);
	Dimon->attack(b);
	std::cout << *Yarik;
	std::cout << *Dimon << std::endl;
	
	Yarik->equip(pr);
	Dimon->equip(pf);
	std::cout << *Yarik << std::endl;
	std::cout << *Dimon << std::endl;
	
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;
	Yarik->attack(b);
	std::cout << *Yarik << std::endl;

	Dimon->attack(b);
	std::cout << *Dimon << std::endl;
	
	Dimon->attack(b);
	std::cout << *Dimon << std::endl;	
	return 0;

}