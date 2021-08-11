#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template<typename T>
int&	easyfind(T cont, int x)
{
	typename T::iterator it = cont.begin();
	it = std::find(cont.begin(), cont.end(), x);
	if (it == cont.end())
		throw std::exception();
	else
		return *it;
}

#endif