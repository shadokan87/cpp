#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	protected:
		int	hitpoints;
		int	energyPoints;
		int	attackDamage;
	public:
		FragTrap &operator=(FragTrap &src);
		FragTrap(void);
		FragTrap(str name);
		virtual ~FragTrap(void);
		void	highFivesGuys(void);
};
