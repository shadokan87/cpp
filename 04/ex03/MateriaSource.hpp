#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "./IMateriaSource.hpp"
#define _for_each(A, S, C1, C2) for (int _ = 0;_ < S;_++)if (C1)C2
typedef std::string str;
class	IMateriaSource;
class	AMateria;
class MateriaSource : public virtual IMateriaSource
{
	public:
							MateriaSource(void);
							MateriaSource(const MateriaSource &src);
		virtual				~MateriaSource(void);
		virtual	void		learnMateria(AMateria* src);
		virtual	AMateria*	createMateria(str const & type);
		MateriaSource &operator=(const MateriaSource &src);
	private:
		AMateria *arr[4];
		int		pos;
};
#endif
