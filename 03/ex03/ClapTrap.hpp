#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
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
		virtual void	attack(str const & target);
		void	beRepaired(unsigned int amount);
};
#endif
