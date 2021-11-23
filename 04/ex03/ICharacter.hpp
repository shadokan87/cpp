#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
#include "./AMateria.hpp"
#include <iostream>
#define _for_each(A, S, C1, C2) for (int _ = 0;_ < S;_++)if (C1)C2
typedef std::string str;
class AMateria;
class ICharacter
{
	public:
		virtual ~ICharacter(void) {};
		virtual str const &getName(void) const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};
#endif
