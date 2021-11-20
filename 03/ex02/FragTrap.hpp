#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(str name);
		FragTrap &operator=(FragTrap &src);
		virtual ~FragTrap(void);
		void	highFivesGuys(void);
};
