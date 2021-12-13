#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
#include <iostream>
#include "./AMateria.hpp"
#define _for_each(A, S, C1, C2) for (int _ = 0;_ < S;_++)if (C1)C2
typedef std::string str;
class	AMateria;
class	IMateriaSource
{
	public:
		virtual				~IMateriaSource(void) {};
		virtual	void		learnMateria(AMateria*) = 0;
		virtual	AMateria*	createMateria(str const & type) = 0;
};
#endif
