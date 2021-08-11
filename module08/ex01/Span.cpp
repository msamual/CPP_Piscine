#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	_arr.reserve(N);
}

Span::Span(const Span& span) : _N(span._N)
{
	_arr = span._arr;
	_arr.reserve(_N);
}

Span::~Span()
{}

Span&			Span::operator=(const Span& span)
{
	if (span._arr.size() > this->_N)
		throw std::runtime_error("can't coping. array overflow");
	else
	{
		_arr = span._arr;
		_arr.reserve(span._N);
	}
	return *this;
}

void			Span::addNumber(int number)
{
	if (_arr.size() < _N)
		_arr.push_back(number);
	else
		throw std::runtime_error("can't add number. array is full");
}

void			Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (;begin != end; begin++)
		this->addNumber(*begin);
}

unsigned int	Span::shortestSpan()
{
	unsigned int			shortest_span = 4294967295;

	if (_arr.size() < 2)
		throw std::runtime_error("can't find out span. array too short");
	else
	{
		std::vector<int>	copy = _arr;
		std::sort(copy.begin(), copy.end());

		for (std::vector<int>::iterator i = copy.begin() + 1; i < copy.end(); ++i)
		{
			unsigned int span = (*i - *(i - 1));
			if (span < shortest_span)
				shortest_span = span;
		}
		return shortest_span;
	}
	return 4294967295;
}

unsigned int	Span::longestSpan()
{

	if (_arr.size() < 2)
		throw std::runtime_error("can't find out span. array too short");
	else
		return  *std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end());
}

void			Span::print()
{
	std::cout << "array: ";
	for (unsigned int i = 0; i < _arr.size(); ++i)
		std::cout << _arr[i] << ' ';
	std::cout << std::endl;
}
