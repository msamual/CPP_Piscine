#include "Span.hpp"
#include <vector>

int	main(void)
{
	srand(time(NULL));
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	std::vector<int>	vec(100000);
	Span				span(100000);
	for (unsigned int i = 0; i < vec.size(); ++i)
		vec[i] = i;
	span.addNumber(vec.begin(), vec.end());
	
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl << std::endl;

	try
	{
		Span	small(2);

		small = span;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		span.addNumber(21);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span	s(1);
		
		s.addNumber(5);
		s.shortestSpan();
		s.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
		
	return 0;
}