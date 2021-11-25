#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "./ICharacter.hpp"
#include "./AMateria.hpp"
#include <iostream>
#define do_if(A, C1) if (C1)A
#define _for_each(A, S, C1, C2) for (int _ = 0;_ < S;_++)if (C1)C2
typedef std::string str;
class	ICharacter;
class	AMateria;
class	Character : public virtual ICharacter
{
	public:
		~Character(void);
		Character(str name);
		Character(void);
		Character &operator=(const Character & src);
		const str & getName(void) const;
		Character(const Character & src);
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
	private:
		str name;
		AMateria *arr[4];
		int	pos;
};
#endif
