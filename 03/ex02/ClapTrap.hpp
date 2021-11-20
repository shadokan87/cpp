#include <iostream>

typedef std::string str;

class ClapTrap
{
	private:
		str name;
		int	hitpoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap(void);
		virtual ~ClapTrap(void);
		ClapTrap(str name);
		ClapTrap &operator=(ClapTrap &src);
		void	takeDamage(unsigned int amount);
		void	attack(str const & target);
		void	beRepaired(unsigned int amount);
};
