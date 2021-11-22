#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include "./ICharacter.hpp"
#include <iostream>
#define _for_each(A, S, C1, C2) for (int _ = 0;_ < S;_++)if (C1)C2
typedef std::string str;
class ICharacter;
class	AMateria
{
	public:
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria(void);
		AMateria(void);
		AMateria(str const & type);
		AMateria &operator=(AMateria const & src);
		const str &getType(void) const;
	protected:
		str type;
};
#endif
