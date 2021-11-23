#ifndef ICE_HPP
#define ICE_HPP
#include "./AMateria.hpp"
class Ice : virtual public AMateria
{
	public:
		Ice(void);
		virtual ~Ice(void);
		Ice(const Ice & src);
		Ice & operator=(const Ice & src);
		virtual AMateria* clone() const;
		virtual void	use(ICharacter & target);
	private:
};
#endif
