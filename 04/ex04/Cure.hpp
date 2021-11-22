#ifndef CURE_HPP
#define CURE_HPP
#include "./AMateria.hpp"
class Cure : virtual public AMateria
{
	public:
		Cure(void);
		virtual ~Cure(void);
		Cure(const Cure & src);
		Cure & operator=(const Cure & src);
		virtual AMateria* clone() const;
		virtual void	use(ICharacter & target);
	private:
};
#endif
