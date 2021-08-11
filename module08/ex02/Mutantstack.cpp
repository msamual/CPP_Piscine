#include "Mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& ms)
{
	operator=(ms);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>&		MutantStack<T>::operator=(const MutantStack& ms)
{
	std::stack<T>::operator=(ms);
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}
