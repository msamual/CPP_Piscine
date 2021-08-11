#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:

		Span();

		unsigned int const	_N;
		std::vector<int>	_arr;

	
	public:

		Span(unsigned int N);
		Span(const Span& span);
		~Span();

		Span&	operator=(const Span& span);

		void			addNumber(int number);
		void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		void	print();
};

#endif