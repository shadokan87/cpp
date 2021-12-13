#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
#include <stack>
#include <deque>
template <typename T>

class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void) : std::stack<T>() {}
		~MutantStack(void) {}
		MutantStack(const MutantStack & src) : std::stack<T>(src) {}
		MutantStack<T> &operator=(const MutantStack<T>& src) {std::stack<T>::operator=(src); return (*this);}
		iterator begin() {return (std::stack<T>::c.begin());}
		iterator end() {return (std::stack<T>::c.end());}
};

#endif
