#include <iostream>

typedef std::string str;

class ClapTrap
{
	protected:
		str name;
		int	hitpoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap(void);
		ClapTrap &operator=(ClapTrap &src);
		virtual ~ClapTrap(void);
		ClapTrap(str name);
		void	takeDamage(unsigned int amount);
		void	attack(str const & target);
		void	beRepaired(unsigned int amount);
};
