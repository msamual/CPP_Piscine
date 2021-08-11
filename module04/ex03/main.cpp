#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <unistd.h>

int main()
{

	IMateriaSource* src = new MateriaSource();
	AMateria*		mat = new Ice();
	src->learnMateria(mat);
	src->learnMateria(new Cure());
	src->learnMateria(mat);
	
	ICharacter* me 	= new Character("me");
	AMateria* 	tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	
	return 0;
}