#include <iostream>
// #include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base*	generate(void)
{
	int rnd = std::rand() % 3;

	if (rnd == 0)
		return new A;
	else if (rnd == 1)
		return new B;
	else
		return new C;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& r)
{
	identify(&r);
}

int main()
{
	srand(time(NULL));

	Base*	p = generate();
	Base&	r = *p;

	std::cout << "identify pointer: ";
	identify(p);
	std::cout << "identify reference: ";
	identify(r);
	
	return 0;
}