#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	
	public:

		MutantStack();
		MutantStack(const MutantStack& ms);
		virtual ~MutantStack();

		MutantStack<T>&			operator=(const MutantStack& ms);

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator				begin();

		iterator				end();
};

#endif